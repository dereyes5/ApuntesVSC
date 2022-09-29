planets = ["Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"]
print("The first planet is", planets[0])
print("The second planet is", planets[1])
print("The third planet is", planets[2])
planets[3] = "Red Planet"
print("Mars is also known as", planets[3])
number_of_planets = len(planets) #tamaño lista
print("There are", number_of_planets, "planets in the solar system.")
planets.append("Pluto") #ingresar valor al final de la lista
number_of_planets = len(planets)
print("There are actually", number_of_planets, "planets in the solar system.")
planets.pop()  # Elimina el último elemento de la lista
number_of_planets = len(planets)
print("No, there are definitely", number_of_planets, "planets in the solar system.")
print("The last planet is", planets[-1]) #numeros negativos cuentan desde atrás
print("The penultimate planet is", planets[-2])
#busqueda
jupiter_index = planets.index("Jupiter")
print("Jupiter is the", jupiter_index + 1, "planet from the sun")

gravity_on_planets = [0.378, 0.907, 1, 0.377, 2.36, 0.916, 0.889, 1.12]
bus_weight = 12650 # in kilograms, on Earth
print("On Earth, a double-decker bus weighs", bus_weight, "kg")
print("On Mercury, a double-decker bus weighs", bus_weight * gravity_on_planets[0], "kg")
print("On Earth, a double-decker bus weighs", bus_weight, "kg")
print("The lightest a bus would be in the solar system is", bus_weight * min(gravity_on_planets), "kg") # min() -> valor minimo de una lista
print("The heaviest a bus would be in the solar system is", bus_weight * max(gravity_on_planets), "kg") # max() -> valor minimo de una lista

#segmentar listas
planets = ["Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune"]
planets_before_earth = planets[0:2]
print(planets_before_earth)
planets_after_earth = planets[3:]
print(planets_after_earth)

#unir listas
amalthea_group = ["Metis", "Adrastea", "Amalthea", "Thebe"]
galilean_moons = ["Io", "Europa", "Ganymede", "Callisto"]
regular_satellite_moons = amalthea_group + galilean_moons
print("The regular satellite moons of Jupiter are", regular_satellite_moons)

#ordenar lista
regular_satellite_moons.sort()
print("The regular satellite moons of Jupiter are", regular_satellite_moons)
#ordenar lista en reversa
regular_satellite_moons.sort(reverse=True)
print("The regular satellite moons of Jupiter are", regular_satellite_moons)
