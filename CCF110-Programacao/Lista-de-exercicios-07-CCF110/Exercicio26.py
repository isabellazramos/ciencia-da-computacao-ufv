n = int(input())

matriz=[[0 for y in range(2)]for x in range(n)]
matrizt=[[0 for y in range(n)] for x in range(2)]
for x in range(n):
    for y in range(2):
        matriz[x][y]=int(input())
for x in range(n):
    for y in range(2):
        matrizt[y][x]=matriz[x][y]
print(matrizt)