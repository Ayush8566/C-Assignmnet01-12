#include <stdio.h>
int main(){
    char str[]="racecar";
     for ( int i = 0; str[i] != '\0'; i++) {
        for(int j=0;j<i;j++){
            if(str[i]== str[j]){
                printf("The first repititive character in the string %s is %c ",str,str[i]);
               return 0;
            }
        }
    }
    printf("No repetitive characters found in the string \"%s\".\n", str);
    return 0;
   
}