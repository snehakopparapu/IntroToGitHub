#include <iostream>
using namespace std;

void maxmedal(int medals[][3], string countries[]){
    int maxcount = 0;
    int maxindex = 0;
    for (int x=0;x<8;x++){
        int countrycount = 0;
        for(int y=0;y<3;y++){
            countrycount+=medals[x][y];
        }
        if (countrycount> maxcount){
            maxcount = countrycount;
            maxindex = x;
        }
    }
    cout<<"country w/ most medals is "<<countries[maxindex]<<" with "<<maxcount<<endl;
}

int main(){
    string countries[]={"Canada", "Italy","Germany","Japan","Kazakhstan","Russia","South Korea","US"};
    int countrymedal[8][3]{
        {0,3,0},
        {0,0,1},
        {0,0,1},
        {1,0,0},
        {0,0,1},
        {3,1,1},
        {0,1,0},
        {1,0,1}
    };
    maxmedal(countrymedal, countries);
    return 0;
}