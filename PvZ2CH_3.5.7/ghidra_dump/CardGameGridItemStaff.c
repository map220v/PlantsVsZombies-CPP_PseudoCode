// Class: CardGameGridItemStaff


/* CardGameGridItemStaff::~CardGameGridItemStaff() */

void __thiscall CardGameGridItemStaff::~CardGameGridItemStaff(CardGameGridItemStaff *this)

{
  *(undefined ***)this = &PTR_GetClass_0676c620;
  *(undefined ***)(this + 0x10) = &PTR__CardGameGridItemStaff_0676c8d8;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to CardGameGridItemStaff::~CardGameGridItemStaff() */

void __thiscall CardGameGridItemStaff::~CardGameGridItemStaff(CardGameGridItemStaff *this)

{
  ~CardGameGridItemStaff(this + -0x10);
  return;
}


/* CardGameGridItemStaff::~CardGameGridItemStaff() */

void __thiscall CardGameGridItemStaff::~CardGameGridItemStaff(CardGameGridItemStaff *this)

{
  ~CardGameGridItemStaff(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CardGameGridItemStaff::~CardGameGridItemStaff() */

void __thiscall CardGameGridItemStaff::~CardGameGridItemStaff(CardGameGridItemStaff *this)

{
  ~CardGameGridItemStaff(this + -0x10);
  return;
}


/* CardGameGridItemStaff::onKilled() */

void __thiscall CardGameGridItemStaff::onKilled(CardGameGridItemStaff *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a8) = uVar1;
  return;
}


/* CardGameGridItemStaff::CardGameGridItemStaff() */

void __thiscall CardGameGridItemStaff::CardGameGridItemStaff(CardGameGridItemStaff *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_0676c620;
  *(undefined ***)(this + 0x10) = &PTR__CardGameGridItemStaff_0676c8d8;
  return;
}


/* CardGameGridItemStaff::StaticNew() */

CardGameGridItemStaff * CardGameGridItemStaff::StaticNew(void)

{
  CardGameGridItemStaff *this;
  
  this = ::operator_new(0x1b0);
  CardGameGridItemStaff(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameGridItemStaff::StaticClassInit() */

void CardGameGridItemStaff::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameGridItemStaff");
    (*pcVar2)(plVar1,asStack_10,FUN_03d5e5ec,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameGridItemStaff::StaticGetClass() */

long * CardGameGridItemStaff::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameGridItemStaff",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameGridItemStaff::GetClass() const */

long * CardGameGridItemStaff::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameGridItemStaff",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameGridItemStaff::onDestroy() */

void __thiscall CardGameGridItemStaff::onDestroy(CardGameGridItemStaff *this)

{
  GridItem::onDestroy((GridItem *)this);
  MessageRouter::Broadcast<CardGameGridItemStaff*,CardGameGridItemStaff*>
            ((MessageRouter *)gMessageRouter,Message::CardGameStaffChange,this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameGridItemStaff::onGridItemInitialize() */

void __thiscall CardGameGridItemStaff::onGridItemInitialize(CardGameGridItemStaff *this)

{
  GridItemAnimationProps *pGVar1;
  PopAnimRig *pPVar2;
  float fVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  FUN_03d5f80c(gMessageRouter);
  pGVar1 = GridItem::GetProps<GridItemAnimationProps>();
  FUN_03d5dc50(*(undefined4 *)(pGVar1 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
  }
  else {
    (**(code **)(*(long *)this + 0x1e0))();
  }
  FUN_03d5dc58(this + 0x128);
  RealObject::JoinTeam((RealObject *)this,1);
  PVZ2UICheckBox::SetRightAligned((PVZ2UICheckBox *)this,true);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  fVar3 = (float)PVZ_T();
  *(float *)(this + 0x1a8) = fVar3 + 1.0;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameGridItemStaff::onUpdate() */

void __thiscall CardGameGridItemStaff::onUpdate(CardGameGridItemStaff *this)

{
  code *pcVar1;
  code *pcVar2;
  float fVar3;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  fVar3 = (float)PVZ_T();
  if (*(float *)(this + 0x1a8) < fVar3) {
    fVar3 = (float)PVZ_T();
    pcVar1 = *(code **)(*(long *)this + 0x1e0);
    pcVar2 = *(code **)(*(long *)this + 0x110);
    *(float *)(this + 0x1a8) = fVar3 + 1.0;
    if (pcVar1 == GridItem::GetMaxHitpoints) {
      fVar3 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
    }
    else {
      fVar3 = (float)(*pcVar1)();
    }
    Sexy::Point::Point(aPStack_78,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
    DamageInfo::DamageInfo((DamageInfo *)(fVar3 * 0.01),local_70,local_6c,aDStack_68,aPStack_78,0);
    (*pcVar2)(this,aDStack_68);
    DamageInfo::~DamageInfo(aDStack_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

