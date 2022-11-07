a = int(input("Digite um número 'A':"))
b = int(input("Digite um número 'B':"))
resto=a//b
resto1=a
for i in range (resto):
    resto1-=b
print(resto1)