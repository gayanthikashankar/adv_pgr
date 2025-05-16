class Computer:
    def config(self):
        print("Configuring computer..")

com1 = Computer()
print(type(com1)) # <class '__main__.Computer'>

Computer.config(com1) 
#or -- com1.config(


'''

class Car:
    #constructor (dunder method: double underscore)
    #self = this obj we're creating rn, eg: this car
    def __init__(self, model, year, color, for_sale):
        #assign attributes using self
        self.model = model
        self.year = year
        self.color = color
        self.for_sale = for_sale

    #methods are actions that a class can perform
    def drive(self):
        print(f"you drive the {self.model}")
    
    def stop(self):
        print("you stop the car")


'''