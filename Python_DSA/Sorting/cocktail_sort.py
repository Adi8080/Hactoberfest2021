# Alogrithm for Cocktail Sort to sort element in ascending order

def cocktailSort(array):
    arrayLen = len(array)
    check = 1
    while(check == 1):
        check = 0
        for x in range(arrayLen-1):
            if (array[x] > array[x+1]):
                check = 1
                array[x], array[x+1] = array[x+1], array[x]
            if (x == arrayLen - 1):
                break
        if (check == 1):
            check = 0
            for y in reversed(range(arrayLen -1)):
                if array[y] > array[y+1]:
                    check = 1
                    array[y], array[y+1] = array[y+1], array[y]
                if (y == 0):
                    break

numbers = [3,45,1,3,2,8,5,0]
print("Unsorted Numbers: ", numbers)
cocktailSort(numbers)
print("Sorted Numbers: ", numbers)