somatorio=0
vetor=[0 for x in range(100)]
j=0
i=99-j
for a in range(100):
    vetor[a]=int(input())
while i>=0 and j<100:
    somatorio+=((vetor[j]-vetor[i])**3)
    j+=1
print(somatorio)