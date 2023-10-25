#include <iostream>
#include <string>
#include <string_view>
using std::string, std::string_view, std::cout, std::endl;
using namespace std::string_view_literals;

int main()
{
    std::string str{"abc_123"};
    char const* skip_set{"0123456789"};
    std::string::size_type str_last_pos{std::string::npos};

    auto found = str.find_last_not_of(skip_set);

    if (found != std::string::npos)
        std::cout << '[' << found << "] = \'" << str[found] << "\'\n";
    else
        std::cout << "not found\n";
}
