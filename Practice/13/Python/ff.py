n = int(input())
if (n%2!=0 and n%3!=0 and n%5!=0 and n%7!=0) or (n in [2, 3, 5, 7]):
    print('простое')
else:
    print('составное')
input()