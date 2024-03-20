def inefficientSieveOfEratosthenes(n):
    prime = [True] * (n+1)
    prime[0] = prime[1] = False
    p = 2
    while(p <= n):
        if prime[p]:
            for num in range(p * p, n + 1, p):
                prime[num] = False
        p += 1
    
    for p in range(2, n+1):
        if prime[p]:
            print(p, end=" ")        

n = int(input())
inefficientSieveOfEratosthenes(n)

