from typing import NamedTuple

class cadastro (NamedTuple):
    nome:str
    endereco:str
    salario:float
    identidade:str
    cpf:str
    estado_civil:str
    telefone:int
    idade:int
    sexo:str
class endereco (NamedTuple):
    rua:str
    bairro:str
    cidade:str
    estado:str
    cep:str
cadastro.nome=[0 for i in range(5)]
cadastro.salario=[0 for i in range(5)]
cadastro.identidade=[0 for i in range(5)]
cadastro.cpf=[0 for i in range(5)]
cadastro.estado_civil=[0 for i in range(5)]
cadastro.telefone=[0 for i in range(5)]
cadastro.idade=[0 for i in range(5)]
cadastro.sexo=[0 for i in range(5)]
for i in range(5):
    cadastro.nome[i]=input()
for i in range(5):
    print(cadastro.nome[i])
