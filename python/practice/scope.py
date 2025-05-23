#var scope=where a var is visible and accesible
#scope resol: LEGB -> local-enclosed-global-builtin

#INCOMPLETE

'''
#1
def f1():
    a=1 #variables declared inside a fn have a local scope
    print(a)

def f2():
    b=2
    print(b) 
    ''''

#2
def f1():
    x=1  
    print(x)

def f2():
    x=2
    print(x)