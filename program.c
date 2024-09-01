#include <stdio.h>
#include <conio.h>

int celsius_to_fahrenheit(int tempc , int result);
int celsius_to_kelvin(int tempc ,int result);
int fahrenheit_to_celsius(int tempf ,int reslult);
int fahrenheit_to_kelvin(int tempf , int result);
int kelvin_to_celsius(int tempk , int result);
int kelvin_to_fahrenheit(int tempk , int result);

int main(){
    printf("Temperature Conversion");
    int input , output;
    printf("Enter the input temperature type (1 for celsius , 2 for kelvin , 3 for fahrenheit) : ");
    scanf("%d",&input);
    printf("Enter the output temperature type (1 for celsius , 2 for kelvin , 3 for fahrenheit) : ");
    scanf("%d",&output);
    int temp,tempc,tempk,tempf;
    printf("Enter the input temperature  : ");
    scanf("%d",&temp);
    int result;

    if (input==1 && output==2){
        tempc=temp;
        celsius_to_fahrenheit(tempc , result);
    }
    else if (input==1 && output==3){
        tempc=temp;
        celsius_to_kelvin(tempc ,result);
    }
    else if (input==2 && output==1){
        tempf=temp;
        fahrenheit_to_celsius(tempf ,reslult);
    }
    else if (input==2 && output==3){
        tempf=temp;
        fahrenheit_to_kelvin(tempf , result);
    }
    else if (input==3 && output==1){
        tempk=temp;
        kelvin_to_celsius(tempk , result);
    }
    else if (input==3 && output==2){
        tempk=temp;
        kelvin_to_fahrenheit(tempk , result);
    }
    else{
        printf("Invalid Choice of Standards");
    }
    return 0;
}