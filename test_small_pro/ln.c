#include <stdio.h>
/*
    ln -sf afl-as as

    這樣一來，就算在命令列執行的是as，真正執行的檔案還是afl-as
　　以環境變數的角度來說，執行的檔案是as
    這個技巧在gcc-clang也有用到


 */
int main(){
	printf("hello ln!\n");
	
	return 0;
}
