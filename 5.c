#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int one,dou,num1,num2,num3,num4;
        scanf("%d %d %d %d",&num1,&num2,&num3,&num4);
        one=(((num1/1000)*2)/10)+(((num1/1000)*2)%10)+(((num2/1000)*2)/10)+(((num2/1000)*2)%10)+(((num3/1000)*2)/10)+(((num3/1000)*2)%10)+(((num4/1000)*2)/10)+(((num4/1000)*2)%10);
        num1=num1%1000;
        num2=num2%1000;
        num3=num3%1000;
        num4=num4%1000;
        dou=(num1/100)+(num2/100)+(num3/100)+(num4/100);
        num1=num1%100;
        num2=num2%100;
        num3=num3%100;
        num4=num4%100;
        one+=(((num1/10)*2)/10)+(((num1/10)*2)%10)+(((num2/10)*2)/10)+(((num2/10)*2)%10)+(((num3/10)*2)/10)+(((num3/10)*2)%10)+(((num4/10)*2)/10)+(((num4/10)*2)%10);
        num1=num1%10;
        num2=num2%10;
        num3=num3%10;
        num4=num4%10;
        dou+=(num1/1)+(num2/1)+(num3/1)+(num4/1);
        int sum=one+dou;
        if(sum%10!=0)
            printf("Invalid\n");
        else
            printf("Valid\n");
    }
}