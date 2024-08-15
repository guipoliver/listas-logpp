A = float(input("Digite o primeiro lado:"))
B = float(input("Digite o segundo lado:"))
C = float(input("Digite o terceiro lado:"))
if A < B + C and B < A + C and C < A + B:
    if A==B and B==C:
        print("é um triangulo equilatero")
    elif A == B or B == C or C == A:
         print("é um triangulo isoceles")
    else:
        print("é um triangulo escaleno")
else:
    print("Nao forma um triangulo")