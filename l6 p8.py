def numsys():
    n1=eval(input('enter the value of starting point: '))
    n2=eval(input('enter the value of ending point: '))
    print('binary','octal','hexadecimal')
    for i in range(n1,n2):
        print(bin(i),oct(i),hex(i))
numsys()
