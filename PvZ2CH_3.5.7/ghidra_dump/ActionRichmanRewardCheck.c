// Class: ActionRichmanRewardCheck


/* ActionRichmanRewardCheck::~ActionRichmanRewardCheck() */

void __thiscall ActionRichmanRewardCheck::~ActionRichmanRewardCheck(ActionRichmanRewardCheck *this)

{
  *(undefined ***)this = &PTR_GetClass_0685a9c0;
  WorldMapAction::~WorldMapAction((WorldMapAction *)this);
  return;
}


/* ActionRichmanRewardCheck::~ActionRichmanRewardCheck() */

void __thiscall ActionRichmanRewardCheck::~ActionRichmanRewardCheck(ActionRichmanRewardCheck *this)

{
  ~ActionRichmanRewardCheck(this);
  AK::FreeHook(this);
  return;
}


/* ActionRichmanRewardCheck::StaticGetClass() */

long * ActionRichmanRewardCheck::StaticGetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionRichmanRewardCheck",uVar2,StaticNew);
  return sClass;
}


/* ActionRichmanRewardCheck::GetClass() const */

long * ActionRichmanRewardCheck::GetClass(void)

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
  uVar2 = WorldMapAction::StaticGetClass();
  (*pcVar3)(plVar1,"ActionRichmanRewardCheck",uVar2,StaticNew);
  return sClass;
}


/* ActionRichmanRewardCheck::ActionRichmanRewardCheck() */

void __thiscall ActionRichmanRewardCheck::ActionRichmanRewardCheck(ActionRichmanRewardCheck *this)

{
  WorldMapAction::WorldMapAction((WorldMapAction *)this);
  *(undefined ***)this = &PTR_GetClass_0685a9c0;
  return;
}


/* ActionRichmanRewardCheck::StaticNew() */

ActionRichmanRewardCheck * ActionRichmanRewardCheck::StaticNew(void)

{
  ActionRichmanRewardCheck *this;
  
  this = ::operator_new(0x18);
  ActionRichmanRewardCheck(this);
  return this;
}


/* ActionRichmanRewardCheck::CreateIfNeed(bool&) */

ActionRichmanRewardCheck * ActionRichmanRewardCheck::CreateIfNeed(bool *param_1)

{
  ActionRichmanRewardCheck *this;
  
  if (*param_1 == false) {
    this = ::operator_new(0x18);
    this[8] = (ActionRichmanRewardCheck)0x0;
    this[9] = (ActionRichmanRewardCheck)0x0;
    this[10] = (ActionRichmanRewardCheck)0x0;
    *(undefined4 *)(this + 0xc) = 0;
    *(undefined4 *)(this + 0x10) = 0;
    *(undefined8 *)this = 0;
    ActionRichmanRewardCheck(this);
    return this;
  }
  return (ActionRichmanRewardCheck *)0x0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ActionRichmanRewardCheck::Start() */

void ActionRichmanRewardCheck::Start(void)

{
  undefined8 uVar1;
  char cVar2;
  PlayerInfo *this;
  int *piVar3;
  ulong uVar4;
  CommonUIManager *pCVar5;
  ulong uVar6;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_108 [24];
  undefined8 local_f0;
  undefined8 local_e8;
  Delegate0 aDStack_d8 [48];
  RichmanBattleEventSaveData aRStack_a8 [24];
  vector avStack_90 [56];
  int local_58;
  int local_54;
  undefined4 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this = (PlayerInfo *)ProfileUtils::Profile();
  cVar2 = PlayerInfo::IsPopupRichmanTileBattleEvent(this);
  if (cVar2 != '\0') {
    PlayerInfo::GetRichmanTileBattleSaveData();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_108);
    std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::vector
              ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)&local_f0,avStack_90);
    uVar6 = 0;
    while( true ) {
      uVar1 = local_f0;
      uVar4 = FUN_0454b320(local_f0,local_e8);
      if (uVar4 <= uVar6) break;
      local_50 = 0;
      piVar3 = (int *)FUN_0454b32c(uVar1,uVar6);
      local_58 = *piVar3;
      local_54 = piVar3[1];
      PlayerInfo::AddCommonGachaReward((int)this,local_58,SUB41(local_54,0),false);
      std::vector<LotteryBonus,std::allocator<LotteryBonus>>::push_back
                ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_108,
                 (LotteryBonus *)&local_58);
      uVar6 = uVar6 + 1;
    }
    pCVar5 = (CommonUIManager *)Sexy::LazySingleton<CommonUIManager>::GetInstance();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_58);
    Sexy::Delegate0::Delegate0(aDStack_d8,(DummyInit *)0x0);
    CommonUIManager::ShowBonus
              (pCVar5,avStack_108,
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_58,aDStack_d8
              );
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)&local_58);
    RichmanBattleEventSaveData::Reset(aRStack_a8);
    RichmanBattleEventSaveData::RichmanBattleEventSaveData
              ((RichmanBattleEventSaveData *)&local_58,aRStack_a8);
    PlayerInfo::SetRichmanTileBattleSaveData
              (this,(vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_58,1);
    RichmanBattleEventSaveData::~RichmanBattleEventSaveData((RichmanBattleEventSaveData *)&local_58)
    ;
    std::vector<RichmanItemInfo,std::allocator<RichmanItemInfo>>::~vector
              ((vector<RichmanItemInfo,std::allocator<RichmanItemInfo>> *)&local_f0);
    std::vector<LotteryBonus,std::allocator<LotteryBonus>>::~vector
              ((vector<LotteryBonus,std::allocator<LotteryBonus>> *)avStack_108);
    RichmanBattleEventSaveData::~RichmanBattleEventSaveData(aRStack_a8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

