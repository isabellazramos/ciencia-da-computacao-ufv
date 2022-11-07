matrizA = [[0 for y in range(5)]for x in range(4)]
soma=0
print("Matriz A")
for x in range(4):
    for y in range(5):
        matrizA[x][y]= int(input())
        soma+=matrizA[x][y]
print(soma)