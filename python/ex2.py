n=input("give a positive integer ")
s1=0
s2=0
for i in range(len(n)):
    if i%2==0:
        s1=s1+int(n[i])
    else:
        s2=s2+int(n[i])
print("difference of sums -> ",s1-s2)