arr1 = [1, 2, 4, 6]
arr2 = [3, 5, 7, 8]

target = 9

print("Pairs with sum", target, ":")

for i in range(len(arr1)):
    for j in range(len(arr2)):

        if arr1[i] + arr2[j] == target:
            print(arr1[i], "+", arr2[j], "=", target)