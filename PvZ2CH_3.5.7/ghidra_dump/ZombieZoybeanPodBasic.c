// Class: ZombieZoybeanPodBasic


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZoybeanPodBasic::StaticClassInit() */

void ZombieZoybeanPodBasic::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZoybeanPodBasic");
    (*pcVar2)(plVar1,asStack_10,FUN_0345f884,0x830,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZoybeanPodBasic::StaticGetClass() */

long * ZombieZoybeanPodBasic::StaticGetClass(void)

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
  uVar2 = ZombieBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZoybeanPodBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZoybeanPodBasic::GetClass() const */

long * ZombieZoybeanPodBasic::GetClass(void)

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
  uVar2 = ZombieBasic::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZoybeanPodBasic",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZoybeanPodBasic::ZombieZoybeanPodBasic() */

void __thiscall ZombieZoybeanPodBasic::ZombieZoybeanPodBasic(ZombieZoybeanPodBasic *this)

{
  undefined **__n;
  
  ZombieBasic::ZombieBasic((ZombieBasic *)this);
  __n = &PTR_GetClass_066364d0;
  *(undefined ***)this = &PTR_GetClass_066364d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZoybeanPodBasic_06636ef8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x810));
  std::string::append((string *)(this + 0xb8),"born",(size_t)__n);
  *(undefined4 *)(this + 0x80c) = 0;
  return;
}


/* ZombieZoybeanPodBasic::StaticNew() */

ZombieZoybeanPodBasic * ZombieZoybeanPodBasic::StaticNew(void)

{
  ZombieZoybeanPodBasic *this;
  
  this = ::operator_new(0x830);
  ZombieZoybeanPodBasic(this);
  return this;
}


/* ZombieZoybeanPodBasic::~ZombieZoybeanPodBasic() */

void __thiscall ZombieZoybeanPodBasic::~ZombieZoybeanPodBasic(ZombieZoybeanPodBasic *this)

{
  *(undefined ***)this = &PTR_GetClass_066364d0;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZoybeanPodBasic_06636ef8;
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0x810));
  ZombieBasic::~ZombieBasic((ZombieBasic *)this);
  return;
}


/* non-virtual thunk to ZombieZoybeanPodBasic::~ZombieZoybeanPodBasic() */

void __thiscall ZombieZoybeanPodBasic::~ZombieZoybeanPodBasic(ZombieZoybeanPodBasic *this)

{
  ~ZombieZoybeanPodBasic(this + -0x10);
  return;
}


/* ZombieZoybeanPodBasic::~ZombieZoybeanPodBasic() */

void __thiscall ZombieZoybeanPodBasic::~ZombieZoybeanPodBasic(ZombieZoybeanPodBasic *this)

{
  ~ZombieZoybeanPodBasic(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZoybeanPodBasic::~ZombieZoybeanPodBasic() */

void __thiscall ZombieZoybeanPodBasic::~ZombieZoybeanPodBasic(ZombieZoybeanPodBasic *this)

{
  ~ZombieZoybeanPodBasic(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZoybeanPodBasic::onUpdate() */

void __thiscall ZombieZoybeanPodBasic::onUpdate(ZombieZoybeanPodBasic *this)

{
  float *pfVar1;
  code *pcVar2;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieBasic::onUpdate((ZombieBasic *)this);
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  if (810.0 < *pfVar1) {
    pcVar2 = *(code **)(*(long *)this + 0x120);
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)0x0,local_70,local_6c,aDStack_68,2,0,aPStack_78,0);
    (*pcVar2)(this,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

