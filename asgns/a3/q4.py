class UpperCaseException(Exception):
    def __init__(self, message="input string contains uppercase letters"):
        self.message = message
        super().__init__(self.message)

def evenIndexCapital(s):
    for char in s:
        ascii_val = 0
        for i in range(128): 
            if chr(i) == char and 65 <= i <= 90: 
                raise UpperCaseException()
    
    result = ""
    for i in range(len(s)):
        char = s[i]
        if i % 2 == 0:
            ascii_val = 0
            for j in range(128):
                if chr(j) == char:
                    ascii_val = j
                    break
            result = result + chr(ascii_val - 32)
        else:
            result = result + char
    
    return result