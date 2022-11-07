deposito = float(input("Digite o valor do depósito: "))
juros = int(input("Digite o valor do juros: "))

rendimento = (juros/100)*deposito
rendimentototal = (1+(juros/100))*deposito

print("O rendimento é de R$",rendimento)
print("O rendimento total é de R$",rendimentototal)
