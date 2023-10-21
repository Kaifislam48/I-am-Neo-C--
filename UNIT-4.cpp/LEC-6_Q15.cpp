/* You are tasked with developing a program that calculates the total and average marks for a class of students. The program takes the input for the number of students in the class, followed by their respective names and marks in three subjects: Physics, Chemistry, and Mathematics. The program then calculates the total marks and average marks for each student, as well as the total marks and average marks for the entire class.



Create a class named Marks with data members for roll number, name, and marks. Create three other classes inheriting the Marks class, namely Physics, Chemistry, and Mathematics, which are used to define marks in the individual subjects of each student. The roll number for each student will be generated automatically.



Note: This kind of question will help in clearing Infosys recruitment.

Input format :
The first line of input contains an integer, 'n', representing the number of students in the class.

The next 'n' lines contain the name of each student followed by three integers separated by a line, representing their marks in Physics, Chemistry, and Mathematics, respectively.

Output format :
For each student, display their roll number, name, and total marks (after using the 2 new line).

After displaying the marks for all students, display the total marks of the entire class and the average marks of the class, each on a new line.



Refer to the sample output for the formatting specifications.

Code constraints :
The student name will be a non-empty string with at most 100 characters.

The marks for Physics, Chemistry, and Mathematics will be integers between 0 and 100 (inclusive).

1 ≤ n ≤ 10

Each student has a unique roll number starting with 1.

Sample test cases :
Input 1 :
2
Ashwin
90
90
89
Aasin
67
89
78
Output 1 :
Roll Number: 1 
Name: Ashwin 
Total marks: 269

Roll Number: 2 
Name: Aasin 
Total marks: 234

Total marks of the class is: 503
The average marks of the class is: 251.5 */

