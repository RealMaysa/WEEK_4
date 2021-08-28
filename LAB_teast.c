#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,s;
    double pt;
printf("Enter a first side: ");
scanf("%d",&a);
printf("Enter a second side: ");
scanf("%d",&b);
printf("Enter a third side: ");
scanf("%d",&c);
if(a+b>c && a+c>b && b+c>a){
printf("%d %d %d\n",a,b,c);
s=(a+b+c)/2;
printf("%d %d %d %d\n",s,a,b,c);
pt=pow(s*(s-a)*(s-b)*(s-c),1.0f/2.0f);
printf("02 %d %d %d %d\n",s,a,b,c);
printf("%f",pt);
}
else{printf("%d %d %d\n",a,b,c);
    printf("0");
}





    return 0;
}