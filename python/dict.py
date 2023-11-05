d1={1:"s",2:"d",3:"p"}
d2={4:"l",5:"m"}
#d={}
'''
1.
for k in d1:
    #print(k)
    d[k]=d1[k]
for k in d2:
    #print(k)
    d[k]=d2[k]   
print(d) 
2.
d.update(d1)
d.update(d2)
print(d)
3.
d={i:j  for k in [d1,d2] for i,j in k.items()}
print(d)
4.
d={**d1,**d2}
print(d)
l1=[1,2,3]
l2=[4,5,6]
d={}
for i in range(len(l1)):
    for j in range(len(l2)):
        if i==j:
            d[l1[i]]=l2[j]

print(d)'''
box_num1 = [1,2,3,4,5,6,7,8,9,10]
ball_count=[]
s=0
for i in box_num1:
            s=s+box_num1[i]/10
            box_num1[i] =  box_num1[i]//10
            ball_count.append(s)
print(max(ball_count))            
c=0
        l={}
        for i in range(0,len(arr)-1):
            if arr[i] == arr[i+1]:
                l['f']=arr[i] 
                c=c+1
                l['f']=c
        maxk=max(l,key=l.get)        
        return maxk