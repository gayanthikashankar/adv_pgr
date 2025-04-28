'''
recursive function to generate all possible valid parantheses combinations for a given number n

'''

def generate_parentheses(n, open_count=0, close_count=0, current_string="", result=None):
    if result is None:
        result = []
    
    if open_count == n and close_count == n:
        result.append(current_string)
        return result
    
    if open_count < n:
        generate_parentheses(n, open_count + 1, close_count, current_string + "(", result)
    
    if close_count < open_count:
        generate_parentheses(n, open_count, close_count + 1, current_string + ")", result)
    
    return result

n = 3  
print(generate_parentheses(n))

