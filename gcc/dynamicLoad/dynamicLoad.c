#include <dlfcn.h>
#include<stdio.h>
int main(void)
{
	char src[] = "dynamic";
	int (*pStrLenFun) (char *str);
	void *phandle=NULL;
	char *perr=NULL;
	phandle=dlopen("./libstr.so.1",RTLD_LAZY);
	if(!phandle){
		printf("failed load library!\n");
	}	
	perr = dlerror();
	if(perr!=NULL){
		printf("%s\n",perr);
		return 0;
	}
	pStrLenFun=dlsym(phandle,"StrLen");
	perr=dlerror();
	
	if(perr!=NULL){
		printf("%s\n",perr);
		return 0;
	}

	printf("the string length is: %d\n",pStrLenFun(src));
	
	dlclose(phandle);

	return 0 ;



}
