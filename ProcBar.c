#include "ProcBar.h"
void process_bar()
{
	char bar[N];
	memset(bar,'\0',sizeof(bar));
        const char* label="|/-\\";
	int i=0;
	while(i<=100){
	     printf("[%-100s][%d %% ][%c]\r",bar,i,label[i%4]);
	     fflush(stdout);
	     bar[i++]='#';
	     usleep(100000);

	
	}
	printf("\n");


}
