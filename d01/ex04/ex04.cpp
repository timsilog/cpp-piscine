# include <string>
# include <iostream>

int main ( void )
{
    std::string     s = "HI THIS IS BRAIN";
    std::string*    p = &s;
    std::string&    r = s;
    std::cout << "string contains: "
    << s
    << "\npointer contains: "
    << *p
    << "\nreference contains: "
    << r
    << std::endl;
}