#placa=input("Digite o número da placa do carro, separado com espaços: ").split(" ")
#print(placa[2],placa[3])

placa=int(input("Digite o número da placa:"))
a=placa//1000#1234//1000=1
b=a*1000 #1*1000=1000
c=placa-b #1234-1000=234
d=c//100 #234//10=2
e=d*100 #200
f=c-e #234-200=34
dezena=f//10
print(dezena)