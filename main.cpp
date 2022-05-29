#include <iostream>
using namespace std;
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>

// int main()
// {
//     std::random_device rd;
//     std::mt19937 gen(rd());
 
//     // values near the mean are the most likely
//     // standard deviation affects the dispersion of generated values from the mean
//     std::normal_distribution<> d(0,20);
 
//     std::map<int, int> hist;
//     for(int n=0; n<10000; ++n) {
//         ++hist[std::round(d(gen))];
//     }
//     for(auto p : hist) {
//         std::cout << std::fixed << std::setprecision(1) << std::setw(2)
//                   << p.first << ' ' << std::string(p.second/200, '*') << '\n';
//     }
// }

#include <iostream>
#include <string>
#include <random>
# include <ctime>
using namespace std;
int main(){

    std::random_device rd{};
    std::mt19937 gen{rd()};
    std::normal_distribution<double> d{77.5,8};
 
    // values near the mean are the most likely
    // standard deviation affects the dispersion of generated values from the mean
    

    // for(int i=0;i<100;i++){
    //     double num=d(gen);
    //     std::cout<<num<<endl;
    // }

//     time_t curr_time; // this will give us the current time
//     srand(curr_time); // this will make the randum genarotor seed be the currenet time thus we wont keep on getting the same random number.
    const int nrolls=10000;  // number of experiments
    const int nstars=1000;    // maximum number of stars to distribute

//     std::default_random_engine generator;
//     std::normal_distribution<double> distribution(75, 8);

//   int number=int(distribution(generator));
//   cout<<number<<endl;

    int p[200]={};
    int count=0;
    for (int i=0; i<nrolls; ++i) {
        double num=d(gen);
        // double number = distribution(generator);
        if(num>=67 and num<=83){
            count++;
        }
    // cout<<number<<", "<<endl;
        if ((num>=50.0)&&(num<=100.0)) ++p[int(num)];
    }
//     cout<<count<<endl;
// //   std::cout << "normal_distribution (75,12.5):" << std::endl;

  for (int i=50; i<100; ++i) {
    std::cout << i << "-" << (i+1) << ": ";
    std::cout << std::string(p[i]*nstars/nrolls,'*') << std::endl;
  }

//   return 0;
}