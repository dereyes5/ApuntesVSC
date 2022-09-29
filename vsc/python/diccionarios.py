planet = {
    'name': 'Earth',
    'moons': 1
}   # diccionarios -> nombre = {'clave': valor}
print(planet.get('name'))
print(planet['name'])
planet.update({
    'name': 'Makemake'
    })
planet.update({
    'name': 'Jupiter',
    'moons': 79
})
planet['orbital period'] = 4333 #ingresar una clave al diccionario
planet.pop('orbital period') #quitar una clave
planet['diameter (km)'] = {
    'polar': 133709,
    'equatorial': 142984
}
print(f'{planet["name"]} polar diameter: {planet["diameter (km)"]["polar"]}')
rainfall = {
    'october': 3.5,
    'november': 4.2,
    'december': 2.1
}
for key in rainfall.keys():
    print(f'{key}: {rainfall[key]}cm') #imprimir todas las claves

if 'december' in rainfall:
    rainfall['december'] = rainfall['december'] + 1
else:
    rainfall['december'] = 1
total_rainfall = 0
for value in rainfall.values():
    total_rainfall = total_rainfall + value

print(f'There was {total_rainfall}cm in the last quarter')
#===============================================================================
planet_moons = {
    'mercury': 0,
    'venus': 0,
    'earth': 1,
    'mars': 2,
    'jupiter': 79,
    'saturn': 82,
    'uranus': 27,
    'neptune': 14,
    'pluto': 5,
    'haumea': 2,
    'makemake': 1,
    'eris': 1
}
moons = planet_moons.values()
total_planets = len(planet_moons.keys())
print(moons)
total_moons = 0
for moon in moons:
    total_moons = total_moons + moon

average = total_moons / total_planets

print(f'Each planet as an average of {average} moons')