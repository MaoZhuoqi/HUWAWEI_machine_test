#include <stdio.h>
#include <string.h>
/*
��������palindrome_passwd_len
�������������char *s ,��ʾһ�������ַ���;����int step=1��ʾ�ж�ż�����ģ�step=2��ʾ�жϻ�������
�������������int����ʾ�������볤��
����ֵ�����ػ������������Ч����
*/
int palindrome_passwd_len(char *s,int step)
{
    int len = strlen(s);
    int low = 0,high = 0;
    int max = 0,i;
    if(NULL == s){
        return 0;
    }
    for(i = 0;i < len;i++){
        low=i;
        high = low + step;
          printf("high=%d\n",high);
            printf("low=%d\n",low);
        while(low >= 0 && high < len && (s[low] == s[high])){
        	
            low--;
            high++;
             printf("\n high=%d\n",high);
            printf("  low=%d\n",low);
          
        }
        if((high-low-1) > max){
            max = high-low-1;
        }
    }
    return max;
}
int main(void)
{
    char str[10000];
    int max= 0,len=0;
    while(gets(str))
    {
        len = palindrome_passwd_len(str,1);
        max = palindrome_passwd_len(str,2);
        if(len >= max){
            printf("%d\n",len);
        }else{
            printf("%d\n",max);
        }   
    }
    return 0;
}
