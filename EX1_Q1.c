#include<stdio.h>
int main(){
    int age;
    char gender;
    char isSmaoker;
    int insuranceAmt=0;

    printf("\nEnter your age :- ");
    scanf("%d",&age);
    printf("\nEnter gender (m/f):- ");
    scanf(" %c",&gender);  
    printf("\nAre you a Smoker (y/n):- ");
    scanf(" %c",&isSmaoker);
    if(age>=21 && age <=30){
        insuranceAmt = 10000;
        if(gender=='f' || gender=='F'){
            insuranceAmt += 1000;
        }
        if(isSmaoker=='y' || isSmaoker=='Y'){
            insuranceAmt -= 1000;
        }
        printf("\nYour Insurance Amount is %d",insuranceAmt);
    }
    else if(age>=31 && age <=40){
         insuranceAmt = 15000;
        if(gender=='f' || gender=='F'){
            insuranceAmt += 1500;
        }
        if(isSmaoker=='y' || isSmaoker=='Y'){
            insuranceAmt -= 1500;
        }
        printf("\nYour Insurance Amount is %d",insuranceAmt);
    }
    else if(age>=41 && age <=50){
         insuranceAmt = 20000;
        if(gender=='f' || gender=='F'){
            insuranceAmt += 2000;
        }
        if(isSmaoker=='y' || isSmaoker=='Y'){
            insuranceAmt -= 2000;
        }
        printf("\nYour Insurance Amount is %d",insuranceAmt);
    }
    else if(age>=51 && age <=60){
         insuranceAmt = 40000;
        if(gender=='f' || gender=='F'){
            insuranceAmt += 4000;
        }
        if(isSmaoker=='y' || isSmaoker=='Y'){
            insuranceAmt -= 4000;
        }
        printf("\nYour Insurance Amount is %d",insuranceAmt);
    }
    else{
        printf("\nYou Are Not Eligible For Insurance");
    }
}
