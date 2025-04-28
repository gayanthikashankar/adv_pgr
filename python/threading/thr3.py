import threading
import random
'''
4 arrays given, use threading to join and add them
- pass each array as an arg in each thread
- create a global variable 'sum' and use 'join'
- after each append we add to sum 
- after all joins print the sum of array 

RACE cond
- when all threads run tgt
- when one thread woking on global var it wont let the other threads wordk on th eglobal varibale 
- when two threads work parallely, one thread overrides

APPLY LOCK
'''
import threading

lock = threading.Lock()
total_sum = 0

def add_array(array, thread_name, l):
    global total_sum
    
    array_sum = sum(array)
    print(f"{thread_name}: Array sum = {array_sum}")
    
    l.acquire()
    total_sum += array_sum 
    print(f"{thread_name}: Updated total sum to {total_sum}")
    l.release()

if __name__ == "__main__":
    array1 = [1, 2, 3, 4, 5]
    array2 = [10, 20, 30, 40]
    array3 = [5, 15, 25]
    array4 = [100, 200]
    
    print("Main thread starting...")
    
   
    t1 = threading.Thread(target=add_array, args=(array1, "Thread 1", lock))
    t2 = threading.Thread(target=add_array, args=(array2, "Thread 2", lock))
    t3 = threading.Thread(target=add_array, args=(array3, "Thread 3", lock))
    t4 = threading.Thread(target=add_array, args=(array4, "Thread 4", lock))
    
    t1.start()
    t2.start()
    t3.start()
    t4.start()
    
    print("All threads have been started")
    
    t1.join()
    t2.join()
    t3.join()
    t4.join()
    
    print("All threads have completed")
    print(f"Final sum of all arrays: {total_sum}")
