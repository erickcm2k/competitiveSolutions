number = input()
luckyCount = 0
for digit in number:
    if digit == '4' or digit == '7':
        luckyCount += 1
    
if luckyCount == 4 or luckyCount == 7:
    print('YES')
else:
    print('NO')