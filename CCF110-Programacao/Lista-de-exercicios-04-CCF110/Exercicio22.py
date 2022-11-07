import math

x = float(input("Digite um número: "))
y = float(input("Digite um número: "))

raiz=0
potencia=0

if(x>y):
    potencia=y**2
    raiz=math.sqrt(x)

    print("O menor número é",y,"e sua potencia é ",potencia)
    print("O maior número é",x,"e a sua raiz quadrada é",raiz)
if(y>x):
    potencia = x ** 2
    raiz = math.sqrt(y)

    print("O menor número é", x, "e sua potencia é ", potencia)
    print("O maior número é", y, "e a sua raiz quadrada é", raiz)
if(y==x)or(x==y):
    print("Os números são iguais")