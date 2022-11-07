vetorA=[0 for a in range(30)]
vetorB=[0 for b in range(30)]
posi=0
for i in range(30):
    print("Vetor A")
    vetorA[i]=int(input())
for i in range(30):
    print("Vetor B")
    vetorB[i]=int(input())
x=int(input("Digite valor de x"))
print("Numeros de A que é igual a X:")
for i in range(30):
    if vetorA[i]==x:
        print(i)
        print("Elemento de B na mesma posição",vetorB[i])