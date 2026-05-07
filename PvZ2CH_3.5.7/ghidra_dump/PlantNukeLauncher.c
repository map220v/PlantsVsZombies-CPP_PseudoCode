// Class: PlantNukeLauncher


/* PlantNukeLauncher::PlantNukeLauncher() */

void __thiscall PlantNukeLauncher::PlantNukeLauncher(PlantNukeLauncher *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_06815960;
  return;
}


/* PlantNukeLauncher::StaticNew() */

PlantNukeLauncher * PlantNukeLauncher::StaticNew(void)

{
  PlantNukeLauncher *this;
  
  this = ::operator_new(0x28);
  PlantNukeLauncher(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNukeLauncher::StaticClassInit() */

void PlantNukeLauncher::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantNukeLauncher");
    (*pcVar2)(plVar1,asStack_10,FUN_042425bc,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantNukeLauncher::StaticGetClass() */

long * PlantNukeLauncher::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantNukeLauncher",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantNukeLauncher::GetClass() const */

long * PlantNukeLauncher::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantNukeLauncher",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantNukeLauncher::~PlantNukeLauncher() */

void __thiscall PlantNukeLauncher::~PlantNukeLauncher(PlantNukeLauncher *this)

{
  *(undefined ***)this = &PTR_GetClass_06815960;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantNukeLauncher::~PlantNukeLauncher() */

void __thiscall PlantNukeLauncher::~PlantNukeLauncher(PlantNukeLauncher *this)

{
  ~PlantNukeLauncher(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNukeLauncher::FindTargetAndFire(PlantWeapon) */

void PlantNukeLauncher::FindTargetAndFire(long *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  RtObject *pRVar7;
  long *extraout_x0;
  ulong uVar8;
  long *extraout_x0_00;
  undefined8 uVar9;
  ulong uVar10;
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar10 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  iVar3 = BoardEntity::CalcColumnPosition((BoardEntity *)param_1[2]);
  iVar4 = SharkMinion::getRow((SharkMinion *)param_1[2]);
  uVar5 = operator|(2,4);
  Sexy::Insets::Insets
            (aIStack_30,iVar3,iVar4 + -1,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) - iVar3,3);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar5,
             aIStack_30);
  uVar9 = local_20;
  lVar6 = FUN_04241fc4(local_20,local_18);
  if (lVar6 != 0) {
    do {
      FUN_04241fd0(uVar9,uVar10);
      ToolPacketData::GetProps();
      pRVar7 = (RtObject *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30)
      ;
      bVar1 = Sexy::RtObject::IsA<Zombie>(pRVar7);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
      if (bVar1) {
        FUN_04241fd0(local_20,uVar10);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
        nop();
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30)
        ;
        cVar2 = (**(code **)(*extraout_x0 + 0x330))(extraout_x0);
        if (((cVar2 == '\0') &&
            (cVar2 = (**(code **)(*extraout_x0 + 0x328))(extraout_x0), cVar2 == '\0')) &&
           (cVar2 = FUN_042439ac((int)extraout_x0[5]), cVar2 == '\0')) {
LAB_04245008:
          uVar9 = 1;
          (**(code **)(*param_1 + 0x1a0))(param_1);
          goto LAB_04244fa8;
        }
      }
      else {
        FUN_04241fd0(local_20,uVar10);
        ToolPacketData::GetProps();
        pRVar7 = (RtObject *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
        bVar1 = Sexy::RtObject::IsA<GridItem>(pRVar7);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30)
        ;
        if (bVar1) {
          FUN_04241fd0(local_20,uVar10);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
          nop();
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
          cVar2 = (**(code **)(*extraout_x0_00 + 0x210))(extraout_x0_00,param_1[2]);
          if (cVar2 != '\0') goto LAB_04245008;
        }
      }
      uVar9 = local_20;
      uVar10 = uVar10 + 1;
      uVar8 = FUN_04241fc4(local_20,local_18);
    } while (uVar10 < uVar8);
  }
  uVar9 = 0;
LAB_04244fa8:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar9);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNukeLauncher::FindTargetZombie(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&) */

void __thiscall
PlantNukeLauncher::FindTargetZombie
          (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
          PlantNukeLauncher *this,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  Zombie *this_00;
  float *pfVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  code *pcVar12;
  float fVar13;
  float fVar14;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  Plant aPStack_40 [16];
  Insets aIStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
  cVar2 = Board::RowCanHaveZombies
                    (*(Board **)(gLawnApp + 0x9f0),*(int *)(*(long *)(this + 0x10) + 0x110));
  if (cVar2 != '\0') {
    if (*(code **)(*(long *)this + 400) == PlantFramework::GetCollisionFlags) {
      uVar3 = PlantFramework::GetCollisionFlags();
    }
    else {
      uVar3 = (**(code **)(*(long *)this + 400))(this,param_4);
    }
    Plant::GetPlantAttackRect(aPStack_40,*(undefined8 *)(this + 0x10),param_4);
    uVar10 = 0;
    iVar4 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
    iVar5 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    iVar1 = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8);
    iVar6 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar13 = (float)(iVar1 * iVar6 + 200);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    Sexy::Insets::Insets
              (aIStack_30,iVar4,iVar5 + -1,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) - iVar4,3);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,
               aIStack_30);
    uVar11 = local_20;
    uVar7 = FUN_04241fc4(local_20,local_18);
    if (uVar7 != 0) {
      do {
        FUN_04241fd0(uVar11,uVar10);
        nop();
        if (this_00 != (Zombie *)0x0) {
          ToolPacketData::GetProps();
          cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aIStack_30);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
          if ((((cVar2 != '\0') && (cVar2 = Zombie::IsControlled(this_00), cVar2 == '\0')) &&
              (cVar2 = (**(code **)(*(long *)this_00 + 0x328))(this_00), cVar2 == '\0')) &&
             ((cVar2 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar2 == '\0' &&
              (cVar2 = RealObject::IsOnOpposingTeam
                                 ((RealObject *)this_00,*(RealObject **)(this + 0x10)),
              cVar2 != '\0')))) {
            pcVar12 = *(code **)(*(long *)this + 0x3e0);
            ToolPacketData::GetProps();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aIStack_30,(RtWeakPtrBase *)aRStack_48);
            cVar2 = (*pcVar12)(this,aIStack_30,param_4);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
            if (cVar2 != '\0') {
              pfVar8 = (float *)std::
                                _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                               *)this_00);
              fVar14 = *pfVar8;
              lVar9 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
              if (fVar14 <= *(float *)(lVar9 + 0x10)) {
                pcVar12 = *(code **)(*(long *)this_00 + 0x3d0);
                Plant::GetType();
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)aIStack_30,(RtWeakPtrBase *)aRStack_48)
                ;
                cVar2 = (*pcVar12)(this_00,aIStack_30,0);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
                if (((cVar2 != '\0') &&
                    (cVar2 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,uVar3), cVar2 != '\0'))
                   && (fVar14 = *pfVar8, fVar14 < fVar13)) {
                  ToolPacketData::GetProps();
                  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                            ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_1,
                             (RtWeakPtrBase *)aIStack_30);
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30);
                  fVar13 = fVar14;
                }
              }
            }
          }
          uVar11 = local_20;
          uVar7 = FUN_04241fc4(local_20,local_18);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar7);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNukeLauncher::FindTargetDamageableGridItem(PlantWeapon) */

void __thiscall
PlantNukeLauncher::FindTargetDamageableGridItem
          (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1,
          PlantNukeLauncher *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *extraout_x0;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node(param_1)
  ;
  iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar5 = iVar5 + -1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Sexy::Insets::Insets
            (aIStack_30,iVar3,iVar4 + -1,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) - iVar3,3);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,4,aIStack_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    nop();
    cVar2 = (**(code **)(*extraout_x0 + 0x200))();
    if ((cVar2 != '\0') &&
       (cVar2 = (**(code **)(*extraout_x0 + 0x210))(extraout_x0,*(undefined8 *)(this + 0x10)),
       cVar2 != '\0')) {
      iVar3 = FUN_04241f70((int)extraout_x0[0x26]);
      if (iVar3 < iVar5) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)param_1,(RtWeakPtrBase *)aIStack_30);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aIStack_30)
        ;
        iVar5 = iVar3;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNukeLauncher::GetRefundSunAmount() */

void PlantNukeLauncher::GetRefundSunAmount(void)

{
  int iVar1;
  RtObject *this;
  PlantTypeNukeLauncher *this_00;
  float fVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetType();
  this = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  this_00 = Sexy::RtObject::Cast<PlantTypeNukeLauncher>(this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (this_00 == (PlantTypeNukeLauncher *)0x0) {
    fVar2 = 0.0;
  }
  else {
    iVar1 = PlantTypeNukeLauncher::GetExistingLevelCount(this_00);
    iVar1 = PlantTypeNukeLauncher::CalcCostForLevelCount(this_00,iVar1 + -1,0xfffffffe);
    fVar2 = (float)iVar1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNukeLauncher::queueShot(float, Sexy::Point const&, RocketType) */

void __thiscall
PlantNukeLauncher::queueShot
          (undefined8 param_1,PlantNukeLauncher *this,undefined8 param_2,undefined4 param_4)

{
  NukeLauncherSubSystem *pNVar1;
  RealObject *this_00;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pNVar1 = Board::GetGameSubSystem<NukeLauncherSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  NukeLauncherSubSystem::QueueShot(param_1,pNVar1,this,param_2,param_4);
  this_00 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_10,"Play_Plant_Nukelauncher_Launch");
  RealObject::PlayPositionalSound(this_00,asStack_10,0.0);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantNukeLauncher::addShot(float, int&, Sexy::Point const&, RocketType) */

void __thiscall
PlantNukeLauncher::addShot
          (float param_1,PlantNukeLauncher *this,int *param_2,undefined8 param_3,undefined4 param_5)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  queueShot((PlantNukeLauncher *)(fVar1 + param_1 * (float)(*param_2 + 1)),this,param_3,param_5);
  *param_2 = *param_2 + 1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNukeLauncher::DoPlantfood(bool) */

void PlantNukeLauncher::DoPlantfood(bool param_1)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  PlantFramework *this;
  RealObject *this_00;
  long *extraout_x0;
  BoardTransforms *pBVar6;
  long *extraout_x0_00;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  RtObject *this_01;
  undefined8 uVar10;
  char in_w1;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  code *pcVar14;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float in_s1;
  PlantNukeLauncher *pPVar15;
  int local_a4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_a0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_98 [8];
  RtObject *local_90;
  TPoint<int> local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  this = (PlantFramework *)(ulong)param_1;
  local_8 = ___stack_chk_guard;
  if (in_w1 == '\0') {
    uVar13 = 1;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
    Board::GetGridBoundingRect();
    EntityFinder::GetEntitiesTouchingRectangle
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50,2,
               &local_20,0xffffffff,0xffffffff);
    uVar7 = local_50;
    iVar4 = FUN_04241fc4(local_50,local_48);
    iVar4 = iVar4 + -1;
    if (-1 < iVar4) goto LAB_042484a8;
    goto LAB_042487a4;
  }
  uVar13 = 2;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  Board::GetGridBoundingRect();
  EntityFinder::GetEntitiesTouchingRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50,2,&local_20,
             0xffffffff,0xffffffff);
  uVar7 = local_50;
  iVar4 = FUN_04241fc4(local_50,local_48);
  iVar4 = iVar4 + -1;
  if (-1 < iVar4) {
LAB_042484a8:
    lVar12 = (long)iVar4;
    do {
      FUN_04241fd0(uVar7,lVar12);
      nop();
      cVar1 = (**(code **)(*(long *)this_00 + 0x328))();
      if (((cVar1 == '\0') &&
          (cVar1 = (**(code **)(*(long *)this_00 + 0x330))(this_00), cVar1 == '\0')) &&
         (cVar1 = FUN_042439ac(*(undefined4 *)(this_00 + 0x28)), cVar1 == '\0')) {
        uVar7 = local_50;
        if (*(RealObject **)(this + 0x10) != (RealObject *)0x0) {
          bVar2 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10));
          if (bVar2 == 0) goto LAB_042484cc;
          uVar7 = local_50;
          if (*(long *)(this + 0x10) == 0) goto joined_r0x0424850c;
          plVar11 = *(long **)(*(long *)(this + 0x10) + 0xa8);
          pcVar14 = *(code **)(*plVar11 + 0x3e0);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_98,(RtWeakPtrBase *)aRStack_a0);
          cVar1 = (*pcVar14)(plVar11,aRStack_98,0);
          if (cVar1 == '\0') {
            if (bVar2 != 0) goto LAB_0424861c;
LAB_04248aa8:
            bVar2 = 0;
          }
          else {
            if (*(long *)(this + 0x10) == 0) {
              bVar2 = 0;
              if (cVar1 == '\0') goto LAB_04248aa8;
            }
            else {
              pcVar14 = *(code **)(*(long *)this_00 + 0x3d0);
              Plant::GetType();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_20,(RtWeakPtrBase *)local_38);
              bVar2 = (*pcVar14)(this_00,(__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                          *)&local_20,0);
              bVar2 = bVar2 ^ 1;
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
            }
LAB_0424861c:
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_98);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_a0);
          }
          uVar7 = local_50;
          if (bVar2 != 0) goto LAB_042484cc;
        }
      }
      else {
LAB_042484cc:
        local_60 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_50);
        local_38[0] = __gnu_cxx::
                      __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                   *)&local_60,lVar12);
        __gnu_cxx::
        __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
        ::__normal_iterator<Sexy::RenderStateManager::Context**>
                  ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                    *)&local_20,(__normal_iterator *)local_38);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,local_20);
        uVar7 = local_50;
      }
joined_r0x0424850c:
      local_50 = uVar7;
      if (iVar4 == 0) goto LAB_04248640;
      iVar4 = iVar4 + -1;
      lVar12 = lVar12 + -1;
    } while( true );
  }
LAB_04248648:
  lVar12 = FUN_04244de4(*(undefined8 *)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
  pPVar15._0_4_ = *(PlantNukeLauncher **)(lVar12 + 0x2d0);
  lVar12 = FUN_04244de4(*(undefined8 *)(this + 0x10));
  iVar4 = *(int *)(lVar12 + 0x2c8);
  local_a4 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,(vector *)&local_50);
  iVar5 = FUN_04241fc4(local_20,local_18);
  iVar5 = iVar5 + -1;
  if ((-1 < iVar5) && (local_a4 < iVar4)) {
    lVar12 = (long)iVar5;
    do {
      cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      if (cVar1 != '\0') goto LAB_042487d4;
      puVar9 = (undefined8 *)FUN_04241fd0(local_20,lVar12);
      uVar7 = *puVar9;
      nop();
      if ((this_01 != (RtObject *)0x0) &&
         (local_90 = this_01, bVar3 = Sexy::RtObject::IsA<ZombieGargantuar>(this_01), bVar3)) {
        pBVar6 = (BoardTransforms *)
                 (**(code **)(*(long *)local_90 + 0x3a8))
                           ((float)(local_a4 + 1) * (float)pPVar15._0_4_,local_90);
        local_60 = CONCAT44(in_s1,extraout_s0_01);
        BoardTransforms::BoardSpaceToGrid(pBVar6,extraout_s0_01,in_s1);
        uVar8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)local_38);
        uVar10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_38);
        local_78 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                             (uVar8,uVar10,local_88);
        local_70 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_38);
        bVar3 = __gnu_cxx::operator==((__normal_iterator *)&local_78,(__normal_iterator *)&local_70)
        ;
        if (bVar3) {
          Sexy::Point::Point((Point *)&local_68,-1,-1);
          cVar1 = Sexy::TPoint<int>::operator!=(local_88,(TPoint *)&local_68);
          if (cVar1 != '\0') {
            addShot(pPVar15._0_4_,this,&local_a4,local_88,uVar13);
            std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                      ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_38,(Point *)local_88
                      );
            uVar8 = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                             *)&local_50);
            uVar10 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_50);
            local_70 = std::
                       remove<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,Zombie*>
                                 (uVar8,uVar10,&local_90);
            __gnu_cxx::
            __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
            ::__normal_iterator<Sexy::RenderStateManager::Context**>
                      ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)&local_68,(__normal_iterator *)&local_70);
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,local_68);
          }
        }
        uVar8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_20);
        uVar10 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_20);
        local_80 = FUN_04245948(uVar8,uVar10,uVar7);
        local_68 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
        bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_80,(__normal_iterator *)&local_68)
        ;
        if (bVar3) {
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_70,(__normal_iterator *)&local_80);
          local_78 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                            *)&local_20);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_68,(__normal_iterator *)&local_78);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,local_70,
                     local_68);
        }
      }
      iVar5 = iVar5 + -1;
      lVar12 = lVar12 + -1;
    } while ((local_a4 < iVar4) && (-1 < iVar5));
  }
  if (local_a4 < iVar4) {
LAB_042487e0:
    do {
      cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                        ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
      if (cVar1 != '\0') {
        if (local_a4 < iVar4) {
          goto LAB_04248838;
        }
        break;
      }
      iVar5 = FUN_04241fc4(local_20,local_18);
      iVar5 = PlantFramework::Rand(this,iVar5);
      FUN_04241fd0(local_20,(long)iVar5);
      nop();
      pBVar6 = (BoardTransforms *)
               (**(code **)(*extraout_x0_00 + 0x3a8))((float)pPVar15._0_4_ * (float)(local_a4 + 1));
      local_60 = CONCAT44(in_s1,extraout_s0_00);
      BoardTransforms::BoardSpaceToGrid(pBVar6,extraout_s0_00,in_s1);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)local_38);
      uVar8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)local_38);
      local_78 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>,Sexy::Point>
                           (uVar7,uVar8,(TPoint<int> *)&local_80);
      local_70 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_38);
      bVar3 = __gnu_cxx::operator==((__normal_iterator *)&local_78,(__normal_iterator *)&local_70);
      if (bVar3) {
        Sexy::Point::Point((Point *)&local_68,-1,-1);
        cVar1 = Sexy::TPoint<int>::operator!=((TPoint<int> *)&local_80,(TPoint *)&local_68);
        if (cVar1 != '\0') {
          addShot(pPVar15._0_4_,this,&local_a4,(TPoint<int> *)&local_80,uVar13);
          std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                    ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_38,(Point *)&local_80)
          ;
          uVar7 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                           *)&local_50);
          uVar8 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)&local_50);
          local_70 = std::
                     remove<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,Zombie*>
                               (uVar7,uVar8,local_88);
          __gnu_cxx::
          __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
          ::__normal_iterator<Sexy::RenderStateManager::Context**>
                    ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                      *)&local_68,(__normal_iterator *)&local_70);
          std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                    ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,local_68);
        }
      }
      local_78 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)&local_20);
      local_70 = __gnu_cxx::
                 __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                 ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                              *)&local_78,(long)iVar5);
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_68,(__normal_iterator *)&local_70);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,local_68);
    } while (local_a4 < iVar4);
    goto LAB_042486e4;
  }
  goto LAB_042486a0;
  while( true ) {
    iVar5 = FUN_04241fc4(local_50,local_48);
    iVar5 = PlantFramework::Rand(this,iVar5);
    FUN_04241fd0(local_20,(long)iVar5);
    nop();
    pBVar6 = (BoardTransforms *)
             (**(code **)(*extraout_x0 + 0x3a8))((float)pPVar15._0_4_ * (float)(local_a4 + 1));
    local_60 = CONCAT44(in_s1,extraout_s0);
    BoardTransforms::BoardSpaceToGrid(pBVar6,extraout_s0,in_s1);
    addShot(pPVar15._0_4_,this,&local_a4,&local_80,uVar13);
    local_78 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_50);
    local_70 = __gnu_cxx::
               __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
               ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                            *)&local_78,(long)iVar5);
    __gnu_cxx::
    __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
    ::__normal_iterator<Sexy::RenderStateManager::Context**>
              ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                *)&local_68,(__normal_iterator *)&local_70);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50,local_68);
    if (iVar4 <= local_a4) break;
LAB_04248838:
    cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
    if ((cVar1 != '\0') ||
       (cVar1 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::empty
                          ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20),
       cVar1 != '\0')) goto LAB_042486a0;
  }
  goto LAB_042486e4;
LAB_04248640:
  if (in_w1 != '\0') goto LAB_04248648;
LAB_042487a4:
  lVar12 = FUN_04244de4(*(undefined8 *)(this + 0x10));
                    /* WARNING: Load size is inaccurate */
  pPVar15._0_4_ = *(PlantNukeLauncher **)(lVar12 + 0x2cc);
  lVar12 = FUN_04244de4(*(undefined8 *)(this + 0x10));
  iVar4 = *(int *)(lVar12 + 0x2c4);
  local_a4 = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,(vector *)&local_50);
LAB_042487d4:
  if (local_a4 < iVar4) goto LAB_042487e0;
LAB_042486a0:
  if (local_a4 < iVar4) {
    do {
      Sexy::Point::Point((Point *)&local_60,-1,-1);
      addShot(pPVar15._0_4_,this,&local_a4,(Point *)&local_60,uVar13);
    } while (local_a4 < iVar4);
  }
LAB_042486e4:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)local_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_50);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantNukeLauncher::ApplyPlantfood() */

void __thiscall PlantNukeLauncher::ApplyPlantfood(PlantNukeLauncher *this)

{
  char cVar1;
  
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  DoPlantfood(SUB81(this,0));
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    return;
  }
  DoPlantfood(SUB81(this,0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantNukeLauncher::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void __thiscall
PlantNukeLauncher::Fire
          (PlantNukeLauncher *this,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  BoardEntity *pBVar6;
  SharkMinion *pSVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  string asStack_30 [8];
  Point local_28 [8];
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  Point local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(**(long **)(*(long *)(this + 0x10) + 0xa8) + 0x300))
            (asStack_30,*(long **)(*(long *)(this + 0x10) + 0xa8));
  cVar1 = FUN_0547419c(asStack_30);
  if (cVar1 == '\0') {
    RealObject::PlayPositionalSound(*(RealObject **)(this + 0x10),asStack_30,0.0);
  }
  Sexy::Point::Point(local_28,-1,-1);
  PlantFramework::FindTargetZombie(aRStack_20,this,0);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_20);
  if ((bVar2) &&
     (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_20), cVar1 != '\0')) {
    pBVar6 = (BoardEntity *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    iVar3 = BoardEntity::CalcColumnPosition(pBVar6);
    pSVar7 = (SharkMinion *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    iVar4 = SharkMinion::getRow(pSVar7);
    Sexy::Point::Point(local_10,iVar3,iVar4);
  }
  else {
    (**(code **)(*(long *)this + 0xf8))(aRStack_18,this,param_4);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_18);
    if ((bVar2) &&
       (cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_18), cVar1 != '\0')) {
      pBVar6 = (BoardEntity *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
      ;
      iVar3 = BoardEntity::CalcColumnPosition(pBVar6);
      pSVar7 = (SharkMinion *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18)
      ;
      iVar4 = SharkMinion::getRow(pSVar7);
      Sexy::Point::Point(local_10,iVar3,iVar4);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  }
  fVar9 = (float)PVZ_T();
  lVar5 = FUN_04244de4(*(undefined8 *)(this + 0x10));
  fVar10 = *(float *)(lVar5 + 0x2b8);
  cVar1 = FUN_04241f7c(*(undefined8 *)(this + 0x10));
  uVar8 = 3;
  if (cVar1 == '\0') {
    uVar8 = 0;
  }
  queueShot((PlantNukeLauncher *)(fVar9 + fVar10),this,local_28,uVar8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string(asStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}

