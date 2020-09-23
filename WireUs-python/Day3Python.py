# wireUS challenge day 3:
def myfunc(n):
    return lambda a: a ** n


cube = myfunc(3)
inp = int(input("Enter a number: "))
print(cube(inp))
