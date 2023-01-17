#Operators -data  manipulation tools

entero = 7 // 2 # integer goes toward the lesser integer value (floor division)
residuo= 7 % 2  # modulo
potencia= 2**3  # when both ** arguments are integers, the result, the result is an integer too
                # when at least one ** arguments is float, the result, the result is float too
raiz= 15 ** .5  # root .5
print(entero)
print(residuo)
print(potencia)
print(-2**2)

print(12 % 4.5)#3.0
#12 // 4.5 gives 2.0,
#2.0 * 4.5 gives 9.0,
#12 - 9.0 gives 3.0.

print(-4 - -4) #unary operator (signo de un numero)
print(9 % 6 % 2) #left-sided binding 
print(2**2**3) #right-sided binging