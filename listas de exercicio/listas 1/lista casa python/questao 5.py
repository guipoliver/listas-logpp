kg = input('Digite seu peso em quilos:')
kg = float(kg)
A = input('Digite sua altura em cm:')
A = float(A)
B = kg / A ** 2
B = float(B)
IMC = B * 10000
input(f'seu IMC é igual a {IMC:.1f} um IMC normal é perto de 18')