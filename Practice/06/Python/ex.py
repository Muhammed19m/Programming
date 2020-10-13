import math
a = float(input('a: '))
b = float(input('b: '))
c = float(input('c: '))

if a != 0 and b != 0 and c!=0:
    D = b*b-4*a*c 
    if D > 0:
        x1 = (-b + math.sqrt(D))/(2*a)
        x2 = (-b - math.sqrt(D))/(2*a)
        print(f'x1 = {x1}\nx2 = {x2}')
    elif D == 0:
        x = (-b)/(2*a)
        print('x = ', x)
    else: 
        print('действительного корня нету')
elif a != 0 and b == 0:
    if (-c/a)>=0:
    	x = (-c/a)**(1/2)
    	print(f'x1 = {x}\nx2 = -{x}')
elif a == 0 and b != 0:
    x = -c/b
    print('x = ', x)
else:
    print('действительного корня нету')
