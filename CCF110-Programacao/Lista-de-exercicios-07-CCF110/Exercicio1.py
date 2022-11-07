vetor =[[0 for x in range(3)] for y in range(3)]

for x in range(3):
    for y in range(3):
        vetor[x][y]=int(input())
for x in range(3):
    for y in range(3):
        if x==y:
            print(vetor[x][y])