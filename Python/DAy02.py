# write a python code for print only even number

numbers = [10, 15, 22, 31, 40]
for i in numbers:
    if i%2 == 0:
        print(i)
print("Total even numbers:", len([i for i in numbers if i%2 == 0]))        

numbers = [10, 15, 44, 35, 23]
count = 0

for i in numbers:
    if i%2 == 0:
        count += 1
        print(i)
print("Total even numbers:", count)