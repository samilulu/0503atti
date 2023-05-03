#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	
int num1, num2, to, dan, from, b, re, ID, a, f, e, result, comnum, usernum, choice, choice2, choice3;
	First:
		system("cls");
	printf("\n\n\t\t\t ID:");
	scanf("%d", &ID);
	
	switch(ID)
	{
		case 1029:    										//1029일경우 
			printf("관리자 로그인 성공!\n");  			//로그인이 됫다 
			system("pause"); 								//잠시 멈추시지!
			break; 												//끝 
			
			case 7037:								//7037일경우	 
			printf("로그인 성공!\n");				//성공 
			system("pause"); 
			break;
			
			default:
			printf("로그인 실패!\n다시 시도하세요 \n"); 
			system("pause");
			goto First;                              //처음으로 가거라 
 			break;
	}
	start:
	system("cls");
	printf("유인호 프로그램 모음집\n");
	printf("구구단=1 계산기=2 게임(up,down)=3\n");
	scanf("%d", &choice);
	system("cls");
	
	switch(choice)
	{
	
		case 1:
			system("cls");
			printf("제작일: 2016년 여름방학\n");
			printf("정수를 입력하세요 : ");
	scanf("%d", &a);
	printf("%d x %d = %d\n",a, 1, a*1);
	printf("%d x %d = %d\n",a, 2, a*2);
	printf("%d x %d = %d\n",a, 3, a*3);
	printf("%d x %d = %d\n",a, 4, a*4);
	printf("%d x %d = %d\n",a, 5, a*5);
	printf("%d x %d = %d\n",a, 6, a*6);
	printf("%d x %d = %d\n",a, 7, a*7);
	printf("%d x %d = %d\n",a, 8, a*8);
	printf("%d x %d = %d\n",a, 9, a*9);
	printf("%d x %d = %d\n",a, 10, a*10);
	printf("%d x %d = %d\n",a, 11,a*11);
	printf("%d x %d = %d\n",a, 12,a*12);
	printf("thank you very much!");
	getchar();
	goto end;
	break;
	
		case 2:
		printf("제작일: 2016년 11월 10일\n"); 
		printf("덧셈:1, 뺄셈:2 곱하기:3, 구구단:4 \n 입력: ");
	scanf("%d", &choice2);
	switch(choice2)
	{
			case 1:
				system("cls");
			printf("두 정수 입력: ");
			scanf("%d %d", &num1, &num2);
			printf("값: %d\n", num1+num2);
			printf("프로그램을 종료합니다\n");
			system("pause");
			goto end;
			break;
			
			case 2:
				system("cls");
			printf("두정수 입력: ");
			scanf("%d %d", &num1, &num2);
			printf("값: %d\n", num1-num2);
			printf("프로그램을 종료합니다\n");
			system("pause");
			goto end;
		   break;
		
	   	 	case 3:
	   	 		
	   	 			system("cls");
	    	printf("두정수 입력: ");
	    	scanf("%d %d", &num1, &num2);
			printf("값: %d\n", num1*num2);
			printf("프로그램을 종료합니다\n");
			system("pause");
			goto end;
			break;
			
			
			case 4:
				system("cls");
			printf("몇단? :");
			scanf("%d", &dan);
			printf("어디부터?: ");								//내가생각햇지만 정말 대단하다 
			scanf("%d", &to);
			printf("어디까지?: ");
			scanf("%d", &from);
			
			while(to<=from)
			{
				printf("%d x %d = %d \n", dan, to, dan*to);
				
				to++;
				
			}
			system("pause");
			goto end;
			break;
			
			break;
				goto end;
	
	default:
		printf("잘못입력하셧습니다 2초후 다시 돌아갑니다");
		sleep(2);
		goto start;
	}
   case 3:
   	printf("제작일: 2016년 11월 17일\n");
   	printf("up&down의 세계에 오신것을 환영합니다\n");
   	printf("듀토리얼=1 시작=2\n입력= ");
   	scanf("%d", &choice3);
   	
   	switch(choice3)
   	{
   		case 1:																				//내머리에서 나왓다는게 신가하다! 
   			retry:																			//다시 
   				system("cls");
   			printf("듀토리얼을 시작합니다\n");										//시작 
   			sleep(1);
   			printf("숫자를 맞추는 게임입니다\n");
   			sleep(1);
   			printf("이제 게임룰을 설명하겠습니다\n"); 
   			sleep(1);								//1초를 쉰다! 
   			printf("75을 적어 보세요 \n 입력:");
			  scanf("%d", &f);
			  
			  switch(f)
			  {
			  	default :															//이게 먼저 나와야 프로그램이 스노우볼링처럼 잘굴러간다 
			  	printf("잘못 입력하셧습니다 2초뒤 처음으로 돌아갑니다");			// 대단한 발견.png 
			  	sleep(2);															//맞는답을 써도 돌아가라고 하기때문이지 ! 
			  	goto retry;															//돌아가랏 
			  	
			  	case 75:
			  	printf("up\n");
			  sleep(1);
			  printf("이렇게 뜨면 맞춰야하는 숫자가 75보다 큰것 입니다\n");
			  printf("다음으로는 77을 적어보세요\n 입력: ");
			  scanf("%d", &e);
			  
			   switch(e)
			  {
			  	default :
			  	printf("잘못 입력하셧습니다 2초뒤 처음으로 돌아갑니다");
			  	sleep(2);
			  	goto retry;
			  	
			  	case 77:
			  	printf("down\n");
			  sleep(1);
			  printf("이렇게 나오면 맞춰야하는 숫자가 77보다 적은것입니다\n 그러면 75보다 크고 77보다 작은 수는 무엇이죠? \n 입력:");
			  scanf("%d", &result);
			  	
			  }
			  
			   switch(result)
			   {
			   	default :
			  	printf("잘못 입력하셧습니다 2초뒤 처음으로 돌아갑니다");
			  	sleep(2);
			  	goto retry;
			  	
			   	case 76:
			   		printf("잘하셧습니다! 이런식으로 숫자를 맞추는 게임 입니다\n듀토리얼을 종료하고 2초뒤 게임을 시작합니다\n");
			   		sleep(2);
			  goto game;
}	   	
}
		case 2:
			game:
				system("cls");
				srand((int)time(comnum));
				comnum = rand()%500+1;
      	
				printf("게임을 시작합니다\n1부터 500까지 입니다\n");			//시작 1부터 500까지다! 
				sleep(1);
				while(1)
				{
					printf("입력 :");
				scanf("%d", &usernum);
				if(usernum<comnum)
	{
					printf("up\n");
		}
		if(comnum<usernum)
		{
					printf("down\n");
				}
				if(usernum==comnum)
				{
				printf("맞추셧습니다\n2초뒤 프로그램을 종료합니다");
				sleep(2);
				goto end;
				break;
				}				
	}
	default:
		printf("잘못입력하셧습니다 2초후 다시 돌아갑니다");
		sleep(2);
		goto start;
	}  
	default:
		printf("잘못입력하셧습니다 2초후 다시 돌아갑니다");
		sleep(2);
		goto start;
	}
		end:
	return 0;
	}

	

