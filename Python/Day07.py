arr = [1, 2, 2, 3, 1, 8, 3]

for i in range(len(arr)):

    count = 0

    for j in range(len(arr)):

        if arr[i] == arr[j]:
            count = count + 1

    if count == 1:
        print("First non-repeating element =", arr[i])
        break