def sum(n):
    if n==0:
        return 0
    else:
        return n%10 + sum(n//10)

'''
n%10 gives the last digit of n
n//10 gives the number without the last digit

'''

print(sum(1234)) # 10

