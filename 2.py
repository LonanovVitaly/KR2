def f1(x):
    return lambda: x**2

def f2(f1):
    return f1() * 2

print("Введите X")
x = int(input())
print(f2(f1(x)))