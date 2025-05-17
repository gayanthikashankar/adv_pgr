'''
fibonacci number using memoization
- top down approach
- store the sols of the subporblem in a table (priorirty queue)
- whenever we try ti solve a subproblem, we first check if we have already solved it
'''

def fibonacci_memo(n, memo={}):
    
    if n <= 1:
        return n
    
    #if we've already calculated this value
    if n in memo:
        return memo[n]
    
    #calc and store the result
    memo[n] = fibonacci_memo(n-1, memo) + fibonacci_memo(n-2, memo)
    return memo[n]

print(fibonacci_memo(10))  #55