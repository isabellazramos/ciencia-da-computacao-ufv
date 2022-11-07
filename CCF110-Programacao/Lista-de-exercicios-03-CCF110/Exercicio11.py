tentativas=int(input("Digite o número de tentativas"))
for i in range(tentativas):
    numero=int(input("Digite um número"))
    quadrado=pow(numero,2)
    print(quadrado)
    if(numero%6==0):
        break