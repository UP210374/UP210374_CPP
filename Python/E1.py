def resultado(x):
    y = (1/(x+(1/(x+(1/(x + (1/x)))))))
    return y

print(resultado(1))

from fractions import Fraction 
x = int(input())
print(x)
y = Fraction (1, x + Fraction(1, x + Fraction (1, x + Fraction (1, x))))
print ('y=', y )