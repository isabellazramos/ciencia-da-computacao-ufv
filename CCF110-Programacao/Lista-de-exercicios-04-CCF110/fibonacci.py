n = int(input("Digite qual numero da sequencia que vc quer:"))

a1=1
a2=1
if(n==1):
    print(a1)
elif(n==2):
    print(a1)
    print(a2)
else:
    print(a1)
    print(a2)
    for i in range(n-2):
        atual=a1+a2
        a1=a2
        a2=atual
        print(atual)
