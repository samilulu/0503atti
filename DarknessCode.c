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
		case 1029:    										//1029�ϰ�� 
			printf("������ �α��� ����!\n");  			//�α����� �̴� 
			system("pause"); 								//��� ���߽���!
			break; 												//�� 
			
			case 7037:								//7037�ϰ��	 
			printf("�α��� ����!\n");				//���� 
			system("pause"); 
			break;
			
			default:
			printf("�α��� ����!\n�ٽ� �õ��ϼ��� \n"); 
			system("pause");
			goto First;                              //ó������ ���Ŷ� 
 			break;
	}
	start:
	system("cls");
	printf("����ȣ ���α׷� ������\n");
	printf("������=1 ����=2 ����(up,down)=3\n");
	scanf("%d", &choice);
	system("cls");
	
	switch(choice)
	{
	
		case 1:
			system("cls");
			printf("������: 2016�� ��������\n");
			printf("������ �Է��ϼ��� : ");
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
		printf("������: 2016�� 11�� 10��\n"); 
		printf("����:1, ����:2 ���ϱ�:3, ������:4 \n �Է�: ");
	scanf("%d", &choice2);
	switch(choice2)
	{
			case 1:
				system("cls");
			printf("�� ���� �Է�: ");
			scanf("%d %d", &num1, &num2);
			printf("��: %d\n", num1+num2);
			printf("���α׷��� �����մϴ�\n");
			system("pause");
			goto end;
			break;
			
			case 2:
				system("cls");
			printf("������ �Է�: ");
			scanf("%d %d", &num1, &num2);
			printf("��: %d\n", num1-num2);
			printf("���α׷��� �����մϴ�\n");
			system("pause");
			goto end;
		   break;
		
	   	 	case 3:
	   	 		
	   	 			system("cls");
	    	printf("������ �Է�: ");
	    	scanf("%d %d", &num1, &num2);
			printf("��: %d\n", num1*num2);
			printf("���α׷��� �����մϴ�\n");
			system("pause");
			goto end;
			break;
			
			
			case 4:
				system("cls");
			printf("���? :");
			scanf("%d", &dan);
			printf("������?: ");								//�������������� ���� ����ϴ� 
			scanf("%d", &to);
			printf("������?: ");
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
		printf("�߸��Է��ϼ˽��ϴ� 2���� �ٽ� ���ư��ϴ�");
		sleep(2);
		goto start;
	}
   case 3:
   	printf("������: 2016�� 11�� 17��\n");
   	printf("up&down�� ���迡 ���Ű��� ȯ���մϴ�\n");
   	printf("���丮��=1 ����=2\n�Է�= ");
   	scanf("%d", &choice3);
   	
   	switch(choice3)
   	{
   		case 1:																				//���Ӹ����� ���Ӵٴ°� �Ű��ϴ�! 
   			retry:																			//�ٽ� 
   				system("cls");
   			printf("���丮���� �����մϴ�\n");										//���� 
   			sleep(1);
   			printf("���ڸ� ���ߴ� �����Դϴ�\n");
   			sleep(1);
   			printf("���� ���ӷ��� �����ϰڽ��ϴ�\n"); 
   			sleep(1);								//1�ʸ� ����! 
   			printf("75�� ���� ������ \n �Է�:");
			  scanf("%d", &f);
			  
			  switch(f)
			  {
			  	default :															//�̰� ���� ���;� ���α׷��� ����캼��ó�� �߱������� 
			  	printf("�߸� �Է��ϼ˽��ϴ� 2�ʵ� ó������ ���ư��ϴ�");			// ����� �߰�.png 
			  	sleep(2);															//�´´��� �ᵵ ���ư���� �ϱ⶧������ ! 
			  	goto retry;															//���ư��� 
			  	
			  	case 75:
			  	printf("up\n");
			  sleep(1);
			  printf("�̷��� �߸� ������ϴ� ���ڰ� 75���� ū�� �Դϴ�\n");
			  printf("�������δ� 77�� �������\n �Է�: ");
			  scanf("%d", &e);
			  
			   switch(e)
			  {
			  	default :
			  	printf("�߸� �Է��ϼ˽��ϴ� 2�ʵ� ó������ ���ư��ϴ�");
			  	sleep(2);
			  	goto retry;
			  	
			  	case 77:
			  	printf("down\n");
			  sleep(1);
			  printf("�̷��� ������ ������ϴ� ���ڰ� 77���� �������Դϴ�\n �׷��� 75���� ũ�� 77���� ���� ���� ��������? \n �Է�:");
			  scanf("%d", &result);
			  	
			  }
			  
			   switch(result)
			   {
			   	default :
			  	printf("�߸� �Է��ϼ˽��ϴ� 2�ʵ� ó������ ���ư��ϴ�");
			  	sleep(2);
			  	goto retry;
			  	
			   	case 76:
			   		printf("���ϼ˽��ϴ�! �̷������� ���ڸ� ���ߴ� ���� �Դϴ�\n���丮���� �����ϰ� 2�ʵ� ������ �����մϴ�\n");
			   		sleep(2);
			  goto game;
}	   	
}
		case 2:
			game:
				system("cls");
				srand((int)time(comnum));
				comnum = rand()%500+1;
      	
				printf("������ �����մϴ�\n1���� 500���� �Դϴ�\n");			//���� 1���� 500������! 
				sleep(1);
				while(1)
				{
					printf("�Է� :");
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
				printf("���߼˽��ϴ�\n2�ʵ� ���α׷��� �����մϴ�");
				sleep(2);
				goto end;
				break;
				}				
	}
	default:
		printf("�߸��Է��ϼ˽��ϴ� 2���� �ٽ� ���ư��ϴ�");
		sleep(2);
		goto start;
	}  
	default:
		printf("�߸��Է��ϼ˽��ϴ� 2���� �ٽ� ���ư��ϴ�");
		sleep(2);
		goto start;
	}
		end:
	return 0;
	}

	

