from datetime import datetime
now=datetime.now()
date_time=now.strftime("%m/%d/%Y\n%H:%M:%S")
def PointOfSale():
    name=input("Enter Name:")
    burgertype=input("Enter Burger Type:")
    quantity=int(input("Enter Quantity:"))
    if burgertype=="big" :
        amnt=quantity*100
        amount=amnt+(13*amnt)/100
    elif burgertype=='small' :
        amnt=quantity*50
        amount=amnt+(13*amnt)/100
    print(date_time)    
    print(name)
    print(int(amount))
PointOfSale()    




















        
	 
