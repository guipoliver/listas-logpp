A = input("Digite um numero:")
B = input("Digite um segundo numero:")
C = input("Digite um terceiro numero:")
A = float(A)
B = float(B)
C = float(C)
if A>B>C:
    print(f"o maior numero é {A} o menor numero é {C} e o numero do meio é {B}")
elif B>A>C:
    print(f"o maior numero é {B} o menor numero é {C} e o numero do meio é {A}")
elif C>A>B:
    print(f"o maior numero é {C} o menor numero é {B} e o numero do meio é {A}")
elif C>B>A:
    print(f"o maior numero é {C} o menor numero é {A} e o numero do meio é {B}")
elif B>C>A:
    print(f"o maior numero é {B} o menor numero é {A} e o numero do meio é {C}")
elif A>C>B:
    print(f"o maior numero é {A} o menor numero é {B} e o numero do meio é {C}")