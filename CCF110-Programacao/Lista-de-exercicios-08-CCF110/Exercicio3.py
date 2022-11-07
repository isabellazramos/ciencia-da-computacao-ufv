from typing import NamedTuple
nota=[0 for i in range(4)]
class Ficha (NamedTuple):
   nome :str
   turma:str
   nota:list

Ficha.nota=[0 for i in range(4)]
Ficha.nota[0]=8.5
Ficha.nota[1]=7
Ficha.nota[2]=9.0
Ficha.nota[3]=8.5
Ficha.nome="Ana Lúcia"
Ficha.turma="A01"
print(Ficha.nome,
      Ficha.turma)
print(Ficha.nota)

