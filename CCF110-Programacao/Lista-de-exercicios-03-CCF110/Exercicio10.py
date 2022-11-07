alturaf = 0
alturam = 0
alturat = 0
mediageral = 0
mediam = 0
mediaf = 0
maioraltura = 0
menoraltura = 10

for x in range(50):

    codigo=int(input("Digite o código 1 para masculino e 2 para feminino"))
    altura=float(input("Digite a altura"))

    if(codigo==1):
        mediageral+=1
        mediam+=1
        alturam+=altura
        alturat+=altura
    if(codigo==2):
        mediageral+=1
        mediaf+=1
        alturaf+=altura
        alturat+=altura
    if altura>0:
        if(altura>maioraltura):
            maioraltura=altura
        if(altura<menoraltura):
            menoraltura=altura

print("A maior altura é ",maioraltura,"\nA menor altura é",menoraltura)
print("A media das alturas é",alturat/mediageral)
print("A media das alturas femininas é",alturaf/mediaf)