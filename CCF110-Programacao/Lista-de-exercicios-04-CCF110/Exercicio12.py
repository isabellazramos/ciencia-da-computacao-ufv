horas = input("Digite as horas, e os minutos, separados por um espaço").split(" ")
hora = int(horas[0])
minutos = int(horas[1])
totalminutos = (hora*60)+minutos

print("Desde as 00:00, se passaram",totalminutos,"minuto(s)")