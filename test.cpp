

    auto start = std::chrono::high_resolution_clock::now();

    auto end = std::chrono::high_resolution_clock::now();

    // 걸린 시간 계산
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Elapsed time: " << elapsed.count() << " seconds" << std::endl;









    #include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include "Setup.hpp"

//C:\Users\mhlee\Desktop\Work\OrbitData\TimeTab
int main() {
    std::ifstream file("C:/Users/mhlee/Desktop/Work/OrbitData/TimeTab/TIMETAB.DAT");
    std::string line;
    std::vector<std::vector<std::string>> parsed_data;

    if (file.is_open())
    {
        while (getline(file, line))
        {
            std::stringstream stream(line);
            std::string field;
            std::vector<std::string> parsed_line;

            while (getline(stream, field, '\t'))
            {
                parsed_line.push_back(field);
            }

            parsed_data.push_back(parsed_line);

        }
        file.close();

    }


    // std::cout << "The size of int is: " << sizeof(int) << " bytes." << std::endl;
    return 0;


}
