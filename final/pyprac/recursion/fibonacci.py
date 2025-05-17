'''
numbers in seq are the sum of the previous two numbers

f0 = 0
f1 = 1
fn = f(n-1) + f(n-2)

fn: 0,1,1,12,3,5,8,13,21,34,55
n: 0,1,2,3,4,5,6,7,8,9,10
'''
def fib(n):
    if n == 0:
        return 0
    elif n == 1:
        return 1
    else:
        return fib(n-1) + fib(n-2)

for n in range(11):
    print(fib(n))