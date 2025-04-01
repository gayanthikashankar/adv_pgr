def quadratic_roots(a, b, c):
    discriminant = (b**2) - (4 * a * c)
    
    if discriminant < 0:
        return None
    
    root1 = (-b + discriminant**0.5) / (2 * a)
    root2 = (-b - discriminant**0.5) / (2 * a)
    
    if root1 > 0:
        return root1
    elif root2 > 0:
        return root2
    else:
        return None

a = int(input("enter the coefficient of the x^2 term (a): "))
b = int(input("enter the coefficient of the x term (b): "))
c = int(input("enter the coefficient of the constant term (c): "))

result = quadratic_roots(a, b, c)
if result is None:
    print("no positive real root exists")
else:
    print(f"the positive real root is: {result}")