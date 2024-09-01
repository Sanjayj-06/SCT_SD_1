#include <stdio.h>
#include <conio.h>

int celsius_to_fahrenheit(float tempc , float result);
int celsius_to_kelvin(float tempc ,float result);
int fahrenheit_to_celsius(float tempf ,float reslult);
int fahrenheit_to_kelvin(float tempf , float result);
int kelvin_to_celsius(float tempk , float result);
int kelvin_to_fahrenheit(float tempk , float result);

int main(){
    printf("Temperature Conversion");
    int input , output;
    printf("Enter the input temperature type (1 for celsius , 2 for kelvin , 3 for fahrenheit) : ");
    scanf("%d",&input);
    printf("Enter the output temperature type (1 for celsius , 2 for kelvin , 3 for fahrenheit) : ");
    scanf("%d",&output);
    float temp,tempc,tempk,tempf;
    printf("Enter the input temperature  : ");
    scanf("%d",&temp);
    float result;

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

int celsius_to_fahrenheit(float tempc ,float result){
    result=(tempc * 9/5) + 32;
    printf("Temperature : %f",result);
    return 0;
}