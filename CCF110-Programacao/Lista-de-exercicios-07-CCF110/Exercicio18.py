alunos =[[0 for y in range(4)] for x in range(3)]

for x in range(3):
    for y in range(1):
        alunos[x][0]=int(input("Matrícula:"))
        alunos[x][1]=int(input("Sexo: (0 feminino | 1 masculino)"))
        alunos[x][2]=str(input("Código do curso:"))
        alunos[x][3]=int(input("CR:"))

maiorCR=alunos[0][3]
posi=0
for x in range(3):
    for y in range(1):
        if(alunos[x][3]>maiorCR):
            maiorCR=alunos[x][3]
            posi=x

print("Aluno com maior CR\n",
      alunos[posi][2],
      "\n CR=",maiorCR)