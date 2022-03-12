//宣告函數add存在
#include <stdio.h>
#include <cs50.h>

//主函數
int main(void)
{
    // add函數的實際內容
    string name = get_string("What's your name? ");
    printf("hello, %s\n", name);
}