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
    else:
        gcd, x, y = bachet(b % a, a)
        return gcd, y - (b // a) * x, x


def mod_inverse(a, m):
    gcd, x, y = bachet(a, m)
    if gcd != 1:
        raise ValueError(f"The modular inverse does not exist for {a} mod {m}")
    else:
        return (x % m + m) % m


def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)


