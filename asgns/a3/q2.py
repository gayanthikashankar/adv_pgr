def minIndexFirstString(str1, str2):
    result = -1
    
    for i in range(len(str1)):
        char = str1[i]
        
        exists_in_str2 = False
        for j in range(len(str2)):
            if str2[j] == char:
                exists_in_str2 = True
                break
        
        if exists_in_str2 and i > result:
            result = i
    
    return result