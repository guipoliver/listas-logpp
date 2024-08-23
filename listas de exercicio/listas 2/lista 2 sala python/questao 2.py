nota1 = float(input("Digite sua primeira nota:"))
nota2 = float(input("Digite sua segunda nota:"))
media = (nota1 + nota2) / 2
if media >= 6:
    print(f"Voce foi aprovado! sua nota foi de {media}")
else:
    exame = float(input("Digite sua nota de exame:"))
    media2 = (media + exame) / 2
    if media2 >= 5:
        print(f"Voce foi aprovado! sua nota foi de {media2}")
    else:
         print(f"Infelizmente voce nao foi aprovado sua media foi de {media2}")
