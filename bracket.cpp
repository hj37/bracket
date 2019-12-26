#include <cstdio>

using namespace std;

void solution(char* a)
{
	int open_cnt = 0;
	/*���� ��ȣ�϶��� +  ���� Ȱȣ�϶��� -*/

	int i = 0;
	while (a[i] != '\0')
	{

		if (a[i] == '(')
		{	/*���� ��ȣ�϶��� cnt�� ���������� */
			open_cnt++;
		}
		else
		{
			/*���� ��ȣ�϶��� ¦�� ã���شٴ� �ǹ̿��� cnt�� ���ҽ����� */
			open_cnt--;
		}

		if (open_cnt < 0)
		{
			break;     /*���ܻ��� �϶�, ���� ��ȣ�� ���� ��ȣ���� �� ���� ������ �ڿ� ������ȣ�� ���͵� �ҿ��� ����
			���� �ݺ����� ���߰� ����� ����ؾ��� */
		}
		i++;
	}

	if (open_cnt == 0)
	{
		printf("YES");
	}
	else {
		printf("NO");
	}

}

int main()
{
	freopen("input.txt", "rt", stdin);
	char a[30]; /*���ڿ� �ִ���� 30, ó���� �Է°� �޸����� ���ؼ� ���� ���� */
	scanf("%s", a);
	solution(a);

	return 0;
}
