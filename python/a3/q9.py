def moveDups(s):
    result = ""
    duplicates = ""
    
    
    seen = []
    
    for char in s:
        is_seen = False
        for seen_char in seen:
            if char == seen_char:
                is_seen = True
                break
        
        if not is_seen:
            result += char
            seen.append(char)
        else:
            duplicates += '_' + char
    
    return result + duplicates