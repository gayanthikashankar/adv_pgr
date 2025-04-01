def kMax(lst, k):
    if k <= 0 or k > len(lst):
        raise ValueError("Invalid value of k")
    
    return sorted(lst, reverse=True)[k-1]