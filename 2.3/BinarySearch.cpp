//2.3-5
#include <iostream>

using namespace std;

int BinarySearch(int * tab,int p, int r, int value){
  if(p <= r){
    int q = (p+r)/2;
    if(tab[q] == value)
      return q;
    else{
      if(tab[q] > value)
        return BinarySearch(tab,p,q-1,value);
      else
        return BinarySearch(tab,q+1, r,value);
    }
  }
  return -1;
}

int main(){
  int n;
  cin >> n;

  int * tab = (int*)malloc(sizeof(int) * n);
  for(int i = 0;i < n;i++){
    cin >> tab[i];
  }

  int value;
  cin >> value;
  cout << BinarySearch(tab, 0,n-1, value);


  return 0;
}