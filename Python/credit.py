def main():
    while True:
        try:
            number = int(input("Send your credit card digits: "))
            if number >= 0:
                break
        except ValueError:
            pass

    #part 1
    str_num = str(number)
    firstdigit = int(str_num[0])
    twofirsdigits = int(str_num[:2])
    length = len(str_num)

    #part 2
    reversed_str = str_num[::-1]

    total_sum = 0
    for i in range(length):
        digit = int(reversed_str[i])
        if i % 2 == 1:
            prod = digit * 2
            total_sum += prod // 10 + prod % 10
        else:
            total_sum += digit

    #part 3
    if total_sum % 10 != 0:
        result = "INVALID"
    else:
        if length == 15 and (twofirsdigits == 34 or twofirsdigits == 37):
            result = "AMEX"
        elif length == 16 and 51 <= twofirsdigits <= 55:
            result = "MASTERCARD"
        elif (length == 13 or length == 16) and firstdigit == 4:
            result = "VISA"
        else:
            result = "INVALID"

    print(result)

main()
