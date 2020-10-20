n = int(input())  # ввод длинны пароля
k = input()       # символы пароля

k = list(k)
lis = [i for i in range(len(k)**n)]
lk = len(k)
num_el = [str(i) for i in range(lk)]


# Алгоритм перевода чисел с 10СС в len(k)СС
for i in range(len(lis)):
    el_lis = lis[i]
    res = ''
    while el_lis != 0:
        res += str(el_lis % lk)
        el_lis //= lk
    res = res[::-1]
    lr = len(res)
    if lr != n:
        res = f"{'0'*(n-lr)}{res}"
    lis[i] = res
# Конец Алгоритма перевода СС


# Выбираем подходящие элементы списка
result = []
for i in range(len(lis)):
    krik = 1
    for j in num_el:
        if j in lis[i]:
            krik *= 1
        else: krik *= 0
    if krik == 1:
        result.append(lis[i])
# конец

lis = []
for i in range(len(result)):
    res = ''
    for j in result[i]:
        res += k[int(j)]
    lis.append(res)

print(' '.join(lis))























































#пасхалка "Хыйнамана" аклахсап