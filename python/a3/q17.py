def list_operations(nums):
    if len(nums) >= 4:
        print(nums[3])
    else:
        print(-1)
    
    if len(nums) > 2:
        print(nums[2:])
    else:
        print([])
    
    print(nums[::-1])
    
    print(sum(nums))
    
    if numbers:
        print(max(nums), min(nums))
    else:
        print("Empty list")
    
    if 20 in nums:
        print(nums.index(20))
    else:
        print(-1)
    
    print(sorted(nums))
    print(sorted(nums, reverse=True))