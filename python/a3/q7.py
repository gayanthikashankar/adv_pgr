class InvalidInputException(Exception):
    def __init__(self, message="inavlid input. string should onlycontain only 'R' and 'G' characters"):
        self.message = message
        super().__init__(self.message)

def change(s):
    for char in s:
        if char != 'R' and char != 'G':
            raise InvalidInputException()
    
    if len(s) <= 1:
        return 0
    
    r_count = 0
    for char in s:
        if char == 'R':
            r_count += 1
    
    g_count = len(s) - r_count
    

    return min(g_count, r_count)