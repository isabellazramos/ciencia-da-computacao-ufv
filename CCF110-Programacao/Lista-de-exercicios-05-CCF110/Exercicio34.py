import math
for i in range(10):
    numero = float(input("Digite um número"))
    if(numero<0):
        print("Valor não permitido.")
        break
    else:
        raiz=math.sqrt(numero)
        print(raiz)