def pontuacao():

    gabarito = ['a', 'a', 'b', 'd', 'e', 'a', 'c', 'c', 'a', 'd']
    respostas = []
    alunos = []
    i = 1
    icount = 1

    while icount < 4:
        newAluno = input(f"Informe o nome do aluno {i}: ")
        alunos.append(newAluno)
        icount += 1

    while i < 11: 
        resposta = input(f"Informe a alternativa da {i}° questão dos alunos (primeiro aluno até o ultimo): ")

        i += 1

        respostas.append(resposta)

    nova_lista = [elemento for elemento in gabarito if elemento in respostas]
    tamanho_lista = len(nova_lista)

    print(f"A nota do aluno foi: {tamanho_lista}")

    if tamanho_lista > 6:
        print("Aluno Aprovado!")

    elif tamanho_lista < 5.9 and tamanho_lista > 4:
        print("Aluno de Recuperação!")

    else:
        print("Aluno Reprovado!")

pontuacao()