// ����Ϊ���Ե��ж�����������淶ʾ���������ύ�����Ʒ֡�
#include <stdio.h>
int main() {
    char str[1000];
    while(scanf("s", str) != EOF)// ע�⣬��������Ƕ��������������ͨ��whileѭ����������������
    {
        int a[1000]={0},i;
     
        for(i=0;str[i]!='\0';i++)
        {
             a[str[i]]++;
            if(a[str[i]]==1)
            {
                printf("%c",str[i]);
            }
        }
    }
    return 0;
}
