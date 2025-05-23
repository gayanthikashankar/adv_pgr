'''
Imagine 5 philosophers sitting at a round table. Between each pair of philosophers is a fork (5 forks total). Each philosopher needs 2 forks to eat their spaghetti - the one on their left and the one on their right.
The problem: How do philosophers eat without getting stuck waiting forever?

deadlock
- this is when two or more threads are waiting for each other to finish, and they never do
- this can happen if two philosophers pick up the fork on their left at the same time, and then wait for the fork on their right
- this can be solved by making sure that one philosopher picks up the forks in a different order
'''

import threading
import time
import random

#create 5 forks (these are our locks)
forks = [threading.Lock() for _ in range(5)]

def philosopher(name, left_fork_id, right_fork_id):
    left_fork = forks[left_fork_id]
    right_fork = forks[right_fork_id]
    
    while True:
        #thinking
        print(f"{name} is thinking...")
        time.sleep(random.random())
        
        #pick up left fork
        print(f"{name} is trying to pick up left fork")
        left_fork.acquire()
        
        #right fork
        print(f"{name} is trying to pick up right fork")
        right_fork.acquire()
        
        #eat
        print(f"{name} is eating spaghetti!")
        time.sleep(random.random())
        
        #put down both forks
        right_fork.release()
        left_fork.release()
        
        print(f"{name} put down the forks.")

#create our philosophers
philosophers = []
names = ["Plato", "Socrates", "Aristotle", "Pythagoras", "Heraclitus"]

for i in range(5):
    #each philosopher has forks on their left and right
    left_id = i
    right_id = (i + 1) % 5
    
    #solution: one philosopher picks up forks in a different order
    if i == 4:
        left_id, right_id = right_id, left_id  #can be solved by swapping the order of the last philosopher
    
    phil = threading.Thread(target=philosopher, 
                          args=(names[i], left_id, right_id))
    philosophers.append(phil)
    phil.start()

time.sleep(10)
print("Dinner party is over!")