vetor = [[0 for y in range(3)] for x in range(3)]
vetor2 =[[0 for y in range(3)] for x in range(3)]
aux=[0 for i in range(3)]
for x in range(3):
    for y in range(3):
        vetor[x][y]= int(input())
for y in range(3):
    for x in range(3):
        vetor2[y][x]=vetor[x][y]
for x in range(3):
    aux=vetor2[x][0]
    vetor2[x][0]=vetor2[x][2]
    vetor2[x][2]=aux
print(vetor)
print(vetor2)