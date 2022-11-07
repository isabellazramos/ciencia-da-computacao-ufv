n=int(input("digite a quantidade de números que serão lidos"))
a= float(input("digite um número: "))
for i in range(n-1):
    b = float(input("digite um número: "))
    if(a>b):
        maior=a
        menor=b
    if(b>a):
        maior=b
        menor=a

print(maior)