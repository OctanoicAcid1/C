//�ṹ�������.��Ա��=ָ�������->��Ա�����ȼ��ڣ�����˵�ڼ�����ڲ���ת��Ϊ ��*ָ���������.��Ա�� �� 

#include<stdio.h>

struct Student
{
	char name[20];
	char id[20];
	char score[5];
};

int main(void)
{
	struct Student st1,st2,st3;
	struct Student *p,*q;
	p=&st2;
	q=&st3; 
	
	scanf("%s %s %s",&st1.name,&st1.id,&st1.score);
	scanf("%s %s %s",&p->name,&p->id,&p->score);
	scanf("%s %s %s",&(*q).name,&(*q).id,&(*q).score);
	
	printf("\n");
	printf("%s %s %s\n",q->name,q->id,q->score);
	printf("%s %s %s\n",(*p).name,(*p).id,(*p).score);
	printf("%s %s %s\n",st1.name,st1.id,st1.score);
	return 0;
}
