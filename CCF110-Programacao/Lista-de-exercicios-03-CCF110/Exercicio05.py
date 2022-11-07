idade=int(input("Digite sua idade em dias"))
anos=idade//360
meses1=idade%360
meses2=meses1//30
dias=meses1%30
print("Sua idade é ",anos,"anos",meses2,"meses",dias,"dias")