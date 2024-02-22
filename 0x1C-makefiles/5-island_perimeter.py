#!/usr/bin/python3

def island_perimeter(grid):

    grid_with = len(grid[0])
    grid_height = len(grid)
    perimeter = 0
    size = 0

    for i in grid_height:
        for j in in grind_width:
            if [i] [j] == 1:
                size +=1
                if (j > 0 and grid[i][j - 1] == 1):
                    perimeter += 1
                if (i > 0 and grid[i-1][j] == 1):
                    perimeter += 1
    return size * 4 - perimeter * 2

