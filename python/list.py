#userinout of 5 numbers, store in list and sum and check if that number is prime or not


numbers = []
for i in range(5):
    num = int(input(f"Enter number {i+1}: "))
    numbers.append(num)

#Calculate the sum of the numbers
total_sum = sum(numbers)
print(f"The sum of the numbers is: ", total_sum)


if total_sum < 2:
    print("The number is not prime")
else:
    is_prime = True
    for i in range(2, total_sum):
        if total_sum % i == 0:
            is_prime = False
            break
    
    if is_prime:
        print("The sum is a prime")
    else:
        print("The sum is not prime")