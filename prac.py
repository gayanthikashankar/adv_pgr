'''
sleection sort
timec complexity on2 
space complexity o1


'''

def sort(nums):
    for i in range(0, len(nums)-1):
        curmin = i
        for j in range(i+1), len(nums)):
            if nums[j]<nums[curmin]:
                curmin = j
        nums[i], nums[curmin] = nums[curmin], nums[i]

nums = [2,9,7,4,1,0]
sort(nums)
print(nums)