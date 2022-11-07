numeros = int(input("Digite números negativos para a soma"))
somatoria=numeros
while numeros<0:
    numeros1 = int(input("Digite números negativos para a soma"))
    if(numeros1==0) or (numeros1>0):
        break
    if(numeros1<0):
        somatoria+=numeros1

print(somatoria)