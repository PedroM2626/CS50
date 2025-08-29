def main():
    while True:
        try:
            dollars = float(input("Change owed: "))
            if dollars >= 0:
                break
        except ValueError:
            continue

    cents = round(dollars * 100)
    count = 0

    for coin in [25, 10, 5, 1]:
        count += cents // coin
        cents %= coin

    print(count)

main()
