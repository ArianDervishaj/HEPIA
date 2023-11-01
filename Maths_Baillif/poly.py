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

def euclide(p1,p2):
    iterations = 0
    r = 1
    while (len(p2) >= len(p1)) or (r != 0):
        p2[0] = 0 #TODO

# Choix de l'exo
exercice = 4

p1 = [1,2,3,0]
p2 = [3,0,2,1]
x=3

if exercice == 1:
    res = add_poly(p1,p2)
if exercice == 2:
    res = sub_poly(p1,p2)
if exercice == 3:
    res = mult_poly(p1,p2)
if exercice == 4:
    res = evaluate_p(p1,x)
if exercice == 5:
    res = evaluate_p(p1,p2)



print(res)
    
