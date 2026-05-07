// Class: ZombieZombossMech_LostCity


/* ZombieZombossMech_LostCity::CalcRenderOrder() const */

void ZombieZombossMech_LostCity::CalcRenderOrder(void)

{
  Board::MakeRenderOrder(0x635ce,4,0);
  return;
}


/* non-virtual thunk to ZombieZombossMech_LostCity::CalcRenderOrder() const */

void __thiscall ZombieZombossMech_LostCity::CalcRenderOrder(ZombieZombossMech_LostCity *this)

{
  CalcRenderOrder();
  return;
}


/* ZombieZombossMech_LostCity::~ZombieZombossMech_LostCity() */

void __thiscall
ZombieZombossMech_LostCity::~ZombieZombossMech_LostCity(ZombieZombossMech_LostCity *this)

{
  *(undefined ***)this = &PTR_GetClass_068c4b90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_LostCity_068c5750;
  ZombieZombossMech::~ZombieZombossMech((ZombieZombossMech *)this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_LostCity::~ZombieZombossMech_LostCity() */

void __thiscall
ZombieZombossMech_LostCity::~ZombieZombossMech_LostCity(ZombieZombossMech_LostCity *this)

{
  ~ZombieZombossMech_LostCity(this + -0x10);
  return;
}


/* ZombieZombossMech_LostCity::~ZombieZombossMech_LostCity() */

void __thiscall
ZombieZombossMech_LostCity::~ZombieZombossMech_LostCity(ZombieZombossMech_LostCity *this)

{
  ~ZombieZombossMech_LostCity(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieZombossMech_LostCity::~ZombieZombossMech_LostCity() */

void __thiscall
ZombieZombossMech_LostCity::~ZombieZombossMech_LostCity(ZombieZombossMech_LostCity *this)

{
  ~ZombieZombossMech_LostCity(this + -0x10);
  return;
}


/* ZombieZombossMech_LostCity::ZombieZombossMech_LostCity() */

void __thiscall
ZombieZombossMech_LostCity::ZombieZombossMech_LostCity(ZombieZombossMech_LostCity *this)

{
  ZombieZombossMech::ZombieZombossMech((ZombieZombossMech *)this);
  *(undefined ***)this = &PTR_GetClass_068c4b90;
  *(undefined ***)(this + 0x10) = &PTR__ZombieZombossMech_LostCity_068c5750;
  return;
}


/* ZombieZombossMech_LostCity::StaticNew() */

ZombieZombossMech_LostCity * ZombieZombossMech_LostCity::StaticNew(void)

{
  ZombieZombossMech_LostCity *this;
  
  this = ::operator_new(0x960);
  ZombieZombossMech_LostCity(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_LostCity::StaticClassInit() */

void ZombieZombossMech_LostCity::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieZombossMech_LostCity");
    (*pcVar2)(plVar1,asStack_10,FUN_04731248,0x960,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieZombossMech_LostCity::StaticGetClass() */

long * ZombieZombossMech_LostCity::StaticGetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_LostCity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieZombossMech_LostCity::GetClass() const */

long * ZombieZombossMech_LostCity::GetClass(void)

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
  uVar2 = ZombieZombossMech::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieZombossMech_LostCity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieZombossMech_LostCity::GetShadowScaling() const */

void __thiscall ZombieZombossMech_LostCity::GetShadowScaling(ZombieZombossMech_LostCity *this)

{
  char cVar1;
  long lVar2;
  float *pfVar3;
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  ulong uVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float local_18;
  float local_14;
  float local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Zombie::isInState((Zombie *)this,0x22);
  if (cVar1 == '\0') {
    lVar2 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)this);
    local_14 = 340.0 - *(float *)(lVar2 + 8);
    local_18 = 340.0;
    local_10 = 0.0;
    pfVar3 = eastl::max_alt<float>(&local_14,&local_10);
    pfVar3 = eastl::min_alt<float>(pfVar3,&local_18);
    uVar7 = 0x3b40c0c1;
    fVar5 = *pfVar3;
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps((Zombie *)this);
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    uVar6 = Sexy::SexyVector2::operator*((SexyVector2 *)(lVar2 + 0xe4),fVar5 * 0.0029411765);
    uVar4 = CONCAT44(uVar7,uVar6);
  }
  else {
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,0.0,0.0);
    uVar4 = CONCAT44(uStack_c,local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4 & 0xffffffff,(int)(uVar4 >> 0x20));
}


/* ZombieZombossMech_LostCity::onZombieInitialize() */

void __thiscall ZombieZombossMech_LostCity::onZombieInitialize(ZombieZombossMech_LostCity *this)

{
  ZombieZombossMech::onZombieInitialize((ZombieZombossMech *)this);
  Zombie::SetIsFlying((Zombie *)this,true);
  return;
}

