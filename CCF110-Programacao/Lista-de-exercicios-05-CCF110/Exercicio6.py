num = int(input("Digite um número: "))
for i in range(1,num+1):
    if(i%3==0)and(i%5==0):
        print(i)
        i+=1
    else:
        i+=1
