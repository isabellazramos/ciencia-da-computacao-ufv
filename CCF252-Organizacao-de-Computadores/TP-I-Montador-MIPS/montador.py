class listTest(): # tad que implementa uma lista
    def __init__(self, lista):
        self.lista = lista

    def any(self, comparador): # retorna 1 caso algum elemento da lista seja o passado na comparação
        for i in self.lista:
            if i == comparador:
                return 1
        return 0

#limpando o arquivo de escrita
arquivoescrita = open('saida.txt', 'w')
arquivoescrita.close()

#lendo o arquivo de entrada
arquivoleitura = open("entrada.asm","r")
for linha in arquivoleitura:
    aux = linha
    aux= aux.split(" ",1) #divide a string no primeiro espaço
    entrada = [aux[0]] #pega a primeira parte da "divisão", ex: 'add', 'sub',...
    auxEntrada = aux[1].split(",") # divide q segunda parte do primeiro split pelas vírgulas
    for i in auxEntrada:
        entrada.append(i.strip()) #cocatena os parâmetros sem espaço na entrada
                                #strip tira todos os espaços, \0, \n

    #classificando tipos sll e srl
    if(entrada[0] == ('sll')) or (entrada[0] == ('srl')):
        saida = [0] * 6
        saida[0] = 0
        saida[1] = 0
        if entrada[0] == ('sll'):
            saida[5] = 0
        if entrada[0] == ('srl'):
            saida[5] = 2
        saida[4] = int(entrada[3])
        # posição três|quatro da entrada
        # $s posição 1
        if ((entrada[1]) == '$s0'):
            saida[3] = 16
        if ((entrada[1]) == '$s1'):
            saida[3] = 17
        if ((entrada[1]) == '$s2'):
            saida[3] = 18
        if ((entrada[1]) == '$s3'):
            saida[3] = 19
        if ((entrada[1]) == '$s4'):
            saida[3] = 20
        if ((entrada[1]) == '$s5'):
            saida[3] = 21
        if ((entrada[1]) == '$s6'):
            saida[3] = 22
        if ((entrada[1]) == '$s7'):
            saida[3] = 23

        # $s posição 2
        if ((entrada[2]) == '$s0'):
            saida[2] = 16
        if ((entrada[2]) == '$s1'):
            saida[2] = 17
        if ((entrada[2]) == '$s2'):
            saida[2] = 18
        if ((entrada[2]) == '$s3'):
            saida[2] = 19
        if ((entrada[2]) == '$s4'):
            saida[2] = 20
        if ((entrada[2]) == '$s5'):
            saida[2] = 21
        if ((entrada[2]) == '$s6'):
            saida[2] = 22
        if ((entrada[2]) == '$s7'):
            saida[2] = 23

        # $t posicao 1
        if ((entrada[1]) == '$t0'):
            saida[3] = 8
        if ((entrada[1]) == '$t1'):
            saida[3] = 9
        if ((entrada[1]) == '$t2'):
            saida[3] = 10
        if ((entrada[1]) == '$t3'):
            saida[3] = 11
        if ((entrada[1]) == '$t4'):
            saida[3] = 12
        if ((entrada[1]) == '$t5'):
            saida[3] = 13
        if ((entrada[1]) == '$t6'):
            saida[3] = 14
        if ((entrada[1]) == '$t7'):
            saida[3] = 15

        # $t posicao 2
        if ((entrada[2]) == '$t0'):
            saida[2] = 8
        if ((entrada[2]) == '$t1'):
            saida[2] = 9
        if ((entrada[2]) == '$t2'):
            saida[2] = 10
        if ((entrada[2]) == '$t3'):
            saida[2] = 11
        if ((entrada[2]) == '$t4'):
            saida[2] = 12
        if ((entrada[2]) == '$t5'):
            saida[2] = 13
        if ((entrada[2]) == '$t6'):
            saida[2] = 14
        if ((entrada[2]) == '$t7'):
            saida[2] = 15


    #posição 1 da entrada em add | sub | and | or | nor |
    if ((entrada[0] == 'add') or (entrada[0] == 'sub') or (entrada[0] == 'and') or (entrada[0] == 'or') or (entrada[0] == 'nor')):
        saida = [0] * 6
        saida[0] = 0
        saida[4] = 0

        #definindo o funct
        if(entrada[0] == 'add'):
            saida[5] = 32
        if (entrada[0] == 'sub'):
            saida[5] = 34
        if(entrada[0] == 'and'):
            saida[5] = 36
        if(entrada[0] == 'or'):
            saida[5] == 37
        if(entrada[0] == 'nor'):
            saida[5] == 39

        # posição dois|três|quatro da entrada
        # $s posição 1
        if (entrada[1] == '$s0'):
            saida[3] = 16
        if (entrada[1] == '$s1'):
            saida[3] = 17
        if ((entrada[1]) == '$s2'):
            saida[3] = 18
        if ((entrada[1]) == '$s3'):
            saida[3] = 19
        if ((entrada[1]) == '$s4'):
            saida[3] = 20
        if ((entrada[1]) == '$s5'):
            saida[3] = 21
        if ((entrada[1]) == '$s6'):
            saida[3] = 22
        if ((entrada[1]) == '$s7'):
            saida[3] = 23

        # $s posição 2
        if ((entrada[2]) == '$s0'):
            saida[1] = 16
        if ((entrada[2]) == '$s1'):
            saida[1] = 17
        if ((entrada[2]) == '$s2'):
            saida[1] = 18
        if ((entrada[2]) == '$s3'):
            saida[1] = 19
        if ((entrada[2]) == '$s4'):
            saida[1] = 20
        if ((entrada[2]) == '$s5'):
            saida[1] = 21
        if ((entrada[2]) == '$s6'):
            saida[1] = 22
        if ((entrada[2]) == '$s7'):
            saida[1] = 23

        # $s posição 3
        if ((entrada[3]) == '$s0'):
            saida[2] = 16
        if ((entrada[3]) == '$s1'):
            saida[2] = 17
        if ((entrada[3]) == '$s2'):
            saida[2] = 18
        if ((entrada[3]) == '$s3'):
            saida[2] = 19
        if ((entrada[3]) == '$s4'):
            saida[2] = 20
        if ((entrada[3]) == '$s5'):
            saida[2] = 21
        if ((entrada[3]) == '$s6'):
            saida[2] = 22
        if ((entrada[3]) == '$s7'):
            saida[2] = 23

        # $t posicao 1
        if ((entrada[1]) == '$t0'):
            saida[3] = 8
        if ((entrada[1]) == '$t1'):
            saida[3] = 9
        if ((entrada[1]) == '$t2'):
            saida[3] = 10
        if ((entrada[1]) == '$t3'):
            saida[3] = 11
        if ((entrada[1]) == '$t4'):
            saida[3] = 12
        if ((entrada[1]) == '$t5'):
            saida[3] = 13
        if ((entrada[1]) == '$t6'):
            saida[3] = 14
        if ((entrada[1]) == '$t7'):
            saida[3] = 15

        # $t posicao 2
        if ((entrada[2]) == '$t0'):
            saida[1] = 8
        if ((entrada[2]) == '$t1'):
            saida[1] = 9
        if ((entrada[2]) == '$t2'):
            saida[1] = 10
        if ((entrada[2]) == '$t3'):
            saida[1] = 11
        if ((entrada[2]) == '$t4'):
            saida[1] = 12
        if ((entrada[2]) == '$t5'):
            saida[1] = 13
        if ((entrada[2]) == '$t6'):
            saida[1] = 14
        if ((entrada[2]) == '$t7'):
            saida[1] = 15

        # $t posicao 3
        if ((entrada[3]) == '$t0'):
            saida[2] = 8
        if ((entrada[3]) == '$t1'):
            saida[2] = 9
        if ((entrada[3]) == '$t2'):
            saida[2] = 10
        if ((entrada[3]) == '$t3'):
            saida[2] = 11
        if ((entrada[3]) == '$t4'):
            saida[2] = 12
        if ((entrada[3]) == '$t5'):
            saida[2] = 13
        if ((entrada[3]) == '$t6'):
            saida[2] = 14
        if ((entrada[3]) == '$t7'):
            saida[2] = 15

    #posição 1 da entrada em addi
    if (entrada[0] == 'addi'):
        saida = [0] * 4
        saida[0] = 8
        saida[3] = int(entrada[3]) #definindo o valor do endereço

        # posição dois|três da entrada do addi
        # $s posição 1
        if ((entrada[1]) == '$s0'):
            saida[2] = 16
        if ((entrada[1]) == '$s1'):
            saida[2] = 17
        if ((entrada[1]) == '$s2'):
            saida[2] = 18
        if ((entrada[1]) == '$s3'):
            saida[2] = 19
        if ((entrada[1]) == '$s4'):
            saida[2] = 20
        if ((entrada[1]) == '$s5'):
            saida[2] = 21
        if ((entrada[1]) == '$s6'):
            saida[2] = 22
        if ((entrada[1]) == '$s7'):
            saida[2] = 23

        # $s posição 2
        if ((entrada[2]) == '$s0'):
            saida[1] = 16
        if ((entrada[2]) == '$s1'):
            saida[1] = 17
        if ((entrada[2]) == '$s2'):
            saida[1] = 18
        if ((entrada[2]) == '$s3'):
            saida[1] = 19
        if ((entrada[2]) == '$s4'):
            saida[1] = 20
        if ((entrada[2]) == '$s5'):
            saida[1] = 21
        if ((entrada[2]) == '$s6'):
            saida[1] = 22
        if ((entrada[2]) == '$s7'):
            saida[1] = 23

        # $t posicao 1
        if ((entrada[1]) == '$t0'):
            saida[3] = 8
        if ((entrada[1]) == '$t1'):
            saida[3] = 9
        if ((entrada[1]) == '$t2'):
            saida[3] = 10
        if ((entrada[1]) == '$t3'):
            saida[3] = 11
        if ((entrada[1]) == '$t4'):
            saida[3] = 12
        if ((entrada[1]) == '$t5'):
            saida[3] = 13
        if ((entrada[1]) == '$t6'):
            saida[3] = 14
        if ((entrada[1]) == '$t7'):
            saida[3] = 15

        # $t posicao 2
        if ((entrada[2]) == '$t0'):
            saida[1] = 8
        if ((entrada[2]) == '$t1'):
            saida[1] = 9
        if ((entrada[2]) == '$t2'):
            saida[1] = 10
        if ((entrada[2]) == '$t3'):
            saida[1] = 11
        if ((entrada[2]) == '$t4'):
            saida[1] = 12
        if ((entrada[2]) == '$t5'):
            saida[1] = 13
        if ((entrada[2]) == '$t6'):
            saida[1] = 14
        if ((entrada[2]) == '$t7'):
            saida[1] = 15

        # $t posicao 3
        if ((entrada[3]) == '$t0'):
            saida[2] = 8
        if ((entrada[3]) == '$t1'):
            saida[2] = 9
        if ((entrada[3]) == '$t2'):
            saida[2] = 10
        if ((entrada[3]) == '$t3'):
            saida[2] = 11
        if entrada[3] == '$t4':
            saida[2] = 12
        if ((entrada[3]) == '$t5'):
            saida[2] = 13
        if ((entrada[3]) == '$t6'):
            saida[2] = 14
        if ((entrada[3]) == '$t7'):
            saida[2] = 15

    saidaBin = ""
    # comparo se entrada[1] é igual a algum elemento da lista
    instrucoesR = listTest(['add', 'sub', 'and', 'or', 'nor', 'sll', 'srl'])
    instrucoesI = listTest(['addi', 'ori', 'andi'])
    if instrucoesR.any(entrada[0]):
        saidaBin += "{0:06b}".format(saida[0])
        saidaBin += "{0:05b}".format(saida[1])
        saidaBin += "{0:05b}".format(saida[2])
        saidaBin += "{0:05b}".format(saida[3])
        saidaBin += "{0:05b}".format(saida[4])
        saidaBin += "{0:06b}".format(saida[5])

    elif instrucoesI.any(entrada[0]):
        saidaBin += "{0:06b}".format(saida[0])
        saidaBin += "{0:05b}".format(saida[1])
        saidaBin += "{0:05b}".format(saida[2])
        saidaBin += "{0:016b}".format(saida[3])

    #escrita de arquivos
    arquivoescrita = open('saida.txt', 'r')
    conteudo = arquivoescrita.readlines()
    conteudo.append(saidaBin+"\n")
    arquivoescrita = open('saida.txt', 'w')
    arquivoescrita.writelines(conteudo)
    arquivoescrita.close()

arquivoleitura.close()
