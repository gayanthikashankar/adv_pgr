#circle class

class Circle:
    def __init__(self, cx = 1.0, cy= 1.0, r = 1.0):
        self.cx = cx
        self.cy = cy
        self.radius=r
    
    def __str__(self):
        return f"Circle of radius {self.radius} at ({self.cx},{self.cy})"

    def area(self):
        return (22/7) * (self.radius ** 2)

    def perimeter(self):
        return 2 * (22/7) * self.radius

    def move(self, new_x, new_y):
        
        self.cx = new_x
        self.cy = new_y

c1 = Circle()  
print(c1)      

c2 = Circle(1.0, 2.0, 3.0)  
print(c2)                   
print(c2.area())           
print(c2.perimeter())      

c2.move(5.0, 6.0)  
print(c2)          