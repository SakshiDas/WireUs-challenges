# wireUS challenge day 1

inp = input("Enter: ")

try:
    val = int(inp)
    print("Integer")
except ValueError:
    try:
        val = float(inp)
        print("Float")
    except ValueError:
        print("String")


