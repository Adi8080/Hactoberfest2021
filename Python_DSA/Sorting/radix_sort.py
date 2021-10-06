def custom_count_sort(arr,exp):
    n = len(arr)
    sorted = [0]*(n)
    count = [0]*(10)
    
    # Storing count occurences
    for i in range(n):
        idx = arr[i]//exp
        count[idx%10] += 1
    
    # Change count[i] so that count[i] now contains actual
    # position of this digit in output array
    for i in range(1,10):
        count[i] += count[i-1]
    
    # Creating output sorted array
    i = n-1
    while i>=0:
        idx = arr[i]//exp
        out_idx = count[idx%10]-1
        sorted[out_idx] = arr[i]
        count[idx%10] -= 1
        i -= 1
    
    # copy to main arr
    for i in range(len(arr)):
        arr[i] = sorted[i]
    print(f"Watch the sort exp : {exp} => {arr}")
    
def radix_sort(arr):
    max_arr = max(arr)
    exp = 1 # it is 10^i where i is 0 right now.
    while max_arr//exp > 0:
        custom_count_sort(arr,exp)
        exp *= 10
    return arr
arr = [170, 45, 75, 90, 802, 24, 2, 66]
print(radix_sort(arr))
