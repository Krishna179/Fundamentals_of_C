/*******************************************************************************
 * 48430 Fundamentals of C Programming - Assignment 3
 * 
 * Author(s):      Mitchell Lee, ...
 *  
 * Date of creation: 18/09/2019
 * 
 * Purpose: Provide a variety of core/basic functions
 * 
*******************************************************************************/

/*******************************************************************************
 * This provides a boolean answer that determines if a value is 
 * between (inclusive) a specified range.
 * inputs:
 * - char value: this is the value to test
 * - char min: this is the minium value that <value> can be and stil have the 
 *              function return true
 * - char max: this the maxium value that <value> can be and still have the 
 *              function return true
 * outputs:
 * - int: this will be true or false
*******************************************************************************/
int between(int value, int min, int max)
 {
    return (value >= min && value <= max);
}

void loginFuction()
{
  
  char username[20];
  char userpwd[10]; 
  int i;
  printf("Enter your username for the IMS : ");
  scanf("%s",username);
  printf("Enter your password : ");

 
  for(i=0;i<10;i++)
  {
  	 userpwd[i]=getch();
   	printf("*");   	
  }
  userpwd[i]='\0';
 
  printf("\n\nPress any key to continue");
  getch();
 
 if((!strcmp(username,"admin") && !strcmp(userpwd,"fundaC")) || 
  (!strcmp(username,"student") && !strcmp(userpwd,"fundaC")) || 
  (!strcmp(username,"lecturer") && !strcmp(userpwd,"fundaC")))
	 {
 	 printf("\n\n Successful Login");
 	}
 else
 	{
  		printf("\n\nIncorrect username or password");
 	}
}
