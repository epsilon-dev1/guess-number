#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 100 + 1;
    int attempts = 0;
    int guess;

    cout << "我选了一个 1-100 的数字，猜猜看！" << endl;

    while (true) {
        cout << "请输入你的猜测: ";
        cin >> guess;
        attempts++;

        if (guess < secret) {
            cout << "太小了！" << endl;
        } else if (guess > secret) {
            cout << "太大了！" << endl;
        } else {
            cout << "恭喜！你用了 " << attempts << " 次猜中了。" << endl;
            break;
        }
    }

    return 0;
}