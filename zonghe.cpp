#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student{                                                                 //����ѧ���ṹ�� 
	char name[20];
	char number[20];
	float gao_shu;
	float li_san;
	float ying_yu;
	float biancheng;
	float sum1;
	float aver;
}student[100];
int num=0;                                                                      //������¼ѧ���ĸ��� 
float Sum(struct Student stu){                                                  //��ѧ���ĳɼ���� 
	return(stu.gao_shu+stu.li_san+stu.ying_yu+stu.biancheng)
}
float Ave(struct Student stu){                                                  //��ѧ���ĳɼ���ƽ��ֵ 
	return Sum(stu)/4;
}
void Change(){
	printf("��������Ҫ�޸ĵ��˵�ѧ�ţ�");
	char id[20];
	index=Search_By_number(id);
	if(index==-1)printf("ѧ�������ڣ�����������");
	else{
		
	}  
}
void Input(){
	while(1){
		system("cls");                                                          //�������� 
	    printf("������������");
		scanf("%s",student[num].name);
		printf("������ѧ��:");
		scanf("%s",student[num].number);
		printf("����������ɼ�:");
		scanf("%f",&student[num].gao_shu);
		printf("��������ɢ�ɼ�");
		scanf("%f",&student[num].li_san);
		printf("������Ӣ��ɼ�:");
		scanf("%f",&student[num].ying_yu);
		printf("������c���Գɼ�:");
		scanf("%f",student[num].biancheng);
		student[num].sum1=Sum(student[num]);
		student[num].aver=Ave(student[num]);
		Save_In_File(student[num]);                                             //�������ѧ����Ϣ�洢���ļ��� 
		num++; 
		printf("�Ƿ����(y/n):");
		if(getchar()=='n')break;
	}
} 

int main()                                                                      //������ 
{
	int choice; 
	while(1){
		printf("\n\t\t* * * * * ѧ���ɼ�����ϵͳ* * * * * * * * * * * \n");
		printf("\t\t*\t       1. ¼��ɼ�                    *\n");
		printf("\t\t*\t       2. �޸ĳɼ�                    *\n");
		printf("\t\t*\t       3. ɾ���ɼ�                    *\n");
		printf("\t\t*\t       4. ƽ���ɼ������˵����пγ̣�  *\n");
		printf("\t\t*\t       5. �ɼ����򣨵��˵�ƽ���ɼ���  *\n");
		printf("\t\t*\t       6. ƽ���ɼ������ſγ̣�        *\n");
		printf("\t\t*\t       7. �ɼ����򣨵����γ̣�        *\n");
		printf("\t\t*\t       8. �ܷ�����                    *\n");
		printf("\t\t*\t       9. ���ſγ�����                *\n");
		printf("\t\t*\t       10. �˳�                       *\n");
		printf("\t\t* * * * * * * * * * * * * * * * * * * * * * * * \n\n");
		printf("��������Ҫ���еĲ���:");
		scanf("%d",&choice);
		getchar();
		switch(choice){
			case 1:Input();break;
			case 2:Change();break;
			case 3:Delete();break;
			case 4:Average_Student();break;
			case 5:Sort_Student();break;
			case 6:Average_Subject();break;
			case 7:Sort_Subject();break;
			case 8:Sort_Sum();break;
			case 9:Sort_Single_Subject();break;
			case 10:printf("����������лл.\n");break;
			default:printf("������������������.");break;
		}
	}
	return 0;
} 