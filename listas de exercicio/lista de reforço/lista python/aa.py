lista = []
p = 0  # Contador para números pares
i = 0  # Contador para números ímpares

while True:
    N = input("Digite um número inteiro ou 'terminar' para finalizar: ")
    if N.lower() == 'terminar':
        break
    try:
        valor = float(N)  # Converte a entrada para float (aceita números decimais)
        if valor.is_integer():  # Verifica se é um número inteiro
            valor = int(valor)
            if valor % 2 == 0:
                p += 1
            else:
                i += 1
            lista.append(valor)
        else:
            print("Insira um número inteiro válido.")
    except ValueError:
        print("Insira um número válido.")

if lista:  # Verifica se a lista não está vazia
    media = sum(lista) / len(lista)
    print(f"A média dos valores inseridos é: {media:.2f}")
    minimo = min(lista)
    maximo = max(lista)
    print(f"O valor mais alto inserido foi: {maximo} e o menor valor inserido foi: {minimo}")

    f1 = f2 = f3 = f4 = f5 = 0
    for x in lista:
        if x < 0:
            f1 += 1
        elif x >= 0 and x < 15:
            f2 += 1
        elif x >= 15 and x < 100:
            f3 += 1
        elif x >= 100 and x < 1000:
            f4 += 1
        else:
            f5 += 1

    print(f"Faixa 1 tem {f1} elementos \nFaixa 2 tem {f2} elementos \nFaixa 3 tem {f3} elementos \nFaixa 4 tem {f4} elementos \nFaixa 5 tem {f5} elementos")
    print(f"O programa tem {p} pares e {i} ímpares")
else:
    print("Nenhum número válido foi inserido.")
