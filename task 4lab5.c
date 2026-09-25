#include <stdio.h>

int main() {
    int convo_cat1;
    int convo_cat2;
    char name[50];
    
    printf("----------------------Conversation------------------------\n");
    printf("Choose conversation category:\n");
    printf("1.Greeting\n2.Study\n3.Weather\n4.Help\n");
    scanf("%d", &convo_cat1);
    
    if (convo_cat1 == 1) {
        printf("Choose conversation category:\n");
        printf("1.Hello\n2.How are you\n3.Goodbye\n");
        scanf("%d", &convo_cat2);
        
        switch(convo_cat2) {
            case 1:
                printf("Whats your name? ");
                getchar(); // Clear newline left in buffer by scanf
                fgets(name, sizeof(name), stdin);
                printf("Hello, %s", name);
                break;
            case 2:
                printf("How are you dear?\n");
                break;
            case 3:
                printf("Goodbye honey!\n");
                break;
        }
    } 
    else if (convo_cat1 == 2) {
        printf("Choose conversation category:\n");
        printf("1.Programming\n2.Mathematics\n3.AI\n");
        scanf("%d", &convo_cat2);
        
        switch(convo_cat2) {
            case 1:
                printf("What do you want to know regarding Programming?\n");
                break;
            case 2:
                printf("What do you want to know regarding Mathematics?\n");
                break;
            case 3:
                printf("What do you want to know regarding AI?\n");
                break;
        }
    } 
    else if (convo_cat1 == 3) {
        printf("Choose conversation category:\n");
        printf("1.Today\n2.Tomorrow\n3.Forecast\n");
        scanf("%d", &convo_cat2);
        
        switch(convo_cat2) {
            case 1:
                printf("How was your day today?\n");
                break;
            case 2:
                printf("Plans for tomorrow?\n");
                break;
            case 3:
                printf("Want to know the forecast for next hour?\n");
                break;
        }
    } 
    else {
        printf("Choose conversation category:\n");
        printf("1.About Chatbot\n2.Commands\n3.Exit\n");
        scanf("%d", &convo_cat2);
        
        switch(convo_cat2) {
            case 1:
                printf("What do you want to know regarding Chatbots?\n");
                break;
            case 2:
                printf("What do you want to know regarding commands?\n");
                break;
            case 3:
                printf("Want to exit?\n");
                break;
        }
    }
    
    return 0;
}
