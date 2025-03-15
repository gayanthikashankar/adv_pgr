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