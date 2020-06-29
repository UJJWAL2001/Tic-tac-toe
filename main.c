#include<stdio.h>
 char matrix[3][3];
 char example[3][3]={0,1,2,3,4,5,6,7,8};
 int i,j;
 void init_matrix(void);   //initiates the matrix
 void createboard(void);    // creat ttt board
void WinCheck(void);    // check for win

int main()
{   // main code

    	init_matrix();
 	
 	
 	createboard();
    return 0;
}


    
   void init_matrix(void){
 	int i, j ;
 	for(i=0 ; i<3;i++){
 		for(j=0; j <3 ; j++){
 			matrix[i][j]="";
		 }
	 }
 }
 
void createboard(){
	int t; 
	for (t=0;t<3;t++){
		
			
		
		printf("  %c  |  %c  |  %c\t\t\t  %d  |  %d  |  %d ", matrix[t][0],matrix[t][1],matrix[t][0],
															example[t][1],example[t][2],example[t][3]);
		if(t!=2)
		printf("\n-----|-----|---- \n");
	
	}
	printf("\n");
}




void WinCheck(void)
{
    
    
    // write defination here
}
