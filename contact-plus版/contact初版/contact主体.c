#include"contact.h"


int main()
{
	int cc = 0;
	struct contact con;//��ʼ��contact
	initcontact(&con);
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &cc);
		system("cls");
		switch (cc)
		{
		case EXIT:
		{
			if (con.data != NULL)//�ͷſռ�
			{
				free(con.data);
				con.data = NULL;
			}
			printf("���˳�");
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
			qsort(con.data, con.sz, sizeof(con.data[0]), cmp);//������������
			break;
		}
		default:
		{
			printf("�������\n");
			break;
		}
		}
	} while (cc);
	return 0;
}
