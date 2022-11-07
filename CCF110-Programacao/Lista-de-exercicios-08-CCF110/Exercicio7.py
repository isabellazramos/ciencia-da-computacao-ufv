from typing import NamedTuple

#Eu fiz as duas alternativas no mesmo código, pura preguiça

class DadosPessoais (NamedTuple):
   nome :str
   telefone:str
   aniversario:str
   cidade:str
   estado:str

class FilmeEmCartaz (NamedTuple):
    titulo: str
    duracao: str
    sessoes:list

FilmeEmCartaz.sessoes = [0 for i in range(5)]
FilmeEmCartaz.sessoes[0]="10:00"
FilmeEmCartaz.sessoes[1]="13:30"
FilmeEmCartaz.sessoes[2]="15:40"
FilmeEmCartaz.sessoes[3]="18:00"
FilmeEmCartaz.sessoes[4]="21:30"

class MedicosDePlantao (NamedTuple):
    matricula:str
    nome:str
    horainicial:str
    horafinal:str
    especialidade:str

MedicosDePlantao.matricula=[0 for i in range(3)]
MedicosDePlantao.nome=[0 for i in range(3)]
MedicosDePlantao.horainicial=[0 for i in range(3)]
MedicosDePlantao.horafinal=[0 for i in range(3)]
MedicosDePlantao.especialidade=[0 for i in range(3)]

for i in range(3):
    MedicosDePlantao.matricula[i]=input()
    MedicosDePlantao.nome[i]=input()
    MedicosDePlantao.horainicial[i]=input()
    MedicosDePlantao.horafinal[i]=input()
    MedicosDePlantao.especialidade[i]=input()

for i in range(3):
    print(MedicosDePlantao.matricula[i],
    MedicosDePlantao.nome[i],
    MedicosDePlantao.horainicial[i],
    MedicosDePlantao.horafinal[i],
    MedicosDePlantao.especialidade[i])
