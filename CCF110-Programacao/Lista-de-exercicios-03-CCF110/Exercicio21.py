listaa=[]
listab=[]
aluno=input("Digite seu nome, e suas respectivas notas, de 1 a 5: ").split(" ")
totalalunos=int(input("Digite o total de alunos da turma: "))
for x in range(totalalunos):
    if(int(aluno[1])<=7)and(int(aluno[2])<=7)and(int(aluno[3])<=7) and (int(aluno[4])<=7)and (int(aluno[5])<=7):
        listaa.append(aluno)
        print("ALunos aprovados:",listaa)
