nome = (str(input("Digite seu nome:")))
salario_a = (float(input("Digite seu salario atual:")))
aumento = float
salario_n = float
if salario_a >= 0 and salario_a <= 400:
    aumento = 1.15
    salario_n = salario_a * aumento
    print(f"{nome} ⇢ seu aumento salarial foi de %15 ⇢ seu salario atual é de {salario_a:.2f} ⇢ seu novo salario é de {salario_n:.2f}")
if salario_a >= 401 and salario_a <= 700:
    aumento = 1.12
    salario_n = salario_a * aumento
    print(f"{nome} ⇢ seu aumento salarial foi de %12 ⇢ seu salario atual é de {salario_a:.2f} ⇢ seu novo salario é de {salario_n:.2f}")
if salario_a >= 701 and salario_a <= 1000:
    aumento = 1.10
    salario_n = salario_a * aumento
    print(f"{nome} ⇢ seu aumento salarial foi de %10 ⇢ seu salario atual é de {salario_a:.2f} ⇢ seu novo salario é de {salario_n:.2f}")
if salario_a >= 1001 and salario_a <= 1800:
    aumento = 1.07
    salario_n = salario_a * aumento
    print(f"{nome} ⇢ seu aumento salarial foi de %7 ⇢ seu salario atual é de {salario_a:.2f} ⇢ seu novo salario é de {salario_n:.2f}")
if salario_a >= 1801 and salario_a <= 2500:
    aumento = 1.04
    salario_n = salario_a * aumento
    print(f"{nome} ⇢ seu aumento salarial foi de %4 ⇢ seu salario atual é de {salario_a:.2f} ⇢ seu novo salario é de {salario_n:.2f}")
if salario_a >= 2501:
    print(f"{nome} ⇢ seu salario atual é maior que 2500 então não recebe aumento")