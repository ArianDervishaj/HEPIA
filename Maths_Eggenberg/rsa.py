def main():
    valid_choice = False

    while not valid_choice:
        choice = int(input("Choisis une fonction : \n1. Expension rapide \n2. Bachet-Bezout \n3. Autre chose \nChoix : "))
        if(choice > 0):
            valid_choice = True

    if(choice == 1):

        print("\n")
        print("EXPENSION RAPIDE")
        print("-----------------------------------\n")

        a = int(input("Entrez le a de l'expention rapide : "))
        b = int(input("Entrez le b de l'expention rapide : "))
        res = expRapide(a,b)
        print(res)

    elif(choice == 2):

        print("\n")
        print("BACHET BEZOUT")
        print("-----------------------------------\n")


        a = int(input("Entrez le a de Bachet Bezout : "))
        b = int(input("Entrez le b de Bachet Bezout : "))
        gcd, x, y = bachet(a, b)
        print(f"{a} * {x} + {b} * {y} = {gcd}")

    else:
        print("Autre chose")

def expRapide(a, b):
    if b == 0:
        return 1
    elif b % 2 == 0:
        return expRapide(a, b // 2) * expRapide(a, b // 2)
    else:
        return expRapide(a, b - 1) * a

def bachet(a, b):
    if a == 0:
        return b, 0, 1

    gcd, x1, y1 = bachet(b % a, a)
    x = y1 - (b // a) * x1
    y = x1

    return gcd, x, y

if __name__ == "__main__":
    main()

