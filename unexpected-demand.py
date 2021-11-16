def filledOrders(order, k):
  total = 0
  for i, v in enumerate(sorted(order)):
    if total + v <= k:
      total += v    
    else:
      return i
    
    return len(order)

print(filledOrders([3, 2, 1], 3)) 
