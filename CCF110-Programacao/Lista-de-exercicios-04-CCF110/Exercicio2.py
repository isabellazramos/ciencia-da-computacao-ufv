q = float(input("Calculo de P.G.\nDigite a razão: "))
a1 = float(input("Digite o primeiro termo: "))
n = float(input("Qual termo da P.A. que gostaria de saber? "))

an=a1*q**(n-1)

print("O",n,"º termo da P.G. é",an)
