#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <cstring>
#include <queue>
#include <cmath>
#include <set>
#include <map>
#include <functional>

using namespace std;
typedef long long int ll;
typedef pair <int,int> P;

int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n,m;
		scanf("%d %d",&n,&m);
		if(n==1) continue;
		if(n>2&&n==m)
		{
			for(int i=0;i<n;i++)
			{
				printf("%d %d\n",i+1,((i+1)%n)+1);
			}
		}
		else if(n==2)
		{
			printf("%d %d\n",1,2);
		}
		else if(n>m||2*n-4<m)
		{
			puts("-1 -1");
		}
		else
		{
			int s=1,t=2;
			int all=2*(n-2)-m;
			printf("%d %d\n",s,3);
			printf("%d %d\n",all+3,t);
			for(int i=3;i<all+3;i++)
			{
				printf("%d %d\n",i,i+1);
			}
			for(int i=all+4;i<=n;i++)
			{
				printf("%d %d\n",s,i);
				printf("%d %d\n",t,i);
			}
		}
	}
	return 0;
}
