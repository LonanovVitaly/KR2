def f(n):
	return lambda x: x + n

print("Введите 2 числа")
a = int(input())
b = int(input())
c = f(a)
print(c(b))