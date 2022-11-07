nomePRODUTOvetor=[]
precoPRODUTOvetor=[]
precoTOTAL=0
finalizar=0
i=0
while finalizar!="S" or finalizar!="s":
    nomePRODUTO=str(input("Digite o nome do produto: "))
    nomePRODUTOvetor.append(nomePRODUTO)
    precoPRODUTO=float(input("Digite o preço do produto"))
    precoPRODUTOvetor.append(precoPRODUTO)
    precoTOTAL+=precoPRODUTO
    i+=1
    finalizar=str(input("Deseja finalizar a compra? S | N"))
    if finalizar=="S" or finalizar=="s":
        break
for i in range(i):
    print(nomePRODUTOvetor[i],"| $ =",precoPRODUTOvetor[i])
print("$ =",precoTOTAL)
print("RS =",precoTOTAL*3.50)