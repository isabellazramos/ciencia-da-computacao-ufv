n=int(input("Digite o número de termos que gostaria de gerar:"))

termo=1
termo2=4
controle = 1
for i in range(n):
    if(controle==1):
        print(termo)
    elif(controle==2):
        print(termo2)
    elif(controle==3):
        print(termo2)
        controle = 0
        termo+=1
        termo2+=1
    controle+=1
