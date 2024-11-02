#include<iostream>

using namespace std;

int main() {
  int a,b,c,d,e,f,x,ta,ao;
  int aoki, takahashi;

  cin >> a >> b >> c >> d >> e >> f >> x;
  
  ta = x - (a + c);
  if(ta>0){
    takahashi = (a + ta) * c;
  }else{
    takahashi = a * c;
  }
  
  ao = x - (d + f);
  if(ao>0){
    aoki = (e + ao) * d;
  }else{
    aoki = e * f;
  }

  if(takahashi>aoki) {
    cout << "Takahashi" << "\n";
  }else if(aoki>takahashi) {
    cout << "Aoki" << "\n";
  }else {
    cout << "Draw" << "\n";
  }

  return 0;
}
