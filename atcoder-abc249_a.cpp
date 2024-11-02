#include<iostream>

using namespace std;

int main() {
  int a,b,c,d,e,f,x,takahashi_left,aoki_left;
  int aoki, takahashi;

  cin >> a >> b >> c >> d >> e >> f >> x;
  
  takahashi_left = x - (a + c);
  if(takahashi_left>0){
    takahashi = (a + takahashi_left) * b;
  }else{
    takahashi = a * b;
  }
  
  aoki_left = x - (d + f);
  if(aoki_left>0){
    aoki = (d + aoki_left) * e;
  }else{
    aoki = d * e;
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
