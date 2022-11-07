for i in range(5):
    x = input("Insira dois números, separados por espaço: ").split(" ")
    a=int(x[0])
    b=int(x[1])
    if a<b and a%2!=0 and b%2!=0:
        print(list(range(a+1,b,2)))
    elif a<b and a%2==0 and b%2==0:
        print(list(range(a,b+1,2)))
    elif a<b and a%2==0 and b%2!=0:
        print(list(range(a,b,2)))
    elif a<b and a%2!=0 and b%2==0:
        print(list(range(a+1,b+1,2)))