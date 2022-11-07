vetor = [0 for a in range(15)]
vetor2 = [0 for a in range(15)]
for i in range(15):
    vetor[i]=float(input("Digite um número: "))
for i in range(15):
    if vetor[i]>=0:
        vetor2[i]=vetor[i]**(1/2)
    else:
        vetor2[i]=-1
print(vetor)
print(vetor2)