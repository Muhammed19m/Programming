words = 'hallo, klempner, das, ist, fantastisch, fluggegecheimen'
ls = ''.join(words.split(', '))
x = list(input())
lls = len(ls)
lx = len(x)
c = 1
for i in range(lx):
    co = ls.count(x[i])
    if x[i] in ls:
        c *= (co/lls)
    else:
        print(0)
        break
    lx -= 1
if c!=1: print(c)
