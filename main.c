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
	printf("���ߴ���ؾ������ܳ�����:%.2f��\n",sn);
	printf("���ߴη����߶���:%.2f��\n",hn);
}
