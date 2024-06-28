#include <stdio.h>

enum BitState
{
	Base = 0,             //00000000 通常状態
	Poison = 1 << 0,      //00000001 毒状態
	Sleep = 1 << 1,       //00000010 ねむり状態
	Paralysis = 1 << 2,   //00000100 まひ状態
	Burn = 1 << 3,        //00001000 やけど
	AtkUp = 1 << 4,       //00010000 攻撃力アップ
	AtkDown = 1 << 5      //00100000 攻撃力ダウン
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);

main()
{
	//状態を管理する変数Stateを宣言してBase(0)で初期化
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}