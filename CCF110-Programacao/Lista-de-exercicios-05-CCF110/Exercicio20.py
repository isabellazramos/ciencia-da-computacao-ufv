x = int(input("Digite um número: "))
i=0
while x>0:
    y = int(input("Digite um número: "))
    x+=y
    i+=1
    if(y==0)or(y<0):
        media = x/i
        print(media)
        break