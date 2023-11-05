"""
Write a python program to create list of dictionaries
1. store student details (id, name and marks) as a dictionary 
2. find which student has maximum marks

Test case:

Enter number of students:3                                                                                              
Enter student details:                                                                                                  
101 Hima 78 96 82                                                                                                       
102 Nikitha 87 68 91                                                                                                    
103 Ram 74 65 45                                                                                                        

Student details:                                                                                                        
[{'id': '101', 'name': 'Hima', 'marks': [78, 96, 82]}, {'id': '102', 'name': 'Nikitha', 'marks': [87, 68, 91]}, {'id': '
103', 'name': 'Ram', 'marks': [74, 65, 45]}]                                                                            

101 Hima has highest marks 256


l1=[]
l2=[]
n=int(input("Enter number of students:"))
print("Enter student details:")
for i in range(n):
    d=dict()
    l=input().split()
    d['id'] = l[0]
    d['name'] = l[1]
    d['marks'] = [int(l[2]),int(l[3]),int(l[4])]
    #d['max marks'] = d['marks'][2]+d['marks'][3]+d['marks'][4]
    marks = int(l[2])+int(l[3])+int(l[4])
    #l2=l1.append(l[0],l[2:4],marks)
    l1.append(d)
    l2.append([l[0],l[1],marks])
print()
print("Student details:")
print(l1)
print()
l2.sort(key=lambda x:x[-1])
print(l2[-1][0],l2[-1][1],"has highest marks",l2[-1][-1])
string s1=strcpy(s1,a);
        """








