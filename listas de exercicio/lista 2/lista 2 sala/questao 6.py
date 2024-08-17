import math

N1 = float(input("Digite o valor de N1: "))
N2 = float(input("Digite o valor de N2: "))
N3 = float(input("Digite o valor de N3: "))

if N1 == 0:
    print("O valor de N1 não pode ser zero para uma equação de segundo grau.")
else:
    delta = (pow(N2, 2)) - (4 * N1 * N3)
    if delta < 0:
        print("A equação não tem solução real.")
    elif delta == 0:
        x1 = -N2 / (2 * N1)
        x2 = x1
        print(f"A equação tem duas raízes reais e iguais: x1 = {x1} e x2 = {x2}")
    else:
        x1 = (-N2 + pow(delta, 0.5)) / (2 * N1)
        x2 = (-N2 - pow(delta, 0.5)) / (2 * N1)
        print(f"A equação tem duas raízes reais e diferentes: x1 = {x1} e x2 = {x2}")
