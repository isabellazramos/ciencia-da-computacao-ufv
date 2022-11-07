n = int(input())

matriz=[[0 for y in range(n)]for x in range(n)]
matrizt=[[0 for y in range(n)] for x in range(n)]
for x in range(n):
    for y in range(n):
        matriz[x][y]=int(input())
for x in range(n):
    for y in range(n):
        matrizt[y][x]=matriz[x][y]
for x in range(n):
    for y in range(n):
        if matrizt[x][y]==matriz[x][y]:
            a="Simétrica"
        else:
            a="Não simétrica"
print(a)