//2.1-2
#include <iostream>

using namespace std;

void InsertionSortDesc(int * tab, int n){
   for(int i = 1;i < n;i++){
    int j = i-1;
    int key = tab[i];
    while(tab[j] < key && j >= 0){
      tab[j+1] = tab[j];
      j--;
    }
    tab[j+1] = key;
  }
}

int main(){
  int n;
  cin >> n;
  int * tab = (int*)malloc(sizeof(int) * n);
  for(int i = 0;i < n;i++){
    cin >> tab[i];
  }

  InsertionSortDesc(tab,n);
  
  for(int i = 0;i < n;i++){
    cout << tab[i]<<" ";
  }
  cout << endl;

  return 0;
}