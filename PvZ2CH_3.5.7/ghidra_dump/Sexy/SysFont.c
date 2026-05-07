// Class: Sexy::SysFont


/* Sexy::SysFont::CreateImageFont() */

undefined8 __thiscall Sexy::SysFont::CreateImageFont(SysFont *this)

{
  return *(undefined8 *)(this + 0x28);
}


/* Sexy::SysFont::~SysFont() */

void __thiscall Sexy::SysFont::~SysFont(SysFont *this)

{
  *(undefined ***)this = &PTR_GetClass_06a32010;
  Font::~Font((Font *)this);
  return;
}


/* Sexy::SysFont::~SysFont() */

void __thiscall Sexy::SysFont::~SysFont(SysFont *this)

{
  ~SysFont(this);
  AK::FreeHook(this);
  return;
}


/* Sexy::SysFont::StaticGetClass() */

long * Sexy::SysFont::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Font::StaticGetClass();
  (*pcVar3)(plVar1,"SysFont",uVar2,StaticNew);
  return sClass;
}


/* Sexy::SysFont::GetClass() const */

long * Sexy::SysFont::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)ResourceClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = Font::StaticGetClass();
  (*pcVar3)(plVar1,"SysFont",uVar2,StaticNew);
  return sClass;
}


/* Sexy::SysFont::InitFromImageFont() */

void __thiscall Sexy::SysFont::InitFromImageFont(SysFont *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = DAT_06bbec80;
  lVar5 = *(long *)(this + 0x28);
  uVar1 = *(undefined4 *)(lVar5 + 0x20);
  uVar2 = *(undefined4 *)(lVar5 + 0x18);
  uVar3 = *(undefined4 *)(lVar5 + 0x1c);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(lVar5 + 0x24);
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x18) = uVar2;
  *(undefined4 *)(this + 0x1c) = uVar3;
  *(undefined8 *)(this + 0x30) = uVar4;
  return;
}


/* Sexy::SysFont::ReInit() */

void __thiscall Sexy::SysFont::ReInit(SysFont *this)

{
  FUN_052bf204();
  *(undefined8 *)(this + 0x28) = DAT_06bbec88;
  InitFromImageFont(this);
  return;
}


/* Sexy::SysFont::SysFont(Sexy::SysFont const&) */

void __thiscall Sexy::SysFont::SysFont(SysFont *this,SysFont *param_1)

{
  Font::Font((Font *)this);
  *(undefined ***)this = &PTR_GetClass_06a32010;
  ReInit(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Sexy::SysFont::StaticNew() */

void Sexy::SysFont::StaticNew(void)

{
  SysFont *this;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"Arial");
  this = ::operator_new(0x48);
  SysFont(this,(SysFont *)asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this);
}


/* Sexy::SysFont::Duplicate() */

SysFont * __thiscall Sexy::SysFont::Duplicate(SysFont *this)

{
  SysFont *this_00;
  
  this_00 = ::operator_new(0x48);
  SysFont(this_00,this);
  return this_00;
}


/* Sexy::SysFont::StringWidth(std::wstring const&) */

void __thiscall Sexy::SysFont::StringWidth(SysFont *this,wstring *param_1)

{
  if (*(long *)(this + 0x30) != DAT_06bbec80) {
    ReInit(this);
  }
  (**(code **)(**(long **)(this + 0x28) + 0x80))(*(long **)(this + 0x28),param_1);
  return;
}


/* Sexy::SysFont::DrawString(Sexy::Graphics*, int, int, std::wstring const&, Sexy::Color const&,
   Sexy::TRect<int> const&) */

void __thiscall
Sexy::SysFont::DrawString
          (SysFont *this,Graphics *param_1,int param_2,int param_3,wstring *param_4,Color *param_5,
          TRect *param_6)

{
  if (*(long *)(this + 0x30) != DAT_06bbec80) {
    ReInit(this);
  }
  (**(code **)(**(long **)(this + 0x28) + 0x98))
            (*(long **)(this + 0x28),param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

