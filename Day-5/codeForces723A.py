temp_list = input().split()
main_list = []
for i in range(3):
    main_list.append(int(temp_list[i]))
main_list.sort()
a = main_list[2] - main_list[1]
b = main_list[1] - main_list[0]
result = a + b
print(result)