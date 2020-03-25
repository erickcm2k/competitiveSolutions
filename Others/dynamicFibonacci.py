def recursiveFibonacci(n): # Without memoization -> O(2^n)
    if n == 0 or n == 1:
        return 1
    else:
        return recursiveFibonacci(n - 1) + recursiveFibonacci(n - 2)

def dynamicFibonacci(n, computedFib = {}): # With memoization -> O(n)
    if n == 0 or n == 1:
        return 1
    else: 
        try:
            return computedFib[n]
        except KeyError:
            result = dynamicFibonacci(n - 1, computedFib) + dynamicFibonacci(n - 2, computedFib)
            computedFib[n] = result
            return result

print(dynamicFibonacci(35))
print(recursiveFibonacci(35))
