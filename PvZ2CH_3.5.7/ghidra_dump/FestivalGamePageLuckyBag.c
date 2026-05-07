// Class: FestivalGamePageLuckyBag


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageLuckyBag::GetLayoutName() */

void __thiscall FestivalGamePageLuckyBag::GetLayoutName(FestivalGamePageLuckyBag *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIFestivalGamePageLuckyBag");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* FestivalGamePageLuckyBag::~FestivalGamePageLuckyBag() */

void __thiscall FestivalGamePageLuckyBag::~FestivalGamePageLuckyBag(FestivalGamePageLuckyBag *this)

{
  *(undefined ***)this = &PTR_GetClass_06720370;
  *(undefined **)(this + 0xd8) = &DAT_067206d8;
  FUN_05476c50(this + 0x140);
  UISingletonDialog<FestivalGamePageLuckyBag>::~UISingletonDialog
            ((UISingletonDialog<FestivalGamePageLuckyBag> *)this);
  return;
}


/* FestivalGamePageLuckyBag::~FestivalGamePageLuckyBag() */

void __thiscall FestivalGamePageLuckyBag::~FestivalGamePageLuckyBag(FestivalGamePageLuckyBag *this)

{
  ~FestivalGamePageLuckyBag(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageLuckyBag::FestivalGamePageLuckyBag() */

void __thiscall FestivalGamePageLuckyBag::FestivalGamePageLuckyBag(FestivalGamePageLuckyBag *this)

{
  long lVar1;
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UISingletonDialog<FestivalGamePageLuckyBag>::UISingletonDialog
            ((UISingletonDialog<FestivalGamePageLuckyBag> *)this);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_06720370;
  *(undefined **)(this + 0xd8) = &DAT_067206d8;
  FUN_05478178(this + 0x140,&DAT_056f11a8,auStack_10);
  nop();
  Sexy::Color::Color((Color *)(this + 0x148),1);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x158) = 0x2a1b;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* FestivalGamePageLuckyBag::showFestivalGameEntrance() */

UILuckBag * FestivalGamePageLuckyBag::showFestivalGameEntrance(void)

{
  UILuckBag *pUVar1;
  char cVar2;
  UILuckBag *pUVar3;
  
  pUVar1 = UISingletonDialog<UILuckBag>::m_pInstance;
  pUVar3 = pUVar1;
  if (UISingletonDialog<UILuckBag>::m_pInstance == (UILuckBag *)0x0) {
    pUVar3 = ::operator_new(0x140);
    UILuckBag::UILuckBag(pUVar3);
    UISingletonDialog<UILuckBag>::m_pInstance = pUVar3;
    cVar2 = (**(code **)(*(long *)pUVar3 + 0x310))(pUVar3);
    pUVar3 = UISingletonDialog<UILuckBag>::m_pInstance;
    if (cVar2 == '\0') {
      if (UISingletonDialog<UILuckBag>::m_pInstance != (UILuckBag *)0x0) {
        (**(code **)(*(long *)UISingletonDialog<UILuckBag>::m_pInstance + 0x18))();
      }
      UISingletonDialog<UILuckBag>::m_pInstance = (UILuckBag *)0x0;
      pUVar3 = pUVar1;
    }
  }
  return pUVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* FestivalGamePageLuckyBag::ButtonDepress(int) */

void __thiscall FestivalGamePageLuckyBag::ButtonDepress(FestivalGamePageLuckyBag *this,int param_1)

{
  char cVar1;
  int iVar2;
  ActiveItem aAStack_88 [8];
  undefined4 local_80;
  char local_70;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 0x1f8) {
    iVar2 = Sexy::LazySingleton<ActivityManager>::GetInstancePtr();
    ActivityManager::GetActiveItem(iVar2);
    cVar1 = FUN_03ac12f8(local_80);
    if ((cVar1 == '\0') || (local_70 == '\0')) {
      (**(code **)(*(long *)this + 0x350))(this);
    }
    else {
      (**(code **)(*(long *)this + 0x340))(this);
    }
    ActiveItem::~ActiveItem(aAStack_88);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to FestivalGamePageLuckyBag::ButtonDepress(int) */

void __thiscall FestivalGamePageLuckyBag::ButtonDepress(FestivalGamePageLuckyBag *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

