vetor = [[0 for y in range(4)] for x in range(3)]
vetor2 = [[0 for y in range(4)] for x in range(3)]

for x in range(3):
    for y in range(4):
        vetor[x][y]=int(input())
        vetor2[x][y]=3*(vetor[x][y])
print(vetor2)