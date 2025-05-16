'''
when more than one person can use something at the same time
- person = thread
- something = resource

-semaphore is like having a certain number of 'open' signs instead of just one 'in use' sign

'''

import threading
import time

#3 swings on the swingest
swing_set = threading.Semaphore(3)

def use_swing(kid_name):
    #try to get an open sign
    swing_set.acquire()
    
    #got a swing, play on it
    print(f"{kid_name} is swinging!")
    time.sleep(1)  # time taken to swing
    
    #done, put the open sign back
    print(f"{kid_name} is done swinging.")
    swing_set.release()

#10 kids want to use the swings
kids = []
kid_names = ["Alex", "Bailey", "Casey", "Dana", "Eli", 
            "Fran", "Gabe", "Hailey", "Ian", "Jamie"]

for name in kid_names:
    kid = threading.Thread(target=use_swing, args=(name,))
    kids.append(kid)
    kid.start()

#wait for all kids to have a turn
for kid in kids:
    kid.join()

print("All kids had a turn on the swings!")