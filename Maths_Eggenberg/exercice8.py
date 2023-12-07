from polynomial import *

def exercice2():
    puissance = 21
    modulo = 55
    congruent = True

    for i in range(1,55):
        res1 = expRapide(i,puissance) % modulo
        res2 = i % modulo
        if(res1 != res2):
            print(f"Non congruent quand i = {i}")
            congruent = False
            
    if(congruent):
        print(f"Tout les a entre 1 et 54 puissance 21 sont congruent aux a entre 1 et 54")

# exercice2()    

def exercice3(n,phi_n):
    e = 0
    x = 0

    for i in range(2,phi_n + 1):
        gcd, x, _ = bachet(i,phi_n)
        if(gcd == 1):
            e = i
            break

    print(e)

    M = 43

    mu = expRapide(M,e) % n

    d =  mod_inverse(e,phi_n)

    print(d)

    M_dechiffree = expRapide(mu,d) % n


    print(f"{M} et {mu} et {M_dechiffree}")


exercice3(55,40)
