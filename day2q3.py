'''Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/'''
l=(float)(input("Enter length of rectangle: "))
b=(float)(input("Enter breadth of rectangle: "))
print("Area is: ", l*b)
print("Perimeter is: ", 2*(l+b))