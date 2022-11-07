n = int(input("Digite o tamanho dos dois vetores"))
j = 0
k = 0
vetor1 = [0 for x in range(n)]
vetor2 = [0 for y in range(n)]
vetor3 = [0 for z in range((n*2))]

for i in range(n):
    vetor1[i]=float(input("1"))
for i in range(n):
    vetor2[i]=float(input("2"))

for i in range((n*2)):

    if(i%2==0)or(i==0):
        vetor3[i]=vetor1[j]
        j+=1
    if(i%2!=0):
        vetor3[i]=vetor2[k]
        k+=1
print(vetor1)
print(vetor2)
print(vetor3)