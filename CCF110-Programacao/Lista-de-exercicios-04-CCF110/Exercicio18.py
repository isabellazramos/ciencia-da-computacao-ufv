salario = float(input("Digite o seu salário: "))
prestação = float(input("Digite o valor da prestação"))

limite = (salario*0.3)

if(prestação>limite):
    print("O esmpréstimo não poderá ser concedido")
else:
    print("O empréstimo poderá ser concedido")