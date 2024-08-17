S, comando = str
R = int
if comando == S:
    comando = (str(input("Digite um comando (S, +, -, *, /) para a calculadora:")))
    if comando == "+":
        x = (int(input("Digite o primeiro valor:")))
        y = (int(input("Digite o segundo valor:")))
        R = x + y
        print(f"o resultado é {R}")
    if comando == "-":
        x = (int(input("Digite o primeiro valor:")))
        y = (int(input("Digite o segundo valor:")))
        R = x - y
        print(f"o resultado é {R}")
    if comando == "*":
        x = (int(input("Digite o primeiro valor:")))
        y = (int(input("Digite o segundo valor:")))
        R = x * y
        print(f"o resultado é {R}")
    if comando == "/":
        x = (int(input("Digite o primeiro valor:")))
        y = (int(input("Digite o segundo valor:")))
        R = x / y
        print(f"o resultado é {R}")
    if comando == S:
        break
    