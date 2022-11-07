a = float(input("Digite um valor 'a'"))
b = float(input("Digite um valor 'b'"))
c = float(input("Digite um valor 'c'"))

if(a>b>c):
    print(a,b,c)
if(b>a>c):
    print(b,a,c)
if(b>c>a):
    print(b,c,a)
if(c>a>b):
    print(c,a,b)
if(c>b>a):
    print(c,b,a)
if(a>c>b):
    print(a,c,b)
if(a==b)and(b>c):
    print(b,a,c)
if(a==b)and(b<c):
    print(c,b,a)
if(a==b)and(b==c):
    print(a,b,c)
if(a==c)and(c>b):
    print(a,c,b)
if(a==c)and(c<b):
    print(b,c,a)
if(c==b)and(b<a):
    print(a,b,c)
if(c==b)and(b>a):
    print(c,b,a)
