arr = [1, 2, 3, 5]

n = 5

total = 0
array_sum = 0

# Sum of 1 to n
for i in range(1, n + 1):
    total = total + i

# Sum of array elements
for i in range(len(arr)):
    array_sum = array_sum + arr[i]

missing = total - array_sum

print("Missing number =", missing)