primeiraNOTA = float(input("Digite a nota do primeiro bimestre: "))
segundaNOTA = float(input("Digite a segunda nota do bimestre: "))
terceiraNOTA = float(input("Digite a terceira nota do bimestre: "))

mediaNOTA = (primeiraNOTA+segundaNOTA+terceiraNOTA)/3

if(mediaNOTA<3):
    print("Reprovado.")
elif(mediaNOTA>=7):
    print("Aprovado.")
else:
    print("Exame.")