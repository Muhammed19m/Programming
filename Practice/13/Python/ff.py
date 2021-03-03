n = int(input())

def F(k: int):
    for i in range(2, int(k**(1/2))+2):
        if k%i == 0:
            return False
    return True

if F(n) or (n in [2,3,5,7]):
    print('простое')
else:
    print('составное')
