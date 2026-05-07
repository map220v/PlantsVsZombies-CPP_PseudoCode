// Class: PlantJackfruit


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackfruit::StaticClassInit() */

void PlantJackfruit::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantJackfruit");
    (*pcVar2)(plVar1,asStack_10,FUN_049aa43c,0x50,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantJackfruit::StaticGetClass() */

long * PlantJackfruit::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantJackfruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantJackfruit::GetClass() const */

long * PlantJackfruit::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantJackfruit",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackfruit::PlayHitEffect() */

void __thiscall PlantJackfruit::PlayHitEffect(PlantJackfruit *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  GridItem *this_00;
  Board *this_01;
  float fVar4;
  float fVar5;
  float fVar6;
  string asStack_10 [8];
  long local_8;
  
  fVar6 = 1.0;
  local_8 = ___stack_chk_guard;
  iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    fVar6 = 1.2;
  }
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"gridJackFruit");
  iVar3 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  this_00 = (GridItem *)Board::AddGridItem(this_01,asStack_10,iVar2 - (uint)(0 < iVar2),iVar3,1);
  std::string::~string(asStack_10);
  nop();
  if (*(code **)(*(long *)this_00 + 0x1e0) == GridItem::GetMaxHitpoints) {
    fVar4 = (float)GridItem::GetMaxHitpoints(this_00);
  }
  else {
    fVar4 = (float)(**(code **)(*(long *)this_00 + 0x1e0))();
  }
  fVar5 = (float)Plant::GetExtraHitPointsmodifier(*(Plant **)(this + 0x10));
  FUN_049a88b0(fVar4 * fVar5 * fVar6,this_00 + 300);
  if (*(code **)(*(long *)this_00 + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints(this_00);
  }
  else {
    (**(code **)(*(long *)this_00 + 0x1e0))();
  }
  FUN_049a88b8(this_00 + 0x128);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantJackfruit::DestorySelf() */

void __thiscall PlantJackfruit::DestorySelf(PlantJackfruit *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  GuideEndDoor *pGVar2;
  float fVar3;
  
  this_00 = (RtMixedPtrBase *)(this + 0x30);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    pGVar2 = (GuideEndDoor *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    fVar3 = (float)Plant::GetMaxHealth(*(Plant **)(this + 0x10));
    GuideEndDoor::SetMaxHP(pGVar2,fVar3);
    pGVar2 = (GuideEndDoor *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    GuideEndDoor::PlayBlock(pGVar2);
  }
  Plant::KillPlant(*(Plant **)(this + 0x10),1,0,0x8000000000);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackfruit::Initialize() */

void __thiscall PlantJackfruit::Initialize(PlantJackfruit *this)

{
  RtObject *pRVar1;
  PlantAnimRig_Jackfruit *pPVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  pRVar1 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_Jackfruit>(pRVar1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  PlantAnimRig_DevilsFlower::SetPlantPtr((PlantAnimRig_DevilsFlower *)pPVar2,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  pRVar1 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar2 = Sexy::RtObject::Cast<PlantAnimRig_Jackfruit>(pRVar1);
  PlantAnimRig_Jackfruit::PlayNormalRun(pPVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantJackfruit::PlantJackfruit() */

void __thiscall PlantJackfruit::PlantJackfruit(PlantJackfruit *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_069240d0;
  *(undefined4 *)(this + 0x28) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x38));
  return;
}


/* PlantJackfruit::StaticNew() */

PlantJackfruit * PlantJackfruit::StaticNew(void)

{
  PlantJackfruit *this;
  
  this = ::operator_new(0x50);
  PlantJackfruit(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackfruit::UpdateJackfruitPosition(float) */

void __thiscall PlantJackfruit::UpdateJackfruitPosition(PlantJackfruit *this,float param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  BoardEntity *this_00;
  SharkMinion *this_01;
  undefined8 uVar7;
  float fVar8;
  Point aPStack_20 [8];
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar6 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  local_18 = *puVar6;
  local_10 = *(undefined4 *)(puVar6 + 1);
  fVar8 = (float)PVZ_Dt();
  fVar8 = (float)local_18 + param_1 * fVar8;
  local_18._0_4_ = fVar8;
  iVar3 = BoardTransforms::BoardSpaceToGridX(fVar8);
  iVar4 = BoardTransforms::BoardSpaceToGridY(local_18._4_4_);
  cVar2 = GameObject::IsDestroyed(*(GameObject **)(this + 0x10));
  puVar1 = gMessageRouter;
  if (cVar2 == '\0') {
    uVar7 = *(undefined8 *)(this + 0x10);
    Sexy::Point::Point(aPStack_20,iVar3,iVar4);
    MessageRouter::Broadcast<Plant*,Sexy::Point&,Plant*,Sexy::Point>
              ((MessageRouter *)puVar1,Message::PlantMoving,uVar7,aPStack_20);
  }
  (**(code **)(**(long **)(this + 0x10) + 0x78))(*(long **)(this + 0x10),&local_18);
  this_01 = *(SharkMinion **)(this + 0x10);
  uVar5 = SharkMinion::getRow(this_01);
  this_00 = *(BoardEntity **)(this + 0x10);
  *(undefined4 *)(this_01 + 0x110) = uVar5;
  uVar5 = BoardEntity::CalcColumnPosition(this_00);
  *(undefined4 *)(this_00 + 0x114) = uVar5;
  cVar2 = GameObject::IsDestroyed(*(GameObject **)(this + 0x10));
  if (cVar2 == '\0') {
    MessageRouter::Broadcast<Plant*,Plant*>
              ((MessageRouter *)gMessageRouter,Message::PlantPlaced,*(Plant **)(this + 0x10));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantJackfruit::UpdateAnimation() */

void __thiscall PlantJackfruit::UpdateAnimation(PlantJackfruit *this)

{
  int iVar1;
  Effect_AngerFlame *this_00;
  long lVar2;
  
  this_00 = (Effect_AngerFlame *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar1 = Effect_AngerFlame::GetFlameCol(this_00);
  if (iVar1 == 0xf) {
    lVar2 = FUN_049a9b44(*(undefined8 *)(this + 0x10));
    UpdateJackfruitPosition(this,*(float *)(lVar2 + 0x2b8));
    return;
  }
  if (iVar1 != 0x10) {
    if (iVar1 != 2) {
      return;
    }
    lVar2 = FUN_049a9b44(*(undefined8 *)(this + 0x10));
    UpdateJackfruitPosition(this,*(float *)(lVar2 + 700));
    return;
  }
  UpdateJackfruitPosition(this,*(float *)(this + 0x28));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackfruit::GetValidGuideEndDoor() */

void __thiscall PlantJackfruit::GetValidGuideEndDoor(PlantJackfruit *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  PVZDB *pPVar5;
  RtDbTable *this_00;
  RtObject *this_01;
  GuideStartDoor *this_02;
  int *piVar6;
  float *pfVar7;
  long lVar8;
  GuideStartDoor *pGVar9;
  int iVar10;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_03;
  float fVar11;
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x31);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      pGVar9 = (GuideStartDoor *)0x0;
LAB_049a9ecc:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pGVar9);
    }
    pPVar5 = (PVZDB *)Sexy::LazySingleton<PVZDB>::GetInstance();
    this_00 = (RtDbTable *)PVZDB::GetTable(pPVar5,0x31);
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    this_01 = (RtObject *)Sexy::RtDbTable::GetObjectForId(this_00,aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    iVar10 = extraout_w1;
    if (((this_01 != (RtObject *)0x0) &&
        (bVar1 = Sexy::RtObject::IsA<GuideEndDoor>(this_01), iVar10 = extraout_w1_00, bVar1)) &&
       (nop(), iVar10 = extraout_w1_01, this_02 != (GuideStartDoor *)0x0)) {
      piVar6 = (int *)GuideStartDoor::GetSelfPosition(this_02);
      iVar3 = BoardTransforms::GridToBoardSpaceX(*piVar6);
      this_03 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  **)(this + 0x10);
      pfVar7 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost(this_03);
      fVar11 = *pfVar7;
      lVar8 = FUN_049a9b44(this_03);
      iVar10 = *(int *)(lVar8 + 0x2c0);
      if ((((float)iVar3 - fVar11 <= (float)iVar10) &&
          (iVar10 = piVar6[1], iVar10 == *(int *)(*(long *)(this + 0x10) + 0x110))) &&
         (cVar2 = FUN_049a88c4(this_02[0x11c]), iVar10 = extraout_w1_02, cVar2 == '\0')) {
        Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
        pGVar9 = this_02;
        goto LAB_049a9ecc;
      }
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar10);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackfruit::UpdateLogic() */

void __thiscall PlantJackfruit::UpdateLogic(PlantJackfruit *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Effect_AngerFlame *this_00;
  long lVar4;
  RtObject *this_01;
  PlantAnimRig_Jackfruit *this_02;
  GuideStartDoor *this_03;
  int *piVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Effect_AngerFlame *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar2 = Effect_AngerFlame::GetFlameCol(this_00);
  if (iVar2 == 0xf) {
    iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    if (iVar2 < iVar3) {
      lVar4 = GetValidGuideEndDoor(this);
      if (lVar4 != 0) {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                  ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x30),(RtWeakPtrBase *)aRStack_10
                  );
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      }
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x30));
      if (cVar1 == '\0') {
        (**(code **)(*(long *)this + 0x150))(this);
      }
      else {
        this_01 = (RtObject *)
                  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        this_02 = Sexy::RtObject::Cast<PlantAnimRig_Jackfruit>(this_01);
        this_03 = (GuideStartDoor *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
        piVar5 = (int *)GuideStartDoor::GetSelfPosition(this_03);
        iVar2 = BoardTransforms::GridToBoardSpaceX(*piVar5);
        pfVar6 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(this + 0x10));
        fVar8 = *pfVar6;
        fVar7 = (float)PlantAnimRig_Jackfruit::GetJumpTimeLength(this_02);
        *(float *)(this + 0x28) = ((float)iVar2 - fVar8) / fVar7;
        PlantAnimRig_Jackfruit::PlayJump(this_02);
      }
    }
    else {
      Plant::KillPlant(*(Plant **)(this + 0x10),1,0,0x8000000000);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantJackfruit::UpdateActions() */

void __thiscall PlantJackfruit::UpdateActions(PlantJackfruit *this)

{
  UpdateLogic(this);
  UpdateAnimation(this);
  return;
}


/* PlantJackfruit::~PlantJackfruit() */

void __thiscall PlantJackfruit::~PlantJackfruit(PlantJackfruit *this)

{
  *(undefined ***)this = &PTR_GetClass_069240d0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x38));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantJackfruit::~PlantJackfruit() */

void __thiscall PlantJackfruit::~PlantJackfruit(PlantJackfruit *this)

{
  ~PlantJackfruit(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackfruit::HaveDamage(Sexy::RtWeakPtr<BoardEntity>) */

void __thiscall PlantJackfruit::HaveDamage(PlantJackfruit *this,undefined8 param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                       (uVar2,uVar3,param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackfruit::FindTargetDamageableGridItem(Sexy::TRect<int>&, PlantWeapon) */

void PlantJackfruit::FindTargetDamageableGridItem
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1_00,
               PlantJackfruit *param_1)

{
  char cVar1;
  RtMixedPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::FindTargetDamageableGridItem((PlantFramework *)aRStack_18);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    cVar1 = HaveDamage(param_1,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)param_1_00,(RtWeakPtrBase *)aRStack_18);
      goto LAB_049aa928;
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (param_1_00);
LAB_049aa928:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackfruit::FindTargetZombie(Sexy::TRect<int>&, PlantWeapon, PlantTargetParams&) */

void PlantJackfruit::FindTargetZombie
               (_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *param_1_00,
               PlantJackfruit *param_1)

{
  char cVar1;
  RtMixedPtrBase aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::FindTargetZombie(aRStack_18);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_18);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    cVar1 = HaveDamage(param_1,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    if (cVar1 == '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)param_1_00,(RtWeakPtrBase *)aRStack_18);
      goto LAB_049aa9f0;
    }
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (param_1_00);
LAB_049aa9f0:
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJackfruit::OnAnimCommand(std::string const&, std::string const&) */

void PlantJackfruit::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  BoardEntity *this;
  long *plVar5;
  RealObject *this_00;
  RtMixedPtrBase aRStack_78 [8];
  undefined8 local_70;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [24];
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==("hit",param_2);
  if (bVar1) {
    Plant::FindTargetInRow
              (aRStack_78,*(long *)(param_1 + 0x10),
               *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110),0);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_78);
    if (cVar2 != '\0') {
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )(param_1 + 0x38),(RtWeakPtr *)aRStack_78);
      Plant::GetProps();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
      FUN_049a88d0(*(undefined8 *)(lVar4 + 0x70));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
      Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(param_1 + 0x10));
      this = (BoardEntity *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
      iVar3 = BoardEntity::CalcColumnPosition(this);
      Sexy::Point::Point((Point *)&local_70,iVar3,*(int *)(*(long *)(param_1 + 0x10) + 0x110));
      local_50 = local_70;
      plVar5 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
      (**(code **)(*plVar5 + 0x110))(plVar5,aRStack_68);
      this_00 = *(RealObject **)(param_1 + 0x10);
      std::string::string((string *)&local_70,"Play_Chestnut_Attack");
      RealObject::PlayPositionalSound(this_00,(string *)&local_70,0.0);
      std::string::~string((string *)&local_70);
      nop();
      PlayHitEffect((PlantJackfruit *)param_1);
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  }
  if (local_8 == ___stack_chk_guard) {
    PlantFramework::OnAnimCommand(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

