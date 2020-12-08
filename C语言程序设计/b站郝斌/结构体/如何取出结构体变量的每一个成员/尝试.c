#include<stdio.h>

struct Student 
{
	char name;
	long long id;
	int score;
};

int main(void)
{
	struct Student st1={'K',510623200203060001,100
	};
	
	struct Student *p=&st1;
	
	p->id=510623200203030011;
	
	printf("%c %lld %d\n",st1.name,p->id,p->score);
	
	return 0;
}
