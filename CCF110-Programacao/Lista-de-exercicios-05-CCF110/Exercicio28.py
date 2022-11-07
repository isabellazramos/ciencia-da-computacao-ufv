velocidadeA=float(10)
velocidadeB=float(15)
distanciaA=float(0)
distanciaB=float(2000)
tempo=0

while distanciaA != distanciaB:
    distanciaA+=10
    distanciaB-=15
    tempo+=1

distanciaB = distanciaB - 2000
print(distanciaA)
print(distanciaB)
print(tempo)