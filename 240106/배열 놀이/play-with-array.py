arr=list(map(int,input().split()))

n=arr[0]
q=arr[1]

arr_n=list(map(int, input().split()))


#1번 문제 해결함

for i in range(q): #
    # arr_new=[0]*n #[0,0,0,0,0]
    arr_input=list(map(int,input().split()))
    # for j in range(n):
    #     arr_new[j]=arr_input[j]

    if arr_input[0]==1:
        print(arr_n[arr_input[1]-1])
    elif arr_input[0]==2:
        for elem in arr_n:
            if arr_input[1] not in arr_n:
                print('0')
                break
            else:
                print(arr_n.index(arr_input[1])+1)
                break

    else: # 3번문제일 때
        for k in range(arr_input[1]-1,arr_input[2]):
            print(arr_n[k] ,end=" ")
        print()