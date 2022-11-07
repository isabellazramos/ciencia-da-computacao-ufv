soma=0
produto=0
numero = int(input("Digite um número:"))
if(numero%2==0):
    soma+=numero
else:
    produto=numero
while numero!=0:
    numero1 = int(input("Digite um número:"))
    if(numero1%2==0):
        soma+=numero1
    if(numero1%2!=0):
        produto=numero1
    if (numero1 == 0) or (numero1 < 0):
        print("soma:", soma)
        print("produto:", produto)
        break