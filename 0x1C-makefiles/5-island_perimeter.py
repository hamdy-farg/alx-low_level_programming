#!/usr/bin/python3
def island_perimeter(grid):
    hight = 0
    width = 0
    len1 = len(grid)
    for i in range(len1):
        len2 = len(grid[i])
        for j in range(len2):
            if grid[i][j] == 1:
                if (grid[i][j] != grid[i][j - 1]
                and grid[i][j] != grid[i][j + 1]):
                    hight += 1
                else:
                    width += 1
    return (((width + 1) * 2) + (hight * 2))
