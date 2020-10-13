from math import sqrt
sposob = int(input('выберите способ 1 - через длинны сторон, 2 - через координаты вершин A, B, C >> '))
S = 0
if sposob == 1:
    a = float(input('a: '))
    b = float(input('b: '))
    c = float(input('c: '))
    if a > 0 and b > 0 and c > 0 and (c<a+b) and (a<b+c) and (b<c+a):
        p = (a+b+c)/2
        S = (p*(p-a)*(p-b)*(p-c))**(1/2)
    else:
        print('не коректные данные')



elif sposob == 2:
    A = input('A: ').split()
    B = input('B: ').split()
    C = input('C: ').split()
    Ax, Ay = float(A[0]), float(A[1])
    Bx, By = float(B[0]), float(B[1])
    Cx, Cy = float(C[0]), float(C[1])
    del A,B,C
    ABk = [Bx-Ax, By-Ay]
    ACk = [Cx-Ax, Cy-Ay]
    CBk = [Bx-Cx, By-Ay]
    a = sqrt(ABk[0]**2+ABk[1]**2)
    b = sqrt(ACk[0]**2+ACk[1]**2)
    c = sqrt(CBk[0]**2+CBk[1]**2)
    if a > 0 and b > 0 and c > 0 and (c<a+b and a<b+c and b<c+a):
        p = (a+b+c)/2
        S = sqrt(p*(p-a)*(p-b)*(p-c))
if S > 0:
    print(f'S = {S}')
else:
    print('не коректные данные')
