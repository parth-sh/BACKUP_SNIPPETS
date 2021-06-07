def maxnumber(n, k):
    for il in range(0, k): 
        answer = 0
        il = 1

        while n // il > 0: 
            temporary = (n//(il * 10))*il + (n % il) 
            il *= 10
            if temporary > answer: 
                answer = temporary 
        n = answer         
    return answer; 
    
   
n = int(input())
k = int(input())
print(maxnumber(n, k))