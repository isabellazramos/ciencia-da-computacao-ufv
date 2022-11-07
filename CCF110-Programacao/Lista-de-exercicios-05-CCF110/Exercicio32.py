atleta = input("informe NOME,SEXO,IDADE,PESO,ALTURA").split(" ")
nome = str(atleta[0])
sexo = str(atleta[1])
idade = int(atleta[2])
peso = float(atleta[3])
altura = float(atleta[4])
pesoFMAIOIR = 0
alturaMAIOR = 0
i = 1
mediaidade=idade
if (sexo == "F"):
    alturaMAIOR = altura
if (sexo == "M"):
    pesoFMAIOIR = peso

while nome != "@":
    atleta1 = input("informe NOME,SEXO,IDADE,PESO,ALTURA").split(" ")
    nome1 = str(atleta1[0])
    sexo1 = str(atleta1[1])
    idade1 = int(atleta1[2])
    peso1 = float(atleta1[3])
    altura1 = float(atleta1[4])
    if (nome1 == "@"):
        print(pesoFMAIOIR)
        print(alturaMAIOR)
        print("Media das idades", mediaidade / i)
        break
    if (sexo1 == "F") and (peso1 > pesoFMAIOIR):
        pesoFMAIOIR = peso1
    if (altura1 > alturaMAIOR) and (sexo1 == "M"):
        alturaMAIOR = altura1

    mediaidade += idade1
    i += 1