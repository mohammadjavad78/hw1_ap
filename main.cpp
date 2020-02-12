#include<iostream>
#include<fstream>
#include<string>
#include<locale>
#include<vector>
#include<sstream>

int main()
{
    std::cout<<"started2.."<<std::endl;
    std::ifstream ifile{"AP-Data.csv"};
    if(ifile.fail())
        return 1;
    std::vector<std::string> x;
    std::string v;
    ifile>>v;
    std::cout<<v;
    ifile.close();
    std::string v2;
    v2=v[0];
    v2+=v[1];
    v2+=v[2];
    v2+=v[3];
    std::stringstream geek(v2);
    double k;
    geek>>k;
    std::cout<<"*****"<<k+2<<"******";
    

    return 0;
}