#include <stdio.h>
#include <stdlib.h>


/*
	__afl_area_ptr
	__afl_global_area_ptr


	__afl_maybe_log -> __afl_setup -> __afl_setup_first -> getenv & shmat





*/


int main(){
	
	int a;
	scanf("%d", &a);

	if(a>0){
		printf("hi!\n");
	}else{
		printf("he!\n");
	}



	return 0;
}


