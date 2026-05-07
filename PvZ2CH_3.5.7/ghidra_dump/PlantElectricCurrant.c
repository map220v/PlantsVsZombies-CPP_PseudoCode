// Class: PlantElectricCurrant


/* PlantElectricCurrant::RemovePlantElectrifiedGlow() */

void __thiscall PlantElectricCurrant::RemovePlantElectrifiedGlow(PlantElectricCurrant *this)

{
  bool bVar1;
  long *plVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x38));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
    (**(code **)(*plVar2 + 0x48))();
  }
  return;
}


/* PlantElectricCurrant::CanApplyPlantfood() */

byte __thiscall PlantElectricCurrant::CanApplyPlantfood(PlantElectricCurrant *this)

{
  return (byte)this[0x30] ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricCurrant::StaticClassInit() */

void PlantElectricCurrant::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantElectricCurrant");
    (*pcVar2)(plVar1,asStack_10,FUN_0419b730,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantElectricCurrant::StaticGetClass() */

long * PlantElectricCurrant::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantElectricCurrant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantElectricCurrant::GetClass() const */

long * PlantElectricCurrant::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantElectricCurrant",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantElectricCurrant::PlantElectricCurrant() */

void __thiscall PlantElectricCurrant::PlantElectricCurrant(PlantElectricCurrant *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067fd460;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}


/* PlantElectricCurrant::StaticNew() */

PlantElectricCurrant * PlantElectricCurrant::StaticNew(void)

{
  PlantElectricCurrant *this;
  
  this = ::operator_new(0x48);
  PlantElectricCurrant(this);
  return this;
}


/* PlantElectricCurrant::~PlantElectricCurrant() */

void __thiscall PlantElectricCurrant::~PlantElectricCurrant(PlantElectricCurrant *this)

{
  *(undefined ***)this = &PTR_GetClass_067fd460;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantElectricCurrant::~PlantElectricCurrant() */

void __thiscall PlantElectricCurrant::~PlantElectricCurrant(PlantElectricCurrant *this)

{
  ~PlantElectricCurrant(this);
  AK::FreeHook(this);
  return;
}


/* PlantElectricCurrant::onEntityDamaged(BoardEntity*) */

void __thiscall
PlantElectricCurrant::onEntityDamaged(PlantElectricCurrant *this,BoardEntity *param_1)

{
  bool bVar1;
  ElectricCurrantFenceSystem *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x40));
  if (!bVar1) {
    return;
  }
  this_00 = (ElectricCurrantFenceSystem *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40))
  ;
  ElectricCurrantFenceSystem::DoHitEffect(this_00,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricCurrant::DoHitEffect(BoardEntity*) */

void __thiscall PlantElectricCurrant::DoHitEffect(PlantElectricCurrant *this,BoardEntity *param_1)

{
  undefined4 uVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  SexyVector3 *this_01;
  PopAnim *pPVar3;
  char *__s;
  undefined4 uVar4;
  undefined4 uVar5;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar1 = SharkMinion::getRow((SharkMinion *)param_1);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           *)param_1);
  uVar4 = 0xc20c0000;
  uVar5 = 0;
  EATextSquish::Vec3::Vec3(aVStack_28,0.0,-35.0,0.0);
  local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aVStack_28);
  local_14 = uVar4;
  local_10 = uVar5;
  iVar2 = Board::MakeRenderOrder(0x64960,uVar1,0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,iVar2);
  std::string::string((string *)aVStack_28,"POPANIM_EFFECTS_ELECTRICCURRANT_HIT");
  GetPAMByName((string *)aVStack_28);
  pPVar3 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,pPVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string((string *)aVStack_28);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  iVar2 = FUN_04198754(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
  if (iVar2 < 2) {
    __s = "idle";
  }
  else {
    __s = "level_idle";
  }
  std::string::string((string *)&local_18,__s);
  nop();
  Effect_PopAnim::PlaySingleAnimation(this_00,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,2);
  std::string::~string((string *)&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricCurrant::CreatePlantElectrifiedGlow() */

void __thiscall PlantElectricCurrant::CreatePlantElectrifiedGlow(PlantElectricCurrant *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x38);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (!bVar1) {
    iVar2 = FUN_04198754(*(undefined4 *)(*(long *)(this + 0x10) + 0x50));
    GameObject::Create<GridSquareElectricCurrantGlowPiece>();
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this_00,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    uVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Sexy::Point::Point((Point *)aRStack_10,*(int *)(*(long *)(this + 0x10) + 0x114),
                       *(int *)(*(long *)(this + 0x10) + 0x110));
    uVar3 = FUN_041987e8(this[0x30]);
    GridSquareElectricCurrantGlowPiece::StartEffect
              (uVar4,aRStack_10,uVar3,1 < iVar2,*(undefined8 *)(this + 0x10));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantElectricCurrant::ApplyPlantfood() */

void __thiscall PlantElectricCurrant::ApplyPlantfood(PlantElectricCurrant *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  RealObject *pRVar4;
  ElectricCurrantFenceSystem *pEVar5;
  
  this_00 = (RtWeakPtr *)(this + 0x40);
  this[0x30] = (PlantElectricCurrant)0x1;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pEVar5 = (ElectricCurrantFenceSystem *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    ElectricCurrantFenceSystem::ApplyPlantfoodToNode(pEVar5,this);
    cVar2 = FUN_041987e8(this[0x30]);
    if (cVar2 != '\0') {
      pEVar5 = (ElectricCurrantFenceSystem *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar3 = ElectricCurrantFenceSystem::GetNumFencesOnNode(pEVar5,this);
      if (0 < iVar3) {
        CreatePlantElectrifiedGlow(this);
      }
    }
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x38));
  if (bVar1) {
    pRVar4 = (RealObject *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x38));
    GridSquareElectricCurrantGlowPiece::ApplyPlantfood(pRVar4);
  }
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* PlantElectricCurrant::NumbZombieIfPossible(BoardEntity*) */

void __thiscall
PlantElectricCurrant::NumbZombieIfPossible(PlantElectricCurrant *this,BoardEntity *param_1)

{
  char cVar1;
  long lVar2;
  Zombie *this_00;
  float fVar3;
  
  fVar3 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
  lVar2 = FUN_0419b06c(*(undefined8 *)(this + 0x10));
  if ((((fVar3 <= *(float *)(lVar2 + 700)) && (param_1 != (BoardEntity *)0x0)) &&
      (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0)) &&
     (((cVar1 = Zombie::IsBoss(this_00), cVar1 == '\0' &&
       (cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0')) &&
      (cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0')))) {
    Zombie::ApplyCondition((Zombie *)0x3f800000,0,this_00,0x18,1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricCurrant::DoAttack() */

void __thiscall PlantElectricCurrant::DoAttack(PlantElectricCurrant *this)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  PlantAction *pPVar7;
  ElectricCurrantFenceSystem *pEVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  undefined8 local_110;
  undefined8 local_108 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_f8 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_e0 [8];
  float local_d8;
  undefined1 auStack_d0 [80];
  PlantAction aPStack_80 [120];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = FUN_041987e8(this[0x30]);
  FUN_04198760(aRStack_e0,*(undefined8 *)(this + 0x10));
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e0);
  pPVar7 = (PlantAction *)FUN_0419885c(*(undefined8 *)(lVar6 + 0x70),bVar1);
  PlantAction::PlantAction(aPStack_80,pPVar7);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_e0);
  pEVar8 = (ElectricCurrantFenceSystem *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  iVar4 = ElectricCurrantFenceSystem::GetNumFencesOnNode(pEVar8,this);
  if (0 < iVar4) {
    FUN_04198760(aRStack_e0,*(undefined8 *)(this + 0x10));
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e0);
    pPVar7 = (PlantAction *)FUN_0419885c(*(undefined8 *)(lVar6 + 0x70),bVar1 + 2);
    PlantAction::operator=(aPStack_80,pPVar7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_e0);
  }
  pPVar7 = *(PlantAction **)(this + 0x10);
  cVar2 = FUN_04198784(pPVar7);
  if (cVar2 != '\0') {
    bVar1 = 4;
    FUN_04198760(aRStack_e0,pPVar7);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_e0);
    pPVar7 = (PlantAction *)FUN_0419885c(*(undefined8 *)(lVar6 + 0x70),4);
    PlantAction::operator=(aPStack_80,pPVar7);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_e0);
    pPVar7 = *(PlantAction **)(this + 0x10);
  }
  Plant::calcDamageInfoFromPlantAction(pPVar7);
  operator|=(auStack_d0,0x80);
  local_d8 = *(float *)(this + 0x28) * local_d8;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_f8);
  cVar2 = FUN_04198784(*(undefined8 *)(this + 0x10));
  if (cVar2 == '\0') {
    uVar5 = operator|(2,4);
    (**(code **)(*(long *)this + 0x2b8))(local_108,this,bVar1);
    EntityFinder::GetEntitiesTouchingRectangle(avStack_f8,uVar5,local_108,0xffffffff,0xffffffff);
  }
  else {
    (**(code **)(*(long *)this + 0x2b0))(local_108,this,bVar1);
    uVar5 = operator|(2,4);
    EntityFinder::GetEntitiesInGridSquares(avStack_f8,uVar5,local_108);
  }
  pEVar8 = (ElectricCurrantFenceSystem *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  ElectricCurrantFenceSystem::RemoveUndamageableEntitiesFromList(pEVar8,(vector *)avStack_f8);
  local_110 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_f8);
  local_108[0] = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_f8);
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_110,(__normal_iterator *)local_108), bVar3)
  {
    puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_110);
    (**(code **)(*(long *)*puVar9 + 0x110))((long *)*puVar9,aRStack_e0);
    cVar2 = FUN_041987e8(this[0x30]);
    if ((cVar2 != '\0') && (cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10)), cVar2 != '\0')
       ) {
      NumbZombieIfPossible(this,(BoardEntity *)*puVar9);
    }
    DoHitEffect(this,(BoardEntity *)*puVar9);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_110);
  }
  FUN_04198760((RtWeakPtr<Sexy::ResourceInfo> *)local_108,*(undefined8 *)(this + 0x10));
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_108);
  lVar6 = FUN_0419885c(*(undefined8 *)(lVar6 + 0x70),bVar1);
  fVar11 = *(float *)(lVar6 + 0x28);
  fVar10 = (float)PVZ_T();
  *(float *)(this + 0x2c) = fVar10 + fVar11;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_108);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_f8);
  DamageInfo::~DamageInfo((DamageInfo *)aRStack_e0);
  PlantAction::~PlantAction(aPStack_80);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantElectricCurrant::OnAnimCommand(std::string const&, std::string const&) */

undefined1 PlantElectricCurrant::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_action");
  if ((bVar1) && (*(int *)(*(long *)(param_1 + 0x10) + 200) == 0xb)) {
    DoAttack((PlantElectricCurrant *)param_1);
    return 1;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricCurrant::doFenceAttack() */

void __thiscall PlantElectricCurrant::doFenceAttack(PlantElectricCurrant *this)

{
  uint uVar1;
  ElectricCurrantFenceSystem *this_00;
  long lVar2;
  float fVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(long *)(this + 0x10) + 200) == 0xd) {
    this_00 = (ElectricCurrantFenceSystem *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
    uVar1 = ElectricCurrantFenceSystem::DoFenceAttack(this_00,this);
    FUN_04198760(aRStack_10,*(undefined8 *)(this + 0x10));
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    lVar2 = FUN_0419885c(*(undefined8 *)(lVar2 + 0x70),(uVar1 & 0xff) + 2);
    fVar4 = *(float *)(lVar2 + 0x28);
    fVar3 = (float)PVZ_T();
    *(float *)(this + 0x2c) = fVar3 + fVar4;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    setState(this,4);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricCurrant::setState(unsigned int) */

void __thiscall PlantElectricCurrant::setState(PlantElectricCurrant *this,uint param_1)

{
  char cVar1;
  PlantAnimRig_ElectricCurrant *extraout_x0;
  long *plVar2;
  PlantAnimRig_ElectricCurrant *extraout_x0_00;
  PlantAnimRig_ElectricCurrant *extraout_x0_01;
  UIEasyButtonWidget *this_00;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  *(uint *)(this_00 + 200) = param_1;
  switch(param_1) {
  case 4:
    cVar1 = FUN_041987e8(this[0x30]);
    if (cVar1 == '\0') {
      plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
      (**(code **)(*plVar2 + 0x118))();
    }
    else {
      plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
      (**(code **)(*plVar2 + 0x148))();
    }
  default:
    goto switchD_0419ddbc_caseD_5;
  case 10:
    UIEasyButtonWidget::GetImageNormal(this_00);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    PlantAnimRig_ElectricCurrant::StartAttack(extraout_x0,aRStack_50);
    break;
  case 0xb:
    UIEasyButtonWidget::GetImageNormal(this_00);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    PlantAnimRig_ElectricCurrant::LoopAttack(extraout_x0_00,aRStack_50);
    break;
  case 0xc:
    UIEasyButtonWidget::GetImageNormal(this_00);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    PlantAnimRig_ElectricCurrant::StopAttacking(extraout_x0_01,aRStack_50);
    break;
  case 0xd:
    doFenceAttack(this);
    goto switchD_0419ddbc_caseD_5;
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
switchD_0419ddbc_caseD_5:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricCurrant::UpdateActions() */

void __thiscall PlantElectricCurrant::UpdateActions(PlantElectricCurrant *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ElectricCurrantFenceSystem *pEVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  Point aPStack_48 [8];
  Insets local_40 [16];
  Insets local_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if (((cVar1 == '\0') && (*(int *)(*(long *)(this + 0x10) + 200) == 4)) &&
     (fVar8 = *(float *)(this + 0x2c), fVar7 = (float)PVZ_T(), fVar8 <= fVar7)) {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40);
    Sexy::Point::Point(aPStack_48,*(int *)(*(long *)(this + 0x10) + 0x114),
                       *(int *)(*(long *)(this + 0x10) + 0x110));
    pEVar5 = (ElectricCurrantFenceSystem *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    iVar2 = ElectricCurrantFenceSystem::GetNumFencesOnNode(pEVar5,this);
    if (0 < iVar2) {
      pEVar5 = (ElectricCurrantFenceSystem *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
      Sexy::Point::Point((Point *)&local_20,(TPoint *)aPStack_48);
      cVar1 = ElectricCurrantFenceSystem::HasAttackTargets(pEVar5,(Point *)&local_20);
      if (cVar1 != '\0') {
        setState(this,0xd);
        goto LAB_0419e040;
      }
    }
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
    Sexy::Insets::Insets
              (local_40,*(int *)(*(long *)(this + 0x10) + 0x114),
               *(int *)(*(long *)(this + 0x10) + 0x110),1,1);
    lVar6 = *(long *)(this + 0x10);
    cVar1 = FUN_04198784(lVar6);
    if (cVar1 != '\0') {
      Sexy::Insets::Insets(local_30,*(int *)(lVar6 + 0x114) + -1,*(int *)(lVar6 + 0x110) + -1,3,3);
    }
    uVar3 = operator|(2,4);
    EntityFinder::GetEntitiesInGridSquares
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,uVar3,
               local_40);
    pEVar5 = (ElectricCurrantFenceSystem *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    ElectricCurrantFenceSystem::RemoveUndamageableEntitiesFromList(pEVar5,(vector *)&local_20);
    iVar4 = FUN_0419886c(local_20,local_18);
    if (0 < iVar4) {
      if (iVar2 == 0) {
        setState(this,10);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
        goto LAB_0419e040;
      }
      DoAttack(this);
      setState(this,4);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  }
LAB_0419e040:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantElectricCurrant::CancelPlantfood() */

void __thiscall PlantElectricCurrant::CancelPlantfood(PlantElectricCurrant *this)

{
  setState(this,4);
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  return;
}


/* PlantElectricCurrant::onAnimStoppedCallback(std::string const&) */

void __thiscall
PlantElectricCurrant::onAnimStoppedCallback(PlantElectricCurrant *this,string *param_1)

{
  long lVar1;
  
  lVar1 = FUN_05474374(param_1,"attack_start",0);
  if (lVar1 != -1) {
    setState(this,0xb);
    return;
  }
  lVar1 = FUN_05474374(param_1,"attack_loop",0);
  if (lVar1 != -1) {
    setState(this,0xc);
    return;
  }
  lVar1 = FUN_05474374(param_1,"attack_end",0);
  if (lVar1 != -1) {
    setState(this,4);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricCurrant::Initialize() */

void __thiscall PlantElectricCurrant::Initialize(PlantElectricCurrant *this)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  ElectricCurrantFenceSystem *this_00;
  long lVar4;
  Plant *this_01;
  undefined4 uVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x30] = (PlantElectricCurrant)0x0;
  uVar5 = PVZ_T();
  *(undefined4 *)(this + 0x2c) = uVar5;
  *(undefined4 *)(this + 0x28) = 0x3f800000;
  plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar3 + 0x118))();
  lVar4 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar4 + 200) = 4;
  lVar4 = FUN_0419afe4(lVar4);
  uVar5 = FUN_04198784(*(undefined8 *)(this + 0x10));
  FUN_041987ec(lVar4 + 0x3b8,uVar5);
  this_01 = *(Plant **)(this + 0x10);
  iVar2 = FUN_04198754(*(undefined4 *)(this_01 + 0x50));
  if (1 < iVar2) {
    lVar4 = FUN_0419b06c(this_01);
    this_01 = *(Plant **)(this + 0x10);
    *(float *)(this + 0x28) = *(float *)(this + 0x28) + *(float *)(lVar4 + 0x2b8);
  }
  cVar1 = Plant::IsOnBoard(this_01);
  if (cVar1 != '\0') {
    this_00 = Board::GetGameSubSystem<ElectricCurrantFenceSystem>(*(Board **)(gLawnApp + 0x9f0));
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x40),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    FUN_041987e0(this_00 + 0x34,1 < iVar2);
    FUN_041987d8(*(undefined4 *)(this + 0x28),this_00 + 0x30);
    ElectricCurrantFenceSystem::AddNode(this_00,this);
    (**(code **)(*(long *)this + 0x168))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricCurrant::onEndCondition(PlantConditions) */

void __thiscall PlantElectricCurrant::onEndCondition(PlantElectricCurrant *this,int param_2)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  long lVar3;
  ElectricCurrantFenceSystem *this_01;
  
  this_00 = (RtWeakPtr *)(this + 0x40);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (((((bVar1) && (cVar2 = Plant::IsSuspended(*(Plant **)(this + 0x10)), cVar2 == '\0')) &&
       (cVar2 = GameObject::IsDestroyed(*(GameObject **)(this + 0x10)), cVar2 == '\0')) &&
      ((_FUN_0419f30c < *(float *)(*(long *)(this + 0x10) + 0xd8) &&
       (lVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00),
       *(char *)(lVar3 + 0x10) == '\0')))) &&
     (((param_2 - 1U < 2 || ((param_2 == 6 || (param_2 == 0x1d)))) || (param_2 - 0x15U < 2)))) {
    this_01 = (ElectricCurrantFenceSystem *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    ElectricCurrantFenceSystem::AddNode(this_01,this);
    return;
  }
  return;
}


/* PlantElectricCurrant::OnRelocationComplete() */

void __thiscall PlantElectricCurrant::OnRelocationComplete(PlantElectricCurrant *this)

{
  bool bVar1;
  char cVar2;
  ElectricCurrantFenceSystem *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x40));
  if ((bVar1) && (cVar2 = Plant::IsOnBoardGrid(*(Plant **)(this + 0x10)), cVar2 != '\0')) {
    this_00 = (ElectricCurrantFenceSystem *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
    ElectricCurrantFenceSystem::AddNode(this_00,this);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantElectricCurrant::onApplyCondition(PlantConditions) */

void __thiscall PlantElectricCurrant::onApplyCondition(PlantElectricCurrant *this,int param_2)

{
  bool bVar1;
  char cVar2;
  ElectricCurrantFenceSystem *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x40));
  if ((bVar1) &&
     ((((cVar2 = Plant::IsSuspended(*(Plant **)(this + 0x10)), cVar2 != '\0' ||
        (cVar2 = GameObject::IsDestroyed(*(GameObject **)(this + 0x10)), cVar2 != '\0')) ||
       (param_2 == 0x15)) || (*(float *)(*(long *)(this + 0x10) + 0xd8) <= _FUN_0419f6a4)))) {
    this_00 = (ElectricCurrantFenceSystem *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
    ElectricCurrantFenceSystem::RemoveNode(this_00,this);
    return;
  }
  return;
}


/* PlantElectricCurrant::onDestroy() */

void __thiscall PlantElectricCurrant::onDestroy(PlantElectricCurrant *this)

{
  bool bVar1;
  ElectricCurrantFenceSystem *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x40));
  if (bVar1) {
    this_00 = (ElectricCurrantFenceSystem *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
    ElectricCurrantFenceSystem::RemoveNode(this_00,this);
    RemovePlantElectrifiedGlow(this);
  }
  PlantFramework::onDestroy((PlantFramework *)this);
  return;
}


/* PlantElectricCurrant::onSleeped(bool) */

void __thiscall PlantElectricCurrant::onSleeped(PlantElectricCurrant *this,bool param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  ElectricCurrantFenceSystem *pEVar2;
  
  this_00 = (RtWeakPtr *)(this + 0x40);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (!bVar1) {
    return;
  }
  if (!param_1) {
    pEVar2 = (ElectricCurrantFenceSystem *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    ElectricCurrantFenceSystem::AddNode(pEVar2,this);
    return;
  }
  pEVar2 = (ElectricCurrantFenceSystem *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  ElectricCurrantFenceSystem::RemoveNode(pEVar2,this);
  return;
}


/* PlantElectricCurrant::OnRelocationBegun() */

void __thiscall PlantElectricCurrant::OnRelocationBegun(PlantElectricCurrant *this)

{
  bool bVar1;
  ElectricCurrantFenceSystem *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x40));
  if (!bVar1) {
    return;
  }
  this_00 = (ElectricCurrantFenceSystem *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40))
  ;
  ElectricCurrantFenceSystem::RemoveOrphanedFences(this_00);
  RemovePlantElectrifiedGlow(this);
  return;
}

