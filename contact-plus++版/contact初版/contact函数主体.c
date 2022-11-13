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


void initcontact(struct contact* con)//��ʼ������ ��̬��
{
	con->data = (struct info*)calloc(3, sizeof(struct info));
	con->capacity = 3;
	con->sz = 0;
}


void conadd(struct contact* con)//¼����Ϣ���� ��̬��
{
	if (con->sz == con->capacity)//�ڴ���չ
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
			printf("����������:>");
			scanf_s("%s", &con->data[con->sz].name, 20);
			printf("����������:>");
			scanf_s("%d", &con->data[con->sz].age);
			printf("�������Ա�:>");
			scanf_s("%s", &con->data[con->sz].sex, 6);
			printf("������绰:>");
			scanf_s("%s", &con->data[con->sz].tele, 13);
			printf("�������ַ:>");
			scanf_s("%s", &con->data[con->sz].addr, 50);
			con->sz++;
			printf("��ӳɹ�\n");
		}
		else
		{
			printf("�ڴ濪��ʧ��");
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
	struct info* ps = (struct info*)realloc(con->data, (con->capacity -1) * sizeof(struct info));
	if (ps != NULL)
	{
		con->data = ps;
		con->capacity -= 1;
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
	return (((struct info*)e1)->age - ((struct info*)e2)->age);
}

void save(struct contact* con)//���溯��
{
	FILE* dat;
	fopen_s(&dat,"data.dat", "wb");
	if (!dat)
	{
		printf("����ʧ��");
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

void read(struct contact* con)//��ȡ����
{
	struct info tmp = { 0 };
	FILE* dat;
	fopen_s(&dat,"data.dat", "rb");
	if (!dat)
	{
		printf("��ȡʧ��\n");
		return;
	}
	int i = 0;
	while (fread( &tmp, sizeof(struct info), 1, dat))//����д��& (con->data[con->sz])�������һ�λ��ȡʧ�ܵ������д���
	{
		if (con->sz == con->capacity)//�ڴ���չ
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
		printf("��ȡʧ��\n");
	}
	else if (feof(dat))
	{
		printf("��ȡ�ɹ�\n");
	}
	fclose(dat);
	dat = NULL;

	
	

	
}
