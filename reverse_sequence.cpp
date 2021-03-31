# include <vector>
using namespace std;
vector<int> reverseSeq(int n) {
  vector<int> v;
  for(int i=n;i>0;i--){v.push_back(i);}
  return v;
}