'''
iterative binary search 
- uses a loop (typically a while loop) to repeatedly narrow down the search space
'''

def binary_search(lst, val):
    low = 0
    high = len(lst) - 1
    mid = 0

    while low <= high:
        mid = (high + low) // 2
        if val == lst[mid]:
            return mid
        elif val < lst[mid]:
            high = mid - 1
        else:
            low = mid + 1
    return -1

lst = [1, 2, 3, 4, 5, 6, 7, 8, 9]
val = 8
result = binary_search(lst, val)

if result != -1:
    print(f"Element is present at index {result}")
else:   
    print("Element is not present in array")