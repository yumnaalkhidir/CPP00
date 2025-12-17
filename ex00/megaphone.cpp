#include <iostream>
#include <cctype>
#include <cstring>

void    capitalize_arg(char *av)
{
    for(size_t i = 0; i < std::strlen(av); i++)
        av[i] = std::toupper(av[i]);
}

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        for (int i = 1; i < ac; i++)
        {
            capitalize_arg(av[i]);
            std::cout << av[i];
        }
        std::cout << "\n";
    }
    return (0);
}