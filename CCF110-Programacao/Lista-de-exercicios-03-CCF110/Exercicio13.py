divisor = 1
soma = 0
for dividendo in range(1,100,2):
    divisao = dividendo / divisor
    divisor += 1
    soma += divisao
print(soma)
