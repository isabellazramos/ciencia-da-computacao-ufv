matrizA = [[0 for y in range(4)]for x in range(4)]
matrizB = [[0 for y in range(4)]for x in range(4)]
matrizC = [[0 for y in range(4)]for x in range(4)]
print("Matriz A")
for x in range(4):
    for y in range(4):
        matrizA[x][y]= int(input())
print("Matriz B")
for x in range(4):
    for y in range(4):
        matrizB[x][y]= int(input())
        matrizC[x][y]=matrizA[x][y]+matrizB[x][y]
for x in range(4):
    for y in range(4):
        print(matrizC[x][y], end=' ')
    print()