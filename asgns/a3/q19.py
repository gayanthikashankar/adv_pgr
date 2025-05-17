def weave(lst1, lst2):
    if len(lst1) != len(lst2):
        raise LengthMismatchException()
    
    result = []
    for i in range(len(lst1)):
        result.append(lst1[i])
        result.append(lst2[i])
    
    return result