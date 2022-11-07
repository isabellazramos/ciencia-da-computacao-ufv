alturaATLETA=[0 for a in range(10)]
mediaATLETA=0

for i in range(10):
    alturaATLETA[i] = float(input("Digite uma altura:"))
    mediaATLETA+=alturaATLETA[i]
mediaATLETA=mediaATLETA/10
print(mediaATLETA)
for i in range(10):
    if(alturaATLETA[i]>mediaATLETA):
        print(alturaATLETA[i])