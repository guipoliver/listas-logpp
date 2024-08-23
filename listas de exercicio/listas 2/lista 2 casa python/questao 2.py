NC = 15
NC = float(NC)
A = input('Digite um valor positivo entre 0 e 100 para saber quao distante ele esta do numero chave:')
A = float(A)
R = A - NC
if A > 100:
    input("erro numero digitado maior que 100")
elif R < 0:
    input(f"erro {R} é um numero negativo")
else:
    input(f"ele está {R} distante")
