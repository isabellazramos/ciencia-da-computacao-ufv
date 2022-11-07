n=38
m=n-1
soma=0
for divisor in range(1,38,1):
    soma1=n*m/divisor
    n-=1
    m-=1
    soma+=soma1
print(soma)