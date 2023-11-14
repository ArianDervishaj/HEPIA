### Ma version du TP0 sur la programmation linéaire en dimension 2.

### Les fonctions: 

### make_pairs (pour faire des paires, existe déjà en python, mais bon...)
### intersection: intersection de deux droites données par des equations ux + vy = w.
### test_inside: teste si un point satisfait toutes les contraintes (avec une petite tolérance)
### prog_lin_2: trouve le max de F = px + qy + r sous les contraintes C
### Exemple_Cours : fait l'exemple du cours.

def make_pairs( L ):
    N = len(L)
    pairs = []
    for ind_1 in range( N-1 ):
        for ind_2 in range( ind_1 + 1 , N ):
            pairs.append( ( L[ind_1 ] , L[ind_2] ) )
    return pairs

### Intersection de deux droites, en utilisant l'exercice II.2.9.

def intersection( D0 , D1 ):
    u0,v0,w0 = D0
    u1,v1,w1 = D1
    D0_txt = "{}x + {}y = {}".format(u0,v0,w0)
    D1_txt = "{}x + {}y = {}".format(u1,v1,w1)
    print("Droites "+D0_txt+" et "+D1_txt+" : ", end = '')
    denominateur = u0*v1-u1*v0
    if ( denominateur == 0):
        print("Pas de solution ou données incohérentes.")
        return None
    else:
         x = (v1*w0 -v0*w1)/denominateur
         y = (-u1*w0 + u0*w1)/denominateur
         print("intersection",[x,y])
         return [x,y]


def test_inside( pt , Contr , Tol = 0.0001 ):
    x,y = pt
    LC = len(Contr)
    T = True
    ind_C = 0
    while (T and ind_C < LC): 
        u,v,w = Contr[ind_C]
        T = u*x + v*y <= w + Tol
        ind_C += 1  
    if T:
        print("Le point ", pt , " est dans le polygone.")
    else:
        print("Le point ", pt , " n'est pas dans le polygone.")
    return T

# F : la fonction f = p*x + q*y + r, donnée sous forme [p,q,r]
# C : les contraintes u*x + v*y <= w , données sous forme de liste de listes [u,v,w]
def prog_lin_2( F , C ):
    F_txt = str(F[0])+"*x + "+str(F[1])+"*y + "+str(F[2])
    PC = make_pairs( C )
    P_inter = []
    for D1,D2 in PC:
        #pt = intersection_sans_tricher(D1,D2)
        pt = intersection( D1 , D2 )
        if pt != None:
            P_inter.append(pt)
    Good_pts = []
    Good_val = []
    for Pt in P_inter:
        inside = test_inside(Pt , C )
        if inside:
            Good_pts.append(Pt)
            Good_val.append( F[0]*Pt[0] + F[1]*Pt[1] + F[2] )
    print()
    print("Bons Points:", Good_pts)
    print("Les valeurs correspondantes:",Good_val)
    print()
    if Good_pts == []:
        print("Le polygône des valeurs admissibles est vide")
        return None
    max_val = max( Good_val )
    max_index = Good_val.index(max_val)
    min_val = min(Good_val)
    min_index = Good_val.index(min_val)
    txt = "La fonction {} prendra la valeur maximum de {} au point {}".format(F_txt,max_val , Good_pts[max_index] )
    txt1 = "La fonction {} prendra la valeur minimum de {} au point {}".format(F_txt,min_val , Good_pts[min_index] )
    print()
    print(txt)
    print(txt1)
    return Good_pts[max_index], max_val
    
#HOW TO USE
#f(x,y) = ax + by + c
#contraintes = [[a,b,c],[a,b,c],[a,b,c]]
#point = [a,b,c]

# Rappel :
# F : la fonction f = p*x + q*y + r, donnée sous forme [p,q,r]
# C : les contraintes u*x + v*y <= w , données sous forme de liste de listes [u,v,w]

#EXEMPLE
#prog_lin_2([30,40,0], [[4,9,40],[5,5,25],[10,3,30],[-1,0,0],[0,-1,0]])

#prog_lin_2([315,205,-10],[[1,2,14],[10,10,100],[20,10,190],[4,0,37],[0,1,6],[-4,1,4],[-5,-5,-10],[-25,-15,-40],[-1,0,0],[0,-1,0]])

# prog_lin_2([4,3,25],[[1,2,14],[10,10,100],[20,10,190],[4,0,37],[0,1,6],[-4,1,4],[-5,-5,-10],[-25,-15,-40],[-1,0,0],[0,-1,0]])

# prog_lin_2([315,205,10],[[1,2,14],[10,10,100]])

# inter = intersection([1,1,20],[-3,1,0])
# inside = test_inside(inter,[[1,1,20],[-3,1,0],[-2,3,20],[-2,-2,-10],[9,-3,75],[0,-1,0]])
# print(inside)


prog_lin_2([-20,10,5],[[1,1,20],[-3,1,0],[-2,3,20],[-2,-2,-10],[9,-3,75],[0,-1,0]])




