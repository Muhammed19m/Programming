budget = int(input('Бюджет: '))
count_drink = int(input('Количество напитка: '))
choice = [0, 0, 0]
all_drink = []
one = True
x = 0


def F(x):
    if choice[1] != 0:
        print(choice[0], int(budget / choice[1]))
        print(int(budget / choice[1]) * choice[2])
        print(budget % choice[1])
        x += 1
    elif x == 0:
        print(-1)
    return x

for _ in range(count_drink):
    all_drink.append(input())


while budget > 0:
    for i in range(count_drink):
        name_drink, price, v = all_drink[i].split()
        price = int(price)
        v = int(v)
        if budget >= price :
            if one or (int(budget/choice[1])*choice[2]) < (int(budget/price)*v):
                choice[0] = name_drink
                choice[1] = price
                choice[2] = v
                one = False
    one = True
    x = F(x)
    if choice[1] != 0:
        budget = int(budget%choice[1])
    else: budget = 0
    choice = [0, 0, 0]

