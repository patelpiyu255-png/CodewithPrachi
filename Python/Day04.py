list1 = [10, 20, 30]
list2 = [40, 50, 60]

list3 = []

for i in range(len(list1)):
    list3.append(list1[i])

for i in range(len(list2)):
    list3.append(list2[i])

print("Merged List:", list3)