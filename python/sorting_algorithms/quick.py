def sort(nums, left, right):
    if left < right:
        split_pos = split(nums, left, right)
        sort(nums, left, split_pos-1)
        sort(nums, split_pos+1, right)


def split(nums, left, right):
    i = left
    j = right - 1
    pivot = nums[right]

    while i < j:
        while i < right and nums[i] < pivot:
            i += 1

        while j > left and nums[j] > pivot:
            j -= 1
        
        if i < j:
            nums[i], nums[j] = nums[j], nums[i]

    if nums[i] > pivot:
        nums[i], nums[right] = nums[right], nums[i]
    return i

nums = [2,9,7,4,1,0]
sort(nums, 0 , len(nums)-1)
print(nums)