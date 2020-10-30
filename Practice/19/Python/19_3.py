n = int(input('длина пароля: '))  # ввод длинны пароля
k = input('символы пароля: ')       # символы пароля
lk = len(k)
k = list(k)
lis = [i for i in range(len(k)**n)]
num_el = [str(i) for i in range(lk)]
result = []
les = len(lis)
i = 0

while i < les:
    el_lis = lis[i]
    res = ''
    while el_lis != 0:
        res += str(el_lis % lk)
        el_lis //= lk
    res = res[::-1]
    lr = len(res)
    if lr != n:
        res = f"{'0'*(n-lr)}{res}"
    dk = res

    r = 1
    for j in num_el:
        if j in dk:
            r *= 1
        else:
            r *= 0


    if r == 1:
        res = ''
        for j in dk:
            res += k[int(j)]
        print(res, end=' ')
    i += 1
