'''
aheived through inheritance + duct typing
'''

from abc import ABC, abstractmethod #abstract class

class Shape:
    @abstractmethod
    def area(self):
        pass

class Circle(Shape):
    def __init__(self, name, radius):
        self.radius=radius
        self.name = name

    def area(self):
        return 3.14 * self.radius ** 2

class Square(Shape):
    def __init__(self,name, side):
        self.side=side
        self.name = name

    def area(self):
        return self.side **2

class Triangle(Shape):
    def __init__(self, base,name, height):
        self.base=base
        self.height=height
        self.name = name
    
    def area(self):
        return 0.5 * self.base * self.height

shapes = [Circle("circle", 2), Square("square", 3), Triangle(4,"triangle",  5)]
for shape in shapes:
    print(f"the shape of the {shape.name} is {shape.area()}") 