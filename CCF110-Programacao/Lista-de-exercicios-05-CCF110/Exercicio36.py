contribuicao = input("Digite o número de cpf, numero de dependentes e renda anual").split(" ")
cpf=int(contribuicao[0])
numdependentes = int(contribuicao[1])
rendaanual=float(contribuicao[2])

rendaliquida=rendaanual-numdependentes*int(300)

if(rendaliquida)<12000:
    print("Isento.")
if(12000<=rendaliquida<=25000):
    print("Alíquota de 12%, R$",rendaliquida*0.12)
if(rendaliquida>25000):
    print("Alíquota de 27.5%, R$",rendaliquida*0.275)