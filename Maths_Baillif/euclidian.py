from sympy import symbols, div

def get_polynomial():
    terms = input("Enter the coefficients of the polynomial separated by spaces (e.g., 2 3 -5 1 for 2x^3 + 3x^2 - 5x + 1): ")
    coefficients = list(map(int, terms.split()))
    return coefficients

def euclidean_division(dividend, divisor):
    x = symbols('x')
    dividend_poly = sum(c * x**i for i, c in enumerate(dividend[::-1]))
    divisor_poly = sum(c * x**i for i, c in enumerate(divisor[::-1]))

    quotient, remainder = div(dividend_poly, divisor_poly, domain='QQ')

    return quotient, remainder

def main():
    print("Enter the coefficients for the dividend polynomial:")
    dividend = get_polynomial()

    print("Enter the coefficients for the divisor polynomial:")
    divisor = get_polynomial()

    quotient, remainder = euclidean_division(dividend, divisor)

    print(f"\nQuotient : {quotient}")
    print(f"Reste : {remainder}")

if __name__ == "__main__":
    main()
