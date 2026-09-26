#include <stdio.h>

#define VIEW   1  
#define TRAIN  2  
#define TEST   4  
#define DEPLOY 8  

int main() {
    int userPermission;

    printf("Enter the user's permission value (0-15): ");
    if (scanf("%d", &userPermission) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    printf("----------------------- Allowed Operations -----------------\n");

    if (userPermission & VIEW) {
        printf(" View Model\n");
    }
    if (userPermission & TRAIN) {
        printf(" Train Model\n");
    }
    if (userPermission & TEST) {
        printf(" Test Model\n");
    }
    if (userPermission & DEPLOY) {
        printf("Deploy Model\n");
    }
    
    if (userPermission == 0) {
        printf("No permissions granted\n");
    }

    printf("-------------------- Advanced Access Check ------------------\n");

    if ((userPermission & TRAIN) && (userPermission & DEPLOY)) {
        printf("Access Granted: User has both Training and Deployment permissions.\n");
    } else {
        printf("Access Denied: User lacks either Training or Deployment permissions");
    }

}



    
    
    
    
}
