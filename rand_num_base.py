import random
""" 
This piece of code takes number input and the number input is used as the base and the outputted number of random numbers
"""
m = int(input("Suggest a number base: \n"))
for i in range(m) :
    value = random.randint(1, 100)
    print(value % m)
