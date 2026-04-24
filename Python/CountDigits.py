def countDigits(n):
    count =0
    while n != 0:
        n = n//10
        count =count + 1
    return count  
n=345
print(countDigits(n))  
    