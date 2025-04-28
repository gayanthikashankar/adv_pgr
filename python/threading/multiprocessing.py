'''
basic process of multiprocessing and how its different from threading
- multiprocessing = diff process

GIL = global index logic

- why is threadin ggood for i/o bound and cpu bound: 
Use threading when your bottleneck is waiting for external resources,
 and use multiprocessing when your bottleneck is pure computation speed.

 - overhead

'''

import multiprocessing

def add_array(array, process_name, result_queue):

    array_sum = sum(array)
    print(f"{process_name}: Array sum = {array_sum}")
    result_queue.put(array_sum)

if __name__ == "__main__":
    array1 = [1, 2, 3, 4, 5]
    array2 = [10, 20, 30, 40]
    array3 = [5, 15, 25]
    array4 = [100, 200]
    
    print("Main process starting...")
    
    result_queue = multiprocessing.Queue() #overhead
    
    p1 = multiprocessing.Process(target=add_array, args=(array1, "Process 1", result_queue))
    p2 = multiprocessing.Process(target=add_array, args=(array2, "Process 2", result_queue))
    p3 = multiprocessing.Process(target=add_array, args=(array3, "Process 3", result_queue))
    p4 = multiprocessing.Process(target=add_array, args=(array4, "Process 4", result_queue))
    
    p1.start()
    p2.start()
    p3.start()
    p4.start()
    
    print("All processes have been started")
    
    p1.join()
    p2.join()
    p3.join()
    p4.join()
    
    total_sum = 0
    while not result_queue.empty():
        total_sum += result_queue.get()
    
    print("All processes have completed")
    print(f"Final sum of all arrays: {total_sum}")

