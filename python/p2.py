'''from collections import Counter
a=Counter({'a':4,'b':3})
for i in a.elements():
    print(i,end=" ")
s=['float','flower','flight']
l=str(list(s[i]) for i in range(len(s)))
for i in range(len(l)):
    for j in range(len(l[i])):
        if l[i][j] == l[i+1][j]:
            print(l[j],end="")
        else:
            print(" "" ")

s=input("enter number with 0's and 1's")
c=0
d=0
if s.count("1") == 1:
    c=1
if s.count("0") == 1:  
     d=1  

for i in range(len(s)):
    if (s[i]=='1' and c==1) or (s[i]=='0' and d==1):
        s.replace('1',s[i+1])
print(s)'''
'''
Write a Python program illustrate the following when threads called in any order 
it should be in oerder like below 
thread A calls first(), thread B calls third(), and thread C calls second(). 
"firstsecondthird" is the correct output.

Output: 
first
second
third

'''
'''
import threading 

def first(lock):
    lock.acquire()
    print("first")
    lock.release()
    
def sec(lock):
    lock.acquire()
    print("second") 
    lock.release()
    
def third():
    #lock.acquire()
    print("third")
    #lock.release()
    
lock=threading.Lock()
t1=threading.Thread(target=first,args=(lock,))
t2=threading.Thread(target=sec,args=(lock,))
t3=threading.Thread(target=third,)
t2.start()
t1.start()
t3.start()
t2.join()
t1.join()
t3.join()'''


class Person:
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def display(self):
        print("name is {0} age is {1}".format(self.name,self.age))
    def eat(self):
        print("i eat rice")    

class Animal:
    def __init__(self,food):
        self.food=food
        self.aname=input()
    def display(self):
        print("{0} eat {1}".format(self.aname,self.food))
    def eat(self):
        print("i eat {0}".format(self.food))    

class Employee(Person,Animal):
    def __init__(self,name,age,salary,food):
        self.salary = salary
        Person.__init__(self,name,age)
        Animal.__init__(self,food)
    def display(self):
        Person.display(self)
        print("salary is {0}".format(self.salary))
        Animal.display(self)

e1=Employee("jk",30,200000,"grass")
e2=Employee("DD",34,200000,"goat")
p1=Person("gs",35)
p2=Person("ca",33)
a1=Animal("grass")
a2=Animal("goat")
x=[]
x.append(e1)
x.append(e2)
x.append(p1)
x.append(p2)
x.append(a1)
x.append(a2)
for i in x:
    i.display()