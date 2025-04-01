def delDup(lst):
    result = []
    for num in lst:
        if lst.count(num) == 1:
            result.append(num)
    return result