#include <stdio.h>
//接收最多两个函数名之外的参数。
int main(int argc, char* argv[]){
	int i=0;
	if(argc==1){
		printf("you only have 1 argument. you suck.\n");
	}else if(argc>1 && argc < 4){
			printf("here's our arguments:\n");
			for(i=1;i<argc;i++){
					printf("%s ", argv[i]);
				}
			printf("\n");
		}
		else{
			printf("you have too many arguments. you suck.\n");
		}
	return 0;
}
