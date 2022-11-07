notas=[0 for x in range(80)]
zero_abs = 0
um_abs = 0
dois_abs=0
tres_abs=0
quatro_abs=0
cinco_abs=0
seis_abs=0
sete_abs=0
oito_abs=0
nove_abs=0
dez_abs=0
frequencia_absoluta=0
frequencia_relativa=0
for i in range(80):
    notas[i] = int(input("Digite uma nota de 0 a 10:"))
    if notas[i]==0:
        zero_abs+=1
    elif notas[i]==1:
        um_abs+=1
    elif notas[i]==2:
        dois_abs+=1
    elif notas[i]==3:
        tres_abs+=1
    elif notas[i]==4:
        quatro_abs+=1
    elif notas[i]==5:
        cinco_abs+=1
    elif notas[i]==6:
        seis_abs+=1
    elif notas[i]==7:
        sete_abs+=1
    elif notas[i]==8:
        oito_abs+=1
    elif notas[i]==9:
        nove_abs+=1
    elif notas[i]==10:
        dez_abs+=1
for i in range(80):
    print(  "Nota    | Frequencia absoluta | Frequencia relativa"
            "1       |",um_abs,(um_abs/80),
            "1       |"
            "1       |"
            "1       |"
            "1       |"
            "1       |"
            "1       |"
            "1       |"
            "1       |"
    "1       |")