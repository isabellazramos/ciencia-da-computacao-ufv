n=int(input("Digite número de tentativas"))
mediapar=0
mediaimpar=0
par=0
impar=0
par2=[]
impar2=[]
for x in range(n):
    numero = int(input("Digite um número:"))
    if(numero%2==0): #numeropar
        mediapar=mediapar+1
        par+=numero
        par2.append(numero)
        list.sort(par2)
    else:
        mediaimpar=mediaimpar+1
        impar+=numero
        impar2.ap
        pend(numero)
        list.sort(impar2)
    if numero<0:
        break

print("Média dos números pares",par/mediapar)
print("Media dos impares",impar/mediaimpar)
print("Menor número impar",min(impar2))
print("Maior número par",max(par2))