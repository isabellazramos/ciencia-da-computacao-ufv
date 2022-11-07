valorhora = float(input("Digite o valor hora de cada aula: "))
numaulas = int(input("Digite o número de aulas dadas no mês"))
descontoINSS = int(input("Digite o valor da porcentagem de desconto do INSS"))

desconto = descontoINSS / 100

salario = (valorhora * numaulas) * desconto
salario2 = valorhora*numaulas-salario
print("O Salario líquido do professor é R$ ", salario2)
