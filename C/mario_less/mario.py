height = 0

while True:
    height = input("What is the height? ")

    if not height.isdigit():
        continue

    height = int(height)

    if 1 <= height <= 8:
        break

if height > 0:
    for i in range(height):
        #part 1
        print(" " * (height - i - 1), end='')
        print("#" * (i + 1))
