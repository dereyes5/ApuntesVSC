"""
    - La palabra for, seguida de un espacio.
    - El nombre de la variable que quiere crear para cada valor de la secuencia (number).
    - La palabra in, entre espacios.
    - El nombre de la lista (countdown, en el ejemplo anterior) u objeto iterable que quiere recorrer en bucle, seguido de dos puntos (:).
    - El código que quiere ejecutar para cada elemento del objeto iterable, separado por espacios en blanco anidados.
"""
from time import sleep

countdown = [4, 3, 2, 1, 0]

for number in countdown:
    print(number)
    sleep(1)  # Wait 1 second
print("Blast off!! 🚀")