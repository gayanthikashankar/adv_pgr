'''
Write a function prodDigits that takes a 5-digit number as its parameter and returns the product of its digits.
'''

def prodDigits(num):
    fifth = num //10000
    fourth = (num % 10000) // 1000
    third = (num % 1000) // 100 
    second = (num % 100) // 10
    first = num % 10

    return first * second * third * fourth * fifth

test_number = 12345
print(prodDigits(test_number))