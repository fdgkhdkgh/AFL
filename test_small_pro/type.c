#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>


typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;

#ifdef __x86_64__
	typedef unsigned long long u64;
#else
	typedef uint64_t u64;
#endif /* ^__x86_64__ */



int main(){

	u64 a = (int)-1;

	printf("%llu %llx\n", a, a);

	printf("%ld\n", sizeof(sizeof(int)));

	printf("%ld %llx\n", sizeof(atol("-1")), atol("-1"));

	return 0;
}

