// Class: EffectAnimRig_HotDateFireSquare


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_HotDateFireSquare::StaticClassInit() */

void EffectAnimRig_HotDateFireSquare::StaticClassInit(void)

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
    std::string::string(asStack_10,"EffectAnimRig_HotDateFireSquare");
    (*pcVar2)(plVar1,asStack_10,FUN_03986ab4,0x240,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* EffectAnimRig_HotDateFireSquare::StaticGetClass() */

long * EffectAnimRig_HotDateFireSquare::StaticGetClass(void)

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
  uVar2 = EffectAnimRig_JalapenoFireSquare::StaticGetClass();
  (*pcVar3)(plVar1,"EffectAnimRig_HotDateFireSquare",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_HotDateFireSquare::GetClass() const */

long * EffectAnimRig_HotDateFireSquare::GetClass(void)

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
  uVar2 = EffectAnimRig_JalapenoFireSquare::StaticGetClass();
  (*pcVar3)(plVar1,"EffectAnimRig_HotDateFireSquare",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* EffectAnimRig_HotDateFireSquare::setLastFireInfo(float, float, Sexy::Point,
   Sexy::RtWeakPtr<Plant>) */

void __thiscall
EffectAnimRig_HotDateFireSquare::setLastFireInfo
          (undefined4 param_1,undefined4 param_2,EffectAnimRig_HotDateFireSquare *this,
          undefined8 *param_4,RtWeakPtr *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_4;
  *(undefined4 *)(this + 0x228) = param_1;
  *(undefined8 *)(this + 0x230) = uVar1;
  *(undefined4 *)(this + 0x22c) = param_2;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x238),param_5);
  return;
}


/* EffectAnimRig_HotDateFireSquare::~EffectAnimRig_HotDateFireSquare() */

void __thiscall
EffectAnimRig_HotDateFireSquare::~EffectAnimRig_HotDateFireSquare
          (EffectAnimRig_HotDateFireSquare *this)

{
  *(undefined ***)this = &PTR_GetClass_066dbe70;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_HotDateFireSquare_066dbf98;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x238));
  EffectAnimRig_JalapenoFireSquare::~EffectAnimRig_JalapenoFireSquare
            ((EffectAnimRig_JalapenoFireSquare *)this);
  return;
}


/* non-virtual thunk to EffectAnimRig_HotDateFireSquare::~EffectAnimRig_HotDateFireSquare() */

void __thiscall
EffectAnimRig_HotDateFireSquare::~EffectAnimRig_HotDateFireSquare
          (EffectAnimRig_HotDateFireSquare *this)

{
  ~EffectAnimRig_HotDateFireSquare(this + -0x10);
  return;
}


/* EffectAnimRig_HotDateFireSquare::~EffectAnimRig_HotDateFireSquare() */

void __thiscall
EffectAnimRig_HotDateFireSquare::~EffectAnimRig_HotDateFireSquare
          (EffectAnimRig_HotDateFireSquare *this)

{
  ~EffectAnimRig_HotDateFireSquare(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to EffectAnimRig_HotDateFireSquare::~EffectAnimRig_HotDateFireSquare() */

void __thiscall
EffectAnimRig_HotDateFireSquare::~EffectAnimRig_HotDateFireSquare
          (EffectAnimRig_HotDateFireSquare *this)

{
  ~EffectAnimRig_HotDateFireSquare(this + -0x10);
  return;
}


/* EffectAnimRig_HotDateFireSquare::EffectAnimRig_HotDateFireSquare() */

void __thiscall
EffectAnimRig_HotDateFireSquare::EffectAnimRig_HotDateFireSquare
          (EffectAnimRig_HotDateFireSquare *this)

{
  EffectAnimRig_JalapenoFireSquare::EffectAnimRig_JalapenoFireSquare
            ((EffectAnimRig_JalapenoFireSquare *)this);
  *(undefined ***)this = &PTR_GetClass_066dbe70;
  *(undefined ***)(this + 0x10) = &PTR__EffectAnimRig_HotDateFireSquare_066dbf98;
  *(undefined4 *)(this + 0x228) = 0;
  *(undefined4 *)(this + 0x22c) = 0;
  Sexy::Point::Point((Point *)(this + 0x230));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x238));
  return;
}


/* EffectAnimRig_HotDateFireSquare::StaticNew() */

EffectAnimRig_HotDateFireSquare * EffectAnimRig_HotDateFireSquare::StaticNew(void)

{
  EffectAnimRig_HotDateFireSquare *this;
  
  this = ::operator_new(0x240);
  EffectAnimRig_HotDateFireSquare(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EffectAnimRig_HotDateFireSquare::onFireEnd() */

void __thiscall EffectAnimRig_HotDateFireSquare::onFireEnd(EffectAnimRig_HotDateFireSquare *this)

{
  bool bVar1;
  HotDateLastFire *this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  Board *this_01;
  DamageInfo *pDVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_80 [8];
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (1.0 < *(float *)(this + 0x228)) {
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_70,"hotdate_fire");
    Board::AddGridItem(this_01,(string *)&local_70,*(int *)(this + 0x230),*(int *)(this + 0x234),1);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_80,(RtWeakPtrBase *)aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
    std::string::~string((string *)&local_70);
    nop();
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_80);
    if (bVar1) {
      this_00 = (HotDateLastFire *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
                    /* WARNING: Load size is inaccurate */
      pDVar4._0_4_ = *(DamageInfo **)(this + 0x228);
      uVar2 = operator|(0x1000,0x400);
      uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x238));
      Sexy::Point::Point(aPStack_78,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
      DamageInfo::DamageInfo(pDVar4._0_4_,local_70,local_6c,aRStack_68,uVar2,uVar3,aPStack_78,0);
      HotDateLastFire::InitFire(this_00,(DamageInfo *)aRStack_68,*(float *)(this + 0x22c));
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

