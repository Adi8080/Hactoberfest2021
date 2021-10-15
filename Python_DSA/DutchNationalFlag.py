def swap(A, i, j):
 
    temp = A[i]
    A[i] = A[j]
    A[j] = temp
 
def threeWayPartition(A):
 
    start = mid = 0
    pivot = 1
    end = len(A) - 1
 
    while mid <= end:
        if A[mid] < pivot:      # current element is 0
            swap(A, start, mid)
            start = start + 1
            mid = mid + 1
        elif A[mid] > pivot:    # current element is 2
            swap(A, mid, end)
            end = end - 1
        else:                   # current element is 1
            mid = mid + 1
 
 
if __name__ == '__main__':
 
    A = [0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0]
    threeWayPartition(A)
    print(A)
