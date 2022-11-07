saldomedio = float(input("Digite o valor do saldo médio: "))

if(0<=saldomedio<=500):
    print("Saldo médio: ",saldomedio)
    print("Valor de crédito: Nenhum crédito")

if(501<=saldomedio<=1000):
    print("Saldo médio: ",saldomedio)
    print("Valor de crédito: R$ ",saldomedio*0.3)

if(1001<=saldomedio<=3000):
    print("Saldo médio: ",saldomedio)
    print("Valor de crédito: R$",saldomedio*0.4)

if(saldomedio>=3001):
    print("Saldo médio: ", saldomedio)
    print("Valor de crédito: R$", saldomedio * 0.5)

