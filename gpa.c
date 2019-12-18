/*
*Meekaeel Mysorewala
* Description: This program takes multiple courses and grades, then loops through each printing the information 
* in a formated box.  Throughout the loop it calculates the total GPE and credits then uses them to find the student's GPA.
*/

#include <stdio.h>

int main()
{
  char myName[] = {"Meekaeel Mysorewala"};
  int pID = 1843116;
  char course[6][10] = {"COP3337","ENC1101","CEN2232","MAC2201","STA4434","COP4445"};/* an array of characters to create a string*/
  int  credits = 3;
  float grade[] = {2.00,4.00,2.50,3.50,3.00,1.40};
  int tCredits = 0;
  float tGpe = 0.00;
  int i = 0;
  
  printf("Student Name: %s\n", myName);
  printf("Panther ID: %d\n", pID);
  printf("-----------------------------------------------------------\n");
  printf("Course\t|      Credits\t|Grade|Grade Points Earned|\n");
  printf("-----------------------------------------------------------\n");
  
  for(i=0; i < 6; i++) /* loops through array of courses and grades to print*/
  {
	printf("%-5s\t| %6d\t| %4.2f| %18.2f|\n",course[i],credits,grade[i],(credits * grade[i]));
        printf("-----------------------------------------------------------\n");
    
        tGpe += (credits * grade[i]); /* calculates total grade points earned*/
        tCredits += credits;
  }
       
  printf("Total:\t| %6d\t|\t%18.2f|\n",tCredits,tGpe);
  printf("-----------------------------------------------------------\n");
  printf("Current GPA: %.2f\n", (tGpe/tCredits));
 }
 
  
 

