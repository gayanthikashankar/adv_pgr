name = input("enter your full name: ")
phone_no = input("enter your phone no.: ")

#res = len(name)

#finds  characters in given string//pos//index starts at 0
res = name.find(" ")

#last occurance//reverse
reslast = name.rfind(" ")

#capitalize first letter 
print(name.capitalize())

#all letters to uppercase
print(name.upper()) #replace with lower

#bool = contains only digits
name.isdigit()

#only alphabeticla characters
name.isalpha()

#count x in given phone no
phone_no.count("-")

phone_no.replace("-", " ")

print(res)

#find all str methhods
print(help(str))