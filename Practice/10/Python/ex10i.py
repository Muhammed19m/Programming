s, l1, r1, l2, r2 = input().split()
s, l1, r1, l2, r2 = int(s), int(l1), int(r1), int(l2), int(r2)
x1 = l1
x2 = 0
def F():
    global x1
    if x1 + r2 < s:
        x2 = r2
        if s<=r1+x2:
            x1 = s -r2
        else:
            return -1
    else:
        if s>=l1+l2:
            x2=s-x1
        else:
            return -1
    return f"{x1} {x2}"
print(F())