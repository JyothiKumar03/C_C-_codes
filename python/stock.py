'''from tkinter.constants import S

'''
class Stock:
    def __init__(self,name,company,price,position):
        self.name=name
        self.company=company
        self.price=price
        self.position=position
     
    def __init__(self):
            self.name=input()
            self.company=input()
            self.price=int(input())
            self.holdings=list(input().split())
            self.position=input()
            self.total_money=len(self.holdings)*self.price
    #def __repr__(self):
    #       return self
print("enter data")
s1=Stock()
#s2=Stock() 
print(s1.__dict__)    
print("no of stock holders are: {0}".format(len(s1.holdings)))       
print("total money from stocks are:{0}".format(s1.total_money))
