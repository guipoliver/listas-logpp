numero = int(input("Digite um número inteiro (positivo ou negativo): "))

if numero < 0:
    valor_absoluto = -numero
else:
    valor_absoluto = numero

print(f"O valor absoluto de {numero} é {valor_absoluto}.")
