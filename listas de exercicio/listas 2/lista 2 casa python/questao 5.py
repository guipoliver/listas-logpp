salario = float(input("Digite seu salario bruto:"))
horas = float(input("Digite suas horas tabalhadas:"))
if horas>160:
    valor_h=salario / 160
    horas2=horas - 160
    horas_t = horas2 * valor_h + (horas2 / 2)
    salario= salario + horas_t
if salario <= 800:
    print(f"Seu salario liquido é igual a {salario}")
elif salario > 800 and salario < 1600:
    salario=salario-(salario*0.13)
    print(f"seu salario liquido é de {salario}")
elif salario > 1600:
    salario=salario-(salario*0.22)
    print(f"seu salario liquido é de {salario}")
    