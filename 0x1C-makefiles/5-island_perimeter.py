#!/usr/bin/python3
""" adsgsdag """
def island_perimeter(grid):
    """dasgdsg """
    hight = 0
    width = 0
    len1 = len(grid)
    for i in range(len1):
        len2 = len(grid[i])
        for j in range(len2):
            if grid[i][j] == 1:
                g = grid[i][j]
                if (g != grid[i][j - 1] and g != grid[i][j + 1]):
                    hight += 1
                else:
                    width += 1
    return (((width + 1) * 2) + (hight * 2))
