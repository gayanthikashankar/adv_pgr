def is_pali(str1):
    str1 = str(str1)
    if len(str1) == 1:
        return True
    else:
        if str1[0] == str1[-1]:
            return is_pali(str1[1:-1])
        else:
            return False

print(is_pali("madam")) # True
print(is_pali("hello")) # False
print(is_pali(12321)) # True
print(is_pali(12345)) # False