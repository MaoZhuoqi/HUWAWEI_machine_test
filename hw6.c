#include "stdio.h"
#include "string.h"
    int main()
    {    
        int i,a[1000]={0};
        char str[1000],c;
        gets(str);
        c = getchar();
        for(i=0;i<strlen(str);i++)
        {    
           
            a[str[i]]++;
        }
		if(c>='A'&&c<='Z')
        printf("%d",a[c]+a[c+32]);
		else if(c>='a'&&c<='z')
			printf("%d",a[c]+a[c-32]);
        return 0;
    }
//    #include "stdio.h"
//#include "string.h"
//
//Ҫ��ֽ��ַ���������������M��N��M���������M���ַ�����N���������ÿ���ַ�����λ����������0��
//���磺����2,8�� ��abc�� ����123456789���������Ϊ��abc00000��,��12345678��,��90000000��
//int main()
//{
//	int in_str;
//	int weishu;
//	char str[100];
//	unsigned char buf0[100]={"00000000000000000000000000000000000000000000000000000000"};
//	char buf1[100];
//	char buf2[100];
//	int i,len,j; 
//	
//	scanf("%d",&in_str);
//	scanf("%d",&weishu);
//	
//	for(j=0;j<in_str;j++){
//	scanf("%s",str);
//	len=strlen(str);
//	if(len<=weishu)
//	{	
//		strncat(str,buf0,weishu-len);
//		printf("%s,",str);
//	}
//	else 
//	{
//		strncpy(buf1,str,weishu);
//		buf1[weishu+1]='\0';
//		printf("%s,",buf1);
//		for(i=0;i<len-weishu;i++)
//		{
//			buf2[i]=str[weishu+i];
//		}
//		strncat(buf2,buf0,weishu-strlen(buf2));
//		printf("%s,",buf2);
//	}
//	}
//	
//	
//}
