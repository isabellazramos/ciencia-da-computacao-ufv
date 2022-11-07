x = int(input("Digite um número: "))
i=1
if(x==-1):
    media=x/1
    print(media)
while x!=-1:
    y = int(input("Digite um número: "))
    if(y!=-1):
        x+=y
        i+=1
    if(y==-1):
        media = x/i
        print(media)
        break