n = int(input())
numbers = []
for i in range(0, n):
    x = int(input())
    numbers.append(x)

for i in range(0, len(numbers) - 1):
    if i % 2 == 0:
        # Los que quita Pachita
        numbers.remove(max(numbers))
    else:
        # Los que quita Alichos
        numbers.remove(min(numbers))
# Número restante
print(numbers[0])

# No funciona en el juez, 
# pero en mi computadora sí :(
