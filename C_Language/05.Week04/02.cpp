/*
HW5-2.利用for指令寫一程式，讓使用者輸入一個數字x，
用來表示雞兔同籠中合計共有幾隻腳(一個籠子裡面雞腳加兔腳的總數量)，
然後由程式算出所有可能的雞、兔數量組合。
(需顯示出每一種情況的雞、兔數量)【學號末碼為2,5,0請做此題】
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a=0,b=0,x=0; //宣告變數a為雞腳 , b為兔腳 
	printf("請輸入一個數字x:");	//輸出 請輸入一個數字x:
	scanf("%d",&x);	//讓使用者輸入一個數字 
	fflush(stdin);	//清除暫存檔 

	for(a=0;a<=x/2;a++) //雞腳有兩隻，把雞腳除2比較好分辨為幾隻雞，然後a++ 
	{
		for(b=0;b<=x/4;b++) //兔腳有四隻，把兔腳除2，四隻腳一定是兔，b++ 
		{
			if(x==a*2+b*4)	//如果 x等於a雞*2隻腳+b兔子*4隻腳 
			printf("雞有 %d 隻，兔子有 %d 隻。\n",a,b);	//印出 使用者輸入的數能夠符合的所有總類 
		}
	}
	system("pause");
	return 0;
 }

