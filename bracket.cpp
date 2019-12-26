#include <cstdio>

using namespace std;

void solution(char* a)
{
	int open_cnt = 0;
	/*열린 괄호일때는 +  닫힌 활호일때는 -*/

	int i = 0;
	while (a[i] != '\0')
	{

		if (a[i] == '(')
		{	/*열린 괄호일때는 cnt를 증가시켜줌 */
			open_cnt++;
		}
		else
		{
			/*닫힌 괄호일때는 짝을 찾아준다는 의미에서 cnt를 감소시켜줌 */
			open_cnt--;
		}

		if (open_cnt < 0)
		{
			break;     /*예외사항 일때, 닫힌 괄호가 열린 괄호보다 더 먼저 나오면 뒤에 열린괄호가 나와도 소용이 없음
			따라서 반복문을 멈추고 결과를 출력해야함 */
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
	char a[30]; /*문자열 최대길이 30, 처음에 입력값 메모장을 통해서 담을 공간 */
	scanf("%s", a);
	solution(a);

	return 0;
}
