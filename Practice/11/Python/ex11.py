x = float(input())
s = int(input())
c = x
zank = s
if s == 0:
	print(-1)
else:
	s = abs(s)
	while s > 1:
		x = x*c
		s -= 1
	if zank > 0: print(x)
	else: print(1/x)