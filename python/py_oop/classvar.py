#share data among all objects cretaed fromt that class classes

class Student:

    class_year = 2026
    num_stu = 0

    def __init__(self, name, age):
        self.name = name #instance vars
        self.age = age
        Student.num_stu +=1

s1 = Student("bob", 30)
s2 = Student("ana", 20)

print(s1.name)
print(s1.age)
print(s1.name)


print(s2.name)
print(s2.age)
print(s1.name)

print(s1.class_year)
print(s2.class_year)
#or can access them through the class instead instead of a specific object

print(Student.class_year)

print(Student.num_stu)