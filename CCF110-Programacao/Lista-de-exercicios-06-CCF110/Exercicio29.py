m=int(input("m="))
if m<=30:
    a=[0 for x in range(m)]
    for i in range(m):
        a[i]=int(input())

n=int(input("n="))
if n<=20:
    b=[0 for y in range(n)]
    for i in range(n):
        b[i]=int(input())

c = [0 for i in range(n+m)]
j=0
for i in range(m):
    c[i]=a[i]
for i in range(m,m+n):
    c[i]=b[j]
    j+=1
print(a)
print(b)
print(c)