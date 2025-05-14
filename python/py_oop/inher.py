#allows a class to inheirt attr+methods from another class---resuability + extensibility

class Animal:
    def __init__(self, name):
        self.name = name
        self.is_alive = True

    def eat(self):
        print(f"{self.name} is eating ")
    
    def sleep(self):
        print(f"{self.name} is sleeping ")

class Dog(Animal):
    def speak(self):
        print("woof")

class Cat(Animal):
    def speak(self):
        print("meow")


class Bird(Animal):
    def speak(self):
        print("chirp")


dog = Dog("Sniffy")
cat = Cat("Sneaky")
bird = Bird("Twirky")

print(dog.name)
print(dog.is_alive)
dog.speak()
dog.eat()
dog.sleep()