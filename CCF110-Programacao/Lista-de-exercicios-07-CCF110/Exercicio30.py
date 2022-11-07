c = int(input("linha da matriz A"))
d = int(input("coluna da matriz A"))
e = int(input("linha da matriz B"))
f = int(input("coluna da matriz B"))
if d == e:
    matrizG = [[0 for y in range(f)] for x in range(c)]
    matrizA = [[0 for y in range(d)] for x in range(c)]
    matrizB = [[0 for y in range(f)] for x in range(e)]
    print("Digite valores para a matriz a")
    for x in range(c):
        for y in range(d):
            matrizA[x][y]=int(input())
    print("Digite valores para a matriz b")
    for x in range(e):
        for y in range(f):
            matrizB[x][y]=int(input())
    for i in range(c):
        for j in range(f):
            for k in range(d):
                matrizG[i][j]+=matrizA[i][k]*matrizB[k][j]
    print(matrizG)