def swap(a, b):
    c = a
    a = b
    b = c

def bubble_sort(A):
    for i in range(0, len(A)):
        for j in range(0, len(A) - i - 1):
            if A[j] > A[j + 1]:
                A[j], A[j+1] = A[j+1], A[j] 


nums = [45, 62, 64, 23, 0, -199, 564, 6]
print(nums)
bubble_sort(nums)
print(nums)