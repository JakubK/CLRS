//2.1-3
#include <iostream>

using namespace std;

int LinearSearch(int * tab, int n, int x){
  for(int i = 0;i < n;i++){
    if(tab[i] == x)
      return i;
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

  int x;
  cin >> x;
 
 cout << LinearSearch(tab, n,  x) << endl;

  return 0;
}