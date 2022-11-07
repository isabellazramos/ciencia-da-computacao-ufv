vetor = [0 for x in range(20)]
inverso = [0 for y in range(20)]
i=20
j=0
for i in range(20):
    vetor[i]= int(input("Digite um número: "))
print(vetor)
while i>=0 and j<=20:
    inverso[j]=vetor[i]
    i-=1
    j+=1
print(inverso)