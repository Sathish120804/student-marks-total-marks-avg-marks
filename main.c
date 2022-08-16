#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
char name[50];
int sno,idno,tamil,english,maths,physics,chemistry,computer,biology;
int totalmarks;
float avgmarks;

printf("enter a  serial numal  number\t");
scanf("%d",&sno);
printf("enter a four digit id number\t");
scanf("%d",&idno);
printf("enter a name of the student\t\t");
scanf("%s",name);
printf("...................................................\n");
printf("...................................................\n");
printf("note:please enter a valid mark(only upto 100)\n");
printf("TAMIL..\t\t\t\t\t\t\t");
scanf("%d",&tamil);
printf("ENGLISH..\t\t\t\t\t\t");
scanf("%d",&english);

printf("MATHS..\t\t\t\t\t\t\t");
scanf("%d",&maths);
printf("PHYSICS..\t\t\t\t\t\t");
scanf("%d",&physics);
printf("CHEMISTRY..\t\t\t\t\t\t");
scanf("%d",&chemistry);
printf("COMPUTER..\t\t\t\t\t\t");
scanf("%d",&computer);
printf("...................................................\n");
printf("...................................................\n");
if(tamil<35){
    printf("TAMIL..\t\t\t\t\t\t\tNO GRADE (FAIL)'\n");
}
    
    else if(tamil<=50){
        printf("TAMIL\t\t\t\t\t\t\tD grade\n");
    }
    else if(tamil<=70){
        printf("TAMIL\t\t\t\t\t\t\tC grade\n");
    }
else if(tamil<=80){
        printf("TAMIL\t\t\t\t\t\t\tB grade\n");
    }
    else{
        printf("TAMIL\t\t\t\t\t\t\tA grade\n");
        
    }
   if(english<35){
    printf("ENGLISH..\t\t\t\t\t\tNO GRADE (FAIL)\n");
}
    
    else if(english<=50){
        printf("ENGLISH..\t\t\t\t\t\tD grade\n");
    }
    else if(english<=70){
        printf("ENGLISH..\t\t\t\t\t\tC grade\n");
    }
else if(english<=80){
        printf("ENGLISH..\t\t\t\t\t\t'grade\n");
    }
    else{
        printf("ENGLISH..\t\t\t\t\t\tA grade\n");
        
    }
    
    if(maths<35){
    printf("MATHS..\t\t\t\t\t\t\tNO GRADE (FAIL)\n");
}
    
    else if(maths<=50){
        printf("MATHS..\t\t\t\t\t\t\tD grade\n");
    }
    else if(maths<=70){
        printf("MATHS..\t\t\t\t\t\t\tC grade\n");
    }
else if(maths<=80){
        printf("MATHS..\t\t\t\t\t\t\tBgrade\n");
    }
    else{
        printf("MATHS..\t\t\t\t\t\t\tA grade\n");
        
    }
    if(physics<35){
    printf("PHYSICS..\t\t\t\t\t\tNO GRADE (FAIL)\n");
}
    
    else if(physics<=50){
        printf("PHYSICS..\t\t\t\t\t\tD grade\n");
    }
    else if(physics<=70){
        printf("PHYSICS..\t\t\t\t\t\tC grade\n");
    }
else if(physics<=80){
        printf("PHYSICS..\t\t\t\t\t\tBgrade\n");
    }
    else{
        printf("PHYSICS..\t\t\t\t\t\tA grade\n");
        
    }
    if(chemistry<35){
    printf("CHEMISTRY..\t\t\t\t\t\tNO GRADE (FAIL)\n");
}
    
    else if(chemistry<=50){
        printf("CHEMISTRY..\t\t\t\t\t\tD grade\n");
    }
    else if(chemistry<=70){
        printf("CHEMISTRY..\t\t\t\t\t\tC grade\n");
    }
else if(chemistry<=80){
        printf("CHEMISTRY..\t\t\t\t\t\tBgrade\n");
    }
    else{
        printf("CHEMISTRY..\t\t\t\t\t\tA grade\n");
        
    }
    if(computer<35){
    printf("COMPUTER..\t\t\t\t\t\tNO GRADE (FAIL)\n");
}
    
    else if(computer<=50){
        printf("COMPUTER..\t\t\t\t\t\tD grade'\n");
    }
    else if(computer<=70){
        printf("COMPUTER..\t\t\t\t\t\tC grade\n");
    }
else if(computer<=80){
        printf("COMPUTER..\t\t\t\t\t\tBgrade\n");
    }
    else{
        printf("COMPUTER..\t\t\t\t\t\tA grade\n");
        
    }
    printf("...................................................\n");
    printf("...................................................\n");
    totalmarks=tamil+english+maths+physics+chemistry+computer;
    printf("TOTAL MARKS..%d\t\t\t\t\n",totalmarks);
    avgmarks=totalmarks/6;
    printf("AVERAGE MARKS(6 subjects)..%f\t\t\t\n",avgmarks);
    printf("REMARKS OF THE STUDENT\n");
    if(totalmarks<100){
        printf("you must improve well\n");
    }
    else if(totalmarks<=300){
        printf("do well\n");
    }
    else if(totalmarks<=400){
        printf("good\n");
    }
    else if(totalmarks<=500){
        printf("very good\n");
    }
    else{
        printf("excellent\n");
    }
     printf("...................................................\n");
    printf("...................................................\n");
    
    printf("NOTE:you can add one by one student details ");

return 0;

}
