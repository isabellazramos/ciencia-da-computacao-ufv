maioridade = 0
respA = 0
respB = 0
respC = 0
respD = 0
respE = 0
idadeD = 1
n = int(100)
maioridaderuim=-24
maioridadeotimo=0
for i in range(1,4):

    opiniao = input("Digite sua idade, e sua opinião em relaçaõ ao filme, separado por espaço").split(" ")
    idade=int(opiniao[0])
    nota=str(opiniao[1])

    if(nota=="A"):
        if (i == 1):
            maioridadeotimo = idade
        if(idade>maioridadeotimo):
            maioridadeotimo=idade
        respA += 1
    if(nota=="B"):
        respB+=1
    if(nota=="C"):
        respC+=1
    if(nota=="D"):
        respD+=1
        idadeD+=idade
        if (maioridaderuim == -24):
            maioridaderuim = idade
        if (idade > maioridade):
            maioridaderuim = idade
    if (nota=="E"):
        respE+=1
        maioridade=idade
        if(idade>maioridade):
            maioridade=idade

diferencaBOMREGULAR=(((respB*100)/n)-((respC*100)/n))
percentagemPESSRIMO=(respE*100)/n
mediaIDADERUIM = respD/idadeD
diferencaIDADEOTIMORUIM=maioridadeotimo-maioridaderuim
print(respA,"pessoas responderam que o filme é 'Ótimo'.")
print("A diferença percentual entre bom e regular é",diferencaBOMREGULAR)
print("A média das idades das pessoas que responderam 'Ruim' foi:",mediaIDADERUIM)
print("A percentagem de respostas de péssimo foi",percentagemPESSRIMO,"a maior idade que utilizoi essa opção foi",maioridade)
print("A diferença entre as maiores idades que responderam Otimo e Ruim foi:",diferencaIDADEOTIMORUIM)