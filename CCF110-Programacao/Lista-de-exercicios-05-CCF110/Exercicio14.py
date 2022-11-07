termoA = float(input("Digite o termo 1 :"))
termoB = float(input("Digite o termo 2: "))
n = int(input("Digite quantos termos da série:"))

print(termoA)
print(termoB)

for i in range(n-2):
    termos = termoA + termoB
    if(termos%2==0):
        termoc=termoA-termoB
        print(termoc)
        termoA = termoB
        termoB = termoc
    else:
        termoc = termoA + termoB
        print(termoc)
        termoA = termoB
        termoB = termoc