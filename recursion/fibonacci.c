#include <stdio.h>
void print_fibo(int n,int first,int second,int count){
   if(count>n){
    return;
   }
    printf("%d",first);
    print_fibo(n,second,first+second,count+1);
   
}
int main(){
    int n;
    printf("enter the number to find fibonnaci");
    
    scanf("%d",&n);
    print_fibo(n,0,1,1);

    return 0;

}
