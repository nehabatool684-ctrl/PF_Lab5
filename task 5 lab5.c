#include <stdio.h>
int main(){
	int confidence, user_type;
	
	printf("user type:");
	printf("\n1.Authorized\n2.Unauthorized");
	scanf("%d",&user_type);
	printf("Confidence:");
	scanf("%d",&confidence);
	
	if (confidence>=80){
		printf("Face Recognized");
	}
	else if(confidence>=50 && confidence<=79){
		printf("Manual Confidence");
	}
	else if(confidence>=80 && user_type==1){
		printf("Access Granted");
	}
	else if(confidence<50 || user_type==2){
		printf("Access Denied");
	}
}