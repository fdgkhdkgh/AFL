#include <stdio.h>
#include <stdlib.h>
#include <sys/ipc.h>
#include <sys/shm.h>

//Q:shared memory的id是怎麼傳到ｃｈｉｌｄ　ｐｒｏｃｅｓｓ的？

//Q: shared memory在ｆｏｒｋ之後會傳給ｃｈｉｌｄ　ｐｒｏｃｅｓｓ嗎？
//

int main(){

	//https://blog.csdn.net/guoping16/article/details/6584058
	//IPC_PRIVATE : 建立新的共享對象
	//IPC_CREATE :
	//IPC_EXCL :
	//0600 : 我猜是 rw- --- --- 也就是擁有這個ｓｈｍ的ｐｒｏｃｅｓｓ有可讀可寫的權限
	int shm_id = shmget(IPC_PRIVATE, 1<<10, IPC_CREATE | IPC_EXCL | 0600);

	pid = fork();
	if(pid == 0){


	}else if(pid>0){

	}

	


	shmctl(shmid, IPC_RMID, NULL) ;

	return 0;
}
