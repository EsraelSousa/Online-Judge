def fat(n):
	res = 1
	for i in range(1, n+1):
		res *= i;
	return res

while True:
	try:
		n, q = input().split()
		while len(n) == 0 and len(q) == 0:
			n, q = input().split()
		if n==0 and q==0:
			break
		t = input()
		while len(t) == 0:
			t = input()
		n = int(n)
		q = int(q)
		t = int(t)
		f = fat(n-(q-1))
		if f > t:
			print('descartado')
		else:
			print(f)
	except EOFError: 
		break