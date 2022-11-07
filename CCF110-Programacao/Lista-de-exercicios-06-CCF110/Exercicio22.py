temperatura = [0 for a in range(6)]
n=0
nmenorquemedia=0
somatemperatura=0
for i in range(6):
    temperatura[i] = float(input("Digite a temperatura:"))
    somatemperatura+=temperatura[i]
    n+=1
menortemperatura=temperatura[0]
maiortemperatura=temperatura[0]
somatemperatura=somatemperatura/n
for i in range(6):
    if (15<temperatura[i]<40):
        for i in range(6):
            if(temperatura[i]>maiortemperatura):
                maiortemperatura=temperatura[i]
                if (temperatura[i] < somatemperatura):
                    nmenorquemedia += 1
            if(temperatura[i]<menortemperatura):
                menortemperatura=temperatura[i]
                if (temperatura[i] < somatemperatura):
                    nmenorquemedia += 1

print("A menor temperatura foi",menortemperatura)
print("A maior temperatura foi",maiortemperatura)
print("Temperatura média:", somatemperatura)
print("Número de dias que a temperatura foi inferior a media",nmenorquemedia)