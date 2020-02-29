#include <iostream>
#include <cmath>
#include <string>

using namespace std;

string dir[17] = {"C", "N", "NNE", "NE", "ENE", "E", "ESE", "SE", "SSE", "S", "SSW", "SW", "WSW", "W", "WNW", "NW", "NNW"};
int threshold[12] = {2, 15, 33, 54, 79, 107, 138, 171, 207, 244, 284, 326};

string cvt_dir(double angle);
int cvt_wind(double wind);

int main(){
  int Deg, Dis;
  double angle, wind;

  cin >> Deg >> Dis;

  angle = Deg / 10.0;
  wind = Dis / 60.0;

  if(cvt_wind(wind)==0) cout << dir[0]  << " "  << cvt_wind(wind) << endl;
  else cout << cvt_dir(angle) << " "  << cvt_wind(wind) << endl;
}

string cvt_dir(double angle){
  if(angle < 11.25 || 348.75 <= angle) return dir[1];
  else {
    int index = ceil((angle + 11.25) / 22.5);
    return dir[index];  
  }
}

int cvt_wind(double wind){
  wind = round(wind * 10.0); //10倍してintで考える

  for(int i = 0; i < 12; ++i){
    if(threshold[i] < wind) continue;
    else return i;
  }
  return 12;
}
