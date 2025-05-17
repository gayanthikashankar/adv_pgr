def revstr(str1):
    str1 = str(str1)  #convert to string
    if len(str1) == 0:
        return " "
    elif len(str1) == 1:
        return str1
    else:
        return revstr(str1[1:]) + str1[0]
    
print(revstr("hello")) # "olleh"
print(revstr(12345)) # "olleh"
