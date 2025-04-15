import threading
'''
solve using semaphores 
'''

fork = threading.Lock()
knife = threading.Lock()

food = 100

def eat(name, left, right):
    global food

    while food>0:
        left.acquire() #fork grab by 1
        right.acquire()#knife grab by 2

        if food>0:
            food-=1
            print(name, "ate food. Remaining", food)
        left.release() 
        right.release()

t1 = threading.Thread(target=eat, args=("Phil 1", fork, knife))
t2 = threading.Thread(target=eat, args=("Phil 2", fork, knife))

t1.start()
t2.start()

