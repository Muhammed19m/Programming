import random
import math
def sort(ls, up_down):
    len_ls = len(ls)
    if up_down:
        for i in range(len_ls-1):
            if (ls[i] > ls[i+1]):
                return False
    else:
        for i in range(len_ls-1):
            if (ls[i] < ls[i+1]):
                return False
    return True

def bozosort(ls, up_down = True):
    result_sort = ls.copy()
    if type(ls[0]) == list:
        result_sort = []
        for i in ls:
            result_sort += i
    len_ls = len(result_sort)
    while not(sort(result_sort, up_down)):
        e1 = random.randrange(len_ls)
        e2 = random.randrange(len_ls)
        result_sort[e1], result_sort[e2] = result_sort[e2], result_sort[e1]
    return result_sort
def bozosort3(e1, e2, e3, up_down = True):
    return bozosort([e1,e2,e3], up_down)

n = int(input('количество чисел требующий сортировки: '))
sqrt_n = n**(1/2)
array = list(map(int, input('Введите элементы массива: ').split()))
matrix = []
path = []
for element in array:
    path.append(element)
    if len(path) == sqrt_n:
        matrix.append(path)
        path = []
print(' '.join(map(str, bozosort(array))))
print(' '.join(map(str, bozosort(array, False))))
print(' '.join(map(str, bozosort(matrix))))
print(' '.join(map(str, bozosort(matrix, False))))
print(' '.join(map(str, bozosort3(array[0], array[1], array[2]))))
print(' '.join(map(str, bozosort3(array[0], array[1], array[2], False))))