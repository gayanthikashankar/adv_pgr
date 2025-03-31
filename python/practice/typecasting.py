'''
typecasting converts one DT to another
implict =  variables dt can be converted when you perform certain operations on it 
explicit = manual conversion using type keywords

'''

'''
#explicit typecasting
name = "bob"
age = 21
gpa = 3.7
student = True

print(type(name)) #change to any specific var to get its type

print("dt of age before typecasting")
print(type(age))
print(type(gpa))
print(type(student))


age = float(age)
print("dt of age after typecasting")
print(type(age))
'''

#implicit typecasting

x= 2
y= 2.0
x=x/y #int/float = float

print(x)