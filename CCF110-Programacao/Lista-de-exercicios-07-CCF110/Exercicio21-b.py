n=3
vetor = [[0 for y in range(n)] for x in range(n)]
aux=0
c=1
for i in range(n):
    for j in range(n):
        vetor[i][j]=c
        c+=1

for i in range(n):
    for j in range(n):
        if n-1 ==j:
            aux=vetor[i][j-(n-1)]
            vetor[i][j-(n-1)]=vetor[i][j]
            vetor[i][j]=aux


for i in range(n-1):
    for j in range(n-1):
            aux=vetor[i][j]
            vetor[i][j]=vetor[n-1-j][n-1-i]
            vetor[n-1-j][n-1-i]=aux


print (vetor)