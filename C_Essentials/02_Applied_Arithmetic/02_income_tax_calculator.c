#include<stdio.h>

float tax_rel(float tax, int age, int gender);

int main(){
    float salary;
    printf("Enter Your Salary: ");
    scanf("%f", &salary);

    float tax = 0;
    
    int age;
    int gender;
   	
    printf("Enter Your Age: ");
	scanf("%d", &age);
	
    printf(" 1. Male \n 2. Female \n 3. Other \n");
    printf("Enter Your Gender: ");
    scanf("%d", &gender);

    if(salary <= 400000){
        tax = 0;
    }
    else if(salary <= 800000){
        tax = ((salary - 400000) * 5) / 100;
    }
    else if(salary <= 1200000){
        tax = (400000 * 5) / 100 + ((salary - 800000) * 10) / 100;
    }
    else if(salary <= 1600000){
        tax = (400000 * 5) / 100 + (400000 * 10) / 100 + ((salary - 1200000) * 15) / 100;
    }
    else if(salary <= 2000000){
        tax = (400000 * 5) / 100 + (400000 * 10) / 100 + (400000 * 15) / 100 + ((salary - 1600000) * 20) / 100;
    }
    else {
        tax = (400000 * 5) / 100 + (400000 * 10) / 100 + (400000 * 15) / 100 + (400000 * 20) / 100 + ((salary - 2000000) * 25) / 100;
    }

    tax = tax_rel(tax, age, gender);
    
    printf("Your Tax : %.2f\n", tax);

    return 0;
}


float tax_rel(float tax, int age, int gender){
	if(age > 65){
		tax -= (tax * 5)/100;
	}
	if(gender == 2){
		tax -= (tax * 2.5)/100;
	}
	else if(gender == 3){
		tax -= (tax * 5)/100;
	}
	return tax;
}
