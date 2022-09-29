# operadores
seconds = 1042
display_minutes = 1042 // 60 # // -> entero
display_seconds = 1042 % 60 # % -> modulo
print(display_minutes)
print(display_seconds)

# cadenas a numeros
demo_int = int('215')
print(demo_int)

demo_float = float('215.3')
print(demo_float)

# valor absoluto

print(abs(39 - 16))
print(abs(16 - 39))

# redondeo

print(round(14.5))

# biblioteca math

from math import ceil, floor

round_up = ceil(12.5) # redondeo hacia arriba
print(round_up)

round_down = floor(12.5) # redondeo hacia abajo
print(round_down)
