// Class: PlantEscapeRoot


/* PlantEscapeRoot::CanBeShoveled() */

byte __thiscall PlantEscapeRoot::CanBeShoveled(PlantEscapeRoot *this)

{
  byte bVar1;
  
  bVar1 = (**(code **)(*(long *)this + 0x348))();
  return bVar1 ^ 1;
}


/* PlantEscapeRoot::shouldExplodeBecauseShovedOffBoard(int) */

bool __thiscall
PlantEscapeRoot::shouldExplodeBecauseShovedOffBoard(PlantEscapeRoot *this,int param_1)

{
  return 0 < param_1 && *(int *)(*(long *)(this + 0x10) + 200) == 0xc;
}


/* PlantEscapeRoot::onApplyCondition(PlantConditions) */

void __thiscall PlantEscapeRoot::onApplyCondition(PlantEscapeRoot *this,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = Plant::IsSwapping(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    switch(param_2) {
    case 1:
      Plant::EndCondition(*(Plant **)(this + 0x10),1);
      return;
    case 2:
      Plant::EndCondition(*(Plant **)(this + 0x10),2);
      return;
    case 6:
      Plant::EndCondition(*(Plant **)(this + 0x10),6);
      return;
    case 0x1d:
      Plant::EndCondition(*(Plant **)(this + 0x10),0x1d);
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::GetFireOriginOffset(PlantAction const&, float) */

void PlantEscapeRoot::GetFireOriginOffset(PlantAction *param_1,float param_2)

{
  PlantAction *in_x1;
  undefined4 local_28 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_28[0] = PlantFramework::GetFireOriginOffset((PlantFramework *)param_1,in_x1,param_2);
  Sexy::SexyVector3::operator+((SexyVector3 *)local_28,(SexyVector3 *)(param_1 + 0x34));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::StaticClassInit() */

void PlantEscapeRoot::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantEscapeRoot");
    (*pcVar2)(plVar1,asStack_10,FUN_041a5310,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEscapeRoot::StaticGetClass() */

long * PlantEscapeRoot::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantEscapeRoot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantEscapeRoot::GetClass() const */

long * PlantEscapeRoot::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantEscapeRoot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantEscapeRoot::calcContextForAttackType(AttackPlantType) */

undefined4 __thiscall PlantEscapeRoot::calcContextForAttackType(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if (param_2 - 1U < 3) {
    uVar1 = *(undefined4 *)(&DAT_05753300 + (ulong)(param_2 - 1U) * 4);
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::calcPlantfoodOffset(Sexy::Point) */

void __thiscall PlantEscapeRoot::calcPlantfoodOffset(PlantEscapeRoot *this,int *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = BoardTransforms::GridToBoardSpaceX(*param_2);
  iVar5 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar5 = BoardTransforms::GridToBoardSpaceX(iVar5);
  iVar6 = BoardTransforms::GridToBoardSpaceY(param_2[1]);
  iVar7 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  iVar7 = BoardTransforms::GridToBoardSpaceY(iVar7);
  EATextSquish::Vec3::Vec3((Vec3 *)&local_28,(float)(iVar4 - iVar5),(float)(iVar6 - iVar7),0.0);
  local_18 = local_28;
  uVar2 = local_18;
  local_10 = local_20;
  local_18._0_4_ = (undefined4)local_28;
  uVar1 = (undefined4)local_18;
  local_18._4_4_ = (undefined4)((ulong)local_28 >> 0x20);
  uVar3 = local_18._4_4_;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
  local_18 = uVar2;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,uVar3,local_20);
}


/* PlantEscapeRoot::calcAttackType(std::string) */

undefined4 __thiscall PlantEscapeRoot::calcAttackType(undefined8 param_1,string *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = std::operator==(param_2,"potatomine");
  uVar2 = 0;
  if (!bVar1) {
    bVar1 = std::operator==(param_2,"primalpotatomine");
    uVar2 = 1;
    if (!bVar1) {
      bVar1 = std::operator==(param_2,"cherrybomb");
      uVar2 = 2;
      if (!bVar1) {
        bVar1 = std::operator==(param_2,"grapeshot");
        uVar2 = 3;
        if (!bVar1) {
          uVar2 = 0;
        }
      }
    }
  }
  return uVar2;
}


/* PlantEscapeRoot::PlantEscapeRoot() */

void __thiscall PlantEscapeRoot::PlantEscapeRoot(PlantEscapeRoot *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067fde50;
  DVec3::DVec3((DVec3 *)(this + 0x34));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x48));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  return;
}


/* PlantEscapeRoot::StaticNew() */

PlantEscapeRoot * PlantEscapeRoot::StaticNew(void)

{
  PlantEscapeRoot *this;
  
  this = ::operator_new(0x60);
  PlantEscapeRoot(this);
  return this;
}


/* PlantEscapeRoot::~PlantEscapeRoot() */

void __thiscall PlantEscapeRoot::~PlantEscapeRoot(PlantEscapeRoot *this)

{
  *(undefined ***)this = &PTR_GetClass_067fde50;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantEscapeRoot::~PlantEscapeRoot() */

void __thiscall PlantEscapeRoot::~PlantEscapeRoot(PlantEscapeRoot *this)

{
  ~PlantEscapeRoot(this);
  AK::FreeHook(this);
  return;
}


/* PlantEscapeRoot::canBeSelected() */

bool __thiscall PlantEscapeRoot::canBeSelected(PlantEscapeRoot *this)

{
  bool bVar1;
  char cVar2;
  float fVar3;
  
  if ((((this[0x28] != (PlantEscapeRoot)0x0) ||
       (cVar2 = Plant::IsSwapping(*(Plant **)(this + 0x10)), cVar2 != '\0')) ||
      (cVar2 = FUN_041a0694(*(undefined1 *)(*(long *)(this + 0x10) + 0x278)), cVar2 != '\0')) ||
     (fVar3 = (float)PVZ_T(), fVar3 < *(float *)(this + 0x2c))) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(*(long *)(this + 0x10) + 200) != 0xd;
  }
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void __thiscall PlantEscapeRoot::TakeSmashAttack(PlantEscapeRoot *this,RtWeakPtrBase *param_2)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  PlantAnimRig *pPVar4;
  code *pcVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = Plant::IsInvincible(*(Plant **)(this + 0x10),false);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(*(Plant **)(this + 0x10) + 200);
    if (iVar1 - 10U < 2) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,param_2);
      PlantTupistraStalker::TakeSmashAttack(this,aRStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    }
    else if ((iVar1 == 0xc) && (cVar2 = Plant::IsSwapping(*(Plant **)(this + 0x10)), cVar2 == '\0'))
    {
      plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      pcVar5 = *(code **)(*plVar3 + 0x130);
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
      (*pcVar5)(plVar3,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                  *)aRStack_50);
      pPVar4 = (PlantAnimRig *)
               UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      PlantAnimRig::SetState(pPVar4,0xe);
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xd;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEscapeRoot::deselect() */

void __thiscall PlantEscapeRoot::deselect(PlantEscapeRoot *this)

{
  RtObject *this_00;
  PlantAnimRig_EscapeRoot *pPVar1;
  
  this[0x28] = (PlantEscapeRoot)0x0;
  this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  pPVar1 = Sexy::RtObject::Cast<PlantAnimRig_EscapeRoot>(this_00);
  FUN_041a06d4(pPVar1 + 0x3b9,0);
  (**(code **)(*(long *)pPVar1 + 0x118))(pPVar1);
  return;
}


/* PlantEscapeRoot::onCursorDestroyed(BaseCursor*) */

void __thiscall PlantEscapeRoot::onCursorDestroyed(PlantEscapeRoot *this,BaseCursor *param_1)

{
  char cVar1;
  
  if (*(BaseCursor **)(this + 0x50) != param_1) {
    return;
  }
  if (((this[0x28] == (PlantEscapeRoot)0x0) ||
      (cVar1 = (**(code **)(*(long *)this + 0x180))(), cVar1 != '\0')) ||
     (cVar1 = Plant::IsSwapping(*(Plant **)(this + 0x10)), cVar1 != '\0')) {
    *(undefined8 *)(this + 0x50) = 0;
  }
  else {
    deselect(this);
    *(undefined8 *)(this + 0x50) = 0;
  }
  return;
}


/* PlantEscapeRoot::resetState() */

void __thiscall PlantEscapeRoot::resetState(PlantEscapeRoot *this)

{
  Plant *pPVar1;
  
  pPVar1 = *(Plant **)(this + 0x10);
  *(undefined4 *)(pPVar1 + 200) = 0xc;
  Plant::EndCondition(pPVar1,0x15);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x48));
  deselect(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::CancelPlantfood() */

void __thiscall PlantEscapeRoot::CancelPlantfood(PlantEscapeRoot *this)

{
  PlantAnimRig_EscapeRoot *pPVar1;
  long lVar2;
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  lVar2 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar2 + 200) = 0xb;
  pPVar1 = (PlantAnimRig_EscapeRoot *)FUN_041a2914(lVar2);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
  PlantAnimRig_EscapeRoot::PlayEmergeFromGround(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::playExtraCherrybombAnim() */

void __thiscall PlantEscapeRoot::playExtraCherrybombAnim(PlantEscapeRoot *this)

{
  float *pfVar1;
  Board *this_00;
  Effect_PopAnim *this_01;
  PopAnim *pPVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  string asStack_28 [16];
  undefined4 local_18;
  float local_14;
  float local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar3 = *pfVar1;
  fVar5 = pfVar1[1];
  this_00 = *(Board **)(gLawnApp + 0x9f0);
  fVar4 = 0.0;
  if (this_00[0x119] != (Board)0x0) {
    fVar4 = (float)Board::calculateRoofOffsetZ((float)(int)(fVar3 - 130.0));
    this_00 = *(Board **)(gLawnApp + 0x9f0);
  }
  this_01 = Board::AddEffect<Effect_PopAnim>(this_00);
  std::string::string(asStack_28,"POPANIM_EFFECTS_ESCAPEROOT_EXPLOSION_CHERRYBOMB_REAR");
  GetPAMByName(asStack_28);
  pPVar2 = (PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(this_01,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_28);
  nop();
  (**(code **)(*(long *)this_01 + 0x80))(0x3fc00000,this_01);
  fVar5 = (float)(int)(fVar5 - 290.0);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_28,(float)(int)(fVar3 - 130.0),fVar5,fVar4);
  local_18 = Sexy::SexyVector3::operator+((SexyVector3 *)asStack_28,(SexyVector3 *)(this + 0x34));
  local_14 = fVar5;
  local_10 = fVar4;
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)&local_18,300000)
  ;
  std::string::string((string *)&local_18,"animation");
  Effect_PopAnim::PlaySingleAnimation(this_01,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::spawnGrapes() */

void PlantEscapeRoot::spawnGrapes(void)

{
  undefined4 uVar1;
  long in_x0;
  Projectile *this;
  SexyVector3 *pSVar2;
  GrapeshotProjectile *this_00;
  int iVar3;
  float fVar4;
  double dVar5;
  undefined4 local_40 [4];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  dVar5 = 0.0;
  local_8 = ___stack_chk_guard;
  iVar3 = 8;
  uVar1 = *(undefined4 *)(*(long *)(in_x0 + 0x10) + 0x150);
  *(undefined4 *)(*(long *)(in_x0 + 0x10) + 0x150) = 1;
  do {
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    fVar4 = (float)dVar5;
    dVar5 = dVar5 + 0.7853981852531433;
    Sexy::SexyTransform2D::RotateRad(aSStack_30,fVar4);
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_40);
    this = (Projectile *)PlantFramework::Fire();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_40);
    pSVar2 = (SexyVector3 *)Projectile::GetVelocity(this);
    local_40[0] = Sexy::SexyMatrix3::operator*((SexyMatrix3 *)aSStack_30,pSVar2);
    Projectile::SetVelocity(this,(SexyVector3 *)local_40);
    this_00 = Sexy::RtObject::Cast<GrapeshotProjectile>((RtObject *)this);
    GrapeshotProjectile::SetProjectileAnimation(this_00);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(*(long *)(in_x0 + 0x10) + 0x150) = uVar1;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::SwapPlantAt(Sexy::Point) */

void __thiscall PlantEscapeRoot::SwapPlantAt(PlantEscapeRoot *this,uint *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  Plant *this_00;
  long lVar5;
  long lVar6;
  PlantAnimRig_EscapeRoot *pPVar7;
  Board *pBVar8;
  undefined8 uVar9;
  float fVar10;
  ulong uVar11;
  undefined4 local_60;
  undefined4 local_5c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = ___stack_chk_guard;
  cVar3 = Plant::IsSwapping(*(Plant **)(this + 0x10));
  if ((cVar3 == '\0') && (*(int *)(*(long *)(this + 0x10) + 200) != 3)) {
    BoardTransforms::BoardSpaceToGrid((BoardTransforms *)(ulong)*param_2,param_2[1],(int)lVar5);
    this_00 = (Plant *)Board::GetPlantAt(*(Board **)(gLawnApp + 0x9f0),&local_60,1);
    if ((this_00 != (Plant *)0x0) && (*(Plant **)(this + 0x10) != this_00)) {
      uVar9 = *(undefined8 *)(gLawnApp + 0x9f0);
      Plant::GetType();
      iVar4 = Board::GetCanPlantAtReason(uVar9,&local_60,aRStack_58,1,0xffffffff);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
      if (iVar4 == 0) {
        lVar5 = FUN_041a3664(*(undefined8 *)(this + 0x10));
        Plant::GetType();
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_58);
        cVar3 = StringRestrictionSet::IsIncluded
                          ((StringRestrictionSet *)(lVar5 + 0x2e0),(string *)(lVar6 + 8));
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
        if (cVar3 == '\0') {
          if (*(code **)(*(long *)this_00 + 0x1f8) == Plant::IsInPlantFoodState) {
            cVar3 = Plant::IsInPlantFoodState(this_00);
            uVar1 = local_60;
            uVar2 = local_5c;
          }
          else {
            cVar3 = (**(code **)(*(long *)this_00 + 0x1f8))();
            uVar1 = local_60;
            uVar2 = local_5c;
          }
          if (cVar3 == '\0') {
            local_60 = uVar1;
            local_5c = uVar2;
            cVar3 = Plant::IsWatering(this_00);
            if (cVar3 == '\0') {
              cVar3 = Plant::HasCondition(this_00,2);
              if ((((cVar3 == '\0') && (cVar3 = Plant::HasCondition(this_00,1), cVar3 == '\0')) &&
                  (cVar3 = Plant::HasCondition(this_00,0x18), cVar3 == '\0')) &&
                 ((cVar3 = FUN_041a0694(this_00[0x278]), cVar3 == '\0' &&
                  (cVar3 = Plant::HasCondition(this_00,0x1d), cVar3 == '\0')))) {
                cVar3 = Plant::IsSwapping(this_00);
                if ((cVar3 == '\0') &&
                   (cVar3 = FUN_041a0698(*(undefined4 *)(this_00 + 0x1d0)), cVar3 == '\0')) {
                  lVar5 = *(long *)(this + 0x10);
                  cVar3 = FUN_041a0698(*(undefined4 *)(lVar5 + 0x1d0));
                  if (cVar3 == '\0') {
                    uVar11 = PVZ_EOT();
                    Plant::ApplyCondition(uVar11,0,lVar5,0x15);
                    pPVar7 = (PlantAnimRig_EscapeRoot *)FUN_041a2914(*(undefined8 *)(this + 0x10));
                    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                              (aRStack_50);
                    PlantAnimRig_EscapeRoot::PlayBurrow(pPVar7,aRStack_50);
                    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    ::~RtReflectionDelegate
                              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                                *)aRStack_50);
                    ToolPacketData::GetProps();
                    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
                              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x48),
                               (RtWeakPtrBase *)aRStack_58);
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
                    uVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48));
                    Plant::ApplyCondition(uVar11 & 0xffffffff,0,uVar9,0x15);
                    fVar10 = (float)PVZ_T();
                    lVar5 = FUN_041a3664(*(undefined8 *)(this + 0x10));
                    *(float *)(this + 0x2c) = fVar10 + *(float *)(lVar5 + 700);
                  }
                }
              }
              else {
                pBVar8 = *(Board **)(gLawnApp + 0x9f0);
                Plant::GetType();
                Board::GiveAdvice(pBVar8,local_60,local_5c,aRStack_58,0x10);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
              }
            }
            else {
              pBVar8 = *(Board **)(gLawnApp + 0x9f0);
              Plant::GetType();
              Board::GiveAdvice(pBVar8,local_60,local_5c,aRStack_58,0x11);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
            }
          }
          else {
            pBVar8 = *(Board **)(gLawnApp + 0x9f0);
            Plant::GetType();
            Board::GiveAdvice(pBVar8,uVar1,uVar2,aRStack_58,0xf);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
          }
        }
        else {
          pBVar8 = *(Board **)(gLawnApp + 0x9f0);
          Plant::GetType();
          Board::GiveAdvice(pBVar8,local_60,local_5c,aRStack_58,0xe);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
        }
      }
      else {
        pBVar8 = *(Board **)(gLawnApp + 0x9f0);
        Plant::GetType();
        Board::GiveAdvice(pBVar8,local_60,local_5c,aRStack_58,0xd);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
      }
    }
  }
  else {
    deselect(this);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::registerForEvents() */

void __thiscall PlantEscapeRoot::registerForEvents(PlantEscapeRoot *this)

{
  undefined *puVar1;
  Board *pBVar2;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_88 [8];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar2 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTouchEvent);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<PlantEscapeRoot,bool(PlantEscapeRoot::*)(Sexy::Touch_const&)>
            (aDStack_68,(CBMemberTranslatorX *)&local_80);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_88,(RtWeakPtrBase *)aRStack_90);
  Sexy::Delegate0::Delegate0(aDStack_38,(DummyInit *)0x0);
  Board::RegisterTouchGameplayObject(pBVar2,aDStack_68,6,aRStack_88,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_88);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onCursorDestroyed);
  local_b0 = local_80;
  uStack_a8 = uStack_78;
  local_a0 = local_70;
  MessageRouter::
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<PlantEscapeRoot,void(PlantEscapeRoot::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_b0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::RevealSwappedPlant() */

void __thiscall PlantEscapeRoot::RevealSwappedPlant(PlantEscapeRoot *this)

{
  PlantAnimRig_EscapeRoot *pPVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlantAnimRig_EscapeRoot *)FUN_041a2914(*(undefined8 *)(this + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_EscapeRoot::RevealPlant(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::localPlantfoodAttack() */

void __thiscall PlantEscapeRoot::localPlantfoodAttack(PlantEscapeRoot *this)

{
  PlantAnimRig_EscapeRoot *pPVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlantAnimRig_EscapeRoot *)FUN_041a2914(*(undefined8 *)(this + 0x10));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_EscapeRoot::PlayEmergeFromGround(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEscapeRoot::select() */

char __thiscall PlantEscapeRoot::select(PlantEscapeRoot *this)

{
  char cVar1;
  RtObject *this_00;
  PlantAnimRig_EscapeRoot *this_01;
  
  cVar1 = canBeSelected(this);
  if (cVar1 != '\0') {
    this_00 = (RtObject *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    this_01 = Sexy::RtObject::Cast<PlantAnimRig_EscapeRoot>(this_00);
    PlantAnimRig_EscapeRoot::PlaySelected(this_01);
    this[0x28] = (PlantEscapeRoot)0x1;
  }
  return cVar1;
}


/* PlantEscapeRoot::onTouchEvent(Sexy::Touch const&) */

char __thiscall PlantEscapeRoot::onTouchEvent(PlantEscapeRoot *this,Touch *param_1)

{
  char cVar1;
  TRect<int> *this_00;
  EscapeRootCursor *this_01;
  Board *this_02;
  float fVar2;
  float fVar3;
  
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if ((cVar1 == '\0') &&
     (cVar1 = Plant::HasCondition(*(undefined8 *)(this + 0x10),0x11), cVar1 == '\0')) {
    this_02 = *(Board **)(gLawnApp + 0x9f0);
    cVar1 = Board::IsPlaying(this_02);
    if ((cVar1 != '\0') &&
       ((cVar1 = FUN_041a06ec(this_02[0x887]), cVar1 != '\0' &&
        (cVar1 = (**(code **)(*(long *)this + 0x180))(this), cVar1 == '\0')))) {
      fVar2 = (float)FUN_041a0c10((float)*(int *)(param_1 + 0x10));
      fVar3 = (float)FUN_041a0c10((float)*(int *)(param_1 + 0x14));
      this_00 = (TRect<int> *)
                (**(code **)(**(long **)(this + 0x10) + 0x178))(*(long **)(this + 0x10));
      cVar1 = Sexy::TRect<int>::Contains(this_00,(int)fVar2,(int)fVar3);
      if ((cVar1 != '\0') &&
         ((*(int *)(param_1 + 0x30) == 0 &&
          (((*(BaseCursor **)(this + 0x50) == (BaseCursor *)0x0 ||
            (cVar1 = BaseCursor::IsCachedCursor(*(BaseCursor **)(this + 0x50)), cVar1 != '\0')) &&
           (cVar1 = select(this), cVar1 != '\0')))))) {
        this_01 = ::operator_new(0x50);
        EscapeRootCursor::EscapeRootCursor(this_01,param_1,this);
        cVar1 = Board::TryToAddCursor(*(Board **)(gLawnApp + 0x9f0),(BaseCursor *)this_01,true);
        if (cVar1 != '\0') {
          *(EscapeRootCursor **)(this + 0x50) = this_01;
          return cVar1;
        }
        deselect(this);
        return '\0';
      }
    }
  }
  return '\0';
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::GetComponentDamageRadiusProps() */

void PlantEscapeRoot::GetComponentDamageRadiusProps(void)

{
  undefined4 uVar1;
  long in_x0;
  long lVar2;
  long extraout_x0;
  ComponentDamageRadiusProps *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  PowerSet aPStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_041a06a8(aRStack_28,*(undefined8 *)(in_x0 + 0x10));
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  PowerSet::PowerSet(aPStack_20,(PowerSet *)(lVar2 + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  uVar1 = calcContextForAttackType();
  PowerSet::Find(aRStack_28,aPStack_20,5,uVar1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  nop();
  ComponentDamageRadiusProps::ComponentDamageRadiusProps
            (in_x8,(ComponentDamageRadiusProps *)(extraout_x0 + 0x18));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  PowerSet::~PowerSet(aPStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::CreateHoloPlant(BoardEntity*) */

void __thiscall PlantEscapeRoot::CreateHoloPlant(PlantEscapeRoot *this,BoardEntity *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  BoardEntity *this_00;
  string *psVar3;
  Plant *pPVar4;
  EntityConditionTracker<Plant,PlantConditions> *pEVar5;
  undefined8 uVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  Plant::GetType();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  uVar1 = BoardEntity::CalcColumnPosition(this_00);
  uVar2 = SharkMinion::getRow((SharkMinion *)this_00);
  uVar6 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_20);
  pPVar4 = (Plant *)Board::AddPlant((Board *)0x0,uVar6,uVar1,uVar2,aRStack_10,1,1,0xffffffff,0,1,1,0
                                    ,1,0,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (pPVar4 != (Plant *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
    Plant::SetHoloPlant(pPVar4,aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    uVar1 = FUN_041a0690(*(undefined4 *)(this_00 + 0x50));
    (**(code **)(*(long *)pPVar4 + 0x198))(pPVar4,uVar1);
    FUN_041a0960(pPVar4 + 0x55);
    pEVar5 = (EntityConditionTracker<Plant,PlantConditions> *)
             PlayerInfo::GetDisplayingBundleList((PlayerInfo *)this_00);
    fVar7 = (float)EntityConditionTracker<Plant,PlantConditions>::GetConditionDuration(pEVar5,0x21);
    Plant::ApplyCondition(fVar7,fVar7 - 2.0,pPVar4,0x22);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pPVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::onDestroy() */

void __thiscall PlantEscapeRoot::onDestroy(PlantEscapeRoot *this)

{
  RtWeakPtr *this_00;
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  Plant *pPVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  ResourceInfo *pRVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x48);
  local_8 = ___stack_chk_guard;
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar2) {
    pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    Plant::EndCondition(pPVar4,0x15);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    cVar3 = FUN_041a1e7c(*(undefined4 *)(lVar5 + 0x28));
    if (cVar3 != '\0') {
      plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar6 + 0x80))(plVar6,0);
      uVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar3 = Plant::HasCondition(uVar7,0x21);
      if (cVar3 != '\0') {
        pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
        CreateHoloPlant(this,(BoardEntity *)pRVar8);
        pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
        Plant::SetHoloPlant(pPVar4,aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
      }
      pPVar4 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      cVar3 = Plant::IsIceblocked(pPVar4);
      if (cVar3 != '\0') {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        uVar1 = *(undefined4 *)(lVar5 + 0x114);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        plVar6 = (long *)FUN_041a4b08(uVar1,*(undefined4 *)(lVar5 + 0x110));
        (**(code **)(*plVar6 + 0x80))(plVar6,0);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::wrapTargetPlant() */

void __thiscall PlantEscapeRoot::wrapTargetPlant(PlantEscapeRoot *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  int iVar1;
  long lVar2;
  RtObject *this_01;
  EffectObject_TargetPlant *pEVar3;
  long *plVar4;
  Board *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_02 = *(Board **)(gLawnApp + 0x9f0);
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48);
  std::string::string(asStack_10,"escaperoot_targetplant");
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar1 = *(int *)(lVar2 + 0x114);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  this_01 = (RtObject *)Board::AddEffectObject(this_02,asStack_10,iVar1,*(int *)(lVar2 + 0x110));
  pEVar3 = Sexy::RtObject::Cast<EffectObject_TargetPlant>(this_01);
  std::string::~string(asStack_10);
  nop();
  plVar4 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar1 = (**(code **)(*plVar4 + 200))();
  FUN_041a0688(pEVar3 + 0x1c,iVar1 + 1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
  EffectObject_TargetPlant::SetOwner(pEVar3,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::remotePlantfoodAttack(Sexy::Point) */

void __thiscall PlantEscapeRoot::remotePlantfoodAttack(PlantEscapeRoot *this,int *param_2)

{
  RtObject *this_00;
  EffectObject_TargetPlant *this_01;
  Board *this_02;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_02 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string(asStack_10,"escaperoot_targetplant");
  this_00 = (RtObject *)Board::AddEffectObject(this_02,asStack_10,*param_2,param_2[1]);
  this_01 = Sexy::RtObject::Cast<EffectObject_TargetPlant>(this_00);
  std::string::~string(asStack_10);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)aRStack_18);
  EffectObject_TargetPlant::SetOwner(this_01,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  FUN_041a06e4(this_01 + 0x120,*(undefined4 *)(this + 0x40));
  EffectObject_TargetPlant::PlayEmerge(this_01);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::swapPlants() */

void __thiscall PlantEscapeRoot::swapPlants(PlantEscapeRoot *this)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  undefined *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  Plant *pPVar5;
  GridItemArtifactTimeStop *this_01;
  GridItemArtifactTimeSpeedUp *this_02;
  long *plVar6;
  RtObject *this_03;
  EffectObject_TargetPlant *this_04;
  PlantAnimRig_EscapeRoot *pPVar7;
  EscapeRootSubSystem *pEVar8;
  ResourceInfo *pRVar9;
  undefined8 uVar10;
  Board *this_05;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  RtMixedPtr aRStack_68 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_60 [8];
  Point aPStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x48);
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_78,*(int *)(*(long *)(this + 0x10) + 0x114),
                     *(int *)(*(long *)(this + 0x10) + 0x110));
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar3 = *(int *)(lVar4 + 0x114);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Sexy::Point::Point((Point *)&local_70,iVar3,*(int *)(lVar4 + 0x110));
  puVar1 = gMessageRouter;
  uVar10 = *(undefined8 *)(this + 0x10);
  Sexy::Point::Point(aPStack_58,(TPoint *)&local_70);
  MessageRouter::Broadcast<Plant*,Sexy::Point&,Plant*,Sexy::Point>
            ((MessageRouter *)puVar1,Message::PlantMoving,uVar10,aPStack_58);
  puVar1 = gMessageRouter;
  uVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Sexy::Point::Point(aPStack_58,(TPoint *)&local_78);
  MessageRouter::Broadcast<Plant*,Sexy::Point&,Plant*,Sexy::Point>
            ((MessageRouter *)puVar1,Message::PlantMoving,uVar10,aPStack_58);
  Plant::SetGridLoc(*(Plant **)(this + 0x10),local_70,local_6c);
  pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Plant::SetGridLoc(pPVar5,local_78,local_74);
  this_01 = (GridItemArtifactTimeStop *)FUN_041a4dec();
  if (this_01 != (GridItemArtifactTimeStop *)0x0) {
    iVar3 = (int)this_01;
    cVar2 = GridItemArtifactTimeStop::IsInEffectArea(iVar3,local_78);
    if (cVar2 == '\0') {
      cVar2 = GridItemArtifactTimeStop::IsInEffectArea(iVar3,local_70);
      if (cVar2 != '\0') {
        pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
        GridItemArtifactTimeStop::EndEffectToPlant(this_01,(Plant *)pRVar9);
      }
      cVar2 = GridItemArtifactTimeStop::IsInEffectArea(iVar3,local_70);
    }
    else {
      pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
      GridItemArtifactTimeStop::ApplyEffectToPlant(this_01,(Plant *)pRVar9);
      cVar2 = GridItemArtifactTimeStop::IsInEffectArea(iVar3,local_70);
    }
    if (cVar2 == '\0') {
      cVar2 = GridItemArtifactTimeStop::IsInEffectArea(iVar3,local_78);
      if (cVar2 != '\0') {
        GridItemArtifactTimeStop::EndEffectToPlant(this_01,*(Plant **)(this + 0x10));
      }
    }
    else {
      GridItemArtifactTimeStop::ApplyEffectToPlant(this_01,*(Plant **)(this + 0x10));
    }
  }
  this_02 = (GridItemArtifactTimeSpeedUp *)FUN_041a4d18();
  if (this_02 != (GridItemArtifactTimeSpeedUp *)0x0) {
    iVar3 = (int)this_02;
    cVar2 = GridItemArtifactTimeSpeedUp::IsInEffectArea(iVar3,local_78);
    if (cVar2 == '\0') {
      cVar2 = GridItemArtifactTimeSpeedUp::IsInEffectArea(iVar3,local_70);
      if (cVar2 != '\0') {
        pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
        GridItemArtifactTimeSpeedUp::EndEffectToPlant(this_02,(Plant *)pRVar9);
      }
      cVar2 = GridItemArtifactTimeSpeedUp::IsInEffectArea(iVar3,local_70);
    }
    else {
      pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
      GridItemArtifactTimeSpeedUp::ApplyEffectToPlant(this_02,(Plant *)pRVar9);
      cVar2 = GridItemArtifactTimeSpeedUp::IsInEffectArea(iVar3,local_70);
    }
    if (cVar2 == '\0') {
      cVar2 = GridItemArtifactTimeSpeedUp::IsInEffectArea(iVar3,local_78);
      if (cVar2 != '\0') {
        GridItemArtifactTimeSpeedUp::EndEffectToPlant(this_02,*(Plant **)(this + 0x10));
      }
    }
    else {
      GridItemArtifactTimeSpeedUp::ApplyEffectToPlant(this_02,*(Plant **)(this + 0x10));
    }
  }
  plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  (**(code **)(*plVar6 + 0x80))(plVar6,0);
  uVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  cVar2 = Plant::HasCondition(uVar10,0x21);
  if (cVar2 != '\0') {
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
    CreateHoloPlant(this,(BoardEntity *)pRVar9);
    pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aPStack_58,(RtWeakPtrBase *)aRStack_60);
    Plant::SetHoloPlant(pPVar5,aPStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  }
  pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  cVar2 = Plant::IsIceblocked(pPVar5);
  if (cVar2 != '\0') {
    plVar6 = (long *)FUN_041a4b08(local_70,local_6c);
    (**(code **)(*plVar6 + 0x80))(plVar6,0);
  }
  pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  Plant::EndCondition(pPVar5,0x15);
  this_05 = *(Board **)(gLawnApp + 0x9f0);
  std::string::string((string *)aPStack_58,"escaperoot_targetplant");
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar3 = *(int *)(lVar4 + 0x114);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  this_03 = (RtObject *)
            Board::AddEffectObject(this_05,(string *)aPStack_58,iVar3,*(int *)(lVar4 + 0x110));
  this_04 = Sexy::RtObject::Cast<EffectObject_TargetPlant>(this_03);
  std::string::~string((string *)aPStack_58);
  nop();
  plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  iVar3 = (**(code **)(*plVar6 + 200))();
  FUN_041a0688(this_04 + 0x1c,iVar3 + 1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aPStack_58,(RtWeakPtrBase *)aRStack_60);
  EffectObject_TargetPlant::SetOwner(this_04,aPStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_60);
  EffectObject_TargetPlant::PlayRetract(this_04);
  deselect(this);
  lVar4 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar4 + 200) = 0xb;
  cVar2 = FUN_041a0940(lVar4);
  if (cVar2 != '\0') {
    pEVar8 = Board::GetGameSubSystem<EscapeRootSubSystem>(*(Board **)(gLawnApp + 0x9f0));
    if (pEVar8 != (EscapeRootSubSystem *)0x0) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aPStack_58,(RtWeakPtrBase *)this_00);
      cVar2 = EscapeRootSubSystem::AddPlant(pEVar8,aPStack_58);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_58);
      if (cVar2 != '\0') {
        pPVar5 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
        cVar2 = Plant::CanApplyPlantfood(pPVar5);
        if (cVar2 != '\0') {
          lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
          (**(code **)(**(long **)(lVar4 + 0xa8) + 0x220))(*(long **)(lVar4 + 0xa8));
          lVar4 = *(long *)(this + 0x10);
          goto LAB_041a7f4c;
        }
      }
    }
    lVar4 = *(long *)(this + 0x10);
  }
LAB_041a7f4c:
  pPVar7 = (PlantAnimRig_EscapeRoot *)FUN_041a2914(lVar4);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string((string *)aPStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             aPStack_58);
  PlantAnimRig_EscapeRoot::PlayEmergeFromGround(pPVar7,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aPStack_58);
  nop();
  Sexy::RtId::~RtId((RtId *)aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this_00);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::setAttackType() */

void __thiscall PlantEscapeRoot::setAttackType(PlantEscapeRoot *this)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  PlantWeights *pPVar4;
  long extraout_x0;
  undefined8 local_70;
  undefined8 local_68;
  string asStack_60 [8];
  PlantWeights aPStack_58 [16];
  undefined1 auStack_48 [8];
  undefined4 local_40;
  ProbabilitySet<ZombossRobotAirDropZombieInfo> aPStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet(aPStack_38);
  lVar3 = FUN_041a3664(*(undefined8 *)(this + 0x10));
  local_70 = FUN_041a2d6c(*(undefined8 *)(lVar3 + 0x2c8));
  local_68 = FUN_041a2dbc(*(undefined8 *)(lVar3 + 0x2d0));
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_70,(__normal_iterator *)&local_68), bVar1) {
    pPVar4 = (PlantWeights *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70)
    ;
    PlantWeights::PlantWeights(aPStack_58,pPVar4);
    FUN_05475d88(asStack_60,auStack_48);
    ProbabilitySet<std::string>::AddItem
              ((ProbabilitySet<std::string> *)aPStack_38,asStack_60,local_40);
    std::string::~string(asStack_60);
    PlantWeights::~PlantWeights(aPStack_58);
    std::move_iterator<SexyURL::KeyedValue*>::operator++
              ((move_iterator<SexyURL::KeyedValue*> *)&local_70);
  }
  ProbabilitySet<std::string>::PickItem();
  uVar2 = calcAttackType(this,aPStack_58);
  *(undefined4 *)(this + 0x40) = uVar2;
  std::string::~string((string *)aPStack_58);
  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  nop();
  FUN_041a06dc(extraout_x0 + 0x3bc,*(undefined4 *)(this + 0x40));
  ProbabilitySet<std::string>::~ProbabilitySet((ProbabilitySet<std::string> *)aPStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::calcTargetGridLoc() */

void PlantEscapeRoot::calcTargetGridLoc(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  PlantEscapeRoot *in_x0;
  long lVar7;
  long extraout_x0;
  ulong uVar8;
  undefined8 uVar9;
  TPoint *pTVar10;
  undefined8 *puVar11;
  Zombie *this;
  GridItem *this_00;
  int iVar12;
  Point *in_x8;
  undefined8 uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  int local_68;
  int local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  PowerSet aPStack_38 [24];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  iVar16 = 0;
  iVar15 = 0;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  setAttackType(in_x0);
  FUN_041a06a8((RtWeakPtr<Sexy::ResourceInfo> *)&local_20,*(undefined8 *)(in_x0 + 0x10));
  lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  PowerSet::PowerSet(aPStack_38,(PowerSet *)(lVar7 + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  uVar3 = calcContextForAttackType();
  PowerSet::Find((RtWeakPtr<Sexy::ResourceInfo> *)&local_20,aPStack_38,5,uVar3);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  nop();
  fVar17 = *(float *)(extraout_x0 + 0x18);
  iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
  iVar5 = BoardConstants::NUMBER_OF_ROWS();
  if (0 < iVar5) {
    do {
      uVar14 = 0;
      iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
      if (0 < iVar5) {
        do {
          uVar13 = *(undefined8 *)(gLawnApp + 0x9f0);
          Sexy::Point::Point((Point *)&local_58,uVar14,iVar16);
          Plant::GetType();
          iVar12 = -1;
          iVar5 = Board::GetCanPlantAtReason
                            (uVar13,(Point *)&local_58,(RtWeakPtr<Sexy::ResourceInfo> *)&local_20,0)
          ;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
          if (iVar5 == 0) {
            BoardTransforms::GridToBoardSpaceRect
                      ((BoardTransforms *)(ulong)uVar14,iVar16,1,1,iVar12);
            Sexy::TRect<int>::GetCenter();
            Sexy::Point::Point((Point *)&local_68,(TPoint *)&local_58);
            std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                      ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
            uVar3 = operator|(2,4);
            Sexy::FastCurve::SetOutRange((FastCurve *)&local_58,(float)local_68,(float)local_64);
            EntityFinder::GetEntitiesTouchingCircle2D
                      ((float)iVar4 * fVar17,(RtWeakPtr<Sexy::ResourceInfo> *)&local_20,uVar3,
                       (Point *)&local_58,0xffffffff,0xffffffff);
            local_60 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)&local_20);
LAB_041a8630:
            local_58 = std::
                       vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                              *)&local_20);
            bVar1 = __gnu_cxx::operator!=
                              ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
            do {
              if (!bVar1) {
                iVar5 = FUN_041a0700(local_20,local_18);
                if (iVar15 < iVar5) {
                  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::clear
                            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_50);
                  Sexy::Point::Point((Point *)&local_58,uVar14,iVar16);
                  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_50,
                             (Point *)&local_58);
                  iVar15 = iVar5;
                }
                else if (iVar5 == iVar15) {
                  Sexy::Point::Point((Point *)&local_58,uVar14,iVar16);
                  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
                            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_50,
                             (Point *)&local_58);
                }
                std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                          ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
                break;
              }
              puVar11 = (undefined8 *)
                        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
              this = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar11);
              puVar11 = (undefined8 *)
                        std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
              this_00 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar11);
              if (this != (Zombie *)0x0) {
                uVar13 = operator|(1,8);
                uVar3 = operator|(uVar13,4);
                cVar2 = Zombie::MatchesAny(this,uVar3,*(undefined8 *)(in_x0 + 0x10));
                if ((cVar2 != '\0') || (cVar2 = Zombie::IsTargetable(this), cVar2 == '\0'))
                goto LAB_041a8614;
              }
              if (((this_00 != (GridItem *)0x0) &&
                  ((cVar2 = RealObject::IsOnTeam(this_00,1), cVar2 != '\0' ||
                   (cVar2 = (**(code **)(*(long *)this_00 + 0x200))(this_00), cVar2 == '\0')))) ||
                 ((*(int *)(in_x0 + 0x40) == 0 &&
                  (((this != (Zombie *)0x0 &&
                    (iVar5 = SharkMinion::getRow((SharkMinion *)this), iVar5 != iVar16)) ||
                   ((this_00 != (GridItem *)0x0 &&
                    ((iVar5 = SharkMinion::getRow((SharkMinion *)this_00), iVar5 != iVar16 ||
                     (uVar6 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00),
                     uVar6 != uVar14)))))))))) goto LAB_041a8614;
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
              local_58 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                *)&local_20);
              bVar1 = __gnu_cxx::operator!=
                                ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
            } while( true );
          }
          uVar14 = uVar14 + 1;
          iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
        } while ((int)uVar14 < iVar5);
      }
      iVar16 = iVar16 + 1;
      iVar5 = BoardConstants::NUMBER_OF_ROWS();
    } while (iVar16 < iVar5);
  }
  uVar13 = local_50;
  if (iVar15 == 0) {
    Sexy::Point::Point(in_x8,*(int *)(*(long *)(in_x0 + 0x10) + 0x114),
                       *(int *)(*(long *)(in_x0 + 0x10) + 0x110));
  }
  else {
    uVar8 = FUN_041a070c(local_50,local_48);
    if (1 < uVar8) {
      uVar13 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_50);
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)&local_50);
      std::
      random_shuffle<__gnu_cxx::__normal_iterator<Sexy::Point*,std::vector<Sexy::Point,std::allocator<Sexy::Point>>>>
                (uVar13,uVar9);
      uVar13 = local_50;
    }
    pTVar10 = (TPoint *)FUN_041a093c(uVar13);
    Sexy::Point::Point(in_x8,pTVar10);
  }
  PowerSet::~PowerSet(aPStack_38);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_041a8614:
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_58,(__normal_iterator *)&local_60);
  local_60 = std::vector<BoardEntity*,std::allocator<BoardEntity*>>::erase
                       ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,local_58);
  goto LAB_041a8630;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::performPlantfoodAttack() */

void __thiscall PlantEscapeRoot::performPlantfoodAttack(PlantEscapeRoot *this)

{
  int local_18;
  int local_14;
  Point aPStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
  local_8 = ___stack_chk_guard;
  calcTargetGridLoc();
  if ((*(int *)(*(long *)(this + 0x10) + 0x110) == local_14) &&
     (*(int *)(*(long *)(this + 0x10) + 0x114) == local_18)) {
    localPlantfoodAttack(this);
  }
  else {
    Sexy::Point::Point(aPStack_10,(TPoint *)&local_18);
    remotePlantfoodAttack(this,aPStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEscapeRoot::OnAnimCommand(std::string const&, std::string const&) */

char PlantEscapeRoot::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = std::operator==(param_2,"start_wrap");
  cVar2 = '\0';
  if (bVar1) {
    cVar2 = (**(code **)(*(long *)param_1 + 0x180))(param_1);
    if (cVar2 != '\0') {
      performPlantfoodAttack((PlantEscapeRoot *)param_1);
      return cVar2;
    }
    cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(param_1 + 0x48));
    if (cVar2 == '\0') {
      resetState((PlantEscapeRoot *)param_1);
      return '\x01';
    }
    wrapTargetPlant((PlantEscapeRoot *)param_1);
  }
  return cVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::onExplosionBegun() */

void __thiscall PlantEscapeRoot::onExplosionBegun(PlantEscapeRoot *this)

{
  int iVar1;
  char cVar2;
  long lVar3;
  ComponentRadiusBurst *pCVar4;
  Point aPStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_041a3664(*(undefined8 *)(this + 0x10));
  iVar1 = *(int *)(lVar3 + 0x2c0);
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar2 != '\0') {
    iVar1 = iVar1 + 1;
  }
  if (*(int *)(this + 0x30) < iVar1) {
    performPlantfoodAttack(this);
  }
  else {
    *(undefined4 *)(this + 0x30) = 0;
    pCVar4 = (ComponentRadiusBurst *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
    Sexy::Point::Point(aPStack_18,*(int *)(*(long *)(this + 0x10) + 0x114),
                       *(int *)(*(long *)(this + 0x10) + 0x110));
    ComponentRadiusBurst::SetDisplacedOrigin(pCVar4,aPStack_18);
    EATextSquish::Vec3::Vec3((Vec3 *)aPStack_18,0.0,0.0,0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x34),(SexyVector3 *)aPStack_18);
    (**(code **)(*(long *)this + 0x228))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x041a8ba0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* PlantEscapeRoot::Initialize() */

void __thiscall PlantEscapeRoot::Initialize(PlantEscapeRoot *this)

{
  uint uVar1;
  long lVar2;
  float *pfVar3;
  BoardEntity *this_00;
  ComponentDamageRadius *this_01;
  Plant *this_02;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_110 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_108 [8];
  float local_100 [4];
  float local_f0 [58];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  lVar2 = FUN_041a3664(*(undefined8 *)(this + 0x10));
  this_02 = *(Plant **)(this + 0x10);
  *(undefined4 *)(this_02 + 200) = 10;
  uVar1 = Plant::IsOnBoard(this_02);
  if ((uVar1 & 0xff) == 0) {
    this_00 = *(BoardEntity **)(this + 0x10);
    *(undefined4 *)(this_00 + 200) = 0xc;
  }
  else {
    lVar4 = *(long *)(this + 0x10);
    FUN_041a06cc(lVar4);
    if ((int)uVar1 < 2) {
      fVar7 = *(float *)(lVar2 + 0x2b8);
    }
    else {
      if (uVar1 == 2) {
        local_f0[0] = (float)*(int *)(lVar2 + 0x2c4);
      }
      else {
        local_f0[0] = (float)*(int *)(lVar2 + 0x2c4);
        local_f0[0] = local_f0[0] + local_f0[0];
      }
      local_100[0] = 100.0;
      pfVar3 = eastl::min_alt<float>(local_100,local_f0);
      fVar7 = *(float *)(lVar2 + 0x2b8) * 0.01 * (100.0 - *pfVar3);
    }
    fVar5 = (float)PVZ_T();
    this_00 = *(BoardEntity **)(this + 0x10);
    *(float *)(lVar4 + 0x128) = fVar5 + fVar7;
  }
  *(undefined4 *)(this + 0x40) = 0;
  BoardEntity::GetComponentRunner(this_00);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_108,(RtWeakPtrBase *)aRStack_110);
  std::string::string((string *)local_100,"ExplodeRadius");
  ComponentRunner::Add<ComponentDamageRadius>
            ((ComponentRunner *)this_00,aRStack_108,(string *)local_100);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x58),(RtWeakPtrBase *)local_f0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_f0);
  std::string::~string((string *)local_100);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_108);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_110);
  GetComponentDamageRadiusProps();
  this_01 = (ComponentDamageRadius *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58))
  ;
  ComponentDamageRadius::SetRadiusProps(this_01,(ComponentDamageRadiusProps *)local_f0);
  this[0x28] = (PlantEscapeRoot)0x0;
  uVar6 = PVZ_T();
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x2c) = uVar6;
  EATextSquish::Vec3::Vec3((Vec3 *)local_100,0.0,0.0,0.0);
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x34),(SexyVector3 *)local_100);
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)(this + 0x48));
  *(undefined8 *)(this + 0x50) = 0;
  ComponentDamageRadiusProps::~ComponentDamageRadiusProps((ComponentDamageRadiusProps *)local_f0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::explode() */

void __thiscall PlantEscapeRoot::explode(PlantEscapeRoot *this)

{
  int iVar1;
  ComponentDamageRadius *pCVar2;
  long *plVar3;
  UIEasyButtonWidget *this_00;
  RealObject *this_01;
  float fVar4;
  float fVar5;
  string asStack_f0 [232];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = *(RealObject **)(this + 0x10);
  std::string::string(asStack_f0,"Play_Potato_Mine");
  RealObject::PlayPositionalSound(this_01,asStack_f0,0.0);
  std::string::~string(asStack_f0);
  nop();
  GetComponentDamageRadiusProps();
  pCVar2 = (ComponentDamageRadius *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  ComponentDamageRadius::SetRadiusProps(pCVar2,(ComponentDamageRadiusProps *)asStack_f0);
  pCVar2 = (ComponentDamageRadius *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  ComponentDamageRadius::StartApply(pCVar2);
  iVar1 = *(int *)(this + 0x40);
  if (iVar1 == 2) {
    playExtraCherrybombAnim(this);
    iVar1 = *(int *)(this + 0x40);
  }
  if (iVar1 == 3) {
    spawnGrapes();
  }
  fVar4 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
  fVar5 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
  if (fVar4 < fVar5) {
    this_00 = *(UIEasyButtonWidget **)(this + 0x10);
    *(undefined4 *)(this_00 + 200) = 0xc;
    plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(this_00);
    (**(code **)(*plVar3 + 0x118))();
  }
  else {
    Plant::KillPlant(*(Plant **)(this + 0x10),1,0,1);
  }
  ComponentDamageRadiusProps::~ComponentDamageRadiusProps((ComponentDamageRadiusProps *)asStack_f0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::UpdateActions() */

void __thiscall PlantEscapeRoot::UpdateActions(PlantEscapeRoot *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  UIEasyButtonWidget *pUVar4;
  long *plVar5;
  PlantAnimRig *pPVar6;
  PlantAnimRig_EscapeRoot *pPVar7;
  PopAnimRig *pPVar8;
  code *pcVar9;
  RealObject *this_00;
  float fVar10;
  UnchartedModePlantNumData aUStack_78 [8];
  RtMixedPtrBase aRStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  Insets aIStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = (**(code **)(*(long *)this + 0x180))();
  if (cVar3 == '\0') {
    pUVar4 = *(UIEasyButtonWidget **)(this + 0x10);
    iVar1 = *(int *)(pUVar4 + 0x110);
    iVar2 = *(int *)(pUVar4 + 0x114);
    switch(*(undefined4 *)(pUVar4 + 200)) {
    case 10:
      fVar10 = (float)PVZ_T();
      if (*(float *)(*(long *)(this + 0x10) + 0x128) < fVar10) {
        pPVar7 = (PlantAnimRig_EscapeRoot *)FUN_041a2914();
        RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
        PlantAnimRig_EscapeRoot::PlayEmergeFromGround(pPVar7,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate
                  ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                    *)aRStack_50);
        this_00 = *(RealObject **)(this + 0x10);
        *(undefined4 *)(this_00 + 200) = 0xb;
        std::string::string((string *)aIStack_60,"Play_Dirt_Rise");
        RealObject::PlayPositionalSound(this_00,(string *)aIStack_60,0.0);
        std::string::~string((string *)aIStack_60);
        nop();
      }
      break;
    case 0xb:
      pPVar8 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(pUVar4);
      cVar3 = PopAnimRig::IsPlayingAnything(pPVar8);
      if (cVar3 == '\0') {
        pUVar4 = *(UIEasyButtonWidget **)(this + 0x10);
        *(undefined4 *)(pUVar4 + 200) = 0xc;
        plVar5 = (long *)UIEasyButtonWidget::GetImageNormal(pUVar4);
        (**(code **)(*plVar5 + 0x118))();
      }
      break;
    case 0xc:
      cVar3 = Plant::IsSwapping((Plant *)pUVar4);
      if (cVar3 == '\0') {
        UnchartedModePlantNumData::UnchartedModePlantNumData(aUStack_78,1,1);
        (**(code **)(*(long *)this + 0xe0))(aRStack_70,this,iVar1,0,0,aUStack_78);
        Sexy::Insets::Insets(aIStack_60,iVar2,iVar1,1,1);
        (**(code **)(*(long *)this + 0x100))(aRStack_68,this,aIStack_60,0);
        cVar3 = Sexy::RtMixedPtrBase::IsValid(aRStack_70);
        if ((cVar3 != '\0') ||
           (cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_68), cVar3 != '\0')) {
          setAttackType(this);
          plVar5 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
          ;
          pcVar9 = *(code **)(*plVar5 + 0x130);
          RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                    (aRStack_50);
          (*pcVar9)(plVar5,aRStack_50);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_50);
          pPVar6 = (PlantAnimRig *)
                   UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
          PlantAnimRig::SetState(pPVar6,0xe);
          *(undefined4 *)(*(long *)(this + 0x10) + 200) = 0xd;
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70)
        ;
      }
      break;
    case 0xd:
      pPVar8 = (PopAnimRig *)UIEasyButtonWidget::GetImageNormal(pUVar4);
      cVar3 = PopAnimRig::IsPlayingAnything(pPVar8);
      if (cVar3 == '\0') {
        explode(this);
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantEscapeRoot::TryBlockPushOffBoard(Zombie*, int) */

char __thiscall
PlantEscapeRoot::TryBlockPushOffBoard(PlantEscapeRoot *this,Zombie *param_1,int param_2)

{
  char cVar1;
  
  cVar1 = shouldExplodeBecauseShovedOffBoard(this,param_2);
  if (cVar1 != '\0') {
    setAttackType(this);
    explode(this);
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::playPlantfoodExplosionEffect(Sexy::Point) */

void PlantEscapeRoot::playPlantfoodExplosionEffect
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               PlantEscapeRoot *param_4,TPoint *param_5)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  int iVar1;
  ComponentDamageRadius *pCVar2;
  ComponentRadiusBurst *pCVar3;
  Point aPStack_108 [8];
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  ComponentDamageRadiusProps aCStack_f0 [232];
  long local_8;
  
  this = (RtWeakPtr<Sexy::ResourceInfo> *)(param_4 + 0x58);
  local_8 = ___stack_chk_guard;
  GetComponentDamageRadiusProps();
  pCVar2 = (ComponentDamageRadius *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  ComponentDamageRadius::SetRadiusProps(pCVar2,aCStack_f0);
  pCVar3 = (ComponentRadiusBurst *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  Sexy::Point::Point((Point *)&local_100,param_5);
  ComponentRadiusBurst::SetDisplacedOrigin(pCVar3,(Point *)&local_100);
  pCVar2 = (ComponentDamageRadius *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
  ComponentDamageRadius::StartApply(pCVar2);
  iVar1 = *(int *)(param_4 + 0x40);
  if (iVar1 == 2) {
    Sexy::Point::Point(aPStack_108,param_5);
    local_100 = calcPlantfoodOffset(param_4,aPStack_108);
    local_fc = param_2;
    local_f8 = param_3;
    Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x34),(SexyVector3 *)&local_100);
    playExtraCherrybombAnim(param_4);
    iVar1 = *(int *)(param_4 + 0x40);
  }
  if (iVar1 == 3) {
    Sexy::Point::Point(aPStack_108,param_5);
    local_100 = calcPlantfoodOffset(param_4,aPStack_108);
    local_fc = param_2;
    local_f8 = param_3;
    Sexy::SexyVector3::operator=((SexyVector3 *)(param_4 + 0x34),(SexyVector3 *)&local_100);
    spawnGrapes();
  }
  ComponentDamageRadiusProps::~ComponentDamageRadiusProps(aCStack_f0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::BeginRemoteExplosion(Sexy::Point) */

void __thiscall PlantEscapeRoot::BeginRemoteExplosion(PlantEscapeRoot *this,TPoint *param_2)

{
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,param_2);
  playPlantfoodExplosionEffect(this,aPStack_10);
  onExplosionBegun(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantEscapeRoot::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantEscapeRoot::onAnimStoppedCallback(PlantEscapeRoot *this,string *param_1)

{
  RtWeakPtr *this_00;
  char cVar1;
  bool bVar2;
  Plant *pPVar3;
  PlantAnimRig_EscapeRoot *pPVar4;
  undefined8 uVar5;
  long lVar6;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x180))();
  if (cVar1 == '\0') {
    bVar2 = std::operator==(param_1,"unwrap_quick");
    if (bVar2) {
      this_00 = (RtWeakPtr *)(this + 0x48);
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar2) {
        pPVar3 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        if (*(code **)(*(long *)pPVar3 + 0x1f8) == Plant::IsInPlantFoodState) {
          cVar1 = Plant::IsInPlantFoodState(pPVar3);
        }
        else {
          cVar1 = (**(code **)(*(long *)pPVar3 + 0x1f8))();
        }
        if (cVar1 == '\0') {
          uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
          ;
          cVar1 = Plant::HasCondition(uVar5,2);
          if (cVar1 == '\0') {
            uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
            cVar1 = Plant::HasCondition(uVar5,0x1d);
            if (cVar1 == '\0') {
              uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
              cVar1 = Plant::HasCondition(uVar5,1);
              if (cVar1 == '\0') {
                lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                  ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
                cVar1 = FUN_041a0698(*(undefined4 *)(lVar6 + 0x1d0));
                if ((cVar1 == '\0') &&
                   (cVar1 = FUN_041a0698(*(undefined4 *)(*(long *)(this + 0x10) + 0x1d0)),
                   cVar1 == '\0')) {
                  swapPlants(this);
                  goto LAB_041a9480;
                }
              }
            }
          }
        }
        pPVar3 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                    ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        Plant::EndCondition(pPVar3,0x15);
      }
      resetState(this);
    }
    else {
      bVar2 = std::operator==(param_1,"recover");
      if (bVar2) {
        Plant::EndCondition(*(Plant **)(this + 0x10),0x15);
      }
    }
  }
  else {
    bVar2 = std::operator==(param_1,"recover");
    if (bVar2) {
      pPVar4 = (PlantAnimRig_EscapeRoot *)FUN_041a2914(*(undefined8 *)(this + 0x10));
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_EscapeRoot::PFRevealPlant(pPVar4,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
    else {
      bVar2 = std::operator==(param_1,"unwrap");
      if (bVar2) {
        pPVar4 = (PlantAnimRig_EscapeRoot *)FUN_041a2914(*(undefined8 *)(this + 0x10));
        PlantAnimRig_EscapeRoot::PlayBurrowIdleLooped(pPVar4);
        Sexy::Point::Point((Point *)asStack_58,*(int *)(*(long *)(this + 0x10) + 0x114),
                           *(int *)(*(long *)(this + 0x10) + 0x110));
        playPlantfoodExplosionEffect(this,(Point *)asStack_58);
        onExplosionBegun(this);
      }
    }
  }
LAB_041a9480:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

