def isMultiply(k):
    i = 2
    while k % i != 0 and i < k: i += 1
    if k % i == 0: return i
    return 0
def print_factorization(n: int) -> None:
    if n == 1:
        print('--')
        return
    result = []
    i = 2
    while (n % i != 0 and i <= n): i += 1
    result.append(i)
    result.append(n//i)
    k = result[-1]
    while isMultiply(k):
        k = result.pop()
        m = isMultiply(k)
        result.append(m)
        result.append(k//m)
        k = result[-1]
    was = [1]
    res = ''
    for i in result:
        count = result.count(i)
        if i not in was and count > 1:
            res += f"*{i}^{count}"
            was.append(i)
        elif count == 1 and i not in was: res += f'*{i}'
    res = res[1::]
    print(res)
    
n = int(input("введите n: "))
print_factorization(n)