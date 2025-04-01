def delVowels(s):
    result = ""
    
    for char in s:
        if char != 'a' and char != 'e' and char != 'i' and char != 'o' and char != 'u' and \
           char != 'A' and char != 'E' and char != 'I' and char != 'O' and char != 'U':
            result += char
    
    return result