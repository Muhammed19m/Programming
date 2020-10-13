x = float(input())
s = int(input())
c = x
s -= 1
if s == 0:
    print(1)
else:    
    while s != 0:
        x = x*c
        s -= 1
print(x)