valorCOMPRA = float(input("Digite o valor da compra: "))

if(valorCOMPRA<10):
    print("Lucro de 70%")
if(10<=valorCOMPRA<30):
    print("Lucro de 50%")
if(30<=valorCOMPRA<50):
    print("Lucro de 40%")
if(valorCOMPRA>=50):
    print("Lucro de 30%")