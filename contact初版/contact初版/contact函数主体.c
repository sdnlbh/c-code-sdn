#include"contact.h"

void menu()//�˵�����
{
	printf("********************************************\n");
	printf("*******1.¼����Ϣ       2.ɾ����Ϣ**********\n");
	printf("*******3.������Ϣ       4.�޸���Ϣ**********\n");
	printf("*******5.��ʾȫ����Ϣ   6.��Ϣ����**********\n");
	printf("*******************0.�˳�*******************\n");
	printf("********************************************\n");

}


void initcontact(struct contact* con)//��ʼ������
{
	memset(con->data, 0, sizeof(con->data));
	con->sz = 0;
}


void conadd(struct contact* con)//¼����Ϣ����
{
	if (con->sz == max)
	{
		printf("ͨѶ¼�������޷�����");
	}
	else
	{
		printf("����������:>");
		scanf_s("%s", &con->data[con->sz].name,20);
		printf("����������:>");
		scanf_s("%d", &con->data[con->sz].age);
		printf("�������Ա�:>");
		scanf_s("%s", &con->data[con->sz].sex,6);
		printf("������绰:>");
		scanf_s("%s", &con->data[con->sz].tele,13);
		printf("�������ַ:>");
		scanf_s("%s", &con->data[con->sz].addr,50);
		con->sz++;
		printf("��ӳɹ�\n");
	}
}


void print(struct contact* con)//��ʾ����
{
	if (con->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%-20s\t%-4s\t%-6s\t%-12s\t%-50s\n\n", "����", "����", "�Ա�", "�绰", "��ַ");
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

int findname(struct contact* con)//��ʽ���Һ���
{
	int i = 0;
	printf("����Ҫ�������ݵ�����:>");
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
		printf("���ݲ�����");
	}
	else
	{
		printf("%-20s\t%-4s\t%-6s\t%-12s\t%-50s\n\n", "����", "����", "�Ա�", "�绰", "��ַ");
	    printf("%-20s\t%-4d\t%-6s\t%-12s\t%-20s\n",
				con->data[i].name,
				con->data[i].age,
				con->data[i].sex,
				con->data[i].tele,
				con->data[i].addr
			);
		
	}
}




void delet(struct contact* con)//ɾ������
{

	int i=findname(con);
	if (i == -1)
	{
		printf("���ݲ�����\n");
	}
	else
	{
		int j = 0;
		for (j = i; j < con->sz - 1; j++)
		{
			con->data[j] = con->data[j+1];
		}
		con->sz--;
		printf("ɾ���ɹ�\n");
	}
}


void modify(struct contact* con)//�޸ĺ���
{

	int i = findname(con);
	if (i == -1)
	{
		printf("���ݲ�����");
	}
	else
	{

		printf("�������޸ĺ�����:>");
		scanf_s("%s", &con->data[i].name, 20);
		printf("�������޸ĺ�����:>");
		scanf_s("%d", &con->data[i].age);
		printf("�������޸ĺ��Ա�:>");
		scanf_s("%s", &con->data[i].sex, 6);
		printf("�������޸ĺ�绰:>");
		scanf_s("%s", &con->data[i].tele, 13);
		printf("�������޸ĺ��ַ:>");
		scanf_s("%s", &con->data[i].addr, 50);
		printf("�޸ĳɹ�");
	}
}

int cmp(const void* e1, const void* e2)//������������
{
	return (((struct contact*)e2)->data->age - ((struct contact*)e1)->data->age);
}
