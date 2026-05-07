// Class: GridItemCardGameZombieChickenFarmer


/* GridItemCardGameZombieChickenFarmer::~GridItemCardGameZombieChickenFarmer() */

void __thiscall
GridItemCardGameZombieChickenFarmer::~GridItemCardGameZombieChickenFarmer
          (GridItemCardGameZombieChickenFarmer *this)

{
  *(undefined ***)this = &PTR_GetClass_069d8910;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameZombieChickenFarmer_069d8cc0;
  GridItemCardGameZombie::~GridItemCardGameZombie((GridItemCardGameZombie *)this);
  return;
}


/* non-virtual thunk to GridItemCardGameZombieChickenFarmer::~GridItemCardGameZombieChickenFarmer()
    */

void __thiscall
GridItemCardGameZombieChickenFarmer::~GridItemCardGameZombieChickenFarmer
          (GridItemCardGameZombieChickenFarmer *this)

{
  ~GridItemCardGameZombieChickenFarmer(this + -0x10);
  return;
}


/* GridItemCardGameZombieChickenFarmer::~GridItemCardGameZombieChickenFarmer() */

void __thiscall
GridItemCardGameZombieChickenFarmer::~GridItemCardGameZombieChickenFarmer
          (GridItemCardGameZombieChickenFarmer *this)

{
  ~GridItemCardGameZombieChickenFarmer(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemCardGameZombieChickenFarmer::~GridItemCardGameZombieChickenFarmer()
    */

void __thiscall
GridItemCardGameZombieChickenFarmer::~GridItemCardGameZombieChickenFarmer
          (GridItemCardGameZombieChickenFarmer *this)

{
  ~GridItemCardGameZombieChickenFarmer(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieChickenFarmer::onUpdate() */

void __thiscall
GridItemCardGameZombieChickenFarmer::onUpdate(GridItemCardGameZombieChickenFarmer *this)

{
  GridItemBreakableTargetProps *pGVar1;
  float *pfVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fStack_10;
  float fStack_c;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  pGVar1 = GridItem::GetProps<GridItemBreakableTargetProps>();
  if (pGVar1[0x100] != (GridItemBreakableTargetProps)0x0) {
    lVar3 = *(long *)this;
    if (*(code **)(lVar3 + 0x1d8) == GridItem::GetHitpoints) {
      fVar4 = (float)GridItem::GetHitpoints((GridItem *)this);
    }
    else {
      fVar4 = (float)(**(code **)(lVar3 + 0x1d8))();
      lVar3 = *(long *)this;
    }
    if (*(code **)(lVar3 + 0x1e0) == GridItem::GetMaxHitpoints) {
      fVar5 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
    }
    else {
      fVar5 = (float)(**(code **)(lVar3 + 0x1e0))();
    }
    if (((fVar4 < fVar5) && (fVar4 = (float)PVZ_EOT(), *(float *)(this + 0x1b8) < fVar4)) &&
       (fVar4 = (float)PVZ_T(), *(float *)(pGVar1 + 0x108) < fVar4 - *(float *)(this + 0x1b8))) {
      lVar3 = *(long *)this;
      if (*(code **)(lVar3 + 0x1e0) == GridItem::GetMaxHitpoints) {
        fStack_10 = (float)GridItem::GetMaxHitpoints((GridItem *)this);
      }
      else {
        fStack_10 = (float)(**(code **)(lVar3 + 0x1e0))(this);
        lVar3 = *(long *)this;
      }
      if (*(code **)(lVar3 + 0x1d8) == GridItem::GetHitpoints) {
        fVar4 = (float)GridItem::GetHitpoints((GridItem *)this);
      }
      else {
        fVar4 = (float)(**(code **)(lVar3 + 0x1d8))();
      }
      fVar5 = (float)PVZ_Dt();
      fStack_c = fVar4 + *(float *)(pGVar1 + 0x104) * fVar5;
      pfVar2 = eastl::min_alt<float>(&fStack_10,&fStack_c);
      if (lStack_8 == ___stack_chk_guard) {
        FUN_03e22da0(*pfVar2,this + 0x128);
        return;
      }
      goto LAB_03e24560;
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
LAB_03e24560:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieChickenFarmer::StaticClassInit() */

void GridItemCardGameZombieChickenFarmer::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemCardGameZombieChickenFarmer");
    (*pcVar2)(plVar1,asStack_10,FUN_04e228fc,0x208,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemCardGameZombieChickenFarmer::StaticGetClass() */

long * GridItemCardGameZombieChickenFarmer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameZombieChickenFarmer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieChickenFarmer::GetClass() const */

long * GridItemCardGameZombieChickenFarmer::GetClass(void)

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
  (*pcVar3)(plVar1,"GridItemCardGameZombieChickenFarmer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemCardGameZombieChickenFarmer::GridItemCardGameZombieChickenFarmer() */

void __thiscall
GridItemCardGameZombieChickenFarmer::GridItemCardGameZombieChickenFarmer
          (GridItemCardGameZombieChickenFarmer *this)

{
  GridItemCardGameZombie::GridItemCardGameZombie((GridItemCardGameZombie *)this);
  *(undefined ***)this = &PTR_GetClass_069d8910;
  *(undefined ***)(this + 0x10) = &PTR__GridItemCardGameZombieChickenFarmer_069d8cc0;
  return;
}


/* GridItemCardGameZombieChickenFarmer::StaticNew() */

GridItemCardGameZombieChickenFarmer * GridItemCardGameZombieChickenFarmer::StaticNew(void)

{
  GridItemCardGameZombieChickenFarmer *this;
  
  this = ::operator_new(0x208);
  GridItemCardGameZombieChickenFarmer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieChickenFarmer::PickRandomGraveyardPos(Sexy::TRect<int>) */

void GridItemCardGameZombieChickenFarmer::PickRandomGraveyardPos
               (Point *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  TPoint *pTVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  Point aPStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  iVar8 = *param_3;
  iVar9 = param_3[2];
  if (iVar8 < iVar8 + iVar9) {
    iVar6 = param_3[1];
    iVar7 = param_3[3];
    iVar10 = iVar8;
    do {
      iVar1 = iVar6;
      if (iVar6 < iVar6 + iVar7) {
        do {
          iVar8 = iVar1 + 1;
          Sexy::Point::Point(aPStack_28,iVar10,iVar1);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20,aPStack_28);
          iVar6 = param_3[1];
          iVar7 = param_3[3];
          iVar1 = iVar8;
        } while (iVar8 < iVar6 + iVar7);
        iVar8 = *param_3;
        iVar9 = param_3[2];
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar8 + iVar9);
  }
  lVar2 = FUN_04e22618(local_20,local_18);
  if (lVar2 == 0) {
    Sexy::Point::Point(param_1,6,3);
  }
  else {
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_20);
    uVar4 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
    std::
    random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
              (uVar3,uVar4);
    pTVar5 = (TPoint *)FUN_04e22628(local_20);
    Sexy::Point::Point(param_1,pTVar5);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieChickenFarmer::SummonChickenGraveyard() */

void __thiscall
GridItemCardGameZombieChickenFarmer::SummonChickenGraveyard
          (GridItemCardGameZombieChickenFarmer *this)

{
  GridItemCardGameZombieChickenFarmerProps *pGVar1;
  long lVar2;
  RtObject *this_00;
  GridItemCardGameGravestoneZombieTimeSpawnerEnemy *pGVar3;
  Board *this_01;
  undefined8 local_28;
  ulong local_20;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar1 = GridItem::GetProps<GridItemCardGameZombieChickenFarmerProps>();
  Sexy::Point::Point((Point *)&local_28);
  do {
    Sexy::Insets::Insets(aIStack_18,(Insets *)(pGVar1 + 0x160));
    PickRandomGraveyardPos(&local_20,this,aIStack_18);
    local_28 = local_20;
    lVar2 = FUN_04e22ee4(local_20 & 0xffffffff,local_20 >> 0x20);
  } while (lVar2 != 0);
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string((string *)aIStack_18,"cardgame_gravestoneZombieTimeSpawner_chicken_enemy");
  this_00 = (RtObject *)
            Board::AddGridItem(this_01,(string *)aIStack_18,(int)local_28,local_28._4_4_,1);
  pGVar3 = Sexy::RtObject::Cast<GridItemCardGameGravestoneZombieTimeSpawnerEnemy>(this_00);
  std::string::~string((string *)aIStack_18);
  nop();
  if (pGVar3 != (GridItemCardGameGravestoneZombieTimeSpawnerEnemy *)0x0) {
    DTextField::setTextFieldType((DTextField *)pGVar3,*(undefined4 *)(this + 0x50));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieChickenFarmer::PickRandomLine(int) */

void __thiscall
GridItemCardGameZombieChickenFarmer::PickRandomLine
          (GridItemCardGameZombieChickenFarmer *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  int local_24;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar2 = BoardConstants::NUMBER_OF_ROWS();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
  local_24 = 0;
  if (-1 < iVar2 - param_1) {
    do {
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)local_20,&local_24);
      local_24 = local_24 + 1;
    } while (local_24 <= iVar2 - param_1);
  }
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)local_20);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)local_20);
  std::random_shuffle<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>>
            (uVar3,uVar4);
  puVar5 = (undefined4 *)FUN_04e22624(local_20[0]);
  uVar1 = *puVar5;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieChickenFarmer::SummonChickens() */

void __thiscall
GridItemCardGameZombieChickenFarmer::SummonChickens(GridItemCardGameZombieChickenFarmer *this)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  GridItemCardGameZombieChickenFarmerProps *pGVar5;
  string *psVar6;
  ZombieType *this_00;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  Board *pBVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  float local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pGVar5 = GridItem::GetProps<GridItemCardGameZombieChickenFarmerProps>();
  iVar8 = *(int *)(pGVar5 + 0x170);
  uVar3 = *(uint *)(pGVar5 + 0x174);
  uVar4 = PickRandomLine(this,iVar8);
  psVar6 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  uVar2 = uVar4 + iVar8;
  std::string::string((string *)&local_30,"card_game_enemy_chicken");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar6);
  std::string::~string((string *)&local_30);
  nop();
  this_00 = (ZombieType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  ZombieType::EnsureResourceGroupsLoaded(this_00);
  if ((int)uVar4 < (int)uVar2) {
    do {
      uVar9 = 0;
      if (0 < (int)uVar3) {
        do {
          Sexy::OutputDebugStrF
                    ((wchar_t *)"GridItemCardGameZombieChickenFarmer startRow = %d spawnNumber = %d"
                     ,(ulong)uVar4,uVar9);
          Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
          local_2c = 0;
          local_30 = *(undefined4 *)(this + 0x50);
          pBVar10 = *(Board **)(gLawnApp + 0x9f0);
          local_2b = 0;
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_40,(RtWeakPtrBase *)aRStack_48);
          this_01 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                     *)Board::AddZombieInRow
                                 (pBVar10,(RtWeakPtr<Sexy::SoundResource> *)&local_40,(ulong)uVar4,
                                  0xfffffffb,(string *)&local_30,1,1);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          puVar7 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost(this_01);
          iVar8 = (int)uVar9;
          uVar1 = iVar8 + 1;
          uVar9 = (ulong)uVar1;
          local_40 = (float)*puVar7;
          local_38 = *(undefined4 *)(puVar7 + 1);
          _local_40 = CONCAT44((int)((ulong)*puVar7 >> 0x20),local_40 + -40.0 + (float)(iVar8 << 1))
          ;
          (**(code **)(*(long *)this_01 + 0x78))
                    (this_01,(RtWeakPtr<Sexy::SoundResource> *)&local_40);
          ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
        } while (uVar1 != uVar3);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar2);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieChickenFarmer::GenerateZombieActions() */

void __thiscall
GridItemCardGameZombieChickenFarmer::GenerateZombieActions
          (GridItemCardGameZombieChickenFarmer *this)

{
  ulong uVar1;
  int iVar2;
  GridItemCardGameZombieChickenFarmerProps *pGVar3;
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
  Sexy::OutputDebugStrF((wchar_t *)"GridItemCardGameZombieChickenFarmer::GenerateZombieActions");
  std::vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>>::clear
            ((vector<GridItemCardGameZombieAction*,std::allocator<GridItemCardGameZombieAction*>> *)
             (this + 0x1e0));
  pGVar3 = GridItem::GetProps<GridItemCardGameZombieChickenFarmerProps>();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_70);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SummonChickenGraveyard);
  Sexy::Delegate0::
  Delegate0<GridItemCardGameZombieChickenFarmer,void(GridItemCardGameZombieChickenFarmer::*)()>
            (aDStack_38,aGStack_58);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70,aDStack_38);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,SummonChickens);
  Sexy::Delegate0::
  Delegate0<GridItemCardGameZombieChickenFarmer,void(GridItemCardGameZombieChickenFarmer::*)()>
            (aDStack_38,aGStack_58);
  std::vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>>::push_back
            ((vector<Sexy::Delegate0,std::allocator<Sexy::Delegate0>> *)&local_70,aDStack_38);
  iVar2 = FUN_04e225d8(local_70,local_68);
  uVar7 = 0;
  if (0 < iVar2) {
    do {
      pGVar4 = ::operator_new(0x70);
      GridItemCardGameZombieAction::GridItemCardGameZombieAction(pGVar4);
      pcVar8 = (code *)**(undefined8 **)pGVar4;
      local_78 = pGVar4;
      pGVar5 = (GridItemCardGameZombieActionData *)
               FUN_04e225fc(*(undefined8 *)(pGVar3 + 0x148),uVar7);
      GridItemCardGameZombieActionData::GridItemCardGameZombieActionData(aGStack_58,pGVar5);
      (*pcVar8)(pGVar4,uVar7 & 0xffffffff,aGStack_58);
      GridItemCardGameZombieActionData::~GridItemCardGameZombieActionData(aGStack_58);
      pGVar4 = local_78;
      uVar1 = uVar7 + 1;
      pDVar6 = (Delegate0 *)FUN_04e225ec(local_70,uVar7);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemCardGameZombieChickenFarmer::PickAction() */

void __thiscall
GridItemCardGameZombieChickenFarmer::PickAction(GridItemCardGameZombieChickenFarmer *this)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  Image *this_00;
  ulong uVar7;
  undefined8 uVar8;
  AndroidAsyncIOFile *this_01;
  ulong uVar9;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  uVar9 = 0;
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  uVar8 = *(undefined8 *)(this + 0x1e0);
  lVar4 = FUN_04e22604(uVar8,*(undefined8 *)(this + 0x1e8));
  if (lVar4 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_04e22610(uVar8,uVar9);
      this_01 = (AndroidAsyncIOFile *)*puVar5;
      iVar2 = Sexy::AndroidAsyncIOFile::GetSize(this_01);
      Sexy::BaseTaskResource::GetType((BaseTaskResource *)this_01);
      iVar3 = Sexy::BaseResStreamsDriver::IsDecompressionFullyComplete
                        ((BaseResStreamsDriver *)this_01);
      if (iVar3 == 0) {
        ProbabilitySet<GridItemCardGameZombieAction*>::AddItem
                  ((ProbabilitySet<GridItemCardGameZombieAction*> *)aPStack_38,
                   (GridItemCardGameZombieAction *)this_01,iVar2);
      }
      uVar9 = uVar9 + 1;
      uVar8 = *(undefined8 *)(this + 0x1e0);
      uVar6 = FUN_04e22604(uVar8,*(undefined8 *)(this + 0x1e8));
    } while (uVar9 < uVar6);
  }
  uVar8 = ProbabilitySet<GridItemCardGameZombieAction*>::GetSize
                    ((ProbabilitySet<GridItemCardGameZombieAction*> *)aPStack_38);
  Sexy::OutputDebugStrF
            ((wchar_t *)"GridItemCardGameZombieChickenFarmer::PickAction bucketSize = %d",uVar8);
  lVar4 = ProbabilitySet<GridItemCardGameZombieAction*>::GetSize
                    ((ProbabilitySet<GridItemCardGameZombieAction*> *)aPStack_38);
  if (lVar4 == 0) {
    this_00 = (Image *)0x0;
  }
  else {
    this_00 = (Image *)ProbabilitySet<GridItemCardGameZombieAction*>::PickItem
                                 ((ProbabilitySet<GridItemCardGameZombieAction*> *)aPStack_38);
    uVar9 = ImageLib::Image::GetWidth(this_00);
    uVar6 = Sexy::BaseTaskResource::GetType((BaseTaskResource *)this_00);
    uVar7 = Sexy::Font::GetLineSpacingOffset((Font *)this_00);
    bVar1 = GridItemCardGameZombieAction::IsDone((GridItemCardGameZombieAction *)this_00);
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "GridItemCardGameZombieChickenFarmer PickAction index = %d intentCountDown = %d cooldown = %d isdone = %d"
               ,uVar9 & 0xffffffff,uVar6 & 0xffffffff,uVar7 & 0xffffffff,(ulong)bVar1);
  }
  ProbabilitySet<GridItemCardGameZombieAction*>::~ProbabilitySet
            ((ProbabilitySet<GridItemCardGameZombieAction*> *)aPStack_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this_00);
  }
  return;
}

