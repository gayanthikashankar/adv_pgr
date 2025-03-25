#use recursion

x = int(input("enter the num you want to calc the factorial of: "))


res = 1

for x in range(1,x):
    res = res * x

print(" the factorial is: ", res)