mercadorias=[1 for a in range(6)]
precovenda=[1 for b in range(6)]
qtdvenda=[1 for c in range(6)]
faturamento=0
for i in range(1,6):
    mercadorias[i]=i
    print(i)
    precovenda[i]=float(input("Preço do produto"))
    qtdvenda[i]=float(input("Qtd venda"))
    faturamento+=qtdvenda[i]
for i in range(1,6):
    print(mercadorias[i],"|",precovenda[i],"|",qtdvenda[i])
    print(faturamento)