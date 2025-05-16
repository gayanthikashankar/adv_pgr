'''
bubble sort
time complexity: O(n^2) worst, O(n) best
space complexity: O(1)

- compare first two elemnts, swap if required, move on to next two
- after first iteration, largest element is at the end
repeat the process for n-1 times
- if no swaps are made in an iteration, the array is sorted
'''


def sort(nums):
    for i in range(len(nums)-1, 0, -1):
        for j in range(i):
            if nums[j] > nums[j+1]:
                temp = nums[j]
                nums[j] = nums[j+1]
                nums[j+1] = temp


nums = [2,9,7,4,1,0]
sort(nums)
print(nums)