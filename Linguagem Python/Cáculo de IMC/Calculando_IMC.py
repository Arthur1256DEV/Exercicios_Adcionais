import os
os.system('cls')

while True:
    try:
        print("==================INICIO================")
        peso = float(input("Informe o seu peso em Kg (Kilogramas): ").replace(',','.'))
        print("==================================")
        altura = float(input("Informe sua altura em Metros: ").replace(',','.'))
        print("==================================")

        resultado_IMC = peso / (altura**2)

        if (resultado_IMC < 18.5):
            print(f"Seu IMC foi de: {resultado_IMC:.2f}")
            print("Magreza")
            print("=================FIM=================\n\n")
            continue


        elif (resultado_IMC >= 18.5 and resultado_IMC <= 24.9):
            print(f"Seu IMC foi de: {resultado_IMC:.2f}")
            print("Normal")
            print("=================FIM=================\n\n")
            continue


        elif (resultado_IMC >= 25 and resultado_IMC <= 29.9):
            print(f"Seu IMC foi de: {resultado_IMC:.2f}")
            print("Sobrepeso")
            print("Obesidade (GRAU): 1")
            print("=================FIM=================\n\n")
            continue


        elif (resultado_IMC >= 30 and resultado_IMC <= 39.9):
            print(f"Seu IMC foi de: {resultado_IMC:.2f}")
            print("Obesidade")
            print("Obesidade (GRAU): 2")
            print("=================FIM=================\n\n")
            continue


        elif (resultado_IMC > 40):
            print(f"Seu IMC foi de: {resultado_IMC:.2f}")
            print("Obesidade Grave")
            print("Obesidade (GRAU): 3")
            print("=================FIM=================\n\n")
            continue

    except ValueError as e:
        print("Fora do permitido: ", e)
        continue