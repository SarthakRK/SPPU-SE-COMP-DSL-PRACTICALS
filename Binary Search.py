#Problem Statement:-

'''b) Write a Python program to store roll numbers of student array who attended training program in sorted order.
Write function for searching whether particular student attended training program or not,
using Binary search(recursive and non-recursive method).'''

#Code:-

arr = []
n = int(input("Enter The Number Of Student Enroll In Training Program - "))

for i in range(0, n):
   j = int(input("Enter The Roll No of Student - "))
   arr.append(j)

print(arr)

key = int(input("Enter The Roll No of Student To Search - "))

def binsrch(arr, key):
    flag = 0
    start = 0
    end = n - 1
    
    while start <= end:
        mid = (start + end) // 2  # Use integer division to get an integer mid value
        if arr[mid] == key:
            flag = 1
            print("Training Attended")
            break
        elif key > arr[mid]:
            start = mid + 1
        else:
            end = mid - 1
            
    if flag == 0:
        print("Training Not Attended")

binsrch(arr, key)
