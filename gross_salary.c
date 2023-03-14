#include<stdio.h>

int main(){
    float basic, hra, da ;
    printf("Enter the basic salary: ");
    scanf("%f", &basic);
    if (basic<=10000){
        hra=0.2*basic;
        da=0.8*basic;
        printf("The gross salary of the employee is %f", basic+da+hra);

    }
    else if(basic>10000 && basic<=20000){
        hra=0.25*basic;
        da=0.9*basic;
        printf("The gross salary of the employee is %f Rupees.", basic+da+hra);

    }
    else{
        hra=0.3*basic;
        da=0.95*basic;
        printf("The gross salary of the employee is %.2f", basic+da+hra);

    }
    return 0;
}

#include<stdio.h>

int main(){
    int i;
    for (i=2 ; i<=10 ; i=i+2){
        printf("%d\n", i);
    }
    return 0;
}

#include<stdio.h>

int main(){
    int a=2 , b=5;
    (a & b)? printf("false\n") : printf("true\n");
    (a && b)? printf("false\n") : printf("true\n");
    return 0;
}
