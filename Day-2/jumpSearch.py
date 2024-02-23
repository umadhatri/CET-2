import math
def jump_search(array, key):
    n = len(array)
    step = int(math.sqrt(n))

    prev = 0
    while array[min(step, n)-1] < key:
        prev = step
        step += int(math.sqrt(n))
        if prev >= n:
            return -1

    while array[prev] < key:
        prev += 1
        if prev == min(step, n):
            return -1

    if array[prev] == key:
        return prev
    return -1

# Example usage:

array = [1, 3, 5, 7, 9, 11, 13, 15, 17, 19]
key = 21

index = jump_search(array, key)

if index != -1:
    print("The key is found at index:", index)
else:
    print("The key is not found in the array.")