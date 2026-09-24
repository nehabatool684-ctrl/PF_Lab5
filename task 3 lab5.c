#include <stdio.h>

int main() {
    int choice1, choice2;
    
    printf("--- Classification System ---\n");
    printf("Choose a category:\n");
    printf("1. Animal\n");
    printf("2. Vehicle\n");
    printf("3. Food\n");
    printf("4. Human\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice1);
    
    switch(choice1) {
        case 1:
            printf("Choose an animal:\n");
            printf("1. Dog\n2. Cat\n3. Bird\n");
            printf("Enter your choice: ");
            scanf("%d", &choice2);
            switch(choice2) {
                case 1:
                    printf("You selected Dog</inline>\n");
                    break;
                case 2:
                    printf("You selected Cat</inline>\n");
                    break;
                case 3:
                    printf("You selected Bird</inline>\n");
                    break;
                default:
                    printf("Invalid animal choice.\n");
            }
            break;
            
        case 2:
            printf("Choose a vehicle:\n");
            printf("1. Car\n2. Bus\n3. Bike\n");
            printf("Enter your choice: ");
            scanf("%d", &choice2);
            switch(choice2) {
                case 1:
                    printf("You selected car\n");
                    break;
                case 2:
                    printf("You selected bus\n");
                    break;
                case 3:
                    printf("You selected bike\n");
                    break;
                default:
                    printf("Invalid vehicle choice.\n");
            }
            break;
            
        case 3:
            printf("Choose a food:\n");
            printf("1. Pizza\n2. Burger\n3. Biryani\n");
            printf("Enter your choice: ");
            scanf("%d", &choice2);
            switch(choice2) {
                case 1:
                    printf("You selected pizza</inline>\n");
                    break;
                case 2:
                    printf("You selected burger</inline>\n");
                    break;
                case 3:
                    printf("You selected biryani</inline>\n");
                    break;
                default:
                    printf("Invalid food choice.\n");
            }
            break;
            
        case 4:
            printf("Choose a human category:\n");
            printf("1. Male\n2. Female\n3. Child\n");
            printf("Enter your choice: ");
            scanf("%d", &choice2);
            switch(choice2) {
                case 1:
                    printf("You selected male\n");
                    break;
                case 2:
                    printf("You selected female\n");
                    break;
                case 3:
                    printf("You selected child\n");
                    break;
                default:
                    printf("Invalid human category choice.\n");
            }
            break;
            
        default:
            printf("Invalid main category choice.\n");
    }
    
    return 0;
}

