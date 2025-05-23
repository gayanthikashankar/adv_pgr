'''
Longest Common Subsequence (LCS)
Find the length of the longest subsequence present in both given sequences.

- 2d matrix
- diagonal = add 1 == characters match
- move from fown to up = copy number below to the box above
- start from bottom right (with zero padding)
- bottom up
- time complexity: O(m*n) where m and n are the lengths of the two sequences
'''

def LCS(text1, text2):
    dp = [[0 for j in range(len(text2) + 1)] for i in range(len(text1) + 1)]
    for i in range(len(text1)-1, -1, -1):
        for j in range(len(text2)-1, -1, -1):
            if text1[i] == text2[j]:
                dp[i][j] = 1 + dp[i+1][j+1]
            else:
                dp[i][j] = max(dp[i+1][j], dp[i][j+1])
    return dp[0][0]
    


text1 = "abcde"
text2 = "ace"
print(LCS(text1, text2))  #Output: 3 (The longest common subsequence is "ace")