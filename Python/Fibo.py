def fibonacci(n):
    a, b = 0, 1
    count = 0
    while count < n:
        print(a, end=" ")
        a, b = b, a + b
        count += 1

# Example usage
terms = int(input("Enter number of terms: "))
print(f"Fibonacci series up to {terms} terms:")
fibonacci(terms)
