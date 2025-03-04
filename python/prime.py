# find if a number is prime or not
'''
interpreter lang: Python
compiler lang: C++
'''
number = int(input("Enter a number: "))

if number < 2:
    print("The number is not prime")
else:
    is_prime = True
    for i in range(2, number):
        if number % i == 0:
            is_prime = False
            break
    
    if is_prime:
        print("The number is a prime")
    else:
        print("The number is not prime")