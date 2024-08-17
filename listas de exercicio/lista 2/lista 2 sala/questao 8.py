numero1 = int(input("Digite o primeiro número inteiro: "))
numero2 = int(input("Digite o segundo número inteiro: "))
numero3 = int(input("Digite o terceiro número inteiro: "))

if numero1 % 2 == 0 or numero1 % 3 == 0:
    print(f"o {numero1} é divisivel por 2 ou 3, ")
if numero2 % 2 == 0 or numero2 % 3 == 0:
    print(f"o {numero2} é divisivel por 2 ou 3")
if numero3 % 2 == 0 or numero3 % 3 == 0:
    print(f"o {numero3} é divisivel por 2 ou 5, ")