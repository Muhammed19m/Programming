maze = [
    "####B######################",
    "# #           #      #    #",
    "# # # ###### #### ####### #",
    "# # # #       #   #       #",
    "#   # # ######### # ##### #",
    "# # # #   #       #     # #",
    "### ### ### ############# #",
    "# #   #     # #           #",
    "# # #   ####### ###########",
    "# # # #       # #         C",
    "# # ##### ### # # ####### #",
    "# # #     ### # #       # #",
    "#   ##### ### # ######### #",
    "######### ### #           #",
    "# ####### ### #############",
    "A           #   # #   #   #",
    "# ############# # # # # # #",
    "# ###       # # # # # # # #",
    "# ######### # # ### # # # F",
    "#       ### # #     # # # #",
    "# ######### # ##### # # # #",
    "# #######   #       #   # #",
    "# ####### ######### #######",
    "#         #########       #",
    "#######E############D######"
]
def F():
    t = 1
    for i in range(1, len(maze)-1):
        if ' ' in maze[i]:
            t *= 0
        else: t *= 1
    if t == 0: t = 1
    else: t = 0
    return t

def last(cord: list):
    ret = 0
    x, y = cord
    if maze[x][y + 1] == ' ':
        ret += 1
    if maze[x][y - 1] == ' ':
        ret += 1
    if maze[x + 1][y] == ' ':
        ret += 1
    if maze[x - 1][y] == ' ':
        ret += 1
    return ret

y,x = map(int, input('столбец строка: ').split())
cord = []
dl = 0
res = ''
if x>0 and x<len(maze[0]) and y>0 and y<len(maze):
    while F() and x>0 and x<=len(maze) and y>0 and y<(len(maze[0])):


        if maze[x][y + 1] == ' ':
            cord.append([x, y])

        if maze[x][y - 1] == ' ':
            cord.append([x, y])

        if maze[x + 1][y] == ' ':
            cord.append([x, y])

        if maze[x - 1][y] == ' ':
            cord.append([x, y])




        if maze[x][y + 1] == 'C' or maze[x][y + 1] == 'F':

            res += maze[x][y + 1] + ' '
            maze[x] = maze[x][:y+1] + '#'

        if maze[x][y - 1] == 'A':
            res += maze[x][y-1] + ' '
            maze[x] = '#' + maze[x][y:]
        if maze[x-1][y] == 'B':
            res += maze[x-1][y] + ' '
            maze[x-1] = maze[x-1][:y] + '#' + maze[x-1][y + 1:]
        if maze[x+1][y] == 'E' or maze[x+1][y] == 'D':
            res += maze[x+1][y] + ' '
            maze[x+1] = maze[x+1][:y] + '#' + maze[x+1][y + 1:]

        if maze[x][y + 1] == ' ':
            maze[x] = maze[x][:y] + '.' + maze[x][y + 1:]
            y = y + 1
            dl = 1

        elif maze[x][y - 1] == ' ':
            maze[x] = maze[x][:y] + '.' + maze[x][y + 1:]
            y = y - 1
            dl = 2

        elif maze[x + 1][y] == ' ':
            maze[x] = maze[x][:y] + '.' + maze[x][y + 1:]
            x = x + 1
            dl = 3

        elif maze[x - 1][y] == ' ':
            maze[x] = maze[x][:y] + '.' + maze[x][y + 1:]
            x = x - 1
            dl = 4
        else:
            if dl == 1: maze[x] = maze[x][:y] + '.' + maze[x][y+1:]
            if dl == 2: maze[x] = maze[x][:y] + '.' + maze[x][y+1:]
            if dl == 3: maze[x] = maze[x][:y] + '.' + maze[x][y + 1:]
            if dl == 4: maze[x] = maze[x][:y] + '.' + maze[x][y + 1:]

        if maze[x-1][y] != ' ' and maze[x+1][y] != ' ' and maze[x][y-1] != ' ' and maze[x][y+1] != ' ' and maze[x][y] != ' ':
            if cord != []:
                x, y = cord[0]
                if maze[x-1][y] != ' ' and maze[x+1][y] != ' ' and maze[x][y-1] != ' ' and maze[x][y+1] != ' ' and maze[x][y] != ' ':
                    del cord[0]


            else: break
    if res == '':
        print('выхода нет')
    else: print(res)
else: print('Не верные кординаты')












