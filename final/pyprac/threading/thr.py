'''
global interpreter lock (GIL)
-  is a mutex that protects access to Python objects
- preventing multiple threads from executing Python bytecode at once

- threading lets the computer work on multiple tasks at once, 
- like playing a game while also downloading a file
'''

import threading


#what the worker will do
def say_hello(name):
    print(f"Hello {name}!")

#cretaing worker1
worker1 = threading.Thread(target=say_hello, args=("Alice",))
#creating worker2
worker2 = threading.Thread(target=say_hello, args=("Bob",))

#tell the workers to start working
worker1.start()         
worker2.start()

#wait for workers to finish
worker1.join()
worker2.join()

print("All workers are done!")


#both bobby and sally will be greeted at alost teh same time