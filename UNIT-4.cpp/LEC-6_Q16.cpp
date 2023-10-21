/* 
Ravi is a teacher who wants to calculate and analyze the performance of his students in class. He needs a program that uses single inheritance to handle student information and their marks. Ravi will input the student's details, subject-wise marks, and additional sports marks for each student. The program should then calculate the total marks, average marks, and overall score by adding sports marks to the average.



Classes:

stu (Base Class):

Attributes: id (integer), name (character array)

Method: getstu() to accept the student's ID and name

Visibility: Protected



marks (Derived Class from stu):

Attributes: m (integer), p (integer), c (integer), spmarks (integer)

Methods:

getmarks() to accept the subject-wise marks in Mathematics (m), Physics (p), and Chemistry (c)

getsports() to accept the sports marks (spmarks)

show() to calculate and display the total marks, average marks, and overall score

Visibility: Protected

Input format :
The first line of input contains the student's ID and name, separated by a space.

The second line of input contains the subject-wise marks in Mathematics, Physics, and Chemistry separated by spaces.

The third line of input contains the additional sports marks.

Output format :
The output displays the following for each student:

Total =[ total_marks]

Average = [average_marks]

Average + Sports marks = [final_result].



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ ID ≤ 1000 (integer value representing student ID)

The student's name will contain a maximum of 20 characters (character array)

0 ≤ Marks in Mathematics, Physics, and Chemistry ≤ 100 (integer values)

0 ≤ Sports marks ≤ 100 (integer value representing additional sports marks)

All input values will be valid and within the specified range.

Sample test cases :
Input 1 :
12 Lee
89 90 93
99
Output 1 :
Total=272
Average=90.67
Average + Sports marks =189.67 */

