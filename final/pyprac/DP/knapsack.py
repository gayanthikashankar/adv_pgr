'''
0/1 Knapsack Problem
Given weights and values of n items, put these items in a knapsack of
capacity W to get the maximum total value.


should be equal to or less than weight

dtm num item to include in collec tot weight less than or equal to weight
max money

2)
- cannot div an obj
- either choose an obj ornot
- suppose n= obj given, how many possibilities are there to pick an object? === 2^n
- xi = 0/1 if we take the obj or not
- vi = val of time
- M = tot weight 
'''

class Knapsack:
    def __init__(self, n, M, w, v):
        self.n = n
        self.M = M
        self.w = w
        self.v = v
        self.S = [[0 for _ in range(M+1)] for _ in range(n+1)]
    
    def solve(self):
        for i in range(1, self.n+1):
            for w in range(self.M+1):
                not_taking_item = self.S[i-1][w]
                taking_item = 0
                if self.w[i] <= w:
                    taking_item = self.v[i] + self.S[i-1][w-self.w[i]]
                self.S[i][w] = max(taking_item, not_taking_item)
    
    def show_result(self):
        print("maximum value:", self.S[self.n][self.M])
        w = self.M
        for n in range(self.n, 0, -1):
            if self.S[n][w] != 0 and self.S[n][w] != self.S[n-1][w]:
                print("item taken:", n)
                w = w - self.w[n]

k = Knapsack(3, 5, [0,4,2,3], [0,10,4,7])
k.solve()
print(k.S)
k.show_result()

