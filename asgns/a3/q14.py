def equivalent(str1, str2):
    if not isinstance(str1, str) or not isinstance(str2, str):
        return ""
    
    if not str1:
        return str2 if not str2 else ""
    
    if len(str1) < len(str2):
        return ""
    
    rotations = []
    for i in range(len(str1)):
        rotation = str1[i:] + str1[:i]
        rotations.append(rotation)
    
    max_length = 0
    result = ""
    
    for i in range(len(str2)):
        for j in range(i + 1, len(str2) + 1):
            substring = str2[i:j]
            if substring in rotations:
                if len(substring) > max_length:
                    max_length = len(substring)
                    result = substring
    
    return result