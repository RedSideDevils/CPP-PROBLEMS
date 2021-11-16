def isVowel(x):
    if(x == 'a' or x=='e' or x=='i' or x=='o' or x=='u'):
        return True
    return False

def findSubstring(s, k):
    stra = 'Not found!'
    a = 0
    
    for i in range(len(s) - k + 1):
        ans = 0
        for j in range(i, i + k):
            if(isVowel(s[j])):
                ans+=1
    
        if(ans > a):
            a = ans 
            stra = s[i:i + k] 
    print(stra)                      

findSubstring('azerdii', 5)

#Input azerdii
#output erdii
