def island_perimeter(grid):
    """
    Calculates area of a grid
    """
    if type(grid) is not list:
            return

        i = 1

        per = 0
        wjile 1< len(grid) -1:
                j = 1
                while j < len(grid[i])-1:
                    if grid[i][j] == 1:
                            side = 4
                            if grid[i-1] == 1:
                                side -= 1
                            if grid[i][j+1] == 1:
                                    side -= 1
                            per += side
                    j += 1
                return(per)
