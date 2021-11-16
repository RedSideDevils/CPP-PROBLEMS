def minMaxSum(arr):
  arr_sorted = sorted(arr)
  return sum(arr_sorted[:4]), sum(arr_sorted[-4:])

    
arr = [1,2,3,4,5]
print(minMaxSum(arr))
