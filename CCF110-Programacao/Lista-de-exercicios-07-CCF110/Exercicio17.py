gerenciamentoSB=[[0 for y in range(4)]for x in range(5)]

for x in range(5):
    for y in range(1):
        gerenciamentoSB[x][0]=str(input("Nome da manicure:"))
        gerenciamentoSB[x][1]=int(input("Qtd de pés feitos:"))
        gerenciamentoSB[x][2]=int(input("Qtd de mãos feitas:"))
        gerenciamentoSB[x][3]=int(input("Serviço de podologias feitos:"))

for x in range(5):
    for y in range(1):
       print("\nManicure:",gerenciamentoSB[x][0],
             "\nPés feitos:",gerenciamentoSB[x][1],"R$ =",(gerenciamentoSB[x][1]*5),
             "\nMãos feitas:",gerenciamentoSB[x][2],"R$=",(gerenciamentoSB[x][2]*7.5),
             "\nSP feitos:",gerenciamentoSB[x][3],"R$=",(gerenciamentoSB[x][3]*15),
             "\nSalario R$=",((gerenciamentoSB[x][1]*5)+(gerenciamentoSB[x][2]*7.5)+(gerenciamentoSB[x][3]*15)))
