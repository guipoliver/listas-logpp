lista = []
media = float
f1 = 0
f2 = 0
f3 = 0
f4 = 0
f5 = 0
while True:
    N = input("Digite quantos numeros inteiros desejar para terminar digite 'terminar':")
    if N.lower() == 'terminar':
        break
    try:
        valor = float(N) 
        lista.append(valor)
    except ValueError:
        print("insira um número válido.")
media = sum(lista) / len(lista)
print(f"A media dos valores inseridos é: {media:.2f}")
minimo = min(lista)
maximo = max(lista)
print(f"O valor mais alto inserido foi: {maximo} e o menor valor inserido foi: {minimo}")
for x in lista:
    if x < 0:
        f1 += 1
    elif x >= 0 and x < 15:
        f2 += 1
    elif x >= 15 and x < 100:
        f3 += 1
    elif x >= 100 and x < 1000:
        f4 += 1
    else:
        f5 += 1
print(f"Faixa 1 tem {f1} elementos \nFaixa 2 tem {f2} elementos \nFaixa 3 tem {f3} elementos \nFaixa 4 tem {f4} elementos \nFaixa 5 tem {f5} elementos")