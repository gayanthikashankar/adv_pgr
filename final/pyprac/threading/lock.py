import threading
import time

'''
two people are trying to use the same resource at the same time
- this can cause problems if one person is using the resource and the other person tries to use it at the same time
- lock works like a 'in use' sign, prventing two threads form messing up each others work

'''

toy_in_use = threading.Lock() #our 'in use' sign
toy_count = 0 #this is our shared resource

def play_with_toy():
    global toy_count
   
   #put the 'in use' sign up
    toy_in_use.acquire()

    #now we can use the toy
    current = toy_count
    time.sleep(0.1) #pretend it takes time to play with the toy
    toy_count = current + 1 

    #when done remove the in use sign
    toy_in_use.release()

#create 10 friends who want to play with the toy
friends = []
for i in range(10):
    friend = threading.Thread(target=play_with_toy)
    friends.append(friend)

#all friends start trying to play with the toy at the same time
for friend in friends:
    friend.start()

#wait for all friends to have their turn
for friend in friends:
    friend.join()

print(f"All friends are done playing with the toy! {toy_count} toys were played with.")

#Without the lock, the toy count might be wrong because friends could interfere with each other
