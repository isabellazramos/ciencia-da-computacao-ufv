vetor = [0 for x in range(10)]
inverso = [0  for a in range(10)]
b=9
for i in range(10):
    vetor[i]=float(input(""))
for i in range(10):
    inverso[i]=vetor[b]
    b-=1
print(vetor)
print(inverso)