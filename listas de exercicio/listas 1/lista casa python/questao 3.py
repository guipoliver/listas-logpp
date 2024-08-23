AP = input('digite a altura da parede:')
LP = input('digite a largura da parede:')
AP = float(AP)
LP = float(LP)
TP = AP * LP
TP = float(TP)

AA = input('digite a altura do azulejo:')
LA = input('digite a largura do azulejo:')
AA = float(AA)
LA = float(LA)
TA = AA * LA
TA = float(TA)
QP = TP / TA
print(f'serao necessarios:{QP} azulejos')