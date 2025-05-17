def collatz(n):
    if n <= 0:
        return []
    
    result = [n]
    
    while n != 1:
        if n% 2 == 0:  
            n =n // 2
        else:  
            n = 3* (n + 1)
        
        result.append(n)
    
    return [num for num in result if (num % 2 == 1)]