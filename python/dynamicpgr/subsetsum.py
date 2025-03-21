'''
subset sum

if set has n elems how many subsets does it have? 2^n

sum of all elements of subsets should be equal to M
'''

'''
time complexity: 

'''

class SubsetSum:
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
    
    def find_subset(self):
        if not self.dp[self.n][self.target_sum]:
            return []
        
        subset = []
        i, j = self.n, self.target_sum
        
        while i > 0 and j > 0:
            if self.dp[i][j] and not self.dp[i-1][j]:
                subset.append(self.nums[i-1])
                j -= self.nums[i-1]
            i -= 1
            
        return subset

if __name__ == "__main__":
    nums = [5, 2, 1, 3]
    target_sum = 6
    
    subset_sum = SubsetSum(nums, target_sum)
    has_solution = subset_sum.solve()
    
    print(f"Can the target sum {target_sum} be achieved? {has_solution}")
    
    if has_solution:
        solution = subset_sum.find_subset()
        print(f"One possible subset: {solution}")
        print(f"Sum of subset: {sum(solution)}")