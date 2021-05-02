#!/usr/bin/python3
""" Defines an island perimeter. """
def island_perimeter(grid):
    """ Returns the perimeter of island """
    land = 0
    water = 0

    if grid is None:
        return 0
    for row in range(len(grid)):
        for column in range(len(grid[0])):
            if grid[row][column] == 1:
                land += 1
                if (column > 0 and grid[row][column - 1] == 1):
                    water += 1
                if (row > 0 and grid[row - 1][column] == 1):
                    water += 1
    return land * 4 - water * 2
