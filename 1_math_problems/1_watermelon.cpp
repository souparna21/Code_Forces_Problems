#include <iostream>
main()
{
    int w;
    std::cin >> w;
    puts(w < 3 | w % 2 ? "NO" : "YES");
}