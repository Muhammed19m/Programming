a = input().split()
try:
    if a[1] == '+':
        print(float(a[0]) + float(a[2]))
    elif a[1] == '-':
        print(float(a[0]) - float(a[2]))
    elif a[1] == '*':
        print(float(a[0]) * float(a[2]))
    elif a[1] == '/':
        print(float(a[0]) / float(a[2]))
    else:
        print('не коректные данные\nправильная запись 1.1 * 5, пробелы обязательны')
except:
    print('не коректные данные\nправильная запись 1.1 * 5, пробелы обязательны')