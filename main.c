#include <stdio.h>

void main()
{
	float sn=256.00;
	float hn=sn/2;
	int n;
	for(n=2;n<=7;n++){
		sn=sn+2*hn;
		hn=hn/2;
	}
	printf("第七次落地经过的总长度是:%.2f米\n",sn);
	printf("第七次反弹高度是:%.2f米\n",hn);
}
