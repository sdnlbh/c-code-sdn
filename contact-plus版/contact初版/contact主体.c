#include"contact.h"


int main()
{
	int cc = 0;
	struct contact con;//初始化contact
	initcontact(&con);
	do
	{
		menu();
		printf("请选择:>");
		scanf_s("%d", &cc);
		system("cls");
		switch (cc)
		{
		case EXIT:
		{
			if (con.data != NULL)//释放空间
			{
				free(con.data);
				con.data = NULL;
			}
			printf("已退出");
			break;
		}
		case ADD:
		{
			conadd(&con);
			break;
		}
		case DEL:
		{
			delet(&con);
			break;
		}
		case SEARCH:
		{
			search(&con);
			break;
		}
		case MODIFY:
		{
			modify(&con);
			break;
		}
		case SHOW:
		{
			print(&con);
			break;
		}
		case SORT:
		{
			qsort(con.data, con.sz, sizeof(con.data[0]), cmp);//按年龄排序降序
			break;
		}
		default:
		{
			printf("输入错误\n");
			break;
		}
		}
	} while (cc);
	return 0;
}
