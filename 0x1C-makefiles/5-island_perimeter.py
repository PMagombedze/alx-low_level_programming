#!/usr/bin/python3
"""function for island perimeter"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    hgt = len(grid)
    edg = 0
    s = 0
    wth = len(grid[0])

    for n in range(hgt):
        for m in range(wth):
            if grid[n][m] == 1:
                s = s + 1
                if (m > 0 and grid[n][m - 1] == 1):
                    edg += 1
                if (n > 0 and grid[n - 1][m] == 1):
                    edg += 1
    r = s * 4 - (edg * 2)
    return r
