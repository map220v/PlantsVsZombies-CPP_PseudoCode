// Class: CollectableCoinDangerDrop


/* CollectableCoinDangerDrop::~CollectableCoinDangerDrop() */

void __thiscall
CollectableCoinDangerDrop::~CollectableCoinDangerDrop(CollectableCoinDangerDrop *this)

{
  *(undefined ***)this = &PTR_GetClass_06754a90;
  *(undefined ***)(this + 0x10) = &PTR__CollectableCoinDangerDrop_06754ce0;
  Collectable::~Collectable((Collectable *)this);
  return;
}


/* non-virtual thunk to CollectableCoinDangerDrop::~CollectableCoinDangerDrop() */

void __thiscall
CollectableCoinDangerDrop::~CollectableCoinDangerDrop(CollectableCoinDangerDrop *this)

{
  ~CollectableCoinDangerDrop(this + -0x10);
  return;
}


/* CollectableCoinDangerDrop::~CollectableCoinDangerDrop() */

void __thiscall
CollectableCoinDangerDrop::~CollectableCoinDangerDrop(CollectableCoinDangerDrop *this)

{
  ~CollectableCoinDangerDrop(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CollectableCoinDangerDrop::~CollectableCoinDangerDrop() */

void __thiscall
CollectableCoinDangerDrop::~CollectableCoinDangerDrop(CollectableCoinDangerDrop *this)

{
  ~CollectableCoinDangerDrop(this + -0x10);
  return;
}


/* CollectableCoinDangerDrop::StaticGetClass() */

long * CollectableCoinDangerDrop::StaticGetClass(void)

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
  uVar2 = Collectable::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableCoinDangerDrop",uVar2,StaticNew);
  return sClass;
}


/* CollectableCoinDangerDrop::GetClass() const */

long * CollectableCoinDangerDrop::GetClass(void)

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
  uVar2 = Collectable::StaticGetClass();
  (*pcVar3)(plVar1,"CollectableCoinDangerDrop",uVar2,StaticNew);
  return sClass;
}


/* CollectableCoinDangerDrop::CollectableCoinDangerDrop() */

void __thiscall
CollectableCoinDangerDrop::CollectableCoinDangerDrop(CollectableCoinDangerDrop *this)

{
  Collectable::Collectable((Collectable *)this);
  *(undefined ***)this = &PTR_GetClass_06754a90;
  *(undefined ***)(this + 0x10) = &PTR__CollectableCoinDangerDrop_06754ce0;
  return;
}


/* CollectableCoinDangerDrop::StaticNew() */

CollectableCoinDangerDrop * CollectableCoinDangerDrop::StaticNew(void)

{
  CollectableCoinDangerDrop *this;
  
  this = ::operator_new(0x1f0);
  CollectableCoinDangerDrop(this);
  return this;
}


/* CollectableCoinDangerDrop::onFinishMotion() */

void __thiscall CollectableCoinDangerDrop::onFinishMotion(CollectableCoinDangerDrop *this)

{
  char cVar1;
  long lVar2;
  ProfileMgr *this_00;
  PlayerInfo *pPVar3;
  
  Collectable::onFinishMotion((Collectable *)this);
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (lVar2 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0)), lVar2 != 0)) {
    this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    pPVar3 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
    if ((pPVar3 != (PlayerInfo *)0x0) &&
       (cVar1 = PlayerInfo::IsMonthlyCardActivated(pPVar3,4), cVar1 != '\0')) {
      Collectable::TryToCollect((Collectable *)this);
      return;
    }
  }
  return;
}

