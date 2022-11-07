vetor = [0 for x in range(30)]
produto = [0 for x in range(30)]
a=int(input("Digite uma variavel a"))
for i in range (30):
    vetor[i]=int(input("Digite valores para o vetor"))
for i in range(30):
    produto[i] = vetor[i]*a
for i in range(30):
    if (produto[i] % 2 == 0):
        print(produto[i],"- par")
    else:
        print(produto[i],"- impar")
