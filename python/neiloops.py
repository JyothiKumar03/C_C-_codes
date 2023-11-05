class Student:
    def __init__(self,age,name,rollno,size):
        self.age = age
        self.name = name
        self.rollno = rollno
        self.marks = [0]*size
    def __repr__(self): #magical methord inbuild constructor 
        return "age {0} name {1} roll no {2} marks {3}".format(self.age,self.name,self.rollno,sum(self.marks))
    def __eq__(self,other):
        if self.age == other.age and self.name == other.name and self.rollno == other.rollno:
            return self.age,self.name,self.rollno
        return False  
    def __gt__(self,other):
        return self.age>other.age
    def __setitem__(self,index,value):
        
        self.marks[index]=value
        
std1 = Student(48,'shobs',13,3)
std2 = Student(29,'ayyagaru',512,3)
std3 = Student(109,'ayyagaru',512,3)
std1[0]=30
std1[1]=20
std1[2]=40
std2[0]=50
std2[1]=10
std2[2]=0
std3[0]=0
std3[1]=70
std3[2]=10
#std1.display()
#std2.display()
print(std1)
print(std2)
print(std3)
print(id(std1),id(std2),id(std3))
print(std1.__dict__)
print(std2.__dict__)
print(std3.__dict__)
if(std2 == std3):
    print("yes they r equal")
else:
    print("no")
if std1 > std2:
    print('s1 is older')
else:
    print("s2 is older")
slist=[]
slist.append(std1)
slist.append(std2)
slist.append(std3)
slist.sort(key=lambda x:sum(x.marks),reverse=True)
print(slist)