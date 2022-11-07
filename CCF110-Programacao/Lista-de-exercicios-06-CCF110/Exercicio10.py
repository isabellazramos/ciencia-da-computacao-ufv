n = int(input("Informe o tamanho do vetor"))
vetor = [0 for a in range(n)]
somapar=0
for i in range(n):
    vetor[i]=int(input("Digite um valor: "))
    if(vetor[i]%2==0):
        somapar+=vetor[i]
print(somapar)