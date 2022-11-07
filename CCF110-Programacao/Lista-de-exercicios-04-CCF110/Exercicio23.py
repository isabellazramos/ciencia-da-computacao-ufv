altura = float(input("Digite sua altura"))
peso = float(input("Digite seu peso"))

imc = peso/(altura**2)

if(imc<20):
    print("Abaixo do peso")
if(20<=imc<25):
    print("Peso normal")
if(25<=imc<30):
    print("Sobre peso")
if(30<=imc<40):
    print("Obeso")
if(40<=imc):
    print("Obeso mórbido")