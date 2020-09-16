//2.1-4
#include <iostream>

using namespace std;

int main(){
  int n;
  cin >> n;
  int * a = (int*)malloc(sizeof(int) * n);
  int * b = (int*)malloc(sizeof(int) * n);

  for(int i = 0;i < n;i++){
    cin >> a[i];
  }
  for(int i = 0;i < n;i++){
    cin >> b[i];
  }
  int * c = (int*)malloc(sizeof(int) * (n+1));

  int m = 0;
  for(int i = n;i > 0;i--){
    m = m + a[i-1] + b[i-1];
    c[i] = m % 2;
    m /= 2;
  }
  c[0] = m;

  for(int i = 0;i < n+1;i++){
    cout << c[i] << endl;
  }


  return 0;
}