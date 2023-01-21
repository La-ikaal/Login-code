
#include <stdio.h>

int main(){
int passcode;
char str [50];
	
    printf("Hello, welcome to Codezone!!!\n\n");
    printf("Please Enter Username:");
fgets(str,50,stdin);
  
   printf("Enter your passcode:");
    scanf("%i", &passcode);
    printf("Login succeful Welcome aboard %s!", str);
    return 0;
}
