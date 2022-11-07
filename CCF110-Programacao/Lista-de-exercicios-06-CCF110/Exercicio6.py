vetor = [0 for x in range(10)]
for i in range(10):
    vetor[i] = int(input("Digite um número: "))
n = int(input("Digite um valor n"))
for i in range(10):
    if(vetor[i]<n):
        print(vetor[i])

