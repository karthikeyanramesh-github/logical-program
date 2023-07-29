#include<stdio.h>
#include<stdlib.h>

void fact(){

    int n;
    long double fact = 1;

    printf("\nEnter Your Number: ");
    scanf("%d",&n);

    if(n < 0){
        printf("Error: Don't Enter Negative Numbers Put Positive Numbers\n");
    }

    else if(n == 0 || n == 1){
        printf("Factorial Number is 1\n");
    }

    else{

        while(n > 1){
            fact = fact * n;
            n = n - 1;
        }
        
        /*
        for(int i=2;i<=n;i=i+1)
            fact = fact * i;
        */

        printf("Factorial Number = %.Lf\n",fact);
    }

}

int eo(){

    int num;

    printf("\nEnter a Number: ");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("%d is a Even Number\n",num);
    }
    
    else{
        printf("%d is a Odd Number\n",num);
    }

}

void lsd(){

    int inp,dig;

    printf("\nEnter a Number: ");
    scanf("%d",&inp);

    while(inp > 0){
        dig = inp % 10;
        printf("Least Significant Digit: %d\n",dig);
        inp = inp / 10;
    }
}

void prime(){

    int n,i,m = 0,s = 0;

    printf("Enter Your Number: ");
    scanf("%d",&n);

    m = n / 2;

    for(i=2;i<=m;i++)    
    {    
        if(n%i==0)    
        {      
            s = 1;    
            break;    
        }    
    } 

    if(s == 0){
        printf("%d is Prime Number\n",n); 
    }  

    else{
        printf("%d is not Prime Number\n",n); 
    }  

}

void pdn(){

    int num,rev = 0,temp;

    printf("enter your number: ");
    scanf("%d",&num);

    temp = num;

    while(num!=0){
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }

    if(temp == rev){
        printf("Given Number = %d\n",temp);
        printf("Reverse Number = %d\n",rev);
        printf("%d is Palindrome Number\n",temp);
    }

    else{
        printf("Given Number = %d\n",temp);
        printf("Reverse Number = %d\n",rev);
        printf("%d is Not a Palindrome Number\n",temp);
    }

}

void an(){

    int num,sum = 0,dig,temp;

    printf("Enter Your Number: ");
    scanf("%d",&num);

    temp = num;

    while(num > 0){
        dig = num % 10;
        sum = sum + (dig * dig * dig);
        num = num / 10;
    }

    if(temp == sum){
        printf("%d is an Amstrong Number\n",temp);
    }
    else{
        printf("%d is not an Amstrong Number\n",temp);
    }

}

void pf(){
    int mark,pass = 35;
    char grade;

    printf("Enter Your Mark: ");
    scanf("%d",&mark);

    if(mark >= pass){

        if(mark > 90){
            grade = 'A';
        }
        
        else if(mark > 80){
            grade = 'B';
        }
        
        else if(mark > 70){
            grade = 'C';
        }
        
        else if(mark > 60){
            grade = 'D';
        }

        else if(mark > 50){
            grade = 'E';
        }
        
        else{
            grade = 'F';
        }
        
        printf("You Passed the Examination with Grade: %c\n",grade);

    }
    
    else{
        grade = 'G';
        printf("You Failed the Examination with Grade: %c\n",grade);
    }

    printf("\n---------------------------------");
    printf("\nNOTE :-)\n");
    printf(">>> Mark 90 to 100 : Grade 'A'\n");
    printf(">>> Mark 80 to 90 : Grade 'B'\n");
    printf(">>> Mark 70 to 80 : Grade 'C'\n");
    printf(">>> Mark 60 to 70 : Grade 'D'\n");
    printf(">>> Mark 50 to 60 : Grade 'E'\n");
    printf(">>> Mark 40 to 35 : Grade 'F'\n");
    printf(">>> Mark Below 35 : Grade 'G'\n");
    printf("-----------------------------------\n");

}

void xp(){

    int mark;
    float temp;

    printf("Enter Your Total Mark: ");
    scanf("%d",&mark);

    temp = mark / 5;

     printf("Mark = %d | Percentage = %.2f%%\n",mark,temp);
}

void xiip(){

    int mark;
    float temp;

    printf("Enter Your Total Mark: ");
    scanf("%d",&mark);

    temp = mark / 6;

    printf("Mark = %d | Percentage = %.2f%%\n",mark,temp);

}

void ln(){

    int num1,num2,num3;

    printf("Enter Your Number1: ");
    scanf("%d",&num1);

    printf("Enter Your Number2: ");
    scanf("%d",&num2);

    printf("Enter Your Number3: ");
    scanf("%d",&num3);

    if(num1 > num2 && num1 > num3){
        printf("%d is a Largest Number\n",num1);
    }

    else if(num2 > num1 && num2 > num3){
        printf("%d is a Largest Number\n",num2);
    }

    else if(num3 > num1 && num3 > num2){
        printf("%d is a Largest Number\n",num3);
    }

    else{
        printf("[*] Error : Number are Not Distinct!\n");
    }

}

void sn(){

    int temp,a,b;

    printf("Enter Your Number1: ");
    scanf("%d",&a);

    printf("Enter Your Number2: ");
    scanf("%d",&b);

    printf("Before Swapping Data A = %d | B = %d\n",a,b);

    temp = a;
    a = b;
    b = temp;

    /*
    p = p + r;
    r = p - r;
    p = p - r;
    */

    /*
    int sum = p + r;
    p = sum - p;
    r = sum - r;
    */

   printf("After Swapping Data A = %d | B = %d\n",a,b);
   
}

void fc(){

    float temperature;

    printf("Enter Your Fahrenheit: ");
    scanf("%f",&temperature);

    temperature = ((temperature - 32) * 5) / 9;

    printf("Celcius = %.2f\n",temperature);

}

void cf(){

    float temperature;

    printf("Enter Your Celcius: ");
    scanf("%f",&temperature);

    temperature = ((temperature * 9) / 5) + 32;

    printf("Fahrenheit = %.2f\n",temperature);
}

int main(){

    while(1){

        int choice;

        printf("\n\t<<< List of Choice >>>\n\n");
        printf("[*] Find Factorial Number : Put 1\n");
        printf("[*] Find Even & Odd Number : Put 2\n");
        printf("[*] Find Least Significant Digit : Put 3\n");
        printf("[*] Find Prime Number : Put 4\n"); 
        printf("[*] Find Palindrome Number : Put 5\n");
        printf("[*] Find Amstrong Number : Put 6\n");
        printf("[*] Find Pass or Fail Given Mark : Put 7\n");
        printf("[*] Find X-TH Percentage Given Mark : Put 8\n");
        printf("[*] Find XII-TH Percentage Given Mark : Put 9\n");
        printf("[*] Find Largest Number Given Values : Put 10\n");
        printf("[*] Swapping Two Number : Put 11\n");
        printf("[*] Convert Farenheit to Celcius : Put 12\n");
        printf("[*] Convert Celcius to Fahrenheit : Put 13\n");
        printf("[*] Exit : Put 14\n\n");

        printf("Enter Your Choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("\n[*] Factorial Number");
            fact();
            break;

            case 2:
            printf("\n[*] Even & Odd Number");
            eo();
            break;

            case 3:
            printf("\n[*] Least Significant Digit");
            lsd();
            break;

            case 4:
            printf("\n[*] Prime Number\n");
            prime();
            break;

            case 5:
            printf("[*] Palindrome Number\n");
            pdn();
            break;

            case 6:
            printf("\n[*] Amstrong Number\n");
            an();
            break;

            case 7:
            printf("\n[*] Pass or Fail\n");
            pf();
            break;

            case 8:
            printf("\n[*] X-TH Percentage\n");
            xp();
            break;

              case 9:
            printf("\n[*] XII-TH Percentage\n");
            xiip();
            break;

            case 10:
            printf("\n[*] Largest Number\n");
            ln();
            break;

            case 11:
            printf("\n[*] Swapping Two Number\n");
            sn();
            break;

            case 12:
            printf("\n[*] Fahrenheit to Celcius\n");
            fc();
            break;

            case 13:
            printf("\n[*] Celcius to Fahrenheit\n");
            cf();
            break;

            case 14:
            printf("[*] Successfully Exited!\n");
            exit(0);

            default:
            printf("[*] Error : Please Enter Your Correct List of Choice!\n"); 
        }

        int c;

        printf("\n[*] Do You Want to Continue? (1: Yes, 0: No): ");
        scanf("%d",&c);

        if(c==0){
            printf("[*] Program Exited!\n");
            break;
        }

    }

    return 0;

}