'''
Write a function cubesum that accepts a 3-digit integer and returns the sum of the cubes of individual digits of that number. 
Use this function in another function isArmstrong to check if its 3-digit parameter is an Armstrong number.
 In an Armstrong number, the sum of the cube of its digits is equal to the number itself. 
 For example, 371 is an Armstrong number, since

'''
def cubesum(num):
    hundreds = num // 100
    tens = (num % 100) // 10
    ones = num % 10
    
    return (hundreds ** 3) + (tens ** 3) + (ones ** 3)

def isArmstrong(num):
    return cubesum(num) == num

test_number = 371
if isArmstrong(test_number):
    print(f"{test_number} is an Armstrong number")
else:
    print(f"{test_number} is not an Armstrong number")
