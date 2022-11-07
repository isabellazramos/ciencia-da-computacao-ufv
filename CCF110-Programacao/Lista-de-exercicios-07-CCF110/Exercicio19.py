atletas=[[0 for y in range(10)]for x in range(5)]
maior1=maior2=maior3=maior4=maior5=0

for x in range(5):
    print(x)
    for y in range(10):
        atletas[x][y]=float(input("Digite a altura:"))

maior1=atletas[0][0]
maior2=atletas[1][0]
maior3=atletas[2][0]
maior4=atletas[3][0]
maior5=atletas[4][0]

for y in range(10):
    if(atletas[0][y]>=maior1):
        maior1=atletas[0][y]
    if (atletas[1][y] >= maior2):
        maior2 = atletas[1][y]
    if (atletas[2][y] >= maior3):
        maior3 = atletas[2][y]
    if (atletas[3][y] >= maior4):
        maior4 = atletas[3][y]
    if (atletas[4][y] >= maior5):
        maior5 = atletas[4][y]

print("Maior altura delegação 1 ",maior1)
print("Maior altura delegação 2 ",maior2)
print("Maior altura delegação 3 ",maior3)
print("Maior altura delegação 4 ",maior4)
print("Maior altura delegação 5 ",maior5)
