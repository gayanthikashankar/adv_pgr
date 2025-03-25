'''
we have x=0 and y=some val resolve condition using try exception do y/x
'''

try:
    res = 0
    
    x = 0
    y = 9
    res = y/x
    print(res)
    if x ==0:
        raise ZeroDivisionError


except ZeroDivisionError as err: 
    print("Division error: cannot divide by zero", err)
    