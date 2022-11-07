from typing import NamedTuple

class Ficha (NamedTuple):
   nome :str
   salario:float
   cpf:list
   idade:int
   sexo:str

ficha = Ficha(
    nome= "José da Silva",
    salario=850.00,
    cpf="531.987.001-41",
    idade = 32,
    sexo="M"
)

print(ficha)
print(ficha.salario)
print(ficha.cpf)
print(ficha.idade,ficha.sexo)