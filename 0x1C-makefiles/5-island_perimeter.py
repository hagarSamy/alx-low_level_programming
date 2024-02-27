#!/usr/bin/python3
''' a module to calculate the perimeter of an island '''

def island_perimeter(grid):
    ''' a function to return the perimeter of an island'''
    if not grid:
        return 0
    i = 0
    n = 0
    perimeter = 0
    for l in grid:
        for i in range(len(l)):
            if l[i] == 0:
                pass
            if l[i] == 1:
                perimeter = 4 + n
                n += 2
    return perimeter
