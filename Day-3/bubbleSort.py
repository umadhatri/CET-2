def bubbleSort(arr):
    for i in range(len(arr)):
        for j in range(len(arr)-1):
            if arr[i] < arr[j]:
                (arr[i], arr[j]) = (arr[j], arr[i])
    return arr

arr = [4, 1, 5, 7, 2, 8, 3, 9, 6]
print(bubbleSort(arr))