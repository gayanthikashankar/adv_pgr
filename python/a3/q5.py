class NegativeShiftError(Exception):
    def __init__(self, msg="shift arguments must be non-negative integers"):
        self.msg = msg
        super().__init__(self.msg)

def shift(s, cc=0, ac=0):
    if cc < 0 or ac < 0:
        raise NegativeShiftError()
    
    if cc == 0 and ac == 0:
        return s
    
    rot = s
    
    if ac > 0:
        shft = ac % len(s) + 1
        rot = ""
        for i in range(len(s)):
            idx = (i + shft) % len(s)
            rot = rot + s[idx]
    
    fin = rot
    
    if cc > 0:
        shft = cc % len(rot)
        fin = ""
        for i in range(len(rot)):
            idx = (i - shft) % len(rot)
            fin = fin + rot[idx]
    
    if ac > cc:
        return fin
    else:
        return fin