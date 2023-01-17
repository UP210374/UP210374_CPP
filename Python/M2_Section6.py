import os
import time

print('What is your last name?')
lastName = input()

Name = input('What is your name?')

Edad = int(input('Give me your age: ')) #casting: int(), float()
print(type(edad)) #Tipo

complete_name = Name + ' ' + lastName  #concatenacion
print('Hi', complete_name, 'Your age is: ', Edad)
print('Hola'*2, 2*'Adios') #iteracion de la palabra

#os.system para windows (¨cls¨) para linux (clear)

print(¨+¨+ 10 * ¨-¨ + ¨+¨)
print(¨|¨ + " " * 10 )