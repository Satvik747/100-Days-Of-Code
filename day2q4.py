'''Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/'''
r= (float)(input("Enter radius of circle: "))


print("Area is: ", round(3.1416 * r * r ,2))   
print("Circumference is: ", round(2 * 3.1416 * r,2))