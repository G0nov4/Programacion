#include <iostream>

using namespace std;
__int64 dp[16][32], sum[16], ans;
int main()
{
  8:     int i, j, len;

/*  9:*/     char str[16];

 10: 

 11:     for (i = 0; i < 26; i++)

 12:         dp[0][i] = 1;

 13:     for (i = 1; i < 10; i++) {

 14:         for (j = 25 - i; j >= 0; j--) {

 15:             dp[i][j] += dp[i][j + 1];

 16:             dp[i][j] += dp[i - 1][j + 1];

 17:         }

 18:     }

 19:     for (i = 0; i < 10; i++) 

 20:         for (j = 0; j < 26; j++)

 21:             sum[i] += dp[i][j];

 22: 

 23: 	while(scanf("%s", str)!=EOF)

 24: 	{

 25: 		ans=0;

 26: 	    for (len = 0; str[len]; len++)

 27: 	        ans += sum[len];

 28: 	    ans -= sum[len - 1];

 29: 	    j = 0;

 30: 	    for (i = len - 1; i >= 0; i--) {

 31: 	        while (j < str[len - 1 - i] - 'a') {

 32: 	            ans += dp[i][j];

 33: 	            j++;

 34: 	        }

 35: 	        j++;

 36: 	    }

 37: 	    for (i = 0; i < len - 1; i++)

 38: 	        if (str[i] >= str[i + 1])

 39: 	            ans = -1;

 40: 	    printf("%I64d\n", ans + 1);

 41: 	}

 42:     return 0;

 43: }
