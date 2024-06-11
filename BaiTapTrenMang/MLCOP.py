n = int(input())
b= [
]

for i in range(n):
    b.append(list(map(int,input().split())))
a = list(1 for i in range(n+1))
for i in range(n):
    a[i] =1
    for j in range(0,i):
        if (b[j][1]<b[i][0]):
            a[i] = max(a[i],a[j]+1)
print(max(a))
