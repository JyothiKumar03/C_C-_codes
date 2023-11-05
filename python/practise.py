'''l=["apple","banana"]
print(l)
l[0:1]=["mangp","watermelon"]
print(l)
l.append("kmit")
x=len(l)
l=list(("ayshe","s","dae","resea","teva"))
print(l[-4:-1],x,type(l))
l2=["a","e","i",'o','u']
l.extend(l2)
l.pop()
print(l)
#list comprehenstion: first action then looping is done
[print(x) for x in l]
new=[]
[new.append(x) for x in l if "a" in x]
print(new)
l1=[10,20,30,40]
l2=[100,200,300,400]
#l2=l2.reverse()
#print([l1[i],l2[i]] for i in range(len(l1)))
for i in range(max(len(l1),len(l2))):
    print([l1[i],l2[len(l1)-i]])
#print([l1[i],l2[::-1]] for i y in )
from typing_extensions import Final


try:
    x=10000
    y=10
    print(x/y)
except ZeroDivisionError:
    print("zero division has occutred has occured")
'''
x = True * False
print(x)