#Problem Statement:-

'''Write a Python program to compute following operations on String: 
a) To display word with the longest length. 
b) To determines the frequency of occurrence of particular character in the string.
c) To check whether given string is palindrome or not. 
d) To display index of first appearance of the substring. 
e) To count the occurrences of each word in a given string.'''

#Code:-

def Wlong():
    string = input ("ENTER THE STATEMENT : ")
    max=0
    words=string.split()
    for i in range (len(words)):
        if(len(words[i])>max):
            max = len(words[i])
            pos = i
    print ("LONGEST WORD IS : ",words[pos])
    print("ITS LENGTH IS : ",max)
Wlong ()


def count_char ():
    string=input("ENTER THE STRING : ")
    char=input("ENTER THE CHARACTER TO CHECK : ")
    count =0
    for i in string:
       if i==char:
        count=count+1
       else:
        pass
    print("FREQUENCY OF CHARACTER OCCURS IN A STRING IS ",count)
count_char()


def palindrom():
    string = input("ENTER THE WORD : ")
    if (string==string[::-1]):
        print ("STRING IS PALINDROME ")
    else:
        print ("STRING IS NOT PALINDROME ")
palindrom()


def substring():
    main= input("ENTER THE STATEMENT : ")
    sub= input("ENTER THE SUBSTRING : ")
    count = 0
    done = False
    for i in range (0,len(main)):
        match = True
        if sub[0]==main[i]:
            for j in range (0,len(sub)):
                if sub[j]!=main[i+j]:
                    match=False
                    print ("SUBSTRING IS NOT PRESENT ")
                    break
                else:
                    count = count + 1
                    if match == True and count == len(sub):
                        print ("SUBSTRING IS PRESENT ")
                        print ("POSITION START ",i)
                        done = True
                        break
        if done == True :
            break
substring()


def count_word():
    string=input("ENTER THE STATEMENT : ")
    words=statement.split()
    wcounts={}
    for word in words :
        if word not in wcounts:
            wcounts[word]=1
        else:
            wcounts[word]+=1
    print ("OCCURRENCE OF EACH WORD IN STATEMENT IS : ",wcounts)
count_word()
