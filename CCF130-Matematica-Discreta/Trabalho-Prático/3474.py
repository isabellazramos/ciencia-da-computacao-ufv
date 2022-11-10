def fatorial(n):
    fat=1
    if((n==0)or(n==1)):
        return 1
    while n > 0:
        fat *= n
        n-=1
    return (fat)

timesQTD = input().split(",")
timesQTD = len(timesQTD)
gruposQTD = int(input())
timespgrupoQTD = int(input())
aux =0
combinacao=1

if((timespgrupoQTD*gruposQTD)>timesQTD):
    print("0")
else:
    while (aux<gruposQTD):
        if (aux<gruposQTD):
            combinacao *= (fatorial(timesQTD))/(fatorial(timespgrupoQTD)*fatorial(timesQTD-timespgrupoQTD))
            timesQTD = timesQTD -timespgrupoQTD
            aux +=1
        else:
            break
    c = fatorial(gruposQTD)*(combinacao)
    print("%.0f"%c)