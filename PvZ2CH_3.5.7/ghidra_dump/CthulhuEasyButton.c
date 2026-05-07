// Class: CthulhuEasyButton


/* CthulhuEasyButton::SetTypeName(std::string) */

void CthulhuEasyButton::SetTypeName(long param_1)

{
  thunk_FUN_05475e00(param_1 + 0xa8);
  return;
}


/* CthulhuEasyButton::GetTypeName() const */

undefined8 CthulhuEasyButton::GetTypeName(void)

{
  undefined8 in_x8;
  
  FUN_05475d88();
  return in_x8;
}


/* CthulhuEasyButton::GetPlantAttackRatio() */

undefined4 __thiscall CthulhuEasyButton::GetPlantAttackRatio(CthulhuEasyButton *this)

{
  return *(undefined4 *)(this + 200);
}


/* CthulhuEasyButton::SetDangerroomInfo(CthulhuDangerroomInfo) */

void __thiscall CthulhuEasyButton::SetDangerroomInfo(CthulhuEasyButton *this,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(this + 0xb0) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(this + 0xb4) = uVar1;
  return;
}


/* CthulhuEasyButton::SetPlantAttackRatio(float) */

void __thiscall CthulhuEasyButton::SetPlantAttackRatio(CthulhuEasyButton *this,float param_1)

{
  *(float *)(this + 200) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuEasyButton::StaticClassInit() */

void CthulhuEasyButton::StaticClassInit(void)

{
  CRefSymbolDb *this;
  long *plVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((this != (CRefSymbolDb *)0x0) &&
     (plVar1 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(this), plVar1 != (long *)0x0
     )) {
    pcVar2 = *(code **)(*plVar1 + 0x18);
    std::string::string(asStack_10,"CthulhuEasyButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04d6fd80,0x110,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CthulhuEasyButton::StaticGetClass() */

long * CthulhuEasyButton::StaticGetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"CthulhuEasyButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CthulhuEasyButton::GetClass() const */

long * CthulhuEasyButton::GetClass(void)

{
  long *plVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if (sClass != (long *)0x0) {
    return sClass;
  }
  plVar1 = (long *)Sexy::RtClass::StaticNew();
  pcVar3 = *(code **)(*plVar1 + 0x50);
  sClass = plVar1;
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"CthulhuEasyButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CthulhuEasyButton::GetDrawRect() */

Insets * CthulhuEasyButton::GetDrawRect(void)

{
  long in_x0;
  Insets *in_x8;
  
  Sexy::Insets::Insets(in_x8,(Insets *)(in_x0 + 0xcc));
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CthulhuEasyButton::CthulhuEasyButton() */

void __thiscall CthulhuEasyButton::CthulhuEasyButton(CthulhuEasyButton *this)

{
  undefined **__n;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::BoardEntity((BoardEntity *)this);
  __n = &PTR__CthulhuEasyButton_069b62d0;
  *(undefined ***)this = &PTR_GetClass_069b6080;
  *(undefined ***)(this + 0x10) = &PTR__CthulhuEasyButton_069b62d0;
  Set8BytesTo0((string *)(this + 0xa8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xc0));
  Sexy::Insets::Insets((Insets *)(this + 0xcc));
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
         *)(this + 0xe0));
  std::string::append((string *)(this + 0xa8),"",(size_t)__n);
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb8) = 0xffffffff;
  *(undefined4 *)(this + 0xbc) = 1;
  *(undefined4 *)(this + 0xb4) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0xc0),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::
  map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>::
  clear((map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
         *)(this + 0xe0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CthulhuEasyButton::StaticNew() */

CthulhuEasyButton * CthulhuEasyButton::StaticNew(void)

{
  CthulhuEasyButton *this;
  
  this = ::operator_new(0x110);
  CthulhuEasyButton(this);
  return this;
}


/* CthulhuEasyButton::~CthulhuEasyButton() */

void __thiscall CthulhuEasyButton::~CthulhuEasyButton(CthulhuEasyButton *this)

{
  *(undefined ***)this = &PTR_GetClass_069b6080;
  *(undefined ***)(this + 0x10) = &PTR__CthulhuEasyButton_069b62d0;
  std::
  map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>::
  ~map((map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
        *)(this + 0xe0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xc0));
  std::string::~string((string *)(this + 0xa8));
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to CthulhuEasyButton::~CthulhuEasyButton() */

void __thiscall CthulhuEasyButton::~CthulhuEasyButton(CthulhuEasyButton *this)

{
  ~CthulhuEasyButton(this + -0x10);
  return;
}


/* CthulhuEasyButton::~CthulhuEasyButton() */

void __thiscall CthulhuEasyButton::~CthulhuEasyButton(CthulhuEasyButton *this)

{
  ~CthulhuEasyButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CthulhuEasyButton::~CthulhuEasyButton() */

void __thiscall CthulhuEasyButton::~CthulhuEasyButton(CthulhuEasyButton *this)

{
  ~CthulhuEasyButton(this + -0x10);
  return;
}


/* CthulhuEasyButton::SetAttackRatioMap(std::string, float) */

void __thiscall
CthulhuEasyButton::SetAttackRatioMap(undefined4 param_1,CthulhuEasyButton *this,string *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)
           std::
           map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
           ::operator[]((map<std::string,float,std::less<std::string>,std::allocator<std::pair<std::string_const,float>>>
                         *)(this + 0xe0),param_3);
  *puVar1 = param_1;
  return;
}

