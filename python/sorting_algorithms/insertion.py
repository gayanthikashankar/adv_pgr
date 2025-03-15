def sort(nums):
    for i in range(1, len(nums)):
        j=i
        while nums[j-1] > nums[j] and j>0:
            nums[j-1], nums[j] = nums[j], nums[j-1]
            j-=1

nums = [2,9,7,4,1,0]
sort(nums)
print(nums)