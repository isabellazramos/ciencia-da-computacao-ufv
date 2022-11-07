numero = [0 for a in range(6)]
par = []
impar=[]
somapar=0
somaimpar=0
npar=0
nimpar=0
for i in range(6):
    numero[i]=int(input("Digite um número"))

for i in range(6):
    if(numero[i]%2==0):
        par.append(numero[i])
        somapar+=numero[i]
        npar+=1
    if(numero[i]%2!=0):
        impar.append(numero[i])
        somaimpar+=numero[i]
        nimpar+=1
somapar=somapar/npar
somaimpar=somaimpar/nimpar
print("Média par:",somapar)
print("Num par> somapar")
for i in range(6):
    if(numero[i]%2==0)and(numero[i]>somapar):
        print(numero[i])
print("Média impar:",somaimpar)
print("Num impar< somaimpar")
for i in range(6):
    if(numero[i]%2!=0)and(numero[i]<somaimpar):
        print(numero[i])