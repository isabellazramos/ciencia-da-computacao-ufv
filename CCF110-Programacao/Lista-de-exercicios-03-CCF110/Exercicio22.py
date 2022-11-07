ant1=1
ant2=1
print(ant1)
print(ant2)
for i in range(18):
    atual=ant1+ant2
    print(atual)
    ant2=ant1
    ant1=atual