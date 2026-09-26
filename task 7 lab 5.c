#include <stdio.h>

int main() {
    int confidence;
    float threshold;

    printf("Confidence score:");
    scanf("%d",&confidence);

    printf("Confidence Threshold");
    scanf("%f",&threshold);
    if(confidence>=90) {
        printf("Very high\n");}
    else if(confidence>75){
        printf("High\n ");
    } 
    else if (confidence>=50) {
        printf("Moderate\n");}
    else printf("Low\n");

    (confidence>=threshold && confidence>=50)?printf("Accepted predection"):printf("prediction not accepted");
    return 0;
}
