
def bubbleSort():
    n = len(arr)

    for i in range(n):
        flag = False

        for j in range(0,n-i-1):
            if arr[j] > arr[j+1] :
                # swaping value 
                arr[j], arr[j+1] = arr[j+1], arr[j]

                # update the flag if swaping take place
                flag = True
                
                # optimize the algorithm
                if flag == False:
                    break


# test array for driven code
arr = [4,2,12,10]

# call function for sorting
bubbleSort(arr)         

print('Sorted array:')
for k in range(len(arr)):
    print("%d" %arr[k])
