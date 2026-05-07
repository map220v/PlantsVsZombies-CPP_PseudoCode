// Class: GridItemCardGameZombieBarrel


/* GridItemCardGameZombieBarrel::~GridItemCardGameZombieBarrel() */

void __thiscall
GridItemCardGameZombieBarrel::~GridItemCardGameZombieBarrel(GridItemCardGameZombieBarrel *this)

{
  *(undefined ***)this = &PTR_GetClass_069d7990;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameZombieBarrel_069d7d40;
  GridItemCardGameZombie::~GridItemCardGameZombie((GridItemCardGameZombie *)this);
  return;
}


/* non-virtual thunk to GridItemCardGameZombieBarrel::~GridItemCardGameZombieBarrel() */

void __thiscall
GridItemCardGameZombieBarrel::~GridItemCardGameZombieBarrel(GridItemCardGameZombieBarrel *this)

{
  ~GridItemCardGameZombieBarrel(this + -0x10);
  return;
}


/* GridItemCardGameZombieBarrel::~GridItemCardGameZombieBarrel() */

void __thiscall
GridItemCardGameZombieBarrel::~GridItemCardGameZombieBarrel(GridItemCardGameZombieBarrel *this)

{
  ~GridItemCardGameZombieBarrel(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemCardGameZombieBarrel::~GridItemCardGameZombieBarrel() */

void __thiscall
GridItemCardGameZombieBarrel::~GridItemCardGameZombieBarrel(GridItemCardGameZombieBarrel *this)

{
  ~GridItemCardGameZombieBarrel(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieBarrel::StaticClassInit() */

void GridItemCardGameZombieBarrel::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameZombieBarrel");
    (*pcVar2)(plVar1,asStack_10,FUN_04e1dd9c,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieBarrel::StaticGetClass() */

long * GridItemCardGameZombieBarrel::StaticGetClass(void)

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
  uVar2 = GridItemCardGameZombie::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCardGameZombieBarrel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieBarrel::GetClass() const */

long * GridItemCardGameZombieBarrel::GetClass(void)

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
  uVar2 = GridItemCardGameZombie::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemCardGameZombieBarrel",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieBarrel::GridItemCardGameZombieBarrel() */

void __thiscall
GridItemCardGameZombieBarrel::GridItemCardGameZombieBarrel(GridItemCardGameZombieBarrel *this)

{
  GridItemCardGameZombie::GridItemCardGameZombie((GridItemCardGameZombie *)this);
  *(undefined ***)this = &PTR_GetClass_069d7990;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameZombieBarrel_069d7d40;
  return;
}


/* GridItemCardGameZombieBarrel::StaticNew() */

GridItemCardGameZombieBarrel * GridItemCardGameZombieBarrel::StaticNew(void)

{
  GridItemCardGameZombieBarrel *this;
  
  this = ::operator_new(0x208);
  GridItemCardGameZombieBarrel(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieBarrel::SummonBarrel(std::string, int, GriditemBarrelParams) */

void __thiscall
GridItemCardGameZombieBarrel::SummonBarrel
          (GridItemCardGameZombieBarrel *this,undefined8 param_2,int param_3,
          GriditemBarrelParams *param_4)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  RtObject *this_00;
  long lVar8;
  undefined8 local_70 [3];
  GriditemBarrelParams aGStack_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  int local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_70);
  local_30[0] = 0;
  while (iVar3 = BoardConstants::NUMBER_OF_ROWS(), local_30[0] < iVar3) {
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)local_70,local_30);
    local_30[0] = local_30[0] + 1;
  }
  uVar5 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_70);
  uVar6 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_70);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (uVar5,uVar6);
  GriditemBarrelParams::GriditemBarrelParams(aGStack_58,param_4);
  iVar3 = FUN_04e1dab0(local_48,local_40);
  if (0 < iVar3) {
    uVar2 = *(undefined4 *)(this + 0x50);
    lVar8 = 0;
    do {
      lVar1 = lVar8 + 1;
      puVar7 = (undefined4 *)FUN_04e1dabc(local_48,lVar8);
      *puVar7 = uVar2;
      lVar8 = lVar1;
    } while ((int)lVar1 < iVar3);
  }
  if (0 < param_3) {
    lVar8 = 0;
    do {
      uVar4 = BoardConstants::NUMBER_OF_COLUMNS();
      lVar1 = lVar8 + 1;
      puVar7 = (undefined4 *)FUN_04e1dac4(local_70[0],lVar8);
      uVar2 = *puVar7;
      GriditemBarrelParams::GriditemBarrelParams((GriditemBarrelParams *)local_30,aGStack_58);
      this_00 = (RtObject *)
                GridItemBarrel::AddGriditemWithParams
                          (param_2,uVar4,uVar2,(GriditemBarrelParams *)local_30,
                           *(undefined4 *)(this + 0x50));
      Sexy::RtObject::Cast<GridItemBarrel>(this_00);
      GriditemBarrelParams::~GriditemBarrelParams((GriditemBarrelParams *)local_30);
      lVar8 = lVar1;
    } while (lVar1 != (ulong)(param_3 - 1) + 1);
  }
  GriditemBarrelParams::~GriditemBarrelParams(aGStack_58);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieBarrel::SummonNormalBarrel() */

void __thiscall GridItemCardGameZombieBarrel::SummonNormalBarrel(GridItemCardGameZombieBarrel *this)

{
  undefined4 uVar1;
  GridItemCardGameZombieBarrelProps *pGVar2;
  string asStack_38 [8];
  GriditemBarrelParams aGStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemCardGameZombieBarrelProps>();
  std::string::string(asStack_38,"card_game_barrelmoster");
  uVar1 = *(undefined4 *)(pGVar2 + 0x160);
  GriditemBarrelParams::GriditemBarrelParams(aGStack_30,(GriditemBarrelParams *)(pGVar2 + 0x168));
  SummonBarrel(this,asStack_38,uVar1,aGStack_30);
  GriditemBarrelParams::~GriditemBarrelParams(aGStack_30);
  std::string::~string(asStack_38);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieBarrel::SummonExplodeBarrel() */

void __thiscall
GridItemCardGameZombieBarrel::SummonExplodeBarrel(GridItemCardGameZombieBarrel *this)

{
  undefined4 uVar1;
  GridItemCardGameZombieBarrelProps *pGVar2;
  string asStack_38 [8];
  GriditemBarrelParams aGStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar2 = GridItem::GetProps<GridItemCardGameZombieBarrelProps>();
  std::string::string(asStack_38,"card_game_barrelpowder");
  uVar1 = *(undefined4 *)(pGVar2 + 400);
  GriditemBarrelParams::GriditemBarrelParams(aGStack_30,(GriditemBarrelParams *)(pGVar2 + 0x198));
  SummonBarrel(this,asStack_38,uVar1,aGStack_30);
  GriditemBarrelParams::~GriditemBarrelParams(aGStack_30);
  std::string::~string(asStack_38);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieBarrel::GenerateZombieActions() */

void __thiscall
GridItemCardGameZombieBarrel::GenerateZombieActions(GridItemCardGameZombieBarrel *this)

{
  ulong uVar1;
  int iVar2;
  GridItemCardGameZombieBarrelProps *pGVar3;
  GridItemCardGameZombieAction *pGVar4;
  GridItemCardGameZombieActionData *pGVar5;
  Delegate0 *pDVar6;
  ulong uVar7;
  code *pcVar8;
  GridItemCardGameZombieAction *local_78;
  undefined8 local_70;
  undefined8 local_68;
  GridItemCardGameZombieActionData aGStack_58 [32];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::OutputDebugStrF((wchar_t *)"GridItemCardGameZombieBarrel::GenerateZombieActions");
  std::vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>::clear
            ((vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>> *)
             (this + 0x1e0));
  pGVar3 = GridItem::GetProps<GridItemCardGameZombieBarrelProps>();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_70);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SummonNormalBarrel);
  Sexy::Delegate0::Delegate0<GridItemCardGameZombieBarrel,void(GridItemCardGameZombieBarrel::*)()>
            (aDStack_38,aGStack_58);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SummonExplodeBarrel);
  Sexy::Delegate0::Delegate0<GridItemCardGameZombieBarrel,void(GridItemCardGameZombieBarrel::*)()>
            (aDStack_38,aGStack_58);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70,aDStack_38);
  iVar2 = FUN_04e1da84(local_70,local_68);
  uVar7 = 0;
  if (0 < iVar2) {
    do {
      pGVar4 = ::operator_new(0x70);
      GridItemCardGameZombieAction::GridItemCardGameZombieAction(pGVar4);
      pcVar8 = (code *)**(undefined8 **)pGVar4;
      local_78 = pGVar4;
      pGVar5 = (GridItemCardGameZombieActionData *)
               FUN_04e1daa8(*(undefined8 *)(pGVar3 + 0x148),uVar7);
      GridItemCardGameZombieActionData::GridItemCardGameZombieActionData(aGStack_58,pGVar5);
      (*pcVar8)(pGVar4,uVar7 & 0xffffffff,aGStack_58);
      GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData(aGStack_58);
      pGVar4 = local_78;
      uVar1 = uVar7 + 1;
      pDVar6 = (Delegate0 *)FUN_04e1da98(local_70,uVar7);
      Sexy::Delegate0::Delegate0(aDStack_38,pDVar6);
      GridItemCardGameZombieAction::SetCallbackFunc(pGVar4,aDStack_38);
      std::vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>::
      push_back((vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>
                 *)(this + 0x1e0),&local_78);
      uVar7 = uVar1;
    } while ((int)uVar1 < iVar2);
  }
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::~vector
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

