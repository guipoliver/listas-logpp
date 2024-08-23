P1 = input('Digite a nota da prova1:')
P2 = input('Digite a nota da prova2:')
ATIV = input('Digite a nota das atividades:')
P1 = float(P1)
P2 = float(P2)
ATIV = float(ATIV)
M = P1 * 4 + P2 * 4 + ATIV * 2
M = float(M)
ME = M / 10
input(f'a media obtida foi de {ME}:')