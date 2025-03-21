'''

which sorting algo breaks th eproblem into subproblems and sorts it? ------ 

optimal substructure ---------- 
- in cs, a problem has optimal substr if an optimal sol can be constructed from optimal solutions of a subproblem

if a given problem has ptimal substructre and overlapping subproblem

methods: memorization and tabulatuon takes O(n) complexity
- topdown: store the sol of problem in a table (priority queue)
             check whether if present in table if we laready solved it
- bottom up: reforumkate og prpoblem in bottom up
            iteratively generate subresult for larger and large problems
'''


#top donw method (memorization)
def fibonacci_topDown(n, table):
    if n not in table:
        table[n] = fibonacci_topDown(n-1, table) +fibonacci_topDown(n-2, table)
        return table[n]
t ={0:1, 1:1}
print(fibonacci)topDown(5,t)


#
def fibonacci_tabulation(n, table):
    for i in range(2, n+1):
