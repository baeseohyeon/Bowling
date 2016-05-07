#include <stdio.h>
int main()
{
	int  i = 1;
	int pin1, pin2, pin3;
	int score = 0;
	int bonus2 = 0, bonus1 = 0;
	while ( i<=9 )
	{
		printf("%d번째 프레임 1번쨰 처리 핀 수 : ", i);
		scanf("%d", &pin1);
		score += pin1*(1 + bonus2 + bonus1);
		printf("****최종점수 : %d\n", score);
		bonus1 = bonus2;	//보너스2에서 보너스1로
		bonus2 = 0;
		if(pin1 != 10){
			printf("%d번째 프레임 2번째 처리 핀 수 : ", i);
			scanf("%d", &pin2);
		    score += pin2*(1 + bonus2 + bonus1);
			bonus1 = bonus2;
			bonus2 = 0;
			printf("****최종점수 : %d\n", score);
			if(pin1+pin2==10)//스페어
				bonus1 += 1;
		}
		else//스트라이크
			bonus2 += 1;
		
		i++;
	}
	int j = 1;
	int sum = 0;
	int third = 0;
	while(j <= 2 + third){
		printf("10번째 프레임 %d번쨰 처리 핀 수 : ", j);
		scanf("%d",&pin1);
		score += pin1*(1+bonus2+bonus1);
		sum += pin1;
		if(pin1 == 10 || sum == 10)
			third = 1;
		bonus1 = bonus2;
		bonus2 = 0;
		printf("****최종점수 : %d\n", score);
		j++;
	
	return 0;
}


