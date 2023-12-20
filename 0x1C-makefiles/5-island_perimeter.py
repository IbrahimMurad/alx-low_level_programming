#!/usr/bin/python3
""" This module defines island_perimeter function """


def island_perimeter(grid):
    """ returns the perimeter of the island described in grid
    """

    x_i = 0
    x_f = 0
    grid_length = len(grid)
    for row in grid:
        try:
            if x_i == 0:
                x_i = row.index(1)
                x_f = x_i + 1
            if row.index(1) < x_i:
                x_i = row.index(1)
        except ValueError:
            grid_length -= 1
    for row in grid:
        f_index = 0
        row.reverse()
        try:
            if f_index == 0:
                f_index = row.index(1)
            if row.index(1) < f_index:
                f_index = row.index(1)
        except ValueError:
            continue
        if len(row) - f_index > x_f:
            x_f = len(row) - f_index
    return 2 * ((x_f - x_i) + grid_length)