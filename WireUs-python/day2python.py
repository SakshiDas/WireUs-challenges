# wireUS challenge day 2:

inp = int(input("Enter a number: "))
count = 0
while inp != 0 :
    inp //= 10
    count = count+1

print(count)

