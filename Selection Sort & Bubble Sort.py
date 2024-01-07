#Problem Statement :-

'''Write Python program to store the first year percentage of students in an array.
Write function for sorting array of floating point numbers in ascending order using 
Selection Sort 
Bubble sort'''

#Code :-

def bubblesort(array):
    n=len(array)
    for j in range(n-1):
        for k in range(n-j-1):
            if array[k]>array[k+1]:
                array[k],array[k+1]=array[k+1],array[k]


array=[]
num=int(input("ENTER THE NUMBER OF STUDENTS : "))
for i in range(num):
    per=float(input("ENTER THE PERCENTAGE OF STUDENTS : "))
    array.append(per)
    
bubblesort(array)

print("SORTING USING BUBBLE SORT IS : ")
for i in range (len(array)):
    print(array[i])


def selectionsort(array):
    
    for j in range(len(array)):
        min=j
        for k in range(j+1,len(array)):
        
            if array[min]>array[k]:
                min=k
        if(min!=j):
            array[j],array[min]=array[min],array[j]


array=[]
num=int(input("ENTER THE NUMBER OF STUDENTS : "))
for i in range(num):
    per=float(input("ENTER THE PERCENTAGE OF STUDENTS : "))
    array.append(per)
    
selectionsort(array)

print("SORTING USING SELECTION SORT IS :")
for i in range (len(array)):
    print(array[i])