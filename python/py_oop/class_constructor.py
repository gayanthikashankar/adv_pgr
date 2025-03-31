#refer to car.py

from car import Car
#construct a car object
car1 = Car("porsche", "1992", "purple", False)
print(car1) #<__main__.Car object at 0x1045ec410>

print(car1.model)

car1.drive()
car1.stop()
