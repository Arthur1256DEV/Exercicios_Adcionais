from string import ascii_letters

frase = [10]
vogais = 'aeiouAEIOU'

frase = input("Informe uma frase de até 10 letras: ")

for i in range(0, len(vogais)):
        frase = frase.replace(vogais[i], "")

def contador_consoantes(frase):
        consoantes = set(ascii_letters) - set('aeiouAEIOU')
        soma = 0

        for i in frase:
            if i in consoantes:
                  soma += 1
        return soma

Contconsoantes = contador_consoantes(frase)

print("\n\n Consoantes encontradas: ", frase)
print("\n\n Quantidade de consoantes: ", Contconsoantes)
