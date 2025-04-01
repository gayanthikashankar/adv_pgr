def printMat(mat):
    if not all(len(row) == len(mat[0]) for row in mat):
        raise DimensionMismatchException()
    
    for row in mat:
        for elem in row: 
            print(elem, end=" ")
        print()