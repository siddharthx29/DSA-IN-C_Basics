#include <stdio.h>

int main(){
	int arr[50],n,i,key,found=0;
	
	printf("enter the no . of elements:");
	scanf("%d", &n);
	
	printf("enter %d elements: \n ",n );
	for(i=0; i<n; i++)
	scanf("%d",&arr[i]);
}

printf("element to the element to search:");
scanf("%d", &key);

for (i=0; i<n; i++){
	if (arr[i]== key){
		found=1;
		break;
	}
}

if (found == 1){
	printf("element %d found at position %d/n",key,i+1);
}
else 
printf("element %d found at position %d/n", key);

}
return 0;
}

