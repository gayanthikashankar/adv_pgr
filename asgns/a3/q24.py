def splitsum(lst):
    pos = sum(x**2 for x in lst if x > 0)
    neg = sum(x**3 for x in lst if x < 0)
    return [pos, neg]