import time 
import threading
import random
'''
- p1 and p2 occupy the room at the same time
- at a time only 1 person supposed to occupy the room
- this issue can be resolved using 'lock'

'''
def  first_person():
    print("person 1 occupies the room ")
    time.sleep(1)
    print("p1 come out of the room")

def  second_person():
    print("person 2 occupies the room ")
    time.sleep(1)
    print("p2 come out of the room")

t1 = threading.Thread(target = first_person)
t2 = threading.Thread(target = second_person)

t1.start()
t2.start()
