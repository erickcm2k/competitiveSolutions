def binary_search(array, target):
    
    left = 0
    right = len(array) - 1

    while left <= right:
        mid = (left + right) // 2

        if array[mid] == target: # Returns index
            return mid
        elif array[mid] < target: # If smaller than target, discard current and left side.
            left = mid + 1
        else:                 # If greater than target, discard current and left side.
            right = mid -1
    return -1