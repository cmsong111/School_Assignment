#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    while(1){
        int size1x,size1y,size2x,size2y,temp;
        int flag = 0;
        int arr1[10][10] = {0,};
        int arr2[10][10] = {0,};
        

        cin >> size1x >> size1y;
        if (size1x == 0 && size1y == 0){
            break;
        }
        for(int i = 0; i < size1x ; i++){
            for(int ii = 0; ii < size1y ; ii++){
                cin >> temp;
                arr1[i][ii] = temp;
            }
        }

        cin >> size2x >> size2y;
        for(int i = 0; i < size2x ; i++){
            for(int ii = 0; ii < size2y ; ii++){
                cin >> temp;
                arr2[i][ii] = temp;
            }
        }

        for(int i = 0; i < size2x ; i++){
            for(int ii = 0; ii < size2y ; ii++){
                arr1[i][ii] = arr1[i][ii] - arr2[i][ii];
            }
        }

        for(int i = 0; i < size2x ; i++){
            for(int ii = 0; ii < size2y ; ii++){
                if (arr1[i][ii] != 0){
                    flag = 1;
                    break;
                }
            }
        }

        if (size1x != size2x || size1y != size2y){
            cout << "Impossible" << endl;
        } 
        else if (flag == 0) {
            cout << "Zero Matrix" << endl;
        }
        else{
            for(int i = 0; i < size2x ; i++){
                for(int ii = 0; ii < size2y ; ii++){
                    cout << arr1[i][ii] << " ";
                }
             cout << endl;
            }
        }
        
        
    }
  

}