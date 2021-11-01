#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // quiz 1
    /*int num;
    cin >> num;
    int layer{ 0 };
    int layer2{ 0 };
    while (layer < num)
    {
        layer += 1;

        for (int i = num - layer; i > 0; i--)
        {
            cout << " ";
        }
        for (int i = 1; i <= 2 * layer - 1; i++)
        {
            cout << "*";
        }
        cout << endl;
    }
    while (layer2 < num - 1)
    {
        layer2 += 1;

        for (int i = 1; i <= layer2; i++)
        {
            cout << " ";
        }
        for (int i = 2 * num - 2 * layer2-1; i > 0 ; i--)
        {
            cout << "*";
        }
        cout << endl;
    }
    */
    // 내가 푼 풀이에서는 while을 사용하지 않고 어차피 layer도 1순환에 1씩 늘어나므로 for을 중첩으로 사용함
    // 그리고 별의 갯수는 홀수로 생각하지않고 별 프린트 반복문을 2번 넣음
    

    // quiz 2

    /*int num;
    
    cout << "Please enter an integer : ";
    cin >> num;
    int j=1;
    for (int i = num; i > 0; i--)
    {
        j *= i;
    }
    
    cout << num << "! = " << j;*/

    // 실습풀이에서는 while문으로 num자체를 1씩 줄여나가서 j에 다가 곱함. while 조건은 (num) -> num이 1씩 줄어드니까


    // quiz 3

    // 내가 한 거 (colum 실패)
    /*int N, M;
    int count;

    cout << "Input N, M : ";
    cin >> N >> M;

    for (int i = 1; i <= N; i++)
    {
        count = 0;

        for (int j = 1; j <= 9; j++)
        {
            cout << j << " x " << i << " = " << setw(2) << j * i << "\t";
            count += 1;
            if (count == M)
                break;            
        }     
        cout << endl;
    }
    cout << "\n";

    for (int i = 1; i <= N; i++)
    {
        for (int k = M+1; k <= 9; k++)
        {
            cout << k << " x " << i << " = " << setw(2) << k * i << "\t";
        }
        cout << endl;

    }*/
    
    //실습풀이
    int N, M;
    int num_done = 0;

    cout << "input N, M : ";
    cin >> N >> M;

    while (num_done < N) {
        for (int i = 1; i <= N; i++) {
            for (int j = num_done + 1; (j <= M + num_done) && (j <= N); j++) {
                cout << j << " x " << i << " = " << setw(2) << j * i << "\t";
            }
            cout << endl;
        }
        num_done += M;
        cout << endl;
    }

    // quiz 4

    // 접근1
    //int N, M, val{ 1 }, count{ 0 };
    //cin >> N >> M;

    //while (val <= 100)
    //{
    //    if (val % N == 0 || val % M == 0)  // || 대신 else if 를 사용해도 좋지만 더 간결하다.
    //    {
    //        cout << setw(3) << val << " ";
    //            count++;
    //        if (count % 5 == 0) cout << endl;
    //    }
    //    val++;
    //}
    
    // 접근2
    // 동영상 참조


    // quiz 5

   /* char ch;
    int num_aeiou = 0;
    int num_rest = 0;

    while (cin >> ch)
    {
        switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            num_aeiou++;
            break;
        default:
            num_rest++;
            break;
        }        
    }
    cout << "모음 : " << num_aeiou << endl;
    cout << "자음 : " << num_rest << endl;*/
}



