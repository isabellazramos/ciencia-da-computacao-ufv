n = int(input("Digite a quantidade de produtos que irá comprar:"))

nomePRODUTO = [0 for x in range(n)]
precoPRODUTO = [0 for x in range(n)]
precoTOTAL=0

for i in range(n):
    nomePRODUTO[i]=str(input("Digite o nome do produto: "))
    precoPRODUTO[i]=float(input("Digite o preço do produto, em dolar"))
    precoTOTAL+=precoPRODUTO[i]
for j in range(n):
    print(nomePRODUTO[j],"|",precoPRODUTO[j])
print("USD =",precoTOTAL,"$")
print("R$ =",precoTOTAL*3.50)