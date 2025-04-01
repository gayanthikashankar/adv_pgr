def distChar(s1, s2):
    s1_not_s2 = ""
    for char in s1:
        if not char_in_string(char, s2):
            s1_not_s2 += char
    
    s2_not_s1 = ""
    for char in s2:
        if not char_in_string(char, s1):
            s2_not_s1 += char
    
    result = s1_not_s2 + s2_not_s1
    
    return sort_string(result)

def char_in_string(char, string):
    for c in string:
        if c == char:
            return True
    return False

def sort_string(s):
    chars = []
    for char in s:
        chars.append(char)
    
    for i in range(len(chars)):
        for j in range(len(chars) - 1):
            if chars[j] > chars[j + 1]:
                chars[j], chars[j + 1] = chars[j + 1], chars[j]
    
    sorted_string = ""
    for char in chars:
        sorted_string += char
    
    return sorted_string