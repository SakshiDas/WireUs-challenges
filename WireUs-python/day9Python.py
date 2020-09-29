import datetime

x = datetime.datetime.now()
print("Day: ")
print(x.day)
print("Year: ")
print(x.year)
print("Name of weekday")
print(x.strftime("%A"))