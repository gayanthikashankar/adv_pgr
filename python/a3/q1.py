'''
create a function checkPalindrome  to check whether the string passed as its augment is a palindrome 
without using any builtin function
'''

def checkPalindrome(string):
    
    length = 0
    for char in string:
        length += 1
    
   
    for i in range(l // 2):
        
        if string[i] != string[l - 1 - i]:
            return False
    
    return True
        


