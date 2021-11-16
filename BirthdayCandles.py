def birthdayCakeCandles(candles):
    c = 0
    temp = candles[0]
    
    for i in range(1, len(candles)):
        if(candles[i] > temp):
            temp = candles[i]
    
    for i in range(0, len(candles)):
        if(candles[i] == temp):
            c+=1 

    return c

arr = [4,4,3,2]
print(birthdayCakeCandles(arr))
