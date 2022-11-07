vetor = [0 for a in range(10)]
vetor2 = [0 for a in range(10)]
for i in range(10):
    vetor[i]=float(input("Digite um número: "))
for i in range(10):
    vetor2[i]=vetor[i]**2
print(vetor)
print(vetor2)