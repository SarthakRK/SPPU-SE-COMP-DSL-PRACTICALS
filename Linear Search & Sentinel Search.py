# Problem Statement:-

'''a) Write a Python program to store roll numbers of student in array who attended training program in random order.
Write function for searching whether particular student attended training program or not,
using Linear search and Sentinel search.'''

#Code:-

arr=[]
n=int(input("Enter The Number Of Student Enroll In Training Program - "))
for i in range(n):
    roll_no=int(input("Enter The Roll No of Student - "))
    arr.append(roll_no)
  
    
def linear(arr):
    key=int(input("Enter The Roll No of Student To Search - "))
    n=len(arr)
    for i in range(n):
        if (arr[i]==key):
            flag=1
            break
        else:
            flag=0
    if flag==1:
        print("Training Attended")
    else:
        print("Training Not Attended")
       
        
def sentinel(arr):
    key=int(input("Enter The Roll No To Search - "))
    n=len(arr)
    last=arr[n-1]
    arr[n-1]=key
    i=0
    while(arr[i]!=key):
        i=i+1
    arr[n-1]=last
    if(i<n-1 or arr[n-1]==key):
         print("Training Attended")
    else:
        print("Training Not Attended")
        
        
while True:
    print("\n1.Linear Search\n2.Sentinel Search\n0.Exit")
    ch=int(input("Enter Choice - "))
    if(ch==1):
        linear(arr)
    if(ch==2):
        sentinel(arr)
    if(ch==0):
        break
