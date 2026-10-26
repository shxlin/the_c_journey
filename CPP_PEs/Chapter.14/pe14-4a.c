#include <stdio.h>
#include <string.h>

struct tname {
	char fname[20];
	char mname[20];
	char lname[20];
};

struct id {
	int snum;
	struct tname name;
};

void printer(struct id []);

int main(void)
{
	struct id okyakusan[5] = {
		{
			302039823,
			{
				"Flossie",
				"M",
				"Dribble"
			}
		},
		{
			456789012,
			"Ethan",
			"Roem",
			"Miller"
		},
		{
			.snum = 987654321,
			.name = {
				"Sophia",
				"",
				"Garcia"
			}
		},
		{
			.snum = 112233445,
			{
				.fname = "Liam",
				.mname = "J",
				.lname = "Lopez"
			}
		},
		{
			.snum = 223344556,
			.name = {
				.fname = "Olivia",
				.mname = "K",
				.lname = "Wilson"
			}
		}
	};

	printer(okyakusan);

	return 0;
}

void printer(struct id arr[])
{
	for (int i = 0; i < 5; i++) {
		if (strlen(arr[i].name.mname) == 0) {
			printf("%s, %s --- %d\n", arr[i].name.lname, arr[i].name.fname, arr[i].snum);
		} else {
			printf("%s, %s %c. --- %d\n", arr[i].name.lname, arr[i].name.fname, arr[i].name.mname[0], arr[i].snum);
		}
	}

}
