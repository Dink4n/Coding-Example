#include <iostream>

int main()
{
    int list[5] = {40,32,15,70,1}, low, low_index;
    for (int i = 1;i < 5;i++){
        low_index = i-1;
        for (int num = i;num < 5;num++){
            if (list[num] < list[low_index]){
                low_index = num;
            }
        }
        low = list[low_index];
        list[low_index] = list[i-1];
        list[i-1] = low;
    }
  for (int loop = 0;loop < 5;loop++){
      std::cout << list[loop] << std::endl;
   }
}

