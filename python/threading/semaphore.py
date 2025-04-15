import threading
import time

sem = threading.Semaphore(2)

def worker(name):
    print(f"{name} is waiing to acq sempahore..")
    time.sleep(2)
    print(f"{name} is releasing sempahore..")

for i in range(5):
    threading.Thread(target=worker, args = (f"worker {i}",)).start()
