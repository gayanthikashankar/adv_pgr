'''
selection sort
time complexity: O(n^2)
space complexity: O(1)

- find the minimum in list and place it at the beginning
- start with first, mark as current minimum
- compare current minimum with next element, if smaller, mark as new current minimum
- repeat the process for all elements
- after first iteration, smallest element is at the beginning
- repeat the process for n-1 times
'''

def sort(nums):
    for i in range(0, len(nums)-1):
        curr_min = i

        for j in range(i+1, len(nums)):
            if nums[j] < nums[curr_min]:
                curr_min = j

        nums[i], nums[curr_min] = nums[curr_min], nums[i]
        





nums = [2,9,7,4,1,0]
sort(nums)
print(nums)