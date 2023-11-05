import threading
def greet(n,Lock1,Lock2):
    for i in range(n): 
        Lock1.acquire()   
        print("hi")
        Lock2.release()

def name(n,Lock1,Lock2):
    for i  in range(n):
        Lock2.aquire()
        print("name")
        Lock1.release()

if __name__ == '__main__':
    l1=threading.Lock()
    l2=threading.Lock()
    l1.acquire()
    t1=threading.Thread(target=greet,args=(2,l1,l2))
    t2=threading.Thread(target=name,args=(3,l1,l2))
    t1.start()
    t2.start()
    t1.join()
    t2.join()

    print("completed")





