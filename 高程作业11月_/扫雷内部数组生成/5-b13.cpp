#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    char num[12][28] = { '0' };
    int m, n;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 28; j++)
        {
            num[i][j] = '0';
        }
        
    }
    
    srand((int)time(0));  // 产生随机种子  把0换成NULL也行

    for (int i = 0; i < 50; i++)
    {
        m = rand() % 10 + 1;
        n = rand() % 26 + 1;
        if (num[m][n] != '*')
            num[m][n] = '*';
        else
            i--;
    }
    

   



    for (int i = 1; i < 11; i++)
    {                                                                                                                  
        for (int j = 1; j < 27; j++)
        {
            if (num[i][j] != '*')
            {
                for (int p = i - 1; p <= i + 1; p++)
                {
                    for (int q = j - 1; q <= j + 1; q++)
                    {
                        if (num[p][q] == '*')
                        {
                            num[i][j]++;
                        }
                    }
                }
            }
        }
    }
    for (int i = 1; i < 11; i++)
    {
        for (int j = 1; j < 27; j++)
            cout << num[i][j]<<" ";
        cout << endl;
    }
    
    
        
    return 0;
}