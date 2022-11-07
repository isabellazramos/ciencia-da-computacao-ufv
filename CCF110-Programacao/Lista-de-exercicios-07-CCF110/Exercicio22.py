vetor = [[0 for y in range(3)] for x in range(3)]
vetor2 =[[0 for y in range(3)] for x in range(3)]
for x in range(3):
    for y in range(3):
        vetor[x][y]= int(input())
i = 2
for y in range(3):
    j = 2
    for x in range(3):
        vetor2[y][x]=vetor[i][j]
        j-=1
    i-=1
print(vetor)
print(vetor2)