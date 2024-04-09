#include <iostream>
using namespace std;
int main() {

    int arr[5] = {3, 15, 5, 7, 11};
    int *ptr = arr;


    cout<<"Array elements:"<<endl;
    for (int i = 0; i < 5; ++i)
     {
        cout<<"Element "<<i + 1<<": "
        <<*(ptr + i) <<endl;
    }

    int sum = 0;
    for (int i = 0; i < 5; ++i)
    {
        sum += *(ptr + i);
    }

    cout<<"Sum of array elements: "<<sum<<endl;

    return 0;
}
