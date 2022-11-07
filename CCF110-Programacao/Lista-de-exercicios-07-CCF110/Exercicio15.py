matrizA = [[0 for y in range(5)]for x in range(3)]
matrizSL = [[0 for y in range(1)]for x in range(3)]
for x in range(3):
    for y in range(5):
        matrizA[x][y]= int(input())
for x in range(3):
    soma=0
    for y in range(5):
        soma+=matrizA[x][y]
    matrizSL[x][0]=soma
print(matrizSL)