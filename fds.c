#include<stdio.h>
//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//struct B
//{
//	int a;
//	short b;
//	char c;
//	int d;
//};
#pragma pack(4)
int main(int argc, char* argv[])
{
    struct tagTest1
    {
        short a;
        char d;
        long b;
        long c;
    };
    struct tagTest2
    {
        long b;
        short c;
        char d;
        long a;
    };
    struct tagTest3
    {
        short c;
        long b;
        char d;
        long a;
    };
    struct tagTest1 stT1;
    struct tagTest2 stT2;
    struct tagTest3 stT3;

    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
    return 0;
}