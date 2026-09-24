#include <stdio.h>

int main() {
    float programming, maths, ai,att_percent, ave;
    printf("enter marks for following: programming,maths,ai,attendence percentage");
    scanf("%f %f %f %f", &programming,&maths,&ai,&att_percent);

    if(programming>=50){
        if(maths>=50){
            if(ai>=50){
                if(att_percent>=75){
                    ave=(maths+programming+ai)/3;
                    printf("Student average is");
                    if(ave>=80) printf(" excellent");
                    else if(ave>=70) printf(" very good");
                    else if(ave>=50) printf(" satisfactory");
                    else printf(" poor");
                }
                else printf("attendance percentage not enough,not eligible");
                
            } 
            else printf("ai marks not enough,not eligible");
        }
        else printf("maths marks not enough,not eligible");
        
    }
    else printf("programming marks no enough,not eligible");

    
    return 0;
}
