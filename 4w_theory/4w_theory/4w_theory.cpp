#include <iostream>

using namespace std;

int main()
{
    // 1번 
    
    //(1)
    int layer;
    cin >> layer;
    int current_layer{ 0 }; // 중괄호를 이용한 변수의 직집초기화. current_layer = 0 과 같다
    while (current_layer < layer)
    {
        current_layer += 1;
        for (int i = 1; i <= current_layer; i++)
        {
            cout << i << " ";
        }
        cout << endl; 
    }
    cout << "\n";

    //(2)
    int layer2;
    cin >> layer2;
    int current_layer2{ 0 };
    while (current_layer2 < layer2)
    {
        current_layer2 += 1;
        for (int i = layer; i >= current_layer2; i--)
        {
            cout << i << " ";
        }
        cout << endl;    
    }
    cout << "\n";

    //(3)
    int layer3;
    cin >> layer3;
    int current_layer3{ 0 }; 
    int sub{ 0 };
    while (current_layer3 < layer3)
    {
        current_layer3 += 1;
        sub = current_layer3;

        for (int i = layer; i > current_layer3; i--)
        {
            cout << "  ";
        }
        for (int i = 1; i <= current_layer3; i++)
        {
            cout << sub << " ";
            sub -= 1;
        }
        cout << endl;
    }
    cout << "\n";

    //(4)
    int layer4{ 0 };
    int num;

    cin >> num;

    while (layer4 < num)
    {
        layer4 += 1;
        for (int i = num - layer4 + 1; i > 1; i--)
        {
            cout << "  ";
        }
        for (int i = layer4; i > 0; i--)
        {
            cout << i << " ";
        }
        for (int i = 2; i <= layer4; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }


    


    // 2번

    //int num;
    //cout << "enter the number : ";
    //cin >> num;

    //if (num >= 10000)
    //    cout << num / 10000 << "만";
    //if (num / 1000 % 10) // 값이 0일때, 천보다 작은 값이거나, 또는 10234 같이 천의 자리가 0이거나
    //    cout << num / 1000 % 10 << "천";
    //if (num / 100 % 10)
    //    cout << num / 100 % 10 << "백";
    //if (num / 10 % 10)
    //    cout << num / 10 % 10 << "십";
    //if (num % 10)
    //    cout << num % 10 << endl;
    
}


