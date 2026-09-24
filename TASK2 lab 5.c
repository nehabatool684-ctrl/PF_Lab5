#include <stdio.h>

int main() {
    int age, income, credit_score;
    char loan_status;
    
    printf("Enter age, income, credit score, loan Existing (Y/N): ");
    scanf("%d %d %d %c", &age, &income, &credit_score, &loan_status);
    
    if (age >= 21 && income >= 100000 && credit_score >= 750 && loan_status == 'N') {
        printf("High approval chance\n");
    } 
    else if (age >= 21 && income >= 75000 && credit_score >= 650 && loan_status == 'Y') {
        printf("Manual Review\n");
    } 
    else if (age >= 21 && income >= 50000 && credit_score >= 600) {
        printf("Possibly eligible\n");
    } 
    else {
        printf("Rejected\n");
    }
    
    return 0;
}

