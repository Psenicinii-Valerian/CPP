//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
//---------------------------------------------------------------------------
class proces : public TThread
{
private:
protected:
	void __fastcall Execute();
public:
	__fastcall proces(bool CreateSuspended);
};
//---------------------------------------------------------------------------
#endif
