Your_name=input('Your name: ')
Father_name=input('Father name: ')
Roll_number=input('Your Roll Number: ')
Computermarks=int(input('Enter Computer marks: '))
Englishmarks=int(input('Enter English marks: '))
Islamiatmarks=int(input('Enter Islamiat marks: '))
Mathematicsmarks=int(input('Enter Mathematics marks: '))
Physicsmarks=int(input('Enter Physics marks: '))
Marksobtained=Computermarks+Englishmarks+Islamiatmarks+Mathematicsmarks+Physicsmarks
Percentage=float((Marksobtained/500)*100)
print("\n")
print(Your_name)
print(Father_name)
print(Roll_number)
print("Computer English Islamiat Mathematics Physics\n",Computermarks," \t",Englishmarks," \t",Islamiatmarks,"\t ",Mathematicsmarks,"\t      ",Physicsmarks)
print("Obtained Marks\n",Marksobtained)
print("Percentage\n%.2f"%Percentage)

if(Percentage>=80):
    print("Grade: 'A+'")
elif(Percentage>=70):
    print("Grade: 'A'")
elif(Percentage>=60):
    print("Grade: 'B'")
elif(Percentage>=50):
    print("Grade: 'C'")
else:
    print("Grade: 'F'")
