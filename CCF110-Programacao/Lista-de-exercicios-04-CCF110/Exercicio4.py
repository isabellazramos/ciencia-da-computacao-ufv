q = float(input("Calculo de P.G.\nDigite a razão: "))
ak = float(input("Digite um termo 'ak': "))
n = float(input("Qual termo da P.A. que gostaria de saber? "))
k = float(input("Digite o valor de k"))

an = ak * q ** (n - k)

print("O", n, "º termo da P.A. é", an)
