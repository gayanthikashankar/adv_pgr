import threading
import time
'''
threading is not GIL
-good for i/o bound things
- not good for cpu bound - we need multiprocessing,
'''


sem = threading.Semaphore(2)

def worker(name):
    print(f"{name} is waiing to acq sempahore..")
    time.sleep(2)
    print(f"{name} is releasing sempahore..")

for i in range(5):
    threading.Thread(target=worker, args = (f"worker {i}",)).start()
