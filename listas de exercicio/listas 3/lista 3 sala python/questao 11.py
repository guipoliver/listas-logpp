A = (int(input("Digite o primeiro valor:")))
B = (int(input("Digite o segundo valor:")))
C = (int(input("Digite o terceiro valor:")))
D = (int(input("Digite o quarto valor:")))
E = (int(input("Digite o quinto valor:")))

if A>B and A>C and A>D and A>E:
    print(f"o maior numero é {A}")
    if B<C and B<D and B<E:
        print(f"o menor numero é {B}")
    if C<B and C<D and C<E:
        print(f"o menor numero é {C}")
    if D<C and D<B and D<E:
        print(f"o menor numero é {D}")
    if E<C and E<D and E<E:
        print(f"o menor numero é {E}")
if B>A and B>C and B>D and B>E:
    print(f"o maior numero é {B}")
    if A<C and A<D and A<E:
        print(f"o menor numero é {A}")
    if C<B and C<D and C<E:
        print(f"o menor numero é {C}")
    if D<C and D<B and D<E:
        print(f"o menor numero é {D}")
    if E<C and E<D and E<E:
        print(f"o menor numero é {E}")
if C>A and C>B and C>D and C>E:
    print(f"o maior numero é {C}")
    if A<C and A<D and A<E:
        print(f"o menor numero é {A}")
    if B<C and B<D and B<E:
        print(f"o menor numero é {B}")
    if D<C and D<B and D<E:
        print(f"o menor numero é {D}")
    if E<C and E<D and E<E:
        print(f"o menor numero é {E}")
if D>A and D>C and D>B and D>E:
    print(f"o maior numero é {D}")
    if A<C and A<D and A<E:
        print(f"o menor numero é {A}")
    if C<B and C<D and C<E:
        print(f"o menor numero é {C}")
    if B<C and B<A and B<E:
        print(f"o menor numero é {B}")
    if E<C and E<D and E<E:
        print(f"o menor numero é {E}")
if E>A and E>C and E>D and E>B:
    print(f"o maior numero é {E}")
    if A<C and A<D and A<E:
        print(f"o menor numero é {A}")
    if C<B and C<D and C<E:
        print(f"o menor numero é {C}")
    if D<C and D<B and D<E:
        print(f"o menor numero é {D}")
    if B<C and B<D and B<E:
        print(f"o menor numero é {B}")