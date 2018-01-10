#include <fstream>
#include <iostream>
#include <string>

std::string replaceAll(std::string line, std::string s1, std::string s2)
{
    size_t nPos = line.find(s1, 0);
    if (nPos != std::string::npos)
        line.replace(nPos, s1.length(), s2);
    while (nPos != std::string::npos)
    {
        nPos = line.find(s1, nPos + 1);
        if (nPos != std::string::npos)
            line.replace(nPos, s1.length(), s2);
    }
    return (line);
}

int         main(int argc, char** argv)
{
    if (argc != 4)
    {
        std::cout << "Usage: ./replace [file_name] [\"str1\"] [\"str2\"]\n";
        return (-1);
    }

    std::string     line;
    std::string     filename = argv[1];
    std::string     s1 = argv[2];
    std::string     s2 = argv[3];
    std::ifstream   ifs(filename);
    if (!ifs)
    {
        std::cout << "Input file invalid\n";
        return (-1);
    }
    std::ofstream   ofs(filename + ".replace");
    if (!ofs)
    {
        std::cout << "Output file failed to open\n";
        return (-1);
    }

    if (s1.empty() || s2.empty())
    {
        std::cout << "No empty strings allowed!";
        return (-1);
    }

    while (std::getline(ifs, line) && !ifs.eof())
    {
        ofs << replaceAll(line, argv[2], argv[3]);
        ofs << "\n";
    }
    ofs << replaceAll(line,argv[2], argv[3]);
    ifs.close();
    ofs.close();
    return (0);
}