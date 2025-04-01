class Vector:
    def __init__(self, values):
        self.values = list(values)
    
    def __str__(self):
        dim = len(self.values)
        return f"{dim}-dimensional vector: {self.values}"
    
    def __mul__(self, scalar):
        if isinstance(scalar, (int, float)):
            return Vector([v * scalar for v in self.values])
        elif isinstance(scalar, Vector):
            if len(self.values) != len(scalar.values):
                raise ValueError("vectors the same dimension for dot product")
            sum(a * b for a, b in zip(self.values, scalar.values))
        else:
            raise TypeError("unsupported operand type")
    
    def __add__(self, other):
        if not isinstance(other, Vector):
            raise TypeError("can only add vectpr objects")
        
        if len(self.values) != len(other.values):
            raise ValueError("vectourshould have same dim  for addition")
        
        return [a + b for a, b in zip(self.values, other.values)]
    
    def __sub__(self, other):
        if not isinstance(other, Vector):
            raise TypeError("can only subtract Vector objects")
        
        
        return Vector([a - b for a, b in zip(self.values, other.values)])