senha = int(input("Digite o codigo de acesso de um curso (1 a 5):"))
if senha == 1:
    print("Engenharia")
if senha == 2:
    print("Edificações")
if senha == 3:
    print("Sistemas Elétricos")
if senha == 4:
    print("Turismo")
if senha == 5:
    print("Análise de Sistemas")
if senha < 1 or senha>5:
    print("erro, digite um valor entre 1 a 5")