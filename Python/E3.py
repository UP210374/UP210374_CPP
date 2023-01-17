a = int(input('Dame el valor de a: '))
b = int(input('Dame el valor de b: '))
c= int(input('Dame el valor de c: '))

if a>b and a>c:
    n=a
elif b>a and b>c:
    n=b
else:
    n=c

print('El numero', n ,'es el mayor')

print(f'{1000000:,.2f}') #Separados por comillas
print(f'{1:0<6d}') #right padding with 0 (rellena)
print(f'{valor:.2f}') #forma mas comuns