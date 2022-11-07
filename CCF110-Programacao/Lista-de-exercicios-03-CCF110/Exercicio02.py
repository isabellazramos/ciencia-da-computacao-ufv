numero=int(input("Digite um número"))

if(numero%10==0):
    print("Divisível por 10")
if(numero%5==0):
    print("Divisivel por 5")
if(numero%2==0):
    print("Divisivel por 2")
if(numero%5!=0)and(numero%10!=0)and(numero%2!=0):
    print("Não é divisivel nem por 10, nem por 5, nem por 2")