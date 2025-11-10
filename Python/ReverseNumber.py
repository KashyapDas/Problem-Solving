# Reverse a number using while loop.
number = int(input("Enter a number : "))

while number>=1:
    remainder = number%10
    print(remainder,end="")
    number= int(number/10)
