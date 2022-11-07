qtdCAIXASDESCARREGADAS = int(input("Digite a quantidade de caixas"))
pesoCAIXAS = [0 for x in range(qtdCAIXASDESCARREGADAS)]
precounitarioCAIXAS = [0 for x in range(qtdCAIXASDESCARREGADAS)]
valormonetarioINFORMADO=0
valormonetarioCONTADO=0
pesoCARGA=0
for i in range(qtdCAIXASDESCARREGADAS):
    pesoCAIXAS[i]=float(input("Digite o peso da caixa:"))
    precounitarioCAIXAS[i]=float(input("Digite o preço unitario da caixa:"))
    valormonetarioCONTADO+=precounitarioCAIXAS[i]
    pesoCARGA+=pesoCAIXAS[i]

valormonetarioINFORMADO=float(input("Digite o valor monetario total das cargas:"))

if(valormonetarioINFORMADO==valormonetarioCONTADO):
    for i in range(qtdCAIXASDESCARREGADAS):
        print("Caixa",i,"|",pesoCAIXAS[i],"kg | R$",precounitarioCAIXAS[i])
    print("R$",valormonetarioCONTADO)

if(valormonetarioCONTADO!=valormonetarioINFORMADO)and(valormonetarioINFORMADO>valormonetarioCONTADO):

    for i in range(qtdCAIXASDESCARREGADAS):
        print("Caixa",i,"|",pesoCAIXAS[i],"kg | R$",precounitarioCAIXAS[i])
    print("R$",valormonetarioCONTADO)
    print("Há a diferença de R$", valormonetarioINFORMADO - valormonetarioCONTADO, "do dinheiro contado")

if (valormonetarioCONTADO != valormonetarioINFORMADO) and (valormonetarioINFORMADO < valormonetarioCONTADO):

    for i in range(qtdCAIXASDESCARREGADAS):
        print("Caixa",i,"|",pesoCAIXAS[i],"kg | R$", precounitarioCAIXAS[i])
    print("Valor total R$", valormonetarioCONTADO)
    print("Há a diferença de RS", valormonetarioCONTADO - valormonetarioINFORMADO, "do dinheiro contado")
