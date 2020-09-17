//2.2-2
#include <iostream>

using namespace std;

void SelectionSort(int * tab, int n){
  for(int i = 0;i < n-1;i++){
    int min = i;
    for(int j = i+1;j < n;j++){
      if(tab[j] < tab[min])
        min = j;
    }
    int swap = tab[i];
    tab[i] = tab[min];
    tab[min] = swap;
  }
}

int main(){
  int n;
  cin >> n;
  int * tab = (int*)malloc(sizeof(int) * n);
  for(int i = 0;i < n;i++){
    cin >> tab[i];
  }

  SelectionSort(tab,n);

  for(int i = 0;i < n;i++){
    cout << tab[i]<<" ";
  }

  return 0;
}