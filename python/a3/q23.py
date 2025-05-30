def matMul(mat1, mat2):
    if len(mat1[0]) != len(mat2):
        raise DimensionMismatchExceptin()
    
    result = [[0 for _ in range(len(mat2[0]))] for _ in range(len(mat1))]
    
    for i in range(len(mat1)):
        for j in range(len(mat2[0])):
            for k in range(len(mat2)):
                result[i][j] += mat1[i][k] * mat2[k][j]
    
    return result