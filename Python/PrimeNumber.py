n = 2
while n <= 100:
    if all(n % i != 0 for i in range(2, int(n**0.5) + 1)):
        print(n, end=" ")
    n += 1
