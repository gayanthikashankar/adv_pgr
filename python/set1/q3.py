#Write a program that takes as input a 4-character long binary representation and prints its decimal representation.

binary = input("enter a 4digitt binary number (using only 0s and 1s): ")

first_position = int(binary[3]) * 1    
second_position = int(binary[2]) * 2   
third_position = int(binary[1]) * 4    
fourth_position = int(binary[0]) * 8  

decimal = first_position + second_position + third_position + fourth_position

print(f"the binary number {binary} equals {decimal} in decimal")