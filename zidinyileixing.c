#define _CRT_SECURE_NO_WARNINGS 


//指针的类型决定了指针解引用的大小
//还决定了+/-的步长


//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char*pa = &a;
//	int *pc = &a;
//	printf("%p\n", pa);
//	printf("%p\n", pa + 1);
//
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}




//结构体的基本认识
//#include <stdio.h>
//
////struct Book
////{
////	//成员变量
////	char name[20];
////	char author[20];
////	short price;
////};
//
//
//
//typedef struct Book//重命名
//{
//	//成员变量
//	char name[20];
//	char author[20];
//	short price;
//}Book2;//这是类型名，Book2现在和 struct Book一个意思,更加简洁
//
//int main()
//{
//	struct Book  b1 = { "C语言程序设计", "谭浩强",30 };
//	printf("%s %s %d", b1.name, b1.author, b1.price);
//	Book2 b2 = { "龙族", "江南", 20 }；
//	return 0;
//}


#include <stdio.h>

//匿名结构体类型

//struct 
//{
//	char c;
//	int a;
//	short b;
//}s;
//
//int main()
//{
//	return 0;
//}














