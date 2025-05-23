#exception = event detet during during pgr exec that interrupts flow of pgr
'''
FileNotFound
ZeroDivisionError
ValueError
KeyError
IndexError
TypeError


try, except, else, finally
'''

'''
eneter a number as numerator: 5
eneter a number as denominator: 0
Traceback (most recent call last):
    res = numerator/denominator
          ~~~~~~~~~^~~~~~~~~~~~
ZeroDivisionError: division by zero

'''
try:
    numerator = int(input("eneter a number as numerator: "))
    denominator = int(input("eneter a number as denominator: "))
    res = numerator/denominator
except ZeroDivisionError as e:
    print("cannot divide by 0")
    print(e)
except ValueError as e:
    print("enter only numbers")
    print(e)
except Exception as e:
    print("there was an issue")
    print(e) #optional
else:
    print(res)
finally:
    print("this will always execute")
