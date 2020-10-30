red_d = 0
black_d = 0
red = []
black = []
all_rb = [0]*37
n = 0
x = 1
while ( x > 0 and x <= 36 ):
    x = int(input())
    if x <= 0: break
    if x in [1,3,5,7,9,12,14,16,18,19,21,23,25,27,30,32,34,36]:
        red_d += 1
    else: black_d += 1
    all_rb[x] += 1
    for i in range(37):
        if n < all_rb[i]:
            n = all_rb[i]
    for i in range(37):
        if all_rb[i] == n:
            print(i, end=' ')
       # else: continue
    print(sep='')
    for i in range(37):
        if (all_rb[i] == 0):
            print(i, end=" ")
    print(end='\n')
    print(red_d, black_d)
    print(end='\n')