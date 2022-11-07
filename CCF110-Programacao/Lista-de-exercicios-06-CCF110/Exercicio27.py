empregados=[]
meses=[]
n=1
maior=0
segundomaior=0
terceiromaior=0
j=0
while n!=0:
    empregado=str(input("Digite o nome do empregado:"))
    empregados.append(empregado)
    mese=int(input("Digite os meses trabalhados"))
    if empregados[j]=="0":
        break
    j+=1

maior=empregados[0]
segundomaior=empregados[0]
terceiromaior=empregados[0]
for i in range(j):
    if meses[i]<maior:
        terceiromaior=segundomaior
        segundomaior=maior
        maior=empregados[i]

print(maior)
print(segundomaior)
print(terceiromaior)