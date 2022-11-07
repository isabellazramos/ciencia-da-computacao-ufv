import math

x = float(input("Digite um número: "))

if (x >= 0):
    raiz = math.sqrt(x)
    print(raiz)
else:
    potencia = x ** 2
    print(potencia)
