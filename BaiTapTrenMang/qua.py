def nt(n):
    if n<=1:return False
    else:
        for i in range(2,int(n**0.5)+1):
            if n%i==0:
                return False
        return True
def uoc(int n):
    for i in range(2,n+1):
        if nt(i) and n%i==0:
            yield i
            
while 1:
    try:
        n = int(input())
        a = list(map(int,input().split()))
        S = int(input())
        b = []

        for i in a:
            c = []
            for j in uoc(i):
                c.append(j)
            b.append(c)
        for 
    except:break
