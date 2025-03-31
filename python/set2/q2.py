#person class

class Person:
    def __init__(self, name, age, gender, height):
        self.name= name
        self.age= age
        self.gender= gender
        self.height= height

    def __str__(self):
        return f"{self.name}\nAge: {self.age}\nGender: {self.gender}\nHeight: {self.height}cms"
    
    def update(self):
        self.age = new_age
        self.height = new_height

    def __lt__(self, other):
        return self.age < other.age
    
    def __gt__(self, other):
        return self.age > other.age
    
    def __eq__(self, other):
        return self.age == other.age

p1 = Person("Robert", 25, "M", 145)
print(p1)

p1.update(height=165)
p1.update(age=30)
print(p1)

p2 = Person("Alice", 35, "F", 140)
print(p2 > p1)  
print(p2 < p1)  
print(p2 == p1) 