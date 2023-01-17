horas = int(input('Dame las horas: '))
minutos = int (input('Dame los minutos: '))
duracion = int (input('Dame el tiempo de duracion: '))

sum = minutos + duracion
tiempo_horas = horas + (sum//60)
tiempo_min = sum % 60
while tiempo_horas >24:
    tiempo_horas%= 24
print ('Finaliza a las: ',tiempo_horas,':',tiempo_min)
