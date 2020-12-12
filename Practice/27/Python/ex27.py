n = int(input("n: "))
a = list(map(int, input("a: ").split()))
arr = []
for i in a:
    if len(arr) != 5:
        arr.append(i)
    for j in range(len(arr)):
        if i < arr[j]:
            arr[j] = i
            break
    arr.sort()
    arr = arr[::-1]
    print(' '.join(map(str, arr)))