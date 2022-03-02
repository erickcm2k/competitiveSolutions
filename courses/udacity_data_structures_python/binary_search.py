def binary_search(A, toFind):
    
    left = 0
    right = len(A) - 1

    while left <= right:
        mid = (left + right) // 2

        if A[mid] == toFind: # Returns index
            return mid
        elif A[mid] < toFind: # If smaller than toFind, discard current and left side.
            left = mid + 1
        else:                 # If greater than toFind, discard current and left side.
            right = mid -1
    return -1


test_list = [1,3,9,11,15,19,29]
test_val1 = 15

print(binary_search(test_list, test_val1))