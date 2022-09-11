n=int(input()); m=int(input())
count=int(); countN=int(0)
i = n
j = int()

for i in range(n,m+1):
    count = 0
    for j in range(2,i):
        if (i%j)==0:
            count = 1
            break

    if count==0:
        print(i, end=" ")
        countN+=1

if countN<1:
    print("Null")