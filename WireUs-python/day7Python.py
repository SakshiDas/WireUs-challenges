inp = int(input("Enter number: "))
d1 = {}
i = 1
for i in range(1, inp):
    square = i*i
    d1[i] = square

for x, y in d1.items():
    print(x, y)