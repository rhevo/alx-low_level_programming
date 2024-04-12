#!/usr/bin/python3

""" Island perimeter measuring function """

def island_perimeter(grid):
    """ Computes the perimeter of an island 

    The grid represents water by 0 and land by  1.

    Args:
        grid(list): Alist of intergers representing an island.

    Returns:
        The perimeter of the island.
        """
        width = len(grid[0])
        height = len(grid)
        edges = 0
        size = 0

        for e in range(height):
            for f in range(width):
                if grid[e][f] == 1:
                    size += 1

                    if (f > 0 and grid[e][f -1] == 1):

                        edges += 1
                    if (e > 0 and grid[e -1][f] == 1):

                        edges += 1
        return size * 4 - edges * 2
