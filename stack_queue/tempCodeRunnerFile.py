def dfs(r, c):
    
    v1[r][c] = True

    dir = [(1, 0), (-1, 0), (0, 1), (0, -1)]

    for dr, dc in dir:
        nr, nc = r + dr, c + dc
 
        if 0 <= nr < rs and 0 <= nc < cs and not v1[nr][nc]:
            dfs(nr, nc)

rs, cs = map(int, input().split())
v1 = [[False for _ in range(cs)] for _ in range(rs)]

for i in range(rs):
    r_data = input().split()
    for j in range(cs):
        v1[i][j] = int(r_data[j])

count = 0

for i in range(rs):
    for j in range(cs):
        
        if not v1[i][j]:
            
            dfs(i, j)
            count += 1
print(count)
