salariominimo = float(input("Insira o valor do salário mínimo"))
qtdkw = float(input("Insira a quantidade gasta de quilowatts"))

qtd1kw = salariominimo/700
qtdtotal = qtd1kw * qtdkw
qtdtotal2= qtdtotal-(qtdtotal*0.1)

print("O valor em reais de cada quilowatt é: ",qtd1kw)
print("o valor em reais a ser pago é: ",qtdtotal)
print("O valor a ser pago com 10% de desconto é:", qtdtotal2)
