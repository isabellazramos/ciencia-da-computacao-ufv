matrizA = [[0 for y in range(5)]for x in range(5)]
matrizB = [[0 for y in range(5)]for x in range(5)]
matrizC = [[0 for y in range(5)]for x in range(5)]
print("Matriz A")
for x in range(5):
    for y in range(5):
        matrizA[x][y]= int(input())
print("Matriz B")
for x in range(5):
    for y in range(5):
        matrizB[x][y]= int(input())
        matrizC[x][y]=matrizA[x][y]-matrizB[x][y]
for x in range(5):
    for y in range(5):
        print(matrizC[x][y], end=' ')
    print()