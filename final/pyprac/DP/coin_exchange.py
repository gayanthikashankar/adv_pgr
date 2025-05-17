'''
Coin Change Problem
Given an amount and a set of coins, find the number of ways to make the
amount using the given coins.

- unbounded knapsack

time complexity: O(m*n) with the use of memoization
- O(m^n) worst case where m is the number of coins and n is the amount
- if we use dp the complexity becomes O(n) - bottom up approach

space complexity: O(m*n) with the use of memoization


i: which position in our coin list we're currently looking at
a: how much money we've collected so far


'''

def coin_change(coins, amount):
    cache = {}

    def dfs(i,a):
        if a == amount: # base case: we've collected the exact amount
            return 1
        if a > amount or i == len(coins): # base case: we've collected too much or we've looked at all coins
            return 0
        if (i,a) in cache: # check if we've already computed this state and return the cached result
            return cache[(i,a)]
        
        #use current coin and stay on it/ skip and move to next one. sum gives us the total number of ways
        cache[(i,a)] = dfs(i, a + coins[i]) + dfs(i + 1, a)
        return cache[(i,a)]
    return dfs(0, 0)

