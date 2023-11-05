'''l1=[10,20,30,40]
l2=[100,200,300,400]
#for i in range(max(len(l1),len(l2))):
 #   print([l1[i],l2[len(l1)-i]])
l=['eva','','hanna','pearl']
print(list(filter(None,l)))
#print(l)  
l1=[10,20,[300,400,[5000,6000],500],30,40]
l1[2][2].append(7000)
print(l1)
l1=['a','b',['c',['d','e',['f','g'],'k'],'l'],'m','n']
# add h,i,j
l2=['h','i','j']
l1[2][1][2].append('h')
l1[2][1][2].append('i')
l1[2][1][2].append('j')
l1[2][1][2].extend(l2)
print(l1)
l3=[5,10,15,20,25,50,20]
#print new list to find 20 in list then replace 20 with 200
print([ 200 if x==20 else x for x in l3 ])
print(l3)'''
class ATM:
    def __init__(self,pin):
        self.pin = pin
        self.original_bal = 50000
    def withdraw(self):
        n=int(input("Enter the amount to withdraw: "))
        self.k = self.original_bal - n
        return "Remaining balance: {0}".format(self.k)
        
    def deposit(self):
        x=int(input("Enter the amount to deposit: "))
        self.l = self.k + x
        return "Updated balance: {0}".format(self.l)
    def change(self):
        x = input("enter current pin")
        if(self.pin == x):
            q=input("enter new pin - ")
            self.pin = q
            r=input("enter updated pin")
            if(r == self.pin):
                print("entered pin is connfirmed")
                return "the modified pin is {0}\nnew object is created with current data".format(q)
            else:
                print("entered pin is invalid..please try again")               
        else:    
            return "wrong pin entered...please try again"
    
x = input("enter pin")
a=ATM(x)
while True:
    print("Deposit - 2 \nwithdraw - 1\nchange pin - 3\n")
    n=int(input("enter choice from 1 to 3 - "))
    if n == 1:
        print(a.withdraw())
    if n == 2:
        print(a.deposit())
    if n == 3:
        print(a.change())

        
        

        







