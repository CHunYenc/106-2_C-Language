/*
HW2-7: 請寫一程式輸入一位學生的期中考、期末考、及平時成績，再經由程式計算該名學生的學期總成績。假設期中考及期末考成績各佔學期總成績30%的比例，平時成績佔學期總成績40%的比例。
[基本要求]
(1)輸入:期中考、期末考、及平時成績 (均為整數，不含小數)
(2)輸出:需再次顯示出使用者輸入的期中考、期末考、及平時成績資料，及這三項成績乘上各自比例的分數，最後再將這三個分數相加，顯示這個學期總成積。(請注意: 總成績顯示時若有小數點，需顯示小數點資料) 
 
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a=0,b=0,c=0;
	printf("輸入期中考、期末考、及平時成績(均為整數，不含小數)：");
	scanf("%d,%d,%d",&a,&b,&c);

	printf("期中考 %d 分 , 期末考 %d 分 , 平時成績 %d 分 \n",a,b,c);
	printf("你最後的總成績為：%lf\n",(double)(a+b)*0.3+(c*0.4));
	system("pause");
	return 0;
 }

