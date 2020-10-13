s, l1, r1, l2, r2 = input().split()
s, l1, r1, l2, r2 = int(s), int(l1), int(r1), int(l2), int(r2)
x1 = l1
x2 = s - x1
if ((x2 >= l2) and (x2 <= r2)):
    print(x1, x2)
else:
    x2 = l2
    x1 = s - x2
    if ((x1 >= l1) and (x1 <= r1)):
        print(x1, x2)
    else:
        x2 = r2
        x1 = s - r2
        if ((x1 >= l1) and (x1 <= r1)):
            print(x1, x2)
        else:
            print(-1)