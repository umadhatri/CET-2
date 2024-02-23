def exponential_search(arr, n, x):
    if arr[0] == x:
        return 0

    i = 1
    while i < n and arr[i] <= x:
        i = i * 2

    return binary_search(arr, i // 2, min(i, n - 1), x)

def binary_search(arr, l, r, x):
    while l <= r:
        mid = l + (r - l) // 2

        if arr[mid] == x:
            return mid

        elif arr[mid] < x:
            l = mid + 1

        else:
            r = mid - 1

    return -1

# Driver code
arr = [2, 3, 4, 10, 40, 54, 61, 87]
n = len(arr)
x = 61

result = exponential_search(arr, n, x)

if result == -1:
    print("Element is not present in array")
else:
    print("Element is present at index", result)