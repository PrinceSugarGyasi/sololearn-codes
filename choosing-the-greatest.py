def max(x, y, z):
    if x >y and x>z:
        return x
    elif y>x and y>z:
        return y
    elif z>x and z>y:
        return z
    elif x==y and x==z and y==z:
        print("\nThey are the same!")

first = int(input('Please enter first number: '))
second = int(input('\nPlease enter second number: '))
third = int(input('\nPlease enter third number: '))

print('\n', max(first, second, third))