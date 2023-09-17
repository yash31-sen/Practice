def is_valid(x, y, N, M):
    return 0 <= x < N and 0 <= y < M

def dfs(grid, x, y, N, M):
    if not is_valid(x, y, N, M) or grid[x][y] == 0:
        return

    grid[x][y] = 0

    # Explore neighboring cells
    directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]
    for dx, dy in directions:
        new_x, new_y = x + dx, y + dy
        dfs(grid, new_x, new_y, N, M)

def count_islands(N, M, grid):
    count = 0

    for i in range(N):
        for j in range(M):
            if grid[i][j] == 1:
                surrounded = True

                # Check if this island is surrounded by water
                directions = [(1, 0), (-1, 0), (0, 1), (0, -1)]
                for dx, dy in directions:
                    new_x, new_y = i + dx, j + dy
                    if not is_valid(new_x, new_y, N, M) or grid[new_x][new_y] == 0:
                        surrounded = False
                        break

                if surrounded:
                    count += 1
                    dfs(grid, i, j, N, M)

    return count

# Read input
N, M = map(int, input().split())
grid = []
for _ in range(N):
    row = list(map(int, input().split()))
    grid.append(row)

# Find and print the number of islands
result = count_islands(N, M, grid)
print(result)
