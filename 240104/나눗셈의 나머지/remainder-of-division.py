a,b=map(int,input().split())
count=0
arr=[0]*b
while a>1:
    arr[a%b]+=1
    a=a//b


for elem in arr:
    count+=elem*elem
print(count)


# 50 4 1
# 12 4 2
# 3 4 3