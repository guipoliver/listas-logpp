import math

A = float(input("Digite o valor de A: "))
B = float(input("Digite o valor de B: "))
C = float(input("Digite o valor de C: "))

if A == 0:
    print("O valor de A não pode ser zero para uma equação de segundo grau.")
else:
   
    delta = B**2 - 4*A*C
    
    if delta > 0:

        raiz1 = (-B + math.sqrt(delta)) / (2 * A)
        raiz2 = (-B - math.sqrt(delta)) / (2 * A)
        print(f"As raízes da equação são: {raiz1} e {raiz2}")
    elif delta == 0:

        raiz = -B / (2 * A)
        print(f"A raiz da equação é: {raiz}")
    else:

        parte_real = -B / (2 * A)
        parte_imaginaria = math.sqrt(-delta) / (2 * A)
        print(f"As raízes da equação são complexas: {parte_real} ± {parte_imaginaria}i")
