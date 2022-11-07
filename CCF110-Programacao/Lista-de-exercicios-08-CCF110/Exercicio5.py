from typing import NamedTuple

class aviao (NamedTuple):
    nvoo:str
    tipo:str
    preco:float
    lugares:int

aviao.nvoo=[0 for i in range(10)]
aviao.tipo=[0 for i in range(10)]
aviao.preco=[0 for i in range(10)]
aviao.lugares=[0 for i in range(10)]

for i in range(5):
    aviao.nvoo[i]=input("Num voo")
    aviao.tipo[i] = input("tipo")
    aviao.preco[i] = input("preco")
    aviao.lugares[i] = input("lugares")
for i in range(5):
    print(aviao.nvoo[i],aviao.tipo[i],aviao.preco[i],aviao.lugares[i])
