n = int(input("n: "))
a = list(map(int, input("a: ").split()))
arr = []
for i in range(len(a)):
    if len(arr) != 5:
        arr.append(a[i])
    if len(arr) == 5:
        for j in range(len(arr)):
            if a[i] < arr[j]:
                arr[j] = a[i]
                break
    arr.sort()
    arr = arr[::-1]
    print(' '.join(map(str, arr)))