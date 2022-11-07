notas = [0 for a in range(4)]
alunos = [0 for b in range(4)]

for i in range (4):



    alunos[i]=str(input("digite o nome do aluno: "))
    notas[i]=float(input("digite a nota do respectivo aluno"))
    alunomenor = alunos[0]
    alunomaior = alunos[0]
    maiornota = notas[0]
    menornota = notas[0]
    if maiornota<notas[i]:
        maiornota=notas[i]
        alunomaior=alunos[i]
    if menornota>notas[i]:
        menornota=notas[i]
        alunomenor=alunos[i]
print("O aluno de menor nota é",alunomenor,"-",menornota)
print("O aluno de maior nota é",alunomaior,"-",maiornota)