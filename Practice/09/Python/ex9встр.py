p1 = input().split(':')
p2 = input().split(':')
m1 = int(p1[0])*60+int(p1[1])
m2 = int(p2[0])*60+int(p2[1])
if m1 < 60:
    m1 = m1 + 24*60
if m2 < 60:
    m2 = m2 + 24*60
if abs(m1 - m2) <= 15:
    print('Встреча состоялось')
else:
    print('встреча не состоялось')