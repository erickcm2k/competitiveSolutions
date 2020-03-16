def isBeautiful(year):
    for i in range(0, len(year)):
        for j in range(1 + i, len(year)):
            #print(f'{year[i]} , {year[j]}')
            if year[i] == year[j]:
                return False
    return True

year = input()
if int(year) >= 1000 and int(year) <= 9000:
    for i in range( int(year) + 1, 9013):
        if isBeautiful(str(i)):
            print(i) 
            break