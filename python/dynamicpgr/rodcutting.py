'''

O(n × m)- time and space

'''


class rod_cutting:
    def __init__(self, rod_length, prices):
        self.prices = prices
        self.rod_length = rod_length
        self.table = [[0]*(rod_length+1) for _ in range(len(prices))]
    
    def solve(self):
        for i in range(1, len(self.prices)):
            for j in range(1, self.rod_length+1):
                if i <= j:
                    self.table[i][j] = max(self.table[i-1][j], self.prices[i] + self.table[i][j-i])
                else:
                    self.table[i][j] = self.table[i-1][j]
    
    def show_result(self):
        print("max profit:", self.table[len(self.prices)-1][self.rod_length])
        
        current_length = self.rod_length
        current_price_index = len(self.prices) - 1
        
        print("optimal cutting strategy:")
        while current_length > 0 and current_price_index > 0:
            if self.table[current_price_index][current_length] == self.table[current_price_index-1][current_length]:
                current_price_index = current_price_index - 1
            else:
                print(f"  cut a piece of length {current_price_index} meters (price: {self.prices[current_price_index]})")
                current_length = current_length - current_price_index

rod = rod_cutting(6, [0, 2, 5, 7, 3, 9])
rod.solve()
rod.show_result()