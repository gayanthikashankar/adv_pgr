'''
merge sort
time complexity: O(nlogn)
space complexity: O(n)

divide and conquer algorithm

- split array in half
- call merge sort on each half
- merge the two halves into one sorted array 
'''


def sort(nums):
    if len(nums) >1:
        left = nums[0:len(nums)//2]
        right = nums[len(nums)//2:len(nums)]

        sort(left)
        sort(right)

        i=0 #left array indec
        j=0 #right arr index
        k=0 #merge index

        while i<len(left) and j<len(right):
            if left[i] < right[j]:
                nums[k] = left[i]
                i+=1
            else:
                nums[k] = right[j]
                j+=1
            k+=1

        
        while i< len(left):
            nums[k] = left[i]
            i+=1
            k+=1

        while j< len(right):
            nums[k] = right[j]
            j+=1
            k+=1

nums = [2,9,7,4,1,0]
sort(nums)
print(nums)

