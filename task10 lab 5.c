#include <stdio.h>
#include <math.h>

int main(){
    double accuracy, confidence, modelScore;
    int datasetSize;
    int userRole, modelStatus;
    int permissions;

    
    const int VIEW   = 1;   
    const int TRAIN  = 2;   
    const int TEST   = 4;   
    const int DEPLOY = 8;   

    printf("--------------------AI MODEL DECISION ENGINE---------------------\n");

    printf("Enter model accuracy (0-100): ");
    scanf("%lf", &accuracy);

    printf("Enter confidence score (0-100): ");
    scanf("%lf", &confidence);

    printf("Enter dataset size: ");
    scanf("%d", &datasetSize);

    printf("\nUser Roles:\n");
    printf("1. Admin\n");
    printf("2. Developer\n");
    printf("3. Researcher\n");
    printf("Enter user role: ");
    scanf("%d", &userRole);

    printf("\nModel Status:\n");
    printf("1. Ready\n");
    printf("2. Testing\n");
    printf("3. Training\n");
    printf("Enter model status: ");
    scanf("%d", &modelStatus);

    modelScore = (accuracy + confidence) / 2.0;

    printf("\n---------- User Information ----------\n");

    switch (userRole)
    {
        case 1:
            printf("User Role: Admin\n");

            switch (modelStatus)
            {
                case 1:
                    printf("Model Status: Ready\n");
                    break;

                case 2:
                    printf("Model Status: Testing\n");
                    break;

                case 3:
                    printf("Model Status: Training\n");
                    break;

                default:
                    printf("Invalid model status!\n");
            }
            break;

        case 2:
            printf("User Role: Developer\n");

            switch (modelStatus)
            {
                case 1:
                    printf("Model Status: Ready\n");
                    break;

                case 2:
                    printf("Model Status: Testing\n");
                    break;

                case 3:
                    printf("Model Status: Training\n");
                    break;

                default:
                    printf("Invalid model status!\n");
            }
            break;

        case 3:
            printf("User Role: Researcher\n");

            switch (modelStatus)
            {
                case 1:
                    printf("Model Status: Ready\n");
                    break;

                case 2:
                    printf("Model Status: Testing\n");
                    break;

                case 3:
                    printf("Model Status: Training\n");
                    break;

                default:
                    printf("Invalid model status!\n");
            }
            break;

        default:
            printf("Invalid user role!\n");
    }

    switch (userRole)
    {
        case 1:
            permissions = VIEW | TRAIN | TEST | DEPLOY;
            break;

        case 2:
            permissions = VIEW | TRAIN | TEST | DEPLOY;
            break;

        case 3:
            permissions = VIEW | TEST;
            break;

        default:
            permissions = 0;
    }

    int has_Deploy_Permission = permissions & DEPLOY;

    printf("\n---------- Model Information ----------\n");
    printf("Accuracy       : %.2lf%%\n", accuracy);
    printf("Confidence     : %.2lf%%\n", confidence);
    printf("Dataset Size   : %d\n", datasetSize);
    printf("Model Score    : %.2lf\n", modelScore);

    printf("\n---------- Memory Information ----------\n");
    printf("Size of accuracy variable : %zu bytes\n",
           sizeof(accuracy));
    printf("Size of dataset variable  : %zu bytes\n",
           sizeof(datasetSize));


    printf("Floor of Model Score : %.0f\n",
           floor(modelScore));


    printf("\n---------- Deployment Decision ----------\n");

    if (accuracy >= 80 && confidence >= 75)
    {
        if (datasetSize >= 1000)
        {
            if (modelStatus == 1)
            {
                if (has_Deploy_Permission != 0)
                {
                    printf("Deployment Ready: YES\n");
                }
                else
                {
                    printf("Deployment Ready: NO\n");
                    printf("Reason: User has no deployment permission.\n");
                }
            }
            else
            {
                printf("Deployment Ready: NO\n");
                printf("Reason: Model status is not Ready.\n");
            }
        }
        else
        {
            printf("Deployment Ready: NO\n");
            printf("Reason: Dataset size is less than 1000.\n");
        }
    }
    else
    {
        printf("Deployment Ready: NO\n");

        if (accuracy < 80)
            printf("Reason: Accuracy is below 80%%.\n");

        if (confidence < 75)
            printf("Reason: Confidence is below 75%%.\n");
    }

    printf("\nFinal Permission Check: %s\n",
           has_Deploy_Permission ? "Allowed" : "Denied");


    printf("Final Decision: %s\n",
           ((accuracy >= 80 &&
         confidence >= 75 &&
         datasetSize >= 1000 &&
         modelStatus == 1 &&
         has_Deploy_Permission != 0))? "DEPLOY MODEL" : "DO NOT DEPLOY");

    return 0;
}
