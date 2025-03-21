'''
subset sum

if set has n elems how many subsets does it have? 2^n

sum of all elements of subsets should be equal to M
'''

'''
time complexity: O(n x M)

'''

class subsetSum:
    def __init__(self, nums, target_sum):
        self.nums = nums
        self.target_sum = target_sum
        self.n = len(nums)

        self.dp = [[False] * (target_sum + 1) for _ in range(self.n + 1)]
        
        for i in range(self.n + 1):
            self.dp[i][0] = True
    
    def solve(self):
        for i in range(1, self.n + 1):
            for j in range(1, self.target_sum + 1):
                if self.nums[i - 1] > j:
                    self.dp[i][j] = self.dp[i - 1][j]
                else:
                    self.dp[i][j] = self.dp[i - 1][j] or self.dp[i - 1][j - self.nums[i - 1]]
        
        return self.dp[self.n][self.target_sum]
    
    def find_subset_indices(self):
        if not self.dp[self.n][self.target_sum]:
            return []
        
        indices = []
        i, j = self.n, self.target_sum
        
        while i > 0 and j > 0:
            if self.dp[i][j] and not self.dp[i-1][j]:
                indices.append(i-1)
                j -= self.nums[i-1]
            i -= 1
            
        #asc order      
        return indices
    
    def find_subset(self):
        indices = self.find_subset_indices()
        return [self.nums[i] for i in indices]
    
    def show_result(self):
        if self.solve():
            indices = self.find_subset_indices()
            subset = self.find_subset()
            
            print(f"target sum {self.target_sum} can be achieved")
            print(f"subset values: {subset}")
            print(f"sum of subset: {sum(subset)}")
            print("objects included:")
            
            for i, idx in enumerate(indices):
                print(f"  object {idx} (value: {self.nums[idx]})")
        else:
            print(f"target sum {self.target_sum} cannot be achieved with the given set.")

if __name__ == "__main__":
    nums = [5, 2, 1, 3]
    target_sum = 6
    
    subset_sum = subsetSum(nums, target_sum)
    subset_sum.show_result()
