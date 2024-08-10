nota1 = float(input("Digite sua primeira nota:"))
nota2 = float(input("Digite sua segunda nota:"))
nota3 = float(input("Digite sua terceira nota:"))
media = (nota1 + nota2 + nota3) / 3
if media >= 6:
    print(f"Voce foi aprovado! sua nota foi de {media}")
else:
    print(f"Infelizmente voce nao foi aprovado sua media foi de {media}")