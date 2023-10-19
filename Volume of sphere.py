height = float(input('Height of cylinder: '))
radian = float(input('Radius of cylinder: '))
pi=22/7
def volume_cylinder(pi,height,radian):
    volume=pi*radian*radian*height
    return volume
def Area_cylinder(pi,height,radian):
    sur_area=((2*pi*radian)*height)+((pi*radian**2)*2)
    return sur_area
vol=volume_cylinder(pi,height,radian)
print("Volume is: ", vol)
area=Area_cylinder(pi,height,radian)
print("Surface Area is: ", area)
