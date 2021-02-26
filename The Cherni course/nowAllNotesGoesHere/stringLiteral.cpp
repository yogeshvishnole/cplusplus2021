#include <iostream>
using namespace std;

int main()
{
    char name[7] = "Yogehs";
    // name[2] = "a"; avoid this not work

    // string literal hover over it 3 because of null termination
    // string literals save in read only section of memory

    // c++ 14 one _FEATURES

    string name = "Hello"s + "Bye";

    // writng paras
    string para = R"(Hello

djhgfghjk,l.)";

    // string literals always stored in read only memory

    // new things
    const char *nama = u8"Hello";
    const wchar_t *name = L"Yogesh";
    const char16_t *nela = u"Helo";
    const char32_t *name1 = U"Helo";
}