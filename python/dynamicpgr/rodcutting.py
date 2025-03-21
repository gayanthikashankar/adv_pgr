class RodCutting:
    def __init__(self, n, p):
        self.p = p
        self.n = n
        self.S = [[0]*(n+1) for _ in range(len(p))]
    
    def solve(self):
        for i in range(1, len(self.p)):
            for j in range(1, self.n+1):
                if i <= j:
                    self.S[i][j] = max(self.S[i-1][j], self.p[i] + self.S[i][j-i])
                else:
                    self.S[i][j] = self.S[i-1][j]
    
    def show_result(self):
        print("Max profit:", self.S[len(self.p)-1][self.n])
        col_index = self.n
        row_index = len(self.p) - 1
        
        while col_index > 0 and row_index > 0:
            if self.S[row_index][col_index] == self.S[row_index-1][col_index]:
                row_index = row_index - 1
            else:
                print("we take piece with length", row_index, "m")
                col_index = col_index - row_index

rod = RodCutting(6, [0, 2, 5, 7, 3, 9])
rod.solve()
rod.show_result()