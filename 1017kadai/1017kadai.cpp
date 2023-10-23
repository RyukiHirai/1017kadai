
// 1017kadai.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;

const int MAX_NAME = 16;

class Player
{
public:
    char Pname[MAX_NAME + 1];
    int PHP;
    int PATTACK;
    int PDEFF;
    void Show();
};

class Enemy
{
public:
    char Ename{ MAX_NAME + 1 };
    int EHP;
    int EATTACK;
    int EDEFF;
    void Show();
};

void Player::Show()
{
    cout << "名前：" << Pname << endl << "体力" << PHP << endl << "攻撃力：" << endl << "防御力" << PDEFF << endl;
}

void Enemy::Show()
{
    cout << "名前：" << Ename << endl << "体力" << EHP << endl << "攻撃力：" << endl << "防御力" << EDEFF << endl;
}

int main()
{
    Player player[] =
    {
        {"俺",100,30,15,},
    };
    int size = sizeof Player / sizeof * player;

    Enemy enemy[] =
    {
        {"モブ",200,30,15,},
    };
    int size = sizeof Enemy / sizeof * enemy;

    for (int i = 0; i < size; ++i)
    {
        Player[i].Show();
        Enemy[i].Show();
    }
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
