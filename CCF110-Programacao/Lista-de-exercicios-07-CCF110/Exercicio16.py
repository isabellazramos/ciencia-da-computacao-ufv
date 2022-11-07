flores = [[0 for y in range(3)]for x in range(4)]

for x in range(4):
    for y in range(1):
        flores[x][0]=str(input("Nome da flor:"))
        flores[x][1]=int(input("Estoque ideal:"))
        flores[x][2]=int(input("Quantidade em estoque:"))

for x in range(4):
    for y in range(1):
        if(flores[x][2]<flores[x][1]):
            print(flores[x][0], "precisa ser comprada ",flores[x][1]-flores[x][2],"unidades.")