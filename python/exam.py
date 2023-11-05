# n=int(input("Enter the no. of cities : "))
# l=[]
# for i in range(n):
#     city=input()
#     area=int(input())
#     popu=int(input())
#     l.append([city,area,popu])
# l.sort(key=lambda x:x[2]/x[1],reverse=True)
# print(l[0][0],"have the highest maximum density of population")

f = open("kmit.txt","r")
l = f.readlines()
print("reversed order")
for i in reversed(l):
    print(i,end=" ")
nl = 0
nc = 0
nw = 0
for i in l:
    line = l.strip("\n")
    w = l.split()
    nl+=1
    nw+=len(w)
    nc+=len(line)
f.close()
print(nl,nw,nc)

'''
import re

ftr = 'input.txt'
ftw = 'output.txt'
delimiter = [',', ';']
phone = []
mail = []


def validemailorphone(s):
    if re.search("[a-zA-Z]@[a-zA-Z]\.[a-zA-Z]*", s):
        return 'e'
    elif re.search("\+[0-9]{2}-[0-9]{10}", s) or re.search("[0-9]{3}-[0-9]{8}", s):
        return 'p'


f1 = open(ftr, 'r')
line = f1.readlines()
for i in line:
    item = str(i)
    item = item.strip('\n')
    for j in delimiter:
        item = item.replace(j,' ')
    word = item.split(' ')
    for i in word:
        if (validemailorphone(i) == 'p'):
            phone.append(i)
        elif (validemailorphone(i) == 'e'):
            mail.append(i)
f2 = open(ftw, 'w+')
strdata = "Maail IDs:" + '\n'
for i in mail:
    strdata = strdata + i + '\n'
strdata = strdata + "\nPhone Numbers :" + '\n'
for i in phone:
    strdata = strdata + i + '\n'
f2.write(strdata)
f1.close()
f2.close()

'''
import re
phone = []
email = []
delimiter = [';',',']
f1 = "input.txt"
f2 = "output.txt"

def check(s):
    if re.search("[a-zA-z]@[a-zA-z]\.[a-zA-Z]*",s):
        return 'e'
    if re.search("\+[0-9]{2}-[0-9]{10}",s) or re.search("\+[0-9]{3}-[0-9]{8}",s):
        return 'p'  

file1 = open(f1,'r')
lines = file1.readlines()
for i in lines:
    item = str(i)
    item = item.strip('\n')
    for j in delimiter:
        item = item.replace(j,' ')
    word = item.split(' ')    
    for k in word:
        if(check(k) == 'p'):
            phone.append(k)
        if(check(k) == 'e'):
            email.append(k)
file2 = open(f2,'w+')
strdata = "mailids" + '\n'
for i in email:
    strdata = strdata + i + '\n'
strdata = strdata + '\nphoneno' + '\n'    
for i in phone:
    strdata = strdata + i + '\n'
f2.write(strdata)    
f1.close()
f2.close()

