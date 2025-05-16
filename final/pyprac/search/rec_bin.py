'''
recursive binary search
- achieves the same goal by calling itself with a smaller problem
- binary search only works on sorted lists
- use indexes low and high to keep track of the current search space
- middle index is calculated as (low + high) // 2
- if the middle element is equal to the target, return the index
- if the middle element is less than the target, search the right half of the list
- if the middle element is greater than the target, search the left half of the list
- do this until the middle index is equal to the target or the search space is empty
'''

def binary_search(lst, val, low, high):
    if low> high:
        return False
    else:
        mid = (low + high) // 2
        if (val>lst[mid]):
            return binary_search(lst, val, mid+1, high)
        elif (val<lst[mid]):
            return binary_search(lst, val, low, mid-1)
        else:
            return mid
        

i = binary_search([1,2,3,4,5,6,7,8,9], 5, 0, 8)
#sorted, x, y, len(sorted)-1

print(i)