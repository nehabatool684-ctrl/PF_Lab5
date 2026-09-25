#include <stdio.h>

int main(){
	int problem;
	int algo;
	
	printf("Problem Type:\n1.Classification\n2.Regression\n3.Clustering\n4.Computer Vision,");
	scanf("%d",&problem);
	
	switch(problem){
		case 1:
			printf("Choose Algorithm Type:\n1.Logistic Regression\n2.Decision Tree\n3.KNN");
			scanf("%d",&algo);
			switch(algo){
				case 1:
					printf("you selected Logistic Regression ");
					break;
				case 2:
				    printf("you selected Decision Tree ");
					break;
				case 3:
					printf("you selected KNN ");
					break;
			}
			break;
		case 2:
			printf("Choose Algorithm Type:\n1.Linear Regression\n2.Polynomial Regression\n3. SVR");
			scanf("%d",&algo);
			switch(algo){
				case 1:
					printf("you selected Linear Regression ");
					break;
				case 2:
					printf("you selected Polynomial Regression ");
					break;
				case 3:
					printf("you selected  SVR");
					break;
			}
			break;
		case 3:
			printf("Choose Algorithm Type:\n1.K-Means\n2.Hierarchical Clustering\n3.DBSCAN");
			scanf("%d",&algo);
			switch(algo){
				case 1:
					printf("you selected K-Means ");
					break;
				case 2:
					printf("you selected Hierarchical Clustering ");
					break;
				case 3:
					printf("you selected DBSCAN");
					break;
		
			}
			break;
 
		case 4:
			printf("Choose Algorithm Type:\n1.CNN\n2.YOLO\n3.R-CNN");
			scanf("%d",&algo);
			switch(algo){
				case 1:
					printf("you selected CNN ");
					break;
				case 2:
					printf("you selected YOLO ");
					break;
				case 3:
					printf("you selected R-CNN");
					break;
			}
			break;
	}
}