// Class: CardGameGridItemMissileLeader


/* CardGameGridItemMissileLeader::~CardGameGridItemMissileLeader() */

void __thiscall
CardGameGridItemMissileLeader::~CardGameGridItemMissileLeader(CardGameGridItemMissileLeader *this)

{
  *(undefined ***)this = &PTR_GetClass_06668310;
  *(undefined ***)(this + 0x10) = &PTR__CardGameGridItemMissileLeader_066685a8;
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to CardGameGridItemMissileLeader::~CardGameGridItemMissileLeader() */

void __thiscall
CardGameGridItemMissileLeader::~CardGameGridItemMissileLeader(CardGameGridItemMissileLeader *this)

{
  ~CardGameGridItemMissileLeader(this + -0x10);
  return;
}


/* CardGameGridItemMissileLeader::~CardGameGridItemMissileLeader() */

void __thiscall
CardGameGridItemMissileLeader::~CardGameGridItemMissileLeader(CardGameGridItemMissileLeader *this)

{
  ~CardGameGridItemMissileLeader(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CardGameGridItemMissileLeader::~CardGameGridItemMissileLeader() */

void __thiscall
CardGameGridItemMissileLeader::~CardGameGridItemMissileLeader(CardGameGridItemMissileLeader *this)

{
  ~CardGameGridItemMissileLeader(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameGridItemMissileLeader::StaticClassInit() */

void CardGameGridItemMissileLeader::StaticClassInit(void)

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
    std::string::string(asStack_10,"CardGameGridItemMissileLeader");
    (*pcVar2)(plVar1,asStack_10,FUN_0361263c,0x198,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameGridItemMissileLeader::StaticGetClass() */

long * CardGameGridItemMissileLeader::StaticGetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameGridItemMissileLeader",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameGridItemMissileLeader::GetClass() const */

long * CardGameGridItemMissileLeader::GetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"CardGameGridItemMissileLeader",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CardGameGridItemMissileLeader::CardGameGridItemMissileLeader() */

void __thiscall
CardGameGridItemMissileLeader::CardGameGridItemMissileLeader(CardGameGridItemMissileLeader *this)

{
  undefined4 uVar1;
  
  GridItem::GridItem((GridItem *)this);
  *(undefined ***)this = &PTR_GetClass_06668310;
  *(undefined ***)(this + 0x10) = &PTR__CardGameGridItemMissileLeader_066685a8;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x194) = uVar1;
  return;
}


/* CardGameGridItemMissileLeader::StaticNew() */

CardGameGridItemMissileLeader * CardGameGridItemMissileLeader::StaticNew(void)

{
  CardGameGridItemMissileLeader *this;
  
  this = ::operator_new(0x198);
  CardGameGridItemMissileLeader(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CardGameGridItemMissileLeader::launchMissile() */

void __thiscall CardGameGridItemMissileLeader::launchMissile(CardGameGridItemMissileLeader *this)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_28,"CardGameZombossMissile");
  Sexy::ToWString(asStack_28);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar3,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  std::string::~string(asStack_28);
  nop();
  iVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1);
  iVar2 = SharkMinion::getRow((SharkMinion *)this);
  iVar2 = BoardTransforms::GridToBoardSpaceX(iVar2);
  uVar3 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_30);
  lVar4 = Board::AddProjectile
                    ((Board *)(float)iVar1,(float)iVar2,0x447a0000,uVar3,aRStack_18,this,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  FUN_03612294(lVar4 + 0x24);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CardGameGridItemMissileLeader::onUpdate() */

void __thiscall CardGameGridItemMissileLeader::onUpdate(CardGameGridItemMissileLeader *this)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = *(float *)(this + 0x194);
  fVar1 = (float)PVZ_T();
  if (fVar3 < fVar1) {
    launchMissile(this);
    uVar2 = PVZ_EOT();
    *(undefined4 *)(this + 0x194) = uVar2;
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}


/* CardGameGridItemMissileLeader::onGridItemInitialize() */

void __thiscall
CardGameGridItemMissileLeader::onGridItemInitialize(CardGameGridItemMissileLeader *this)

{
  float fVar1;
  
  GridItem::onGridItemInitialize((GridItem *)this);
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x194) = fVar1 + 0.5;
  return;
}

