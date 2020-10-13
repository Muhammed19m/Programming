from random import randrange
print('{приветственное сообщение от игры}')
d = True
while (d) or (input("Хотите начать сначала? (1 - ДА ): ") == '1'):
    d = False
    n = randrange(101)
    z = 0
    count = 0
    a = True
    while a and count != 5:
            u = int(input())
            if u == n:
                print('Поздравляю вы угадали')
                a = False
                z = 1
            elif u > n:
                if not (count == 4):
                    print('Загаданное число меньше')
            elif u < n:
                if not (count == 4):
                    print('Загаданное число больше')
            count += 1
    if z == 0:
        print(f'Вы проиграли. Было заданно: {n}')
