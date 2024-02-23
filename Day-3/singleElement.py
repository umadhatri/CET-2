def findSingle(arr, n):
    res = arr[0]
    for i in range(1, n):
        res = res ^ arr[i]
    return res

arr = [1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13]
print(findSingle(arr, len(arr)))