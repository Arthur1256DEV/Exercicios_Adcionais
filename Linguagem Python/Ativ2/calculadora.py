def soma():
    print("\n\nOpcao - SOMAR")
    num1 = float(input("\nInforme o numero desejado: "))
    num2 = float(input("\nInforme o proximo numero: "))

    result = num1 + num2

    print(f"\n Resultado = {result}")
    print("===========================")
    print("\n (Voltado para o menu...)")

def subtracao():
    print("\n\nOpcao - SUBTRAIR")
    num1 = float(input("\nInforme o numero desejado: "))
    num2 = float(input("\nInforme o proximo numero: "))

    result = num1 - num2

    print(f"\n Resultado = {result}")
    print("===========================")
    print("\n (Voltado para o menu...)")

def multiplic():
    print("\n\nOpcao - MULTIPLICAR")
    num1 = float(input("\nInforme o numero desejado: "))
    num2 = float(input("\nInforme o proximo numero: "))

    result = num1 * num2

    print(f"\n Resultado = {result}")
    print("===========================")
    print("\n (Voltado para o menu...)")

while True:
    print("CALCULADORA: ")
    print('1- SOMAR')
    print('2- SUBTRAIR')
    print('3- MULTIPLICAR')
    print('0- SAIR')

    opcao = int(input("\nInsira sua opcao: "))


    match opcao:
        case 1:
            soma()
            continue
        case 2:
            subtracao()
            continue

        case 3:
            multiplic()
            continue

        case 0:
            print("\n\nAté logo!")
            break
        case _:
            print("\n\nInsira uma opção correta!")
