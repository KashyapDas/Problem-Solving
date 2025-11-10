def find_largest_smallest(numbers):
    largest = max(numbers)
    smallest = min(numbers)
    return largest, smallest

# Example usage
nums = [12, 45, 2, 67, 23, 89, 1]
largest, smallest = find_largest_smallest(nums)
print(f"Largest: {largest}, Smallest: {smallest}")
