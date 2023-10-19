my_string=input("Please enter your string: ")
my_str=my_string.casefold()
rev_str=reversed(my_str)
if list(my_str)==list(rev_str):
    print("Yes, your String is palindrome")
else:
    print("Sorry, your String is not palindrome")
