tgasto= float(input("Digite o tempo gasto na viagem, em horas: "))
vmedia= float(input("Digite a velocidade média durante a viagem, em km/h: "))
distancia=tgasto*vmedia
lgasto=distancia/12
print("A distância percorrida é de ", distancia, "quilômetros")
print("A quantidade de litros  utilizados na viagem é",lgasto,"L")