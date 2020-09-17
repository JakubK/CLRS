//2.3-4
#include <iostream>

using namespace std;

void InsertionSort(int * tab, int n){
  if(n > 1){
    InsertionSort(tab, n-1);
    int k = tab[n-1];
    int j = n-2;
    while(tab[j] > k && j >= 0){
      tab[j+1] = tab[j];
      j--;
    }
    tab[j+1] = k;
  }
}

int main(){
  int n;
  cin >> n;
  int * tab = (int*)malloc(sizeof(int) * n);
  for(int i = 0;i < n;i++){
    cin >> tab[i];
  }

  InsertionSort(tab,n);
  
  for(int i = 0;i < n;i++){
    cout << tab[i]<<" ";
  }
  cout << endl;

  return 0;
}