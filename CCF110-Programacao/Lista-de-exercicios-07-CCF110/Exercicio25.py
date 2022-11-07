n=2
matriz = [[0 for y in range(n)]for x in range(n)]
prodp=1
prods=1
for x in range(n):
    for y in range(n):
        matriz[x][y]=int(input())
for x in range(n):
    for y in range(n):
        if x==y:
            prodp*=matriz[x][y]
        if x+y==n-1:
            prods*=matriz[x][y]
print(prodp-prods)