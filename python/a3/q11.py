def minOp(str1, str2):
    if str1 == str2:
        return 0
    
    if len(str1) == 0:
        return len(str2)  
    
    if len(str2) == 0:
        return len(str1)  
    
        if str1[0] != str2[0]:
        replace_op = 1 + minOp(str1[1:], str2[1:])
    else:
        replace_op = minOp(str1[1:], str2[1:])
    
    remove_op = 1 + minOp(str1[1:], str2)
    
    insert_op = 1 + minOp(str1, str2[1:])
    
    return min(replace_op, remove_op, insert_op)