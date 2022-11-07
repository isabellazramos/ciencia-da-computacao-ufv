n=int(input())
list=[]
listcont=[]

v=[0 for x in range(n)]
for i in range(n):
    v[i]=int(input())
cont=0
list.append(v[0])
for i in range(n):
    for j in range(i+1,n):
        if list[cont]!=v[j]:
            if v[i]==v[j]:
                list.append(v[i])
                cont+=1


for i in range(len(list)):
        cont=0
        for j in range(n):
            if (list[i]==v[j]):
                cont+=1

        if(cont != 1):
             print("o num", list[i], "repete:", cont)