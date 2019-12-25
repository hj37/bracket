#include <cstdio>

using namespace std;

void solution(char* a)
{
    int open_cnt = 0;
    /*���� ��ȣ�϶��� +  ���� Ȱȣ�϶��� -*/

    for(int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == '(')
        {
            open_cnt++;
        }
        else
        {
            open_cnt--;
        }

        if(open_cnt < 0)
        {
            break;     /*���� ��ȣ�� ���� ��ȣ���� �� ���� ������ �ڿ� ������ȣ�� ���͵� �ҿ��� ����
            ���� �ݺ����� ���߰� ����� ����ؾ��� */
        }
    }

    if(open_cnt == 0)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }

}

int main()
{
    //freopen("input.txt","rt",stdin);
    char a[30]; /*���ڿ� �ִ���� 30, ó���� �Է°� �޸����� ���ؼ� ���� ���� */
    scanf("%s",a);
    solution(a);

    return 0;
}
