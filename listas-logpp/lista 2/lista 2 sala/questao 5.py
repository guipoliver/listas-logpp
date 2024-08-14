A = float(input("Digite o primeiro valor:"))
B = float(input("Digite o segundo valor:"))
C = float(input("Digite o terceiro valor:"))
if A>B>C:
    print(f"    {A}     {B}      {C}")
elif A>C>B:
    print(f"    {A}     {C}      {B}")
elif B>A>C:
    print(f"    {B}     {A}      {C}")
elif B>C>A:
    print(f"    {B}     {C}      {A}")
elif C>A>B:
    print(f"    {C}     {A}      {B}")
elif C>B>A:
    print(f"    {C}     {B}      {A}")