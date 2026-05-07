// Class: NewerPresentButton


/* NewerPresentButton::~NewerPresentButton() */

void __thiscall NewerPresentButton::~NewerPresentButton(NewerPresentButton *this)

{
  *(undefined ***)this = &PTR_GetClass_06778b80;
  *(undefined ***)(this + 0x198) = &PTR__NewerPresentButton_06778ed8;
  std::string::~string((string *)(this + 0x300));
  PVZ2UIButton::~PVZ2UIButton((PVZ2UIButton *)this);
  return;
}


/* non-virtual thunk to NewerPresentButton::~NewerPresentButton() */

void __thiscall NewerPresentButton::~NewerPresentButton(NewerPresentButton *this)

{
  ~NewerPresentButton(this + -0x198);
  return;
}


/* NewerPresentButton::~NewerPresentButton() */

void __thiscall NewerPresentButton::~NewerPresentButton(NewerPresentButton *this)

{
  ~NewerPresentButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NewerPresentButton::~NewerPresentButton() */

void __thiscall NewerPresentButton::~NewerPresentButton(NewerPresentButton *this)

{
  ~NewerPresentButton(this + -0x198);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NewerPresentButton::NewerPresentButton(int, std::string const&, std::string const&,
   Sexy::ButtonListener*) */

void __thiscall
NewerPresentButton::NewerPresentButton
          (NewerPresentButton *this,int param_1,string *param_2,string *param_3,
          ButtonListener *param_4)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_80 [8];
  PVZ2UIImage aPStack_78 [56];
  PVZ2UIImage aPStack_40 [56];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_05478178(aPStack_78,&DAT_056f11a8,auStack_80);
  Sexy::Color::Color((Color *)aPStack_40,1);
  PVZ2UIButton::PVZ2UIButton
            ((PVZ2UIButton *)this,param_1,param_4,(wstring *)aPStack_78,(Color *)aPStack_40);
  FUN_05476c50(aPStack_78);
  nop();
  *(undefined ***)this = &PTR_GetClass_06778b80;
  *(undefined ***)(this + 0x198) = &PTR__NewerPresentButton_06778ed8;
  Set8BytesTo0(this + 0x300);
  this[0x308] = (NewerPresentButton)0x0;
  lVar1 = StringHelper::ToImage(param_2,false);
  lVar2 = StringHelper::ToImage(param_3,false);
  if ((lVar2 != 0) && (lVar1 != 0)) {
    PVZ2UIImage::PVZ2UIImage(aPStack_78,lVar1,1);
    PVZ2UIImage::PVZ2UIImage(aPStack_40,lVar2,1);
    PVZ2UIButton::SetDialogStates((PVZ2UIButton *)this,aPStack_78,aPStack_40);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

