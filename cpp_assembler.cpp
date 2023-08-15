#include <iostream> 
using namespace std;
int main()
{
	int N, N2; 
	int F; 
	const int DVA = 2;
	cout << "N="; cin >> N;
	N2 = N;
	_asm {
			XOR EDX, EDX
			MOV EAX, N
			DIV DVA
			MOV N2, EAX
			MOV F, EDX
			CMP EDX, 0
			JE L02
			MOV EBX, 3
		L01:
		    CMP EBX, N2
			JG L03
			XOR EDX, EDX
			MOV EAX, N
			DIV EBX
			CMP EDX, 0
			JE L02
			ADD EBX, 2
			JMP L01
		L02:
		    MOV F, 0
			L03:
	}
	cout << N;
	if (F == 1) {
		cout << " - prime number" << endl;
	}
	else {
		cout << " - composite number" << endl;
	}
}

