def complementoDeDois(valor):
    if valor < 0:     #responsavel por tirar o sinal negativo o valor, caso haja
        valor *= -1

    numero = format(valor, 'b') #converte o valor para binario

    val = [int(i) for i in numero] #gera um vetor e preenche cada posicao com a variavel NUMERO

    binInvertido = [1] * (16 - len(val)) #declara um vetor com a quandidade de 1's que serao necessarios para completar os 16 bits

    for i in range(0, len(val)): #completa bitInvertido com o inverso de val
        if val[i] == 1:
            binInvertido.append(0)
        else:
            binInvertido.append(1)

    for i in range(0, len(binInvertido)): #soma + 1
        if binInvertido[len(binInvertido) - i - 1] == 0:
            binInvertido[len(binInvertido) - i - 1] = 1
            break

        binInvertido[len(binInvertido) - i - 1] = 0

    return ''.join(map(str, binInvertido))

class listTest(): # tad que implementa uma lista
    def __init__(self, lista):
        self.lista = lista

    def any(self, comparador): # retorna 1 caso algum elemento da lista seja o passado na comparação
        for i in self.lista:
            if i == comparador:
                return 1
        return 0

#leitura do arquivo ASM com as entradas
print('Insira o nome do arquivo de entrada (com a extensao do arquivo): ')
arq = open(input(), 'r')
cont = 0
arquivo = arq.readlines()

#criação do arquivo de escrita - isso garante q ele se inicie vazio sempre
arquivo_escrita = open('saida.txt', 'w')
arquivo_escrita.close()


#FOR PEGANDO LINHA POR LINHA
for line in arquivo:
    #TRATAMENTO
    #entrada = line.split(" ")
    entrada = line.replace("\n", "")  # substitui o \n por um espaço
    entrada = entrada.replace(",", "")  #retira a(virgula)
    entrada = entrada.split(" ") # muda o vetor string de caracter por um vetor palavra

    saida = [0] * 6

#entrada em SLL | SRL 
    if(entrada[0] == ('sll')) or (entrada[0] == ('srl')):

        saida[0] = 0
        saida[1] = 0
        if entrada[0] == ('sll'):
            saida[5] = 0
        elif entrada[0] == ('srl'):
            saida[5] = 2
        saida[4] = int(entrada[3])

        # posição três|quatro da entrada
        # $s posição 1
        if ((entrada[1]) == '$s0'):
            saida[3] = 16
        elif ((entrada[1]) == '$s1'):
            saida[3] = 17
        elif ((entrada[1]) == '$s2'):
            saida[3] = 18
        elif ((entrada[1]) == '$s3'):
            saida[3] = 19
        elif ((entrada[1]) == '$s4'):
            saida[3] = 20
        elif ((entrada[1]) == '$s5'):
            saida[3] = 21
        elif ((entrada[1]) == '$s6'):
            saida[3] = 22
        elif ((entrada[1]) == '$s7'):
            saida[3] = 23

        # $s posição 2
        if ((entrada[2]) == '$s0'):
            saida[2] = 16
        elif ((entrada[2]) == '$s1'):
            saida[2] = 17
        elif ((entrada[2]) == '$s2'):
            saida[2] = 18
        elif ((entrada[2]) == '$s3'):
            saida[2] = 19
        elif ((entrada[2]) == '$s4'):
            saida[2] = 20
        elif ((entrada[2]) == '$s5'):
            saida[2] = 21
        elif ((entrada[2]) == '$s6'):
            saida[2] = 22
        elif ((entrada[2]) == '$s7'):
            saida[2] = 23

        # $t posicao 1
        if ((entrada[1]) == '$t0'):
            saida[3] = 8
        elif ((entrada[1]) == '$t1'):
            saida[3] = 9
        elif ((entrada[1]) == '$t2'):
            saida[3] = 10
        elif ((entrada[1]) == '$t3'):
            saida[3] = 11
        elif ((entrada[1]) == '$t4'):
            saida[3] = 12
        elif ((entrada[1]) == '$t5'):
            saida[3] = 13
        elif ((entrada[1]) == '$t6'):
            saida[3] = 14
        elif ((entrada[1]) == '$t7'):
            saida[3] = 15

        # $t posicao 2
        if ((entrada[2]) == '$t0'):
            saida[2] = 8
        elif ((entrada[2]) == '$t1'):
            saida[2] = 9
        elif ((entrada[2]) == '$t2'):
            saida[2] = 10
        elif ((entrada[2]) == '$t3'):
            saida[2] = 11
        elif ((entrada[2]) == '$t4'):
            saida[2] = 12
        elif ((entrada[2]) == '$t5'):
            saida[2] = 13
        elif ((entrada[2]) == '$t6'):
            saida[2] = 14
        elif ((entrada[2]) == '$t7'):
            saida[2] = 15

#entrada em add | sub | and | or | nor | move |
    if ((entrada[0] == "add") or (entrada[0]== "sub") or (entrada[0]=="and") or (entrada[0]=="or") or (entrada[0]=="nor") or (entrada[0] == "move")):
       
        #definindo o funct
        if(entrada[0] == "add" or entrada[0] == "move"):
            saida[5] = 32 #32 decimal
        elif (entrada[0] == "sub"):
            saida[5] = 34 #34 decimal
        elif(entrada[0] == "and"):
            saida[5] = 36 #36 decimal
        elif(entrada[0] == "or"):
            saida[5] = 37 #37 decimal
        elif(entrada[0] == "nor"):
            saida[5] = 39 #39 decimal

        saida[0] = 0

        # posição dos registradores $s
        # rd = $s, posição 1, registrador de destino
        if (entrada[1] == '$s0'):
            saida[3] = 16
        elif (entrada[1] == '$s1'):
            saida[3] = 17
        elif ((entrada[1]) == '$s2'):
            saida[3] = 18
        elif ((entrada[1]) == '$s3'):
            saida[3] = 19
        elif ((entrada[1]) == '$s4'):
            saida[3] = 20
        elif ((entrada[1]) == '$s5'):
            saida[3] = 21
        elif ((entrada[1]) == '$s6'):
            saida[3] = 22
        elif ((entrada[1]) == '$s7'):
            saida[3] = 23

        # rs, $s, posição 2, registrador operando 1
        if ((entrada[2]) == '$s0'):
            saida[1] = 16
        elif ((entrada[2]) == '$s1'):
            saida[1] = 17
        elif ((entrada[2]) == '$s2'):
            saida[1] = 18
        elif ((entrada[2]) == '$s3'):
            saida[1] = 19
        elif ((entrada[2]) == '$s4'):
            saida[1] = 20
        elif ((entrada[2]) == '$s5'):
            saida[1] = 21
        elif ((entrada[2]) == '$s6'):
            saida[1] = 22
        elif ((entrada[2]) == '$s7'):
            saida[1] = 23

        # rt, $s,  posição 3, registrador operando 2
        if entrada[0] == "move": #define o terceiro registrador para 0
            saida[2] = 0
        else:
            if entrada[3] == '$s0':
                saida[2] = 16
            elif entrada[3] == '$s1':
                saida[2] = 17
            elif ((entrada[3]) == '$s2'):
                saida[2] = 18
            elif ((entrada[3]) == '$s3'):
                saida[2] = 19
            elif ((entrada[3]) == '$s4'):
                saida[2] = 20
            elif ((entrada[3]) == '$s5'):
                saida[2] = 21
            elif ((entrada[3]) == '$s6'):
                saida[2] = 22
            elif ((entrada[3]) == '$s7'):
                saida[2] = 23
        
        # posição dos registradores $t
        # rd, $t posicao 1, registrador destino
        if ((entrada[1]) == '$t0'):
            saida[3] = 8
        elif ((entrada[1]) == '$t1'):
            saida[3] = 9
        elif ((entrada[1]) == '$t2'):
            saida[3] = 10
        elif ((entrada[1]) == '$t3'):
            saida[3] = 11
        elif ((entrada[1]) == '$t4'):
            saida[3] = 12
        elif ((entrada[1]) == '$t5'):
            saida[3] = 13
        elif ((entrada[1]) == '$t6'):
            saida[3] = 14
        elif ((entrada[1]) == '$t7'):
            saida[3] = 15

        # rs, $t, posicao 2, resgistrador operando 1
        if ((entrada[2]) == '$t0'):
            saida[1] = 8
        elif ((entrada[2]) == '$t1'):
            saida[1] = 9
        elif ((entrada[2]) == '$t2'):
            saida[1] = 10
        elif ((entrada[2]) == '$t3'):
            saida[1] = 11
        elif ((entrada[2]) == '$t4'):
            saida[1] = 12
        elif ((entrada[2]) == '$t5'):
            saida[1] = 13
        elif ((entrada[2]) == '$t6'):
            saida[1] = 14
        elif ((entrada[2]) == '$t7'):
            saida[1] = 15

        # rt, $t posicao 3, registrador operando 2
        if entrada[0] != "move":
            if ((entrada[3]) == '$t0'):
                saida[2] = 8
            elif ((entrada[3]) == '$t1'):
                saida[2] = 9
            elif ((entrada[3]) == '$t2'):
                saida[2] = 10
            elif ((entrada[3]) == '$t3'):
                saida[2] = 11
            elif ((entrada[3]) == '$t4'):
                saida[2] = 12
            elif ((entrada[3]) == '$t5'):
                saida[2] = 13
            elif ((entrada[3]) == '$t6'):
                saida[2] = 14
            elif ((entrada[3]) == '$t7'):
                saida[2] = 15

        
#entrada em  addi, andi, ori, subi
    if ((entrada[0] == 'addi') or (entrada[0] == 'andi') or (entrada[0] == 'ori') or (entrada[0] == 'subi')):

        #definindo o op_code
        if(entrada[0] == "addi" or entrada[0] == "subi"):
            saida[0] = 8   #001000
        elif (entrada[0] == "andi"):
            saida[0] = 12  #001100
        elif(entrada[0] == "ori"):
            saida[0] = 13  #001101

        saida[3] = int(entrada[3]) #definindo o valor do endereço
        if entrada[0] == "subi":
            saida[3] *= -1 #inverte o valor da saida para ser utilizado no addi

        # posição dois|três da entrada do addi
        # $s posição 1
        if ((entrada[1]) == '$s0'):
            saida[2] = 16
        elif ((entrada[1]) == '$s1'):
            saida[2] = 17
        elif ((entrada[1]) == '$s2'):
            saida[2] = 18
        elif ((entrada[1]) == '$s3'):
            saida[2] = 19
        elif ((entrada[1]) == '$s4'):
            saida[2] = 20
        elif ((entrada[1]) == '$s5'):
            saida[2] = 21
        elif ((entrada[1]) == '$s6'):
            saida[2] = 22
        elif ((entrada[1]) == '$s7'):
            saida[2] = 23

        # $s posição 2
        if ((entrada[2]) == '$s0'):
            saida[1] = 16
        elif ((entrada[2]) == '$s1'):
            saida[1] = 17
        elif ((entrada[2]) == '$s2'):
            saida[1] = 18
        elif ((entrada[2]) == '$s3'):
            saida[1] = 19
        elif ((entrada[2]) == '$s4'):
            saida[1] = 20
        elif ((entrada[2]) == '$s5'):
            saida[1] = 21
        elif ((entrada[2]) == '$s6'):
            saida[1] = 22
        elif ((entrada[2]) == '$s7'):
            saida[1] = 23

        # $t posicao 1
        if ((entrada[1]) == '$t0'):
            saida[2] = 8
        elif ((entrada[1]) == '$t1'):
            saida[2] = 9
        elif ((entrada[1]) == '$t2'):
            saida[2] = 10
        elif ((entrada[1]) == '$t3'):
            saida[2] = 11
        elif ((entrada[1]) == '$t4'):
            saida[2] = 12
        elif ((entrada[1]) == '$t5'):
            saida[2] = 13
        elif ((entrada[1]) == '$t6'):
            saida[2] = 14
        elif ((entrada[1]) == '$t7'):
            saida[2] = 15

        # $t posicao 2
        if ((entrada[2]) == '$t0'):
            saida[1] = 8
        elif ((entrada[2]) == '$t1'):
            saida[1] = 9
        elif ((entrada[2]) == '$t2'):
            saida[1] = 10
        elif ((entrada[2]) == '$t3'):
            saida[1] = 11
        elif ((entrada[2]) == '$t4'):
            saida[1] = 12
        elif ((entrada[2]) == '$t5'):
            saida[1] = 13
        elif ((entrada[2]) == '$t6'):
            saida[1] = 14
        elif ((entrada[2]) == '$t7'):
            saida[1] = 15


    saidaBin = ""
    saidaHex = ""
    saidaDec = ""

    instrucoesR = listTest(['add', 'sub', 'and', 'or', 'nor', 'sll', 'srl', 'move']) #comparo se entrada[1] é igual a algum elemento da lista
    instrucoesI = listTest(['addi', 'ori', 'andi', 'subi'])

    if instrucoesR.any(entrada[0]):
        saidaBin += "{0:06b}".format(saida[0])
        saidaBin += "{0:05b}".format(saida[1])
        saidaBin += "{0:05b}".format(saida[2])
        saidaBin += "{0:05b}".format(saida[3])
        saidaBin += "{0:05b}".format(saida[4])
        saidaBin += "{0:06b}".format(saida[5])

        saidaHex += "{0:0x}".format(saida[0])
        saidaHex += "{0:0x}".format(saida[1])
        saidaHex += "{0:0x}".format(saida[2])
        saidaHex += "{0:0x}".format(saida[3])
        saidaHex += "{0:0x}".format(saida[4])
        saidaHex += "{0:0x}".format(saida[5])

    elif instrucoesI.any(entrada[0]):
        saidaBin += "{0:06b}".format(saida[0])
        saidaBin += "{0:05b}".format(saida[1])
        saidaBin += "{0:05b}".format(saida[2])

        saidaHex += "{0:0x}".format(saida[0])
        saidaHex += "{0:0x}".format(saida[1])
        saidaHex += "{0:0x}".format(saida[2])

        if saida[3] >= 0:
            saidaBin += "{0:016b}".format(saida[3])
            saidaHex += "{0:0x}".format(saida[3])
        else:
            saidaBin += complementoDeDois(saida[3])
            saidaHex += "{0:0x}".format(saida[3])

    saidaDec = ''.join(map(str, saida))

    print(entrada)
    print(saidaBin)
    print(saida)

#escrita no arquivo TXT sem sobrescrever
    arquivo_escrita = open('saida.txt', 'r') # Abre o arquivo (leitura)
    conteudo = arquivo_escrita.readlines()
    conteudo.append("    Binario: " + saidaBin + "\n")   # insere a saida em binario
    conteudo.append("    Decimal: " + saidaDec + "\n")   # insere a saida em decimal
    conteudo.append("Hexadecimal: " + saidaHex + "\n\n")   # insere a saida em hexadecimal
    arquivo_escrita = open('saida.txt', 'w') # Abre novamente o arquivo (escrita)
    arquivo_escrita.writelines(conteudo)    # escreve o conteúdo criado anteriormente nele.
    arquivo_escrita.close()

arq.close()