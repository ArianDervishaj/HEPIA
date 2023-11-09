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

def mult_poly(p1,p2):
    n = len(p1) + len(p2) -1
    p3 = [0] * n

    for k in range(0,len(p1)):
        for l in range(0,len(p2)):
            p3[k+l] += p1[k] * p2[l]

    while p3[-1] == 0:
        p3.pop(-1)

    return p3

## 4.
def evaluate_p(p,x):
    res = 0
    for i in range(0,len(p1)):
        res += p[i] * pow(x,i)

    return res

## 5.
# def euclidean_division(dividend, divisor):
#     quotient = [0] * (len(dividend) - len(divisor) + 1)
    
#     while len(dividend) >= len(divisor):
#         # Calculate the term to add to the quotient
#         term = [0] * (len(dividend) - len(divisor)) + [dividend[0] / divisor[0]]
        
#         # Subtract the term multiplied by the divisor from the dividend
#         dividend = [d - t * divisor[i] for d, i, t in zip(dividend, range(len(term)), term)]
        
#         # Remove leading zeros from the updated dividend
#         dividend = [d for d in dividend if d != 0]
        
#         # Add the term to the quotient
#         quotient[len(quotient) - len(term):] = [q + t for q, t in zip(quotient[len(quotient) - len(term):], term)]
    
#     return quotient, dividend

## 6.

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

p1 = [1,2,3,0]
p2 = [3,0,2,1]
x=3

p3 = [4321,12,32,-53]
Xs = [1,2,3,4,5]

points = [(t, evaluate_p(p3,t)) for t in Xs]

if exercice == 1:
    res = add_poly(p1,p2)
if exercice == 2:
    res = sub_poly(p1,p2)
if exercice == 3:
    res = mult_poly(p1,p2)
if exercice == 4:
    res = evaluate_p(p1,x)
if exercice == 5:
    quotient, dividend = euclidean_division([2,1,3],[1,1])
if exercice == 6:
    res = laGrange(points)

print(quotient)
print(dividend)

