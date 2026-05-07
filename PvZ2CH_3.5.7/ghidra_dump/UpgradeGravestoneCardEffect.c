// Class: UpgradeGravestoneCardEffect


/* UpgradeGravestoneCardEffect::UpgradeGravestoneCardEffect() */

void __thiscall
UpgradeGravestoneCardEffect::UpgradeGravestoneCardEffect(UpgradeGravestoneCardEffect *this)

{
  CardEffect::CardEffect((CardEffect *)this);
  *(undefined ***)this = &PTR_GetCardEffectClass_06667bf0;
  return;
}


/* UpgradeGravestoneCardEffect::StaticNew() */

UpgradeGravestoneCardEffect * UpgradeGravestoneCardEffect::StaticNew(void)

{
  UpgradeGravestoneCardEffect *this;
  
  this = ::operator_new(0x28);
  UpgradeGravestoneCardEffect(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UpgradeGravestoneCardEffect::StaticClassInit() */

void UpgradeGravestoneCardEffect::StaticClassInit(void)

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
    std::string::string(asStack_10,"UpgradeGravestoneCardEffect");
    (*pcVar2)(plVar1,asStack_10,FUN_0360dbe8,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UpgradeGravestoneCardEffect::StaticGetClass() */

long * UpgradeGravestoneCardEffect::StaticGetClass(void)

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
  uVar2 = CardEffect::StaticGetClass();
  (*pcVar3)(plVar1,"UpgradeGravestoneCardEffect",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* UpgradeGravestoneCardEffect::~UpgradeGravestoneCardEffect() */

void __thiscall
UpgradeGravestoneCardEffect::~UpgradeGravestoneCardEffect(UpgradeGravestoneCardEffect *this)

{
  *(undefined ***)this = &PTR_GetCardEffectClass_06667bf0;
  CardEffect::~CardEffect((CardEffect *)this);
  return;
}


/* UpgradeGravestoneCardEffect::~UpgradeGravestoneCardEffect() */

void __thiscall
UpgradeGravestoneCardEffect::~UpgradeGravestoneCardEffect(UpgradeGravestoneCardEffect *this)

{
  ~UpgradeGravestoneCardEffect(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UpgradeGravestoneCardEffect::DoEffect() */

void __thiscall UpgradeGravestoneCardEffect::DoEffect(UpgradeGravestoneCardEffect *this)

{
  long lVar1;
  long lVar2;
  GraveStoneUpgradeTargetAdaptor *pGVar3;
  GridItemCardGameGravestoneZombieTimeSpawner *this_00;
  int iVar4;
  int iVar5;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  *(undefined4 *)(this + 0x20) = 2;
  lVar1 = ___stack_chk_guard;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10));
  pGVar3 = Sexy::RtObject::Cast<GraveStoneUpgradeTargetAdaptor>(*(RtObject **)(lVar2 + 0x18));
  if (pGVar3 != (GraveStoneUpgradeTargetAdaptor *)0x0) {
    iVar5 = 0;
    GridTargetAdaptor::GetTargetRect();
    if (0 < local_10) {
      do {
        iVar4 = 0;
        if (0 < local_c) {
          do {
            this_00 = (GridItemCardGameGravestoneZombieTimeSpawner *)
                      FUN_0360eeb4(iVar5 + local_18,iVar4 + local_14);
            if (this_00 != (GridItemCardGameGravestoneZombieTimeSpawner *)0x0) {
              GridItemCardGameGravestoneZombieTimeSpawner::LevelUpGravestone(this_00,1);
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_c);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_10);
    }
  }
  *(undefined4 *)(this + 0x20) = 3;
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

