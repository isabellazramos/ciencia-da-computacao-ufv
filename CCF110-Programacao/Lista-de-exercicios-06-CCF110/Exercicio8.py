id=[0 for a in range(2000)]
valor=[0 for b in range(2000)]
valortotal=0
i=0
j=0
while id[i]>=0:
    id[i]=int(input("Digite um ID"))
    if id[i]<0:
        break
    i+=1
    valor[j]=int(input("Digite um valor"))
    valortotal+=valor[j]
    j+=1
for i in range(i):
    print(id[i],valor[i])
print(valortotal)