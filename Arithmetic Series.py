str1="yes"
a=0
d=0
n=0
def sumOfAP(a,d,n): 
    sum=0
    i=0
    while(i<n): 
        sum=sum + a 
        a=a+d 
        i=i+1
    return sum
while(str1=="yes"):
    n=eval(input("Enter the number of terms in series: "))
    a=eval(input("Enter the first term of series: "))
    d=eval(input("Enter the common difference of series: "))
    print(sumOfAP(a,d,n))
    str1=input("Do u wish to continue?")
else:
    print('Exit')
