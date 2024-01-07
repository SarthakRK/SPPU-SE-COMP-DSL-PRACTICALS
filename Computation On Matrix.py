#Problem Statement :-

'''Write a Python program to compute following computation on matrix : 
A. Addition of two matrices. 
B. Subtraction of two matrices. 
C. Multiplication of two matrices. 
D. Transpose of a matrix.'''

#Code :-

r1 = int(input("Enter number of rows for matrix1 : "))
c1= int(input("Enter number of columns for matrix1 : "))
matrix1=[]

for i in range (r1):
    row =[]
    for j in range (c1):
        value = int(input("Enter the value = "))
        row.append(value)
    print(row)
    matrix1.append(row)
print(matrix1)


r2= int(input("Enter number of rows for matrix2 : "))
c2= int(input("Enter number of columns for matrix2 : "))
matrix2=[]

for i in range (r1):
    row =[]
    for j in range (c1):
        value = int(input("Enter the value = "))
        row.append(value)
    print(row)
    matrix2.append(row)

print(matrix2)


def add():
    add = []
    for i in range (r1):
        row=[]
        for j in range (c1):
            value = matrix1[i][j]+matrix2[i][j]
            row.append(value)
        add.append(row)    
    print ("Addition : ",add)
add()


def sub():
    sub = []
    for i in range (r1):
        row=[]
        for j in range (c1):
            value = matrix1[i][j]-matrix2[i][j]
            row.append(value)
        sub.append(row)    
    print ("Subraction : ",sub)
sub()



def multi():
    multi=[]
    for i in range(r1):
        row=[]
        for j in range(c2):
            value = 0
            for k in range(c1):
                value += matrix1[i][k]*matrix2[k][j]
            row.append(value)
        multi.append(row)
    print("Multiplication : ",multi)
multi()


def trans():
    trans = []
    for i in range (r1):
        row=[]
        for j in range (c1):
            value = matrix1[j][i]
            row.append(value)
        trans.append(row)    
    print ("Transpose of Matrix 1 : ",trans)
trans()




while True :
    print ("\nEnter your choice :-\n1 For Addition\n2 For Subtraction\n3 For Multiplication\n4 For Transpose of Matrix1\n0 For Stop")
    num=int(input("Enter choice : "))
    if num==1:
        if r1==r2 and c1==c2:
            add()
        else:
            print("Not Possible")
    if num==2:
        if r1==r2 and c1==c2:
            sub()
        else:
            print("Not Possible")
    if num==3:
        multi()
    if num==4:
        trans()
    if num==0:
        break
