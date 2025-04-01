def reduce(str, k):
    if not isinstance(str, str) or not isinstance(k, int) or k <= 0:
        return ""
    
    if not all(c.islower() for c in str):
        return ""
    
    char_counts = {}
    for char in str:
        if char in char_counts:
            char_counts[char] += 1
        else:
            char_counts[char] = 1

    can_reduce = False
    for char, count in char_counts.items():
        if count == k:
            can_reduce = True
            break
    
    if not can_reduce:
        return ""
    
    result = ""
    for char in str:
        if char_counts[char] != k:  
            result += char
    
    return result