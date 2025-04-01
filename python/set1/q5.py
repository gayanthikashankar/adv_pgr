'''
Create a function firstLetters that takes as an argument a string s and returns a string with the first letter-
-of every word in it. Do not use any built-in string library function.

– firstLetters("bad is nice") → "bin"
– firstLetters("hello other world") → "how"

'''
def firstLetters(s):
    result = ""
    if len(s) > 0:
        result += s[0]
    
    for i in range(1, len(s)):
        if s[i-1] == ' ' and s[i] != ' ':
            result += s[i]
    
    return result

print(firstLetters("bad is nice"))        
print(firstLetters("hello other world"))   
