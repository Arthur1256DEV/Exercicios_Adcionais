global tentativas

def verificar_senha():

    tentativas = 3
    
    while tentativas > 0 and tentativas < 4:
        senha1 = input("\n Informe a senha: ")

        senha = '1234'

        if senha1 != senha:
            print("\n SENHA INCORRETA!")

            tentativas -= 1
            
            print(f"\n Tentativas restantes {tentativas}")

        else:
            print("\n ENTROU!")
            tentativas = 999
            

        if tentativas == 0:
            print("\n TENTATIVAS EXCEDIDAS!")

verificar_senha()


