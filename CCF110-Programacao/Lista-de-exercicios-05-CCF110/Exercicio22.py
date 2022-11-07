x = int(input("Digite um número: "))
i=0
if(100<x<200):
    i+=1
while x>0:
    y = int(input("Digite um número: "))
    x+=y
    if(100<y<200):
        i+=1
    if(y==0)or(y<0):
        print(i,"números entre 100 e 200")
        break