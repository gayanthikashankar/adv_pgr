def subPali(s):
    if not s:
        return 0
    
    max_length = 1
    
    for i in range(len(s)):
        left, right = i - 1, i + 1
        while left >= 0 and right < len(s) and s[left] == s[right]:
            current_length = right - left + 1
            max_length = max(max_length, current_length)
            left -= 1
            right += 1
    
    for i in range(len(s) - 1):
        left, right = i, i + 1
        while left >= 0 and right < len(s) and s[left] == s[right]:
            current_length = right - left + 1
            max_length = max(max_length, current_length)
            left -= 1
            right += 1
    
    return max_length