'''
once t1 started,( we use join -> the main fn it will wait)
we print that 3 started
- the thread sleeps for 3 second
- the particular 3 waits to print for  3 seconds 

- 2 started, sleep time - 2 second and it will get printed
- same happens with t1

GIL 
- one core at a time 


'''


import random 
import time 

count = 0

def thread_fn(name, sleep_time):
    global count 
    print(name, "started")

    time_sleep(sleep_time)
    print(name, "finished")

    t3 = threading.Thread(target =thread_fn, args = ("3", 3)) #name, how much time to sleep
    t3.start()

    t2 = threading.Thread(target =thread_fn, args = ("2", 2))
    t2.start()

    t1 = threading.Thread(target =thread_fn, args = ("1", 1))
    t1.start()

    t3.join()
    print("t3 ended")

    t2.join()
    print("t2 ended")

