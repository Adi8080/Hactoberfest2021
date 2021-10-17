def findThreeLargestNumbers(array):
    threeLargest = [None, None, None]
    for num in array:
        updateLargest(threeLargest, num)
    return threeLargest


def updateLargest(threeLargest, num):
    if threeLargest[2] is None or threeLargest[2] < num:
        shiftAndUpdate(threeLargest, num, 2)
    elif threeLargest[1] is None or threeLargest[1] < num:
        shiftAndUpdate(threeLargest, num, 1)
    elif threeLargest[0] is None or threeLargest[0] < num:
        shiftAndUpdate(threeLargest, num, 0)
    else:
        pass


def shiftAndUpdate(array, number, shifts):
    for i in range(shifts):
        array[i] = array[i+1]
    array[shifts] = number


if __name__ == "__main__":
    array = [141, 1, 17, -7, -17, -27, 18, 541, 8, 7, 7]
    threelargest = findThreeLargestNumbers(array)
    print(threelargest)
