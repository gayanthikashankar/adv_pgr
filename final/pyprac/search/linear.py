arr = [7,4,9,8,5]
n=8

def linear_search(arr, n):
    for i in range(0, len(arr)):
        if arr[i] == n:
            return True 
    return False
            
    

if linear_search(arr, n):
    print("Element is present in array")
else:
    print("Element is not present in array")