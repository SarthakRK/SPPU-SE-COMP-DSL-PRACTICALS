#Problem Statement :-

'''Write a python program that computes the net amount of a bank account based on a transaction log from console input.
The transaction log format is shown as following:
D 100 W 200 (Withdrawal is not allowed if balance is going negative. Write functions for withdraw and deposit)
D means deposit while W means withdrawal.

Suppose the following input is supplied to the program:

D 300
D 300
W 200
D 100

Then, the output should be: 500'''

#Code :-

balance = 0
def deposite(amount):
    global balance
    balance = balance+amount
def withdraw(amount):
    global balance
    if (balance>amount):
        balance = balance-amount
    else:
        print("insufficient balance")
    
blog = []
while True:
    data = input ("Enter the Transaction = ")
    if (data=="stop"):
        break
    blog.append(data.split())
print(blog)
for trans in blog :
    if (trans[0]=="D"):
        deposite(int(trans[1]))
    elif (trans[0]=="W"):
        withdraw(int(trans[1]))
print("Your Balance",balance)
