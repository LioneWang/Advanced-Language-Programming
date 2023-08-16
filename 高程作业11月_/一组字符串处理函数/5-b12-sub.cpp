/* 济勤09班 2150265 王加炜 */

/* 函数实现部分，{ }内的东西可以任意调整，目前的return 0只是一个示例，可改变 */

/* 不允许定义任何形式的外部全局、静态全局、宏定义、只读变量 */
#include<string>
int min(int x, int y)
{
    if (x > y)
        return y;
    else
        return x;
}
int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strlen(const char str[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int i=0;
    while (1)
    {
        if (str[i] == '\0')
            break;
        i ++;

    }
    return i; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcat(char s1[], const char s2[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int a,b,i;
    a = tj_strlen(s1);
    b = tj_strlen(s2);
    for (i = a; i <= a + b; i++)
        s1[i] = s2[i - a];
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strncat(char s1[], const char s2[], const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int a, b, i;
    a = tj_strlen(s1);
    b = tj_strlen(s2);
    if (len <= b)
    {
        for (i = a; i <= a + len; i++)
        {
            if (i < a + len)
                s1[i] = s2[i - a];
            else
                s1[i] = s2[b];
        }
    }
        
    else
    { 
        for (i = a; i <= a + b; i++)
            s1[i] = s2[i - a];
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcpy(char s1[], const char s2[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int a, b, i;
    a = tj_strlen(s1);
    b = tj_strlen(s2);
  
    for (i = 0; i <=  b; i++)
        s1[i] = s2[i];
    
    
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strncpy(char s1[], const char s2[], const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int a, b, i;
    a = tj_strlen(s1);
    b = tj_strlen(s2);
    if (len <= b)
    {
        for (i = 0; i < len; i++)
            s1[i] = s2[i];
    }
    else
    {
        for (i = 0; i < b; i++)
            s1[i] = s2[i];
    }
    
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcmp(const char s1[], const char s2[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int a, b, i;
    a = tj_strlen(s1);
    b = tj_strlen(s2);

   

    for (i = 0; i <= min(a, b); i++)
    {
        if (s1[i] != s2[i])
        {
            
            break;
        }
        
    }
    if (i == (min(a, b) + 1))
        return 0;
    else
        return  int(s1[i]) - int(s2[i]);;
    //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/



//未完成

int tj_strcasecmp(const char s1[], const char s2[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int a, b, i;
    a = tj_strlen(s1);
    b = tj_strlen(s2);
    for (i = 0; i <= min(a, b); i++)
    {
        
        if (s1[i] != s2[i])
        {
            if (s1[i] <= 90 && s1[i] >= 65 && s2[i] >= 65 && s2[i] <= 90)
            {
                if ((int(s1[i]) - int(s2[i])) == 0)
                    continue;
            }
                
            else if (s1[i] <= 90 && s1[i] >= 65)
            {
                if ((int(s1[i]) - int(s2[i])+32) == 0)
                    continue;
            }
                
            else if (s2[i] <= 90 && s2[i] >= 65)
            {
                if ((int(s1[i]) - int(s2[i]) - 32) == 0)
                    continue;
            }
                
            else
                ;
            break;
        }

    }
    if (i == (min(a, b) + 1))
        return 0;
    else
    {
        if (s1[i] <= 90 && s1[i] >= 65 && s2[i] >= 65 && s2[i] <= 90)
            return int(s1[i]) - int(s2[i]);
        else if (s1[i] <= 90 && s1[i] >= 65)
            return int(s1[i]) - int(s2[i]) + 32;
        else if (s2[i] <= 90 && s2[i] >= 65)
            return int(s1[i]) - int(s2[i]) - 32;
        else
            return int(s1[i]) - int(s2[i]);
    }

     //return值可根据需要修改
    
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strncmp(const char s1[], const char s2[], const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int a, b, i;
    a = tj_strlen(s1);
    b = tj_strlen(s2);

    
    if (len <= min(a, b))
    {
        for (i = 0; i < len; i++)
        {
            if (s1[i] != s2[i])
            {
                
                break;
            }
            
        }
        if (i == len)
            return 0;
        else
            return int(s1[i]) - int(s2[i]);
    }
    else
    {
        for (i = 0; i <= min(a, b); i++)
        {
            if (s1[i] != s2[i])
            {
                
                break;
            }
            
        }
        if (i == min(a,b)+1)
            return 0;
        else
            return int(s1[i]) - int(s2[i]);
    }
    
     //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strcasencmp(const char s1[], const char s2[], const int len)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int a, b, i;
    a = tj_strlen(s1);
    b = tj_strlen(s2);


    if (len <= min(a, b))
    {
        for (i = 0; i < len; i++)
        {
            if (s1[i] != s2[i])
            {
                if (s1[i] <= 90 && s1[i] >= 65 && s2[i] >= 65 && s2[i] <= 90)
                {
                    if ((int(s1[i]) - int(s2[i])) == 0)
                        continue;
                }

                else if (s1[i] <= 90 && s1[i] >= 65)
                {
                    if ((int(s1[i]) - int(s2[i]) + 32) == 0)
                        continue;
                }

                else if (s2[i] <= 90 && s2[i] >= 65)
                {
                    if ((int(s1[i]) - int(s2[i]) - 32) == 0)
                        continue;
                }

                else
                    ;
                break;
            }

        }
        if (i == len)
            return 0;
        else
        {
            if (s1[i] <= 90 && s1[i] >= 65 && s2[i] >= 65 && s2[i] <= 90)
                return int(s1[i]) - int(s2[i]);
            else if (s1[i] <= 90 && s1[i] >= 65)
                return int(s1[i]) - int(s2[i]) + 32;
            else if (s2[i] <= 90 && s2[i] >= 65)
                return int(s1[i]) - int(s2[i]) - 32;
            else
                return int(s1[i]) - int(s2[i]);
        }
    }
    else
    {
        for (i = 0; i <= min(a, b); i++)
        {
            if (s1[i] != s2[i])
            {
                if (s1[i] <= 90 && s1[i] >= 65 && s2[i] >= 65 && s2[i] <= 90)
                {
                    if ((int(s1[i]) - int(s2[i])) == 0)
                        continue;
                }

                else if (s1[i] <= 90 && s1[i] >= 65)
                {
                    if ((int(s1[i]) - int(s2[i]) + 32) == 0)
                        continue;
                }

                else if (s2[i] <= 90 && s2[i] >= 65)
                {
                    if ((int(s1[i]) - int(s2[i]) - 32) == 0)
                        continue;
                }

                else
                    ;
                break;
            }

        }
        if (i == min(a,b)+1)
            return 0;
        else
        {
            if (s1[i] <= 90 && s1[i] >= 65 && s2[i] >= 65 && s2[i] <= 90)
                return int(s1[i]) - int(s2[i]);
            else if (s1[i] <= 90 && s1[i] >= 65)
                return int(s1[i]) - int(s2[i]) + 32;
            else if (s2[i] <= 90 && s2[i] >= 65)
                return int(s1[i]) - int(s2[i]) - 32;
            else
                return int(s1[i]) - int(s2[i]);
        }
    }
   //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strupr(char str[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int a,i;
    a = strlen(str);
    for (i = 0; i < a; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strlwr(char str[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int a, i;
    a = strlen(str);
    for (i = 0; i < a; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
    }
    return 0; //return值可根据需要修改
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strchr(const char str[], char ch)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int a, i;
    a = strlen(str);
    for (i = 0; i < a; i++)
    {
        if (str[i] == ch)
        {
            
            break;
        }
            
    }
    if (i == a)
        return 0;//return值可根据需要修改
    else
        return i + 1;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strstr(const char str[], const char substr[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int a, b, i,c;
    a = tj_strlen(str);
    b = tj_strlen(substr);
    for (i = 0; i <= a - b; i++)
    {
        for (c = 0; c < b; c++)
        {
            if (str[i + c] != substr[c])
                break;
        }
        if (c == b)
        {
           
            break;
        }
            
    }
    if(i==a-b+1)
        return 0; //return值可根据需要修改
    else
        return i + 1;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strrchr(const char str[], const char ch)
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int a, i;
    a = strlen(str);
    for (i = a-1; i >=0; i--)
    {
        if (str[i] == ch)
        {
            
            break;
        }

    }
    if (i == -1)
        return 0;//return值可根据需要修改
    else
        return i + 1;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strrstr(const char str[], const char substr[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int a, b, i, c;
    a = tj_strlen(str);
    b = tj_strlen(substr);
    for (i = a-b; i>=0; i--)
    {
        for (c =b-1; c>=0; c--)
        {
            if (str[i + c] != substr[c])
                break;
        }
        if (c == -1)
        {
            
            break;
        }

    }
    if (i == -1)
        return 0; //return值可根据需要修改
    else
        return i + 1;
}

/***************************************************************************
  函数名称：
  功    能：
  输入参数：
  返 回 值：
  说    明：
***************************************************************************/
int tj_strrev(char str[])
{
    /* 注意：函数内不允许定义任何形式的数组（包括静态数组） */
    int a,i;
    a = tj_strlen(str);
    for (i = 0; i < a; i++)
    {
        str[i] = str[a - 1 - i];
    }
    return 0; //return值可根据需要修改
}