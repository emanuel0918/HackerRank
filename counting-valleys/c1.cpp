#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
 int sea_level=0;
 int level=0;
 int valleys=0;
 for(int i=0;i<n;i++){
  if(s.at(i)=='D'){
   sea_level--;
  }else{
   sea_level++;
  }
  if(sea_level<0){
   if(level!=-1){
    valleys++;
    level=-1;
   }
  }else {
   if(level!=1){
    level=1;
   }
  }
 }
 return valleys;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
