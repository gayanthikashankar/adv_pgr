import threading
import time 

'''
threading exmaples: 
-split screeen 
- gogoledoc

we acheive:
- multithreading 

why is join important? 
- once we have a thread and we join them then both of the threads will run parallely
- the mianf n also has a thread
- join two thread - runs paralelly and holds other threads
- - running main thread in start, then runs each paraelly
- if we join thread 1 and 2 then they will run parallely and wait for the main thread 

- everytime we run a thread we use a join, both run paraelly and we wait for the  main thread to come 

 '''



import threading

count = 0
def counter(name):
    global count

print(name, "started counting...") 
for i in range
