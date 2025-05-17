'''
Fibonacci number using tabulation
- bottom up approach
- reforumulate og problem in bottom up manner
- itertaively generate subresults for larger and larger subproblems

'''

def fibonacci_tab(n):
    
    if n <= 1:
        return n
    
    #creet table to store results
    table = [0] * (n + 1)
    table[1] = 1
    
    #fill the table from bottom up
    for i in range(2, n + 1):
        table[i] = table[i-1] + table[i-2]
    
    return table[n]

print(fibonacci_tab(10))  #55