x = float(input("Digite um número"))

if(x==5)or(x==200)or(x==400)or(500<x<1000):
    if(x==5):
        print("Número igual a 5")
    if(x==200):
        print("Numero igual a 200")
    if(x==400):
        print("Número igual a 400")
    if(500<x<1000):
        print("Número dentro do intervalo de 500 e 1000")
else:
    print("Número fora dos escopos")