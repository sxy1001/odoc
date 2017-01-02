#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Student{                                                                 //定义学生结构体 
	char name[20];
	char number[20];
	float gao_shu;
	float li_san;
	float ying_yu;
	float biancheng;
	float sum1;
	float aver;
}student[100];
int num=0;                                                                      //用来记录学生的个数 
float Sum(struct Student stu){                                                  //对学生的成绩求和 
	return(stu.gao_shu+stu.li_san+stu.ying_yu+stu.biancheng)
}
float Ave(struct Student stu){                                                  //对学生的成绩求平均值 
	return Sum(stu)/4;
}
void Change(){
	printf("请输入你要修改的人的学号：");
	char id[20];
	index=Search_By_number(id);
	if(index==-1)printf("学生不存在，请重新输入");
	else{
		
	}  
}
void Input(){
	while(1){
		system("cls");                                                          //清屏操作 
	    printf("请输入姓名：");
		scanf("%s",student[num].name);
		printf("请输入学号:");
		scanf("%s",student[num].number);
		printf("请输入高数成绩:");
		scanf("%f",&student[num].gao_shu);
		printf("请输入离散成绩");
		scanf("%f",&student[num].li_san);
		printf("请输入英语成绩:");
		scanf("%f",&student[num].ying_yu);
		printf("请输入c语言成绩:");
		scanf("%f",student[num].biancheng);
		student[num].sum1=Sum(student[num]);
		student[num].aver=Ave(student[num]);
		Save_In_File(student[num]);                                             //将输入的学生信息存储到文件里 
		num++; 
		printf("是否继续(y/n):");
		if(getchar()=='n')break;
	}
} 

int main()                                                                      //主函数 
{
	int choice; 
	while(1){
		printf("\n\t\t* * * * * 学生成绩管理系统* * * * * * * * * * * \n");
		printf("\t\t*\t       1. 录入成绩                    *\n");
		printf("\t\t*\t       2. 修改成绩                    *\n");
		printf("\t\t*\t       3. 删除成绩                    *\n");
		printf("\t\t*\t       4. 平均成绩（单人的所有课程）  *\n");
		printf("\t\t*\t       5. 成绩排序（单人的平均成绩）  *\n");
		printf("\t\t*\t       6. 平均成绩（单门课程）        *\n");
		printf("\t\t*\t       7. 成绩排序（单个课程）        *\n");
		printf("\t\t*\t       8. 总分排名                    *\n");
		printf("\t\t*\t       9. 单门课程排名                *\n");
		printf("\t\t*\t       10. 退出                       *\n");
		printf("\t\t* * * * * * * * * * * * * * * * * * * * * * * * \n\n");
		printf("请输入你要进行的操作:");
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
			case 10:printf("操作结束，谢谢.\n");break;
			default:printf("输入有误，请重新输入.");break;
		}
	}
	return 0;
} 