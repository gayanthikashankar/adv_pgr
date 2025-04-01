'''
given a list of integer implement an efficient algorithm to find- 
-the longest contiguous subarray with an equal number of odd and even elements

'''
def longest_subarray(nums):
    index_map = {0: -1}
    balance = 0
    max_length = 0
    start_index = 0

    for i, num in enumerate(nums):
        balance += 1 if num % 2 == 0 else -1

        if balance in index_map:
            length = i - index_map[balance]
            if length > max_length:
                max_length = length
                start_index = index_map[balance] + 1
        else:
            index_map[balance] = i

    return nums[start_index:start_index + max_length]
