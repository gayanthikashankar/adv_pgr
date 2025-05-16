'''
exception = An event that interrupts the flow of a program
(ZeroDivisionError, TypeError, ValueError)
1.try, 2.except, 3.finally
'''
try:
    number = int(input("Enter a number: "))
    print(1/number)
except ZeroDivisionError as e:
    print("You cannot divide by zero")
    print(e)
except ValueError as e:
    print("You must enter a number")
    print(e)
except Exception as e:
    print("Something went wrong")
    print(e)
finally:
    print("This will always run") 
