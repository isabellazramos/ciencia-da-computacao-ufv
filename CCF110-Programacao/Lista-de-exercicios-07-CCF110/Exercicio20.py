vendas = [[0 for y in range(4)] for x in range(12)]
totalMES = [0 for i in range(12)]
totalANO=0

for x in range(12):
    print("Mês",x+1)
    for y in range(1):
        vendas[x][0]= int(input("Semana 1"))
        totalMES[x]+=vendas[x][0]
        vendas[x][1]= int(input("Semana 2"))
        totalMES[x] += vendas[x][1]
        vendas[x][2]= int(input("Semana 3"))
        totalMES[x] += vendas[x][2]
        vendas[x][3]= int(input("Semana 4"))
        totalMES[x] += vendas[x][3]
        totalANO+=totalMES[x]
for x in range(12):
    for y in range(1):
        print("\nMês",x+1,
              "\nSemana",y+1,vendas[y])
    print("Total vendido no mes:",x+1,

          "R$=",totalMES[x])
print("Total no ano: R$=",totalANO)