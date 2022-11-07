import math
n=1
x = float(input("Digite o valor de x, em graus: "))

angulo = (x*3.14159265)/180

serie=angulo
for i in range(1,16):
    n += 2
    if(i%2!=0):
        serie-=(math.pow(angulo,n))/(math.factorial(n))

    if(i%2==0):
        serie+=(math.pow(angulo,n))/(math.factorial(n))

print(serie)