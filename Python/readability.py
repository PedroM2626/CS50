def main():
    text = input("text: ")
    countL = 0
    countS = 0
    countW = 1

    for char in text:
        if char.isalpha():
            countL += 1
        if char == ' ':
            countW += 1
        if char in ['.', '!', '?']:
            countS += 1

    L = (countL / countW) * 100
    S = (countS / countW) * 100
    finalscore = 0.0588 * L - 0.296 * S - 15.8

    if finalscore < 1:
        print("Before Grade 1")
    elif finalscore > 16:
        print("Grade 16+")
    else:
        print(f"Grade {round(finalscore)}")

main()
