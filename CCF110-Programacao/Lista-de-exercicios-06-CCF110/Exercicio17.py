vetor1 =[1 for a in range(21)]
vetor2=[0 for b in range(10)]
k=0
for i in range(1,21):
    vetor1[i]=i
for j in range(1,21):

    if j%2!=0:
        vetor2[k]=pow(j,2)
        k+=1
print(vetor2)