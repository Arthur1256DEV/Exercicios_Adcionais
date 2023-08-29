def calculaExcesso(excedido):
        multa = excedido * 4
        return multa

peso = float(input("Informe o peso de peixes em quilos: ").replace(",","."))
excedido = peso - 50

resultado = calculaExcesso(excedido)

print(f"\n Peso informado: {peso:.2f}")
print(f"\n Peso excedido: {excedido:.2f}")
print(f"\n Valor da multa: R${resultado:.2f}")