#power of a number

def power(base, exp):
    if exp == 0:
        return 1
    elif exp>0:
        return power(base, exp-1) * base
    else:
        return 1/power(base, -exp)
    
print(power(2, 3)) # 8

print(power(2, -3)) # 0.125