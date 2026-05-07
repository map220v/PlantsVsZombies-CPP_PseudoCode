// Class: GridItemZombieMirrorQueenPoisonApplePuree


/* GridItemZombieMirrorQueenPoisonApplePuree::CalcRenderOrder() const */

void __thiscall
GridItemZombieMirrorQueenPoisonApplePuree::CalcRenderOrder
          (GridItemZombieMirrorQueenPoisonApplePuree *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = SharkMinion::getRow((SharkMinion *)this);
  uVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x64960,uVar1,uVar2);
  return;
}


/* non-virtual thunk to GridItemZombieMirrorQueenPoisonApplePuree::CalcRenderOrder() const */

void __thiscall
GridItemZombieMirrorQueenPoisonApplePuree::CalcRenderOrder
          (GridItemZombieMirrorQueenPoisonApplePuree *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenPoisonApplePuree::StaticClassInit() */

void GridItemZombieMirrorQueenPoisonApplePuree::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemZombieMirrorQueenPoisonApplePuree");
    (*pcVar2)(plVar1,asStack_10,FUN_04f0d314,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieMirrorQueenPoisonApplePuree::StaticGetClass() */

long * GridItemZombieMirrorQueenPoisonApplePuree::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombieMirrorQueenPoisonApplePuree",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemZombieMirrorQueenPoisonApplePuree::GetClass() const */

long * GridItemZombieMirrorQueenPoisonApplePuree::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemZombieMirrorQueenPoisonApplePuree",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenPoisonApplePuree::stopReleasingPoison() */

void __thiscall
GridItemZombieMirrorQueenPoisonApplePuree::stopReleasingPoison
          (GridItemZombieMirrorQueenPoisonApplePuree *this)

{
  string *psVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)PlayerInfo::GetPlantNewAvatarPiecesInfo((PlayerInfo *)this);
  std::string::string(asStack_10,"poison_mist");
  GameObjectDictionary::Remove(psVar1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieMirrorQueenPoisonApplePuree::isValidHypnotizeTarget(Plant*) */

undefined8 __thiscall
GridItemZombieMirrorQueenPoisonApplePuree::isValidHypnotizeTarget
          (GridItemZombieMirrorQueenPoisonApplePuree *this,Plant *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 != (Plant *)0x0) && (cVar1 = FUN_04f05d2c(param_1[0x278]), cVar1 == '\0')) {
    if (*(code **)(*(long *)param_1 + 0x1f8) == Plant::IsInPlantFoodState) {
      cVar1 = Plant::IsInPlantFoodState(param_1);
    }
    else {
      cVar1 = (**(code **)(*(long *)param_1 + 0x1f8))();
    }
    if (((cVar1 == '\0') && (cVar1 = Plant::IsInvincible(param_1,false), cVar1 == '\0')) &&
       (cVar1 = Plant::CanBeTargeted(param_1), cVar1 != '\0')) {
      uVar2 = Plant::CanBeTargetedBy((BoardEntity *)param_1);
      return uVar2;
    }
  }
  return 0;
}


/* GridItemZombieMirrorQueenPoisonApplePuree::cleanTargetPoison() */

void __thiscall
GridItemZombieMirrorQueenPoisonApplePuree::cleanTargetPoison
          (GridItemZombieMirrorQueenPoisonApplePuree *this)

{
  bool bVar1;
  long *plVar2;
  Plant *this_00;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1b0));
  if (bVar1) {
    this_00 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
    Plant::EndLossLife(this_00);
    return;
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1b8));
  if (!bVar1) {
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1c0));
    if (bVar1) {
      plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
      (**(code **)(*plVar2 + 0x250))();
    }
    return;
  }
  plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  (**(code **)(*plVar2 + 0x460))();
  return;
}


/* GridItemZombieMirrorQueenPoisonApplePuree::KillGridItem() */

void __thiscall
GridItemZombieMirrorQueenPoisonApplePuree::KillGridItem
          (GridItemZombieMirrorQueenPoisonApplePuree *this)

{
  RtWeakPtr *pRVar1;
  bool bVar2;
  long *plVar3;
  Plant *pPVar4;
  
  pRVar1 = (RtWeakPtr *)(this + 0x1b0);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
  if (bVar2) {
    pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    Plant::SetIsSleepping(pPVar4,false,-1.0);
    pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    Plant::EndLossLife(pPVar4);
    stopReleasingPoison(this);
    GridItem::KillGridItem((GridItem *)this);
    return;
  }
  pRVar1 = (RtWeakPtr *)(this + 0x1b8);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
  if (!bVar2) {
    pRVar1 = (RtWeakPtr *)(this + 0x1c0);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
    if (bVar2) {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      (**(code **)(*plVar3 + 600))(0xbf800000,plVar3,0);
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      (**(code **)(*plVar3 + 0x250))();
      stopReleasingPoison(this);
    }
    GridItem::KillGridItem((GridItem *)this);
    return;
  }
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1)
  ;
  (**(code **)(*plVar3 + 0x468))(0xbf800000,plVar3,0);
  plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1)
  ;
  (**(code **)(*plVar3 + 0x460))();
  stopReleasingPoison(this);
  GridItem::KillGridItem((GridItem *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenPoisonApplePuree::OnCleanPoison(int, int, bool) */

void GridItemZombieMirrorQueenPoisonApplePuree::OnCleanPoison(int param_1,int param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BoardEntity *this;
  Point aPStack_18 [8];
  Point aPStack_10 [8];
  long local_8;
  
  this = (BoardEntity *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_18,param_2,(uint)param_3);
  iVar2 = BoardEntity::CalcColumnPosition(this);
  iVar3 = SharkMinion::getRow((SharkMinion *)this);
  Sexy::Point::Point(aPStack_10,iVar2,iVar3);
  cVar1 = Sexy::TPoint<int>::operator==((TPoint<int> *)aPStack_10,(TPoint *)aPStack_18);
  if (cVar1 != '\0') {
    stopReleasingPoison((GridItemZombieMirrorQueenPoisonApplePuree *)this);
    cleanTargetPoison((GridItemZombieMirrorQueenPoisonApplePuree *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieMirrorQueenPoisonApplePuree::poisonTarget() */

void __thiscall
GridItemZombieMirrorQueenPoisonApplePuree::poisonTarget
          (GridItemZombieMirrorQueenPoisonApplePuree *this)

{
  RtWeakPtr *pRVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  Plant *pPVar5;
  Plant *this_00;
  long lVar6;
  long *plVar7;
  GridItem *this_01;
  code *pcVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  
  pRVar1 = (RtWeakPtr *)(this + 0x1b0);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
  if (bVar2) {
    pPVar5 = (Plant *)Sexy::RtWeakPtr<Plant>::GetPtr((RtWeakPtr<Plant> *)pRVar1);
    cVar3 = isValidHypnotizeTarget(this,pPVar5);
    if (cVar3 != '\0') {
      pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      Plant::SetIsSleepping(pPVar5,true,-1.0);
      pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      fVar11 = (float)PVZ_EOT();
      fVar10 = *(float *)(this + 0x1ac);
      this_00 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      iVar4 = Plant::GetMaxHitpoints(this_00);
      Plant::StartLossLife(pPVar5,fVar11,fVar10 / (float)iVar4);
      return;
    }
  }
  pRVar1 = (RtWeakPtr *)(this + 0x1b8);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
  if (!bVar2) {
    pRVar1 = (RtWeakPtr *)(this + 0x1c0);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
    if (!bVar2) {
      return;
    }
    plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    (**(code **)(*plVar7 + 600))(0xbf800000,plVar7,1);
    plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    pcVar8 = *(code **)(*plVar7 + 0x248);
    uVar9 = PVZ_EOT();
    fVar11 = *(float *)(this + 0x1ac);
    this_01 = (GridItem *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    if (*(code **)(*(long *)this_01 + 0x1e0) == GridItem::GetMaxHitpoints) {
      fVar10 = (float)GridItem::GetMaxHitpoints(this_01);
    }
    else {
      fVar10 = (float)(**(code **)(*(long *)this_01 + 0x1e0))();
    }
    (*pcVar8)(uVar9,fVar11 / fVar10,plVar7);
    return;
  }
  plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1)
  ;
  (**(code **)(*plVar7 + 0x468))(0xbf800000,plVar7,1);
  plVar7 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1)
  ;
  pcVar8 = *(code **)(*plVar7 + 0x458);
  uVar9 = PVZ_EOT();
  fVar10 = *(float *)(this + 0x1ac);
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
  fVar11 = (float)FUN_04f05d48(*(undefined4 *)(lVar6 + 0x284));
  (*pcVar8)(uVar9,fVar10 / fVar11,plVar7);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenPoisonApplePuree::releasePoison() */

void __thiscall
GridItemZombieMirrorQueenPoisonApplePuree::releasePoison
          (GridItemZombieMirrorQueenPoisonApplePuree *this)

{
  GameObjectDictionary *this_00;
  AttachedEffect *this_01;
  ResourceInfo *pRVar1;
  code *pcVar2;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (GameObjectDictionary *)PlayerInfo::GetPlantNewAvatarPiecesInfo((PlayerInfo *)this);
  std::string::string(asStack_18,"pison_mist");
  this_01 = (AttachedEffect *)GameObjectDictionary::FindOrCreate(this_00,asStack_18);
  std::string::~string(asStack_18);
  nop();
  std::string::string(asStack_20,"POPANIM_EFFECTS_ZOMBIE_RENAI_PERFUMER_POISON");
  GetPAMByName(asStack_20);
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  AttachedEffect::InitializeWithAnimation(this_01,(PopAnim *)pRVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_18,"buff");
  AttachedEffect::PlayAnimLooped(this_01,asStack_18,2);
  std::string::~string(asStack_18);
  nop();
  pcVar2 = *(code **)(*(long *)this_01 + 0x18);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,-30.0,0.0);
  (*pcVar2)(this_01,this,asStack_18,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenPoisonApplePuree::setValues(Sexy::RtWeakPtr<Plant>, float, float) */

void __thiscall
GridItemZombieMirrorQueenPoisonApplePuree::setValues
          (float param_1,undefined4 param_2,GridItemZombieMirrorQueenPoisonApplePuree *this,
          RtWeakPtr *param_4)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 uVar1;
  PopAnimRig *pPVar2;
  code *pcVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1b0),param_4);
  fVar4 = (float)PVZ_T();
  pcVar3 = *(code **)(*(long *)this + 0x78);
  *(undefined4 *)(this + 0x1ac) = param_2;
  *(float *)(this + 0x1a8) = fVar4 + param_1;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  uVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(this_00);
  (*pcVar3)(this,uVar1);
  (**(code **)(*(long *)this + 0x80))(this,0);
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  releasePoison(this);
  poisonTarget(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenPoisonApplePuree::setValuesZombie(Sexy::RtWeakPtr<Zombie>, float, float)
    */

void __thiscall
GridItemZombieMirrorQueenPoisonApplePuree::setValuesZombie
          (float param_1,undefined4 param_2,GridItemZombieMirrorQueenPoisonApplePuree *this,
          RtWeakPtr *param_4)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 uVar1;
  PopAnimRig *pPVar2;
  code *pcVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1b8),param_4);
  fVar4 = (float)PVZ_T();
  pcVar3 = *(code **)(*(long *)this + 0x78);
  *(undefined4 *)(this + 0x1ac) = param_2;
  *(float *)(this + 0x1a8) = fVar4 + param_1;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  uVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(this_00);
  (*pcVar3)(this,uVar1);
  (**(code **)(*(long *)this + 0x80))(this,0);
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  releasePoison(this);
  poisonTarget(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemZombieMirrorQueenPoisonApplePuree::setValuesGridItem(Sexy::RtWeakPtr<GridItem>, float,
   float) */

void __thiscall
GridItemZombieMirrorQueenPoisonApplePuree::setValuesGridItem
          (float param_1,undefined4 param_2,GridItemZombieMirrorQueenPoisonApplePuree *this,
          RtWeakPtr *param_4)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 uVar1;
  PopAnimRig *pPVar2;
  code *pcVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1c0),param_4);
  fVar4 = (float)PVZ_T();
  pcVar3 = *(code **)(*(long *)this + 0x78);
  *(undefined4 *)(this + 0x1ac) = param_2;
  *(float *)(this + 0x1a8) = fVar4 + param_1;
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
  uVar1 = std::
          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
          ::_M_leftmost(this_00);
  (*pcVar3)(this,uVar1);
  (**(code **)(*(long *)this + 0x80))(this,0);
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_48);
  std::string::string(asStack_40,"idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar2,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
  releasePoison(this);
  poisonTarget(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemZombieMirrorQueenPoisonApplePuree::GridItemZombieMirrorQueenPoisonApplePuree() */

void __thiscall
GridItemZombieMirrorQueenPoisonApplePuree::GridItemZombieMirrorQueenPoisonApplePuree
          (GridItemZombieMirrorQueenPoisonApplePuree *this)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_06a0dd50;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombieMirrorQueenPoisonApplePuree_06a0e008;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a8) = uVar2;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1b8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c0));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCleanPoison);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,int,bool,Sexy::CBMemberTranslatorX<GridItemZombieMirrorQueenPoisonApplePuree,void(GridItemZombieMirrorQueenPoisonApplePuree::*)(int,int,bool)>>
            ((MessageRouter *)puVar1,Message::CleanPoison,&local_40);
  return;
}


/* GridItemZombieMirrorQueenPoisonApplePuree::StaticNew() */

GridItemZombieMirrorQueenPoisonApplePuree *
GridItemZombieMirrorQueenPoisonApplePuree::StaticNew(void)

{
  GridItemZombieMirrorQueenPoisonApplePuree *this;
  
  this = ::operator_new(0x1c8);
  GridItemZombieMirrorQueenPoisonApplePuree(this);
  return this;
}


/* GridItemZombieMirrorQueenPoisonApplePuree::~GridItemZombieMirrorQueenPoisonApplePuree() */

void __thiscall
GridItemZombieMirrorQueenPoisonApplePuree::~GridItemZombieMirrorQueenPoisonApplePuree
          (GridItemZombieMirrorQueenPoisonApplePuree *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  *(undefined ***)this = &PTR_GetClass_06a0dd50;
  *(undefined ***)(this + 0x10) = &PTR__GridItemZombieMirrorQueenPoisonApplePuree_06a0e008;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,OnCleanPoison);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Unsubscribe<int,int,bool,Sexy::CBMemberTranslatorX<GridItemZombieMirrorQueenPoisonApplePuree,void(GridItemZombieMirrorQueenPoisonApplePuree::*)(int,int,bool)>>
            ((MessageRouter *)puVar1,Message::CleanPoison,&local_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1b0));
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to
   GridItemZombieMirrorQueenPoisonApplePuree::~GridItemZombieMirrorQueenPoisonApplePuree() */

void __thiscall
GridItemZombieMirrorQueenPoisonApplePuree::~GridItemZombieMirrorQueenPoisonApplePuree
          (GridItemZombieMirrorQueenPoisonApplePuree *this)

{
  ~GridItemZombieMirrorQueenPoisonApplePuree(this + -0x10);
  return;
}


/* GridItemZombieMirrorQueenPoisonApplePuree::~GridItemZombieMirrorQueenPoisonApplePuree() */

void __thiscall
GridItemZombieMirrorQueenPoisonApplePuree::~GridItemZombieMirrorQueenPoisonApplePuree
          (GridItemZombieMirrorQueenPoisonApplePuree *this)

{
  ~GridItemZombieMirrorQueenPoisonApplePuree(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to
   GridItemZombieMirrorQueenPoisonApplePuree::~GridItemZombieMirrorQueenPoisonApplePuree() */

void __thiscall
GridItemZombieMirrorQueenPoisonApplePuree::~GridItemZombieMirrorQueenPoisonApplePuree
          (GridItemZombieMirrorQueenPoisonApplePuree *this)

{
  ~GridItemZombieMirrorQueenPoisonApplePuree(this + -0x10);
  return;
}


/* GridItemZombieMirrorQueenPoisonApplePuree::onGridItemInitialize() */

void __thiscall
GridItemZombieMirrorQueenPoisonApplePuree::onGridItemInitialize
          (GridItemZombieMirrorQueenPoisonApplePuree *this)

{
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  (**(code **)(*(long *)this + 0x80))(this,1);
  return;
}


/* GridItemZombieMirrorQueenPoisonApplePuree::onUpdate() */

void __thiscall
GridItemZombieMirrorQueenPoisonApplePuree::onUpdate(GridItemZombieMirrorQueenPoisonApplePuree *this)

{
  float fVar1;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  fVar1 = (float)PVZ_T();
  if (*(float *)(this + 0x1a8) < fVar1) {
    (**(code **)(*(long *)this + 0x230))(this);
  }
  return;
}

