#include <stdio.h>
#include <string.h>

#define CSIZE 4

struct name {
	char fname[20];
	char lname[20];
};

struct student {
	struct name stu_name;
	float grade[3];
	float gavg;
};

int main(void)
{
	struct student stus[CSIZE];
	return 0;
}
