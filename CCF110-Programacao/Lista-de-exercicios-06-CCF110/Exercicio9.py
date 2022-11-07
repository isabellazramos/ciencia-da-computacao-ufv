vetorA = [0 for a in range(5)]
vetorB = [0 for b in range(5)]
vetorC = [0 for c in range(5)]

for i in range(5):
    vetorA[i]=float(input("Digite um número p/A"))
    vetorB[i]=float(input("Digite um valor p/B"))
    vetorC[i]=vetorA[i]+vetorB[i]
print(vetorA)
print(vetorB)
print(vetorC)