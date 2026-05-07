// Class: BronzeDeadWinCon


/* BronzeDeadWinCon::StaticGetClass() */

long * BronzeDeadWinCon::StaticGetClass(void)

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
  uVar2 = LevelModule::StaticGetClass();
  (*pcVar3)(plVar1,"BronzeDeadWinCon",uVar2,StaticNew);
  return sClass;
}


/* BronzeDeadWinCon::BronzeDeadWinCon() */

void __thiscall BronzeDeadWinCon::BronzeDeadWinCon(BronzeDeadWinCon *this)

{
  LevelModule::LevelModule((LevelModule *)this);
  *(undefined ***)this = &PTR_GetModuleClass_0677dde0;
  return;
}


/* BronzeDeadWinCon::StaticNew() */

BronzeDeadWinCon * BronzeDeadWinCon::StaticNew(void)

{
  BronzeDeadWinCon *this;
  
  this = ::operator_new(0x18);
  BronzeDeadWinCon(this);
  return this;
}


/* BronzeDeadWinCon::~BronzeDeadWinCon() */

void __thiscall BronzeDeadWinCon::~BronzeDeadWinCon(BronzeDeadWinCon *this)

{
  *(undefined ***)this = &PTR_GetModuleClass_0677dde0;
  LevelModule::~LevelModule((LevelModule *)this);
  return;
}


/* BronzeDeadWinCon::~BronzeDeadWinCon() */

void __thiscall BronzeDeadWinCon::~BronzeDeadWinCon(BronzeDeadWinCon *this)

{
  ~BronzeDeadWinCon(this);
  AK::FreeHook(this);
  return;
}


/* BronzeDeadWinCon::canDamage(BoardEntity const*) const */

bool __thiscall BronzeDeadWinCon::canDamage(BronzeDeadWinCon *this,BoardEntity *param_1)

{
  bool bVar1;
  
  if (param_1 == (BoardEntity *)0x0) {
    return false;
  }
  bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
  if ((!bVar1) && (bVar1 = Sexy::RtObject::IsA<GridItemArmrack>((RtObject *)param_1), !bVar1)) {
    bVar1 = Sexy::RtObject::IsA<GridItemFlame>((RtObject *)param_1);
    return bVar1;
  }
  return true;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BronzeDeadWinCon::checkWin() */

void __thiscall BronzeDeadWinCon::checkWin(BronzeDeadWinCon *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  LevelModuleManager *this_00;
  BronzeModule *this_01;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LevelModuleManager *)FUN_03dd7b0c(*(undefined8 *)(*(long *)(gLawnApp + 0x9f0) + 0xad8))
  ;
  this_01 = LevelModuleManager::GetModuleByClass<BronzeModule>(this_00);
  if (this_01 != (BronzeModule *)0x0) {
    iVar2 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)this_01);
    if (iVar2 == 0) {
      uVar8 = 0;
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
      uVar3 = operator|(2,4);
      EntityFinder::GetEntities
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar3);
      Sexy::Point::Point(aPStack_90,-1,-1);
      Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
      DamageInfo::DamageInfo
                ((DamageInfo *)0x47c34f80,local_88,local_84,aDStack_68,0x800,0,aPStack_90,0);
      uVar4 = local_80;
      lVar5 = FUN_03dd7b10(local_80,local_78);
      if (lVar5 != 0) {
        do {
          puVar6 = (undefined8 *)FUN_03dd7b1c(uVar4,uVar8);
          cVar1 = canDamage(this,(BoardEntity *)*puVar6);
          if (cVar1 != '\0') {
            puVar6 = (undefined8 *)FUN_03dd7b1c(local_80,uVar8);
            (**(code **)(*(long *)*puVar6 + 0x110))((long *)*puVar6,aDStack_68);
          }
          uVar4 = local_80;
          uVar8 = uVar8 + 1;
          uVar7 = FUN_03dd7b10(local_80,local_78);
        } while (uVar8 < uVar7);
      }
      DamageInfo::~DamageInfo(aDStack_68);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
      uVar4 = 1;
      goto LAB_03dd80c4;
    }
  }
  uVar4 = 0;
LAB_03dd80c4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BronzeDeadWinCon::registerForEvents() */

void __thiscall BronzeDeadWinCon::registerForEvents(BronzeDeadWinCon *this)

{
  LevelModuleManager *pLVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0wRet<bool> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pLVar1 = (LevelModuleManager *)LevelModule::getManager();
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,checkWin);
  Sexy::Delegate0wRet<bool>::Delegate0wRet<BronzeDeadWinCon,bool(BronzeDeadWinCon::*)()>
            (aDStack_38,aCStack_50);
  LevelModuleManager::RegisterWinCondition(pLVar1,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

