from typing import NamedTuple

class Ficha (NamedTuple):
   nome :str
   salario:float
   cpf:list
   idade:int
   sexo:str

Ficha.nome=input()

print(Ficha.nome)