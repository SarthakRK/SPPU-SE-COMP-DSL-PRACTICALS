#Problem Statement:

'''Write a Python program to store the second year percentage of students in an array.
Write function for sorting array of floating point numbers in ascending order using
a) Insertion sort.
b) Shell Sort and display Top five scores.'''

#Code :-

def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1
        while j >= 0 and key < arr[j]:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key

def shell_sort(arr):
    n = len(arr)
    gap = n // 2
    while gap > 0:
        for i in range(gap, n):
            temp = arr[i]
            j = i
            while j >= gap and arr[j - gap] > temp:
                arr[j] = arr[j - gap]
                j -= gap
            arr[j] = temp
        gap //= 2


size = int(input("Enter the Number of Students = "))


student_percentages = []
for i in range(size):
    percentage = float(input(f"Enter the Percentage = "))
    student_percentages.append(percentage)

insertion_sort(student_percentages.copy())
print("\nSorted Array using Insertion Sort = ", student_percentages)

shell_sort(student_percentages.copy())
print("\nSorted Array using Shell Sort = ", student_percentages)

top_five = student_percentages[-5:][::-1]
print("\nTop Five Scores:", top_five)