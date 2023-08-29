def pesoIdealH(altura):
    return (72.7*altura) - 58

def pesoIdealM(altura):
    return (62.1*altura) - 44.7



sexo = input("\n informe se é homem (H) ou mulher (M): ")
altura = float(input("\n Informe a sua altura: ").replace(',','.'))

if (sexo == 'H' or sexo == 'h'):
    resultado = pesoIdealH(altura)

elif (sexo == "M" or sexo == "m"):
    resultado = pesoIdealM(altura)



print(f"\n Seu peso ideal é de: {resultado:.2f}")