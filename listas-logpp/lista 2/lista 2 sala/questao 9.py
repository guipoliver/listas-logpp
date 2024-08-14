numero1 = int(input("Digite o primeiro número inteiro: "))
numero2 = int(input("Digite o segundo número inteiro: "))

def eh_divisivel_por_4_ou_5(numero):
    return numero % 4 == 0 or numero % 5 == 0

numeros_divisiveis = []

for numero in (numero1, numero2):
    if eh_divisivel_por_4_ou_5(numero):
        numeros_divisiveis.append(numero)

if numeros_divisiveis:
    print("Os números divisíveis por 4 ou 5 são:", ", ".join(map(str, numeros_divisiveis)))
else:
    print("Nenhum dos números é divisível por 4 ou 5.")
