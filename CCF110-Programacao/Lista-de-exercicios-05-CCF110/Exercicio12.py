termoA = float(input("Digite o termo 1 :"))
termoB = float(input("Digite o termo 2: "))
n = int(input("Digite quantos termos da série:"))

print(termoA)
print(termoB)

for i in range(n-2):
    termoc=termoA+termoB
    print(termoc)
    termoA = termoB
    termoB = termoc