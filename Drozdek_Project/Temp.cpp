#include <vector>
#include <list>
#include <map>
#include <string.h>
#include <cstring>
#include <math.h>
#include <cmath>
#include <set>
#include <queue>
#include <deque>
#include <string>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <string.h>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <unordered_map>


using namespace std;

#define ll  long long int
#define ld long double

int c, d, i, n, m, k, x, j = 1000000007;
string s;
int main()
{
	ios::sync_with_stdio(false);
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr), cout.tie(nullptr);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);		
	cin >> s;
	for (i = s.size() - 1; i >= 0; i--)
	{
		if (s[i] == 'b')
			c++;
		else
			k += c, c *= 2, k %= j, c %= j;
	}
	cout << k << endl;
	return 0;
}