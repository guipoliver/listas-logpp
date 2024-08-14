numero1 = int(input("Digite o primeiro número inteiro: "))
numero2 = int(input("Digite o segundo número inteiro: "))
numero3 = int(input("Digite o terceiro número inteiro: "))

def eh_divisivel_por_2_e_3(numero):
    return numero % 2 == 0 and numero % 3 == 0

numeros_divisiveis = []

for numero in (numero1, numero2, numero3):
    if eh_divisivel_por_2_e_3(numero):
        numeros_divisiveis.append(numero)

if numeros_divisiveis:
    print("Os números divisíveis por 2 e 3 são:", ", ".join(map(str, numeros_divisiveis)))
else:
    print("Nenhum dos números é divisível por 2 e 3.")
