# Exercice II.4.9

## 1.
def add_poly(p1,p2):
    length = max(len(p1),len(p2))
    p3 = []

    for i in range(0,length):
        if i >= len(p1):
            p3.append(p2[i])
        elif i >= len(p2):
            p3.append(p1[i])
        else:
            p3.append(p1[i] + p2[i])

    while p3[-1] == 0:
        p3.pop(-1)

    return p3

## 2.
def sub_poly(p1,p2):
    length = max(len(p1),len(p2))
    p3 = []

    for i in range(0,length):
        if i >= len(p1):
            p3.append(p2[i])
        elif i >= len(p2):
            p3.append(p1[i])
        else:
            p3.append(p1[i] - p2[i])

    while p3[-1] == 0:
        p3.pop(-1)

    return p3


## 3.

def mult_poly(p1, p2):
    n = len(p1) + len(p2) - 1
    p3 = [0] * n

    for k in range(len(p1)):
        for l in range(len(p2)):
            p3[k + l] += p1[k] * p2[l]

    # Remove trailing zeros from the result
    while len(p3) > 1 and p3[-1] == 0:
        p3.pop()

    return p3


## 4.
def evaluate_p(p,x):
    res = 0
    for i in range(0,len(p1)):
        res += p[i] * pow(x,i)

    return res

## 5.

def laGrange(points):
    L = [0]
    for i, coord_i in enumerate(points):
        li = [1]
        for k, coord_k in enumerate(points):
            if k != i:
                quotient = coord_i[0] - coord_k[0] #x_i - x_k
                if quotient == 0:
                    raise TypeError("Deux points avec les mêmes coordonnées en x")
                else:
                    fac = [(-1)*coord_k[0]/quotient, 1/quotient]  # -xk/xi - xk, 1/xi -xk
                    li = mult_poly(li,fac)  # li(x) * (-xk/xi-xk + 1/xi-xk * x)
        li = mult_poly([coord_i[1]],li)  # li(x) = li(x) * yi
        L = add_poly(li,L) # L(x) = L(x) + li(x)
    return L


# Choix de l'exo
exercice = 5


# Variables a définir
p1 = [1,2,3,0]
p2 = [3,0,2,1]
x=3
# points = [(4, 235), (3, 102), (2, 37), (5, 460) ]
# ,(-3, -108), (1, 16)
points = [(0.0001, 14.999899980004), (10, 3805), (2000000000.0, 3.1999999992e28), (-1200000000.0, -6.91200000288e27), (400000000.0, 2.5599999968e26)]

if exercice == 1:
    res = add_poly(p1,p2)
if exercice == 2:
    res = sub_poly(p1,p2)
if exercice == 3:
    res = mult_poly(p1,p2)
if exercice == 4:
    res = evaluate_p(p1,x)
if exercice == 5:
    res = laGrange(points)
    print(res)

# UTILISATION

#add_poly sub_poly mult_poly : 
    # p1 = [x^n, x^n-1, ... x^0]
    # p2 = [x^n, x^n-1, ... x^0]
    # add_poly(p1,p2), sub_poly(p1,p2), mult_poly(p1,p2)

# evaluate_p
    # p1 = [x^n, x^n-1, ... x^0]
    # x = 3 (an int)
    # evaluate_p(p1,x)

# lagrange
    # points = [(x_a,y_a),(x_b,y_b),...,(x_n,y_n)]
    # laGrange(points)