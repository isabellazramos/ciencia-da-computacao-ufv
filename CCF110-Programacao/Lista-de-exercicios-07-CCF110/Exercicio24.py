matriz=[[0 for y in range(10)] for x in range(10)]
aux=[0 for i in range(10)]
aux2=[0 for i in range(10)]
for x in range(10):
    for y in range(10):
        matriz[x][y]=int(input())
for y in range(10):
        aux[y]=matriz[1][y]
        matriz[1][y]=matriz[7][y]
        matriz[7][y]=aux[y]
for y in range(10):
        aux[y]=matriz[3][y]
        matriz[3][y]=matriz[9][y]
        matriz[9][y]=aux[y]

for x in range(10):
    for y in range(10):
        if x==y:
            aux[x]=matriz[x][y]
        if x+y==9:
            aux2[x]=matriz[x][y]
for x in range(10):
    for y in range(10):
        if x==y:
            matriz[x][y]=aux2[x]
        if x+y==9:
            matriz[x][y]=aux[x]

for x in range(10):
    for y in range(10):
        print(matriz[x][y], end=' ')
    print()