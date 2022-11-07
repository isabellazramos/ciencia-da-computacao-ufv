prato = int(input("Digite o COD do seu prato:\n"
                  "1 - Vegetariano\n"
                  "2 - Peixe\n"
                  "3 - Frango\n"
                  "4 - Carne\n"))
sobremesa = int(input("Digite o COD da sua sobremesa:\n"
                      "1 - Abacaxi\n"
                      "2 - Sorvete diet\n"
                      "3 - Mouse diet\n"
                      "4 - Mouse chocolate\n"))
bebida = int(input("Digite o COD da sua bebida:\n"
                   "1 - Chá\n"
                   "2 - Suco de Laranja\n"
                   "3 - Suco de melão\n"
                   "4 - Refrigerante diet\n"))
if(prato==1):
    print("Vegetariano - 180 Calorias")
if(prato==2):
    print("Peixe - 230 Calorias")
if(prato==3):
    print("Frango - 250 Calorias")
if(prato==4):
    print("Carne - 350 Calorias")

if(sobremesa==1):
    print("Abacaxi - 75 Calorias")
if(sobremesa==2):
    print("Sorvete diet - 110 Calorias")
if(sobremesa==3):
    print("Mouse diet - 170 Calorias")
if(sobremesa==4):
    print("Mouse chocolate - 200 Calorias")

if(bebida==1):
    print("Chá - 20 Calorias")
if(bebida==2):
    print("Suco de laranja - 70 Calorias")
if(bebida==3):
    print("Suco de melão - 100 Calorias")
if(bebida==4):
    print("Refrigerante diet - 65 Calorias")