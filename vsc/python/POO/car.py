class Elevator:
    def __init__(self, starting_floor):
        self.make="The elevator company"
        self.floor= starting_floor

# To create the object
elevator = Elevator(1)
print(elevator.make) # "The Elevator company"
print(elevator.floor) # 1

class Car:
    def __init__(self):
        self.color = "Red" # ends up on the object
        self.make = "Mercedes" # becomes a local variable in the constructor

car = Car()
print(car.color) # "Red"

