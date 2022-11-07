idade=input("digite sua idade em anos, meses e em dias").split(" ")
anos=int(idade[0])*360
meses=int(idade[1])*30
dias=int(idade[2])
idadetotal=anos+meses+dias
print("Sua idade em dias é",idadetotal)