n = int(input())
f = n - 1
while f != 0:
    n *= f
    f -= 1
print(n)