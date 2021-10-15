def counting_sort_op(arr):
    max_ele = max(arr)
    min_ele = min(arr)
    freq = {i:0 for i in range(min_ele,max_ele+1)}
    for i in arr:
        freq[i] += 1
    sorted = []
    for k,v in freq.items():
        if(v != 0):  
            for j in range(v):
                sorted.append(k)
    return sorted

print(counting_sort_op([1,-10,-1,-2,-2,2,2,1,3,4,5]))
