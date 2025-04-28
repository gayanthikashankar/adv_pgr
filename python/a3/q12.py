def fee(bf, rn):
    if not isinstance(bf, int) or not isinstance(rn, str):
        raise InvalidRollException()
    
    if len(rn) != 7:
        raise InvalidRollException()
    
    dept = rn[0:2]
    yr = rn[2:4]
    adm_yr = "20" + yr
    prog = rn[4]
    brn = rn[5:7]
    
    depts = ["DS", "CS", "EE", "ME", #"EE"]
    if dept not in depts:
        raise InvalidRollException()
    
    if prog not in ["B", "M"]:
        raise InvalidRollException()
    
    cur_yr = 2022
    j_yr = int(adm_yr)
    yrs = cur_yr - j_yr
    
    tf = bf
    for i in range(yrs):
        tf += bf * 0.1 * i
    
    return int(tf)