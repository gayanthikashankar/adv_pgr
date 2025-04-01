def firstLetters(s):
    result = ""
    is_word_start = True
    
    for char in s:
        if char == ' ':
            is_word_start = True
        else:
            if is_word_start:
                result = result + char
                is_word_start = False
    
    return result