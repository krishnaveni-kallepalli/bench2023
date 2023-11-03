#include<stdio.h>
struct student 
{
	char name[100];
	int age;
};
void display(struct student stu)
{
	printf("%s",stu.name);
}
void agedisp(struct student stu)
{
	printf("%d",stu.age);
}
int main()
{
	struct student stu={"krishna",23};
	void (*fp[2])(struct student stu)={display,agedisp};
	display(stu);	
	agedisp(stu);
}
