#include"contact.h"

void menu()//菜单函数
{
	printf("********************************************\n");
	printf("*******1.录入信息       2.删除信息**********\n");
	printf("*******3.查找信息       4.修改信息**********\n");
	printf("*******5.显示全部信息   6.信息排序**********\n");
	printf("*******************0.退出*******************\n");
	printf("********************************************\n");

}


void initcontact(struct contact* con)//初始化数组 动态版
{
	con->data = (struct info*)calloc(3, sizeof(struct info));
	con->capacity = 3;
	con->sz = 0;
}


void conadd(struct contact* con)//录入信息函数 动态版
{
	if (con->sz == con->capacity)//内存扩展
	{
		struct info* ps = (struct info*)realloc(con->data, (con->capacity + 2)*(sizeof(struct info)));//con->capacity + 2
		if (ps != NULL)
		{
			con->data = ps;
			con->capacity += 2;
		}
		

	}
		if(con->data!=NULL)
		{
			printf("请输入名字:>");
			scanf_s("%s", &con->data[con->sz].name, 20);
			printf("请输入年龄:>");
			scanf_s("%d", &con->data[con->sz].age);
			printf("请输入性别:>");
			scanf_s("%s", &con->data[con->sz].sex, 6);
			printf("请输入电话:>");
			scanf_s("%s", &con->data[con->sz].tele, 13);
			printf("请输入地址:>");
			scanf_s("%s", &con->data[con->sz].addr, 50);
			con->sz++;
			printf("添加成功\n");
		}
		else
		{
			printf("内存开辟失败");
		}
}


void print(struct contact* con)//显示函数
{
	if (con->sz == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-6s\t%-12s\t%-50s\n\n", "名字", "年龄", "性别", "电话", "地址");
		for (i = 0; i < con->sz; i++)
		{
			printf("%-20s\t%-4d\t%-6s\t%-12s\t%-20s\n",
				con->data[i].name,
				con->data[i].age,
				con->data[i].sex,
				con->data[i].tele,
				con->data[i].addr
			);
		}
	}

}

int findname(struct contact* con)//隐式查找函数
{
	int i = 0;
	printf("输入要查找数据的人名:>");
	char name[20];
	scanf_s("%s", name, max_name);
	for (i = 0; i < con->sz; i++)
	{
		if (strcmp(con->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}


void search(struct contact* con)
{

	int i = findname(con);
	if (i == -1)
	{
		printf("数据不存在");
	}
	else
	{
		printf("%-20s\t%-4s\t%-6s\t%-12s\t%-50s\n\n", "名字", "年龄", "性别", "电话", "地址");
	    printf("%-20s\t%-4d\t%-6s\t%-12s\t%-20s\n",
				con->data[i].name,
				con->data[i].age,
				con->data[i].sex,
				con->data[i].tele,
				con->data[i].addr
			);
		
	}
}




void delet(struct contact* con)//删除函数
{

	int i=findname(con);
	if (i == -1)
	{
		printf("数据不存在\n");
	}
	else
	{
		int j = 0;
		for (j = i; j < con->sz - 1; j++)
		{
			con->data[j] = con->data[j+1];
		}
		con->sz--;
		printf("删除成功\n");
	}
	struct info* ps = (struct info*)realloc(con->data, (con->capacity -1) * sizeof(struct info));
	if (ps != NULL)
	{
		con->data = ps;
		con->capacity -= 1;
	}
}


void modify(struct contact* con)//修改函数
{

	int i = findname(con);
	if (i == -1)
	{
		printf("数据不存在");
	}
	else
	{

		printf("请输入修改后名字:>");
		scanf_s("%s", &con->data[i].name, 20);
		printf("请输入修改后年龄:>");
		scanf_s("%d", &con->data[i].age);
		printf("请输入修改后性别:>");
		scanf_s("%s", &con->data[i].sex, 6);
		printf("请输入修改后电话:>");
		scanf_s("%s", &con->data[i].tele, 13);
		printf("请输入修改后地址:>");
		scanf_s("%s", &con->data[i].addr, 50);
		printf("修改成功");
	}
}

int cmp(const void* e1, const void* e2)//按年龄排序降序
{
	return (((struct info*)e1)->age - ((struct info*)e2)->age);
}

void save(struct contact* con)//储存函数
{
	FILE* dat;
	fopen_s(&dat,"data.dat", "wb");
	if (!dat)
	{
		printf("储存失败");
		return;
	}
	int i = 0;
	for (i = 0; i < con->sz; i++)
	{
		fwrite(&(con->data[i]), sizeof(struct info),1 , dat);
	}
	fclose(dat);
	dat = NULL;
}

void read(struct contact* con)//读取函数
{
	struct info tmp = { 0 };
	FILE* dat;
	fopen_s(&dat,"data.dat", "rb");
	if (!dat)
	{
		printf("读取失败\n");
		return;
	}
	int i = 0;
	while (fread( &tmp, sizeof(struct info), 1, dat))//不能写成& (con->data[con->sz])否则最后一次会读取失败导致运行错误
	{
		if (con->sz == con->capacity)//内存扩展
		{
			struct info* ps = (struct info*)realloc(con->data, (con->capacity + 2) * (sizeof(struct info)));//con->capacity + 2
			if (ps != NULL)
			{
				con->data = ps;
				con->capacity += 2;
			}
		}
		con->data[con->sz] = tmp;
		con->sz++;

	}
	if (ferror(dat))
	{
		printf("读取失败\n");
	}
	else if (feof(dat))
	{
		printf("读取成功\n");
	}
	fclose(dat);
	dat = NULL;

	
	

	
}
