// Class: PlantBurdockBatter


/* PlantBurdockBatter::ApplyPlantfood() */

void __thiscall PlantBurdockBatter::ApplyPlantfood(PlantBurdockBatter *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  this[0x45] = (PlantBurdockBatter)0x0;
  this[0x44] = (PlantBurdockBatter)0x1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBurdockBatter::StaticClassInit() */

void PlantBurdockBatter::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantBurdockBatter");
    (*pcVar2)(plVar1,asStack_10,FUN_03639a20,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBurdockBatter::StaticGetClass() */

long * PlantBurdockBatter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantBurdockBatter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBurdockBatter::GetClass() const */

long * PlantBurdockBatter::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantBurdockBatter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBurdockBatter::isAttacking() */

bool __thiscall PlantBurdockBatter::isAttacking(PlantBurdockBatter *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) - 0xbU < 6;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBurdockBatter::getHitRect() */

void __thiscall PlantBurdockBatter::getHitRect(PlantBurdockBatter *this)

{
  bool bVar1;
  int iVar2;
  Point *extraout_x1;
  int *in_x8;
  BoardTransforms aBStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::CalcGridPosition();
  BoardTransforms::GridToBoardSpaceRect(aBStack_10,extraout_x1);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  *in_x8 = (int)((float)*in_x8 - (float)iVar2);
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  bVar1 = local_8 == ___stack_chk_guard;
  in_x8[2] = (int)((float)in_x8[2] + (float)iVar2 * 2.0);
  if (bVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBurdockBatter::isValidProjectile(Projectile*) */

void __thiscall PlantBurdockBatter::isValidProjectile(PlantBurdockBatter *this,Projectile *param_1)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == (Projectile *)0x0) {
    bVar1 = false;
  }
  else {
    lVar2 = Projectile::GetProps(param_1);
    local_18 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x28));
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x28));
    while( true ) {
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
      if ((!bVar1) ||
         (plVar3 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18),
         *plVar3 == lVar2)) break;
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* PlantBurdockBatter::isCapturableProjectile(Projectile*) */

byte __thiscall
PlantBurdockBatter::isCapturableProjectile(PlantBurdockBatter *this,Projectile *param_1)

{
  byte bVar1;
  BurdockBatter_SubSystem *pBVar2;
  
  pBVar2 = Board::GetGameSubSystem<BurdockBatter_SubSystem>(*(Board **)(gLawnApp + 0x9f0));
  bVar1 = BurdockBatter_SubSystem::isProjectileAlreadyIn(pBVar2,param_1,4);
  return bVar1 ^ 1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBurdockBatter::addHomerTriggerEffect() */

void __thiscall PlantBurdockBatter::addHomerTriggerEffect(PlantBurdockBatter *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  long *plVar5;
  string asStack_30 [8];
  undefined8 local_28;
  undefined4 local_20;
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  local_28 = *puVar3;
  local_20 = *(undefined4 *)(puVar3 + 1);
  EATextSquish::Vec3::Vec3(aVStack_18,25.0,-35.0,0.0);
  EATextSquish::Vec3::operator+=((Vec3 *)&local_28,aVStack_18);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_30,"POPANIM_EFFECTS_BURDOCKBATTER_BULLET");
  GetPAMByName(asStack_30);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aVStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aVStack_18);
  std::string::~string(asStack_30);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  uVar1 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  iVar2 = Board::MakeRenderOrder(0x64960,uVar1,iVar2 + 1);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_28,iVar2);
  std::string::string((string *)aVStack_18,"bullet_lv5");
  Effect_PopAnim::PlaySingleAnimation(this_00,aVStack_18,0);
  std::string::~string((string *)aVStack_18);
  nop();
  plVar5 = (long *)UIWidget::GetAtlasImage((UIWidget *)this_00);
  (**(code **)(*plVar5 + 0x80))(0x40000000);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBurdockBatter::PlantBurdockBatter() */

void __thiscall PlantBurdockBatter::PlantBurdockBatter(PlantBurdockBatter *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_0666d720;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x28));
  uVar1 = PVZ_EOT();
  this[0x44] = (PlantBurdockBatter)0x0;
  this[0x45] = (PlantBurdockBatter)0x0;
  *(undefined4 *)(this + 0x40) = uVar1;
  return;
}


/* PlantBurdockBatter::StaticNew() */

PlantBurdockBatter * PlantBurdockBatter::StaticNew(void)

{
  PlantBurdockBatter *this;
  
  this = ::operator_new(0x48);
  PlantBurdockBatter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBurdockBatter::enhancePlantfoodToProjectile(Projectile*) */

void __thiscall
PlantBurdockBatter::enhancePlantfoodToProjectile(PlantBurdockBatter *this,Projectile *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  Projectile *this_00;
  float fVar4;
  Board *pBVar8;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03638210(*(undefined8 *)(this + 0x10));
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_28,"BurdockBatterCriticalHit");
  Sexy::ToWString(asStack_28);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar2,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  std::string::~string(asStack_28);
  nop();
  uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
                    /* WARNING: Load size is inaccurate */
  pBVar8._0_4_ = *puVar3;
  uVar5 = *(undefined4 *)((long)puVar3 + 4);
  uVar6 = *(undefined4 *)(puVar3 + 1);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_30);
  this_00 = (Projectile *)Board::AddProjectile(pBVar8._0_4_,uVar5,uVar6,uVar2,aRStack_18,0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  fVar7 = *(float *)(lVar1 + 0x308);
  fVar4 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
  FUN_03635bb0(fVar4 * fVar7,this_00 + 0xd8);
  FUN_03635bb8(*(undefined4 *)(lVar1 + 0x30c),this_00 + 0xdc);
  FUN_03635b40(this_00 + 0x24,1);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,500.0,0.0,0.0);
  Projectile::SetVelocity(this_00,(SexyVector3 *)aRStack_18);
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBurdockBatter::enhanceAvatarToProjectile(Projectile*) */

void __thiscall
PlantBurdockBatter::enhanceAvatarToProjectile(PlantBurdockBatter *this,Projectile *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  Projectile *this_00;
  int iVar4;
  float fVar5;
  Board *pBVar9;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03638210(*(undefined8 *)(this + 0x10));
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  iVar4 = 0;
  std::string::string(asStack_28,"BurdockBatterCriticalHit");
  Sexy::ToWString(asStack_28);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar2,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  std::string::~string(asStack_28);
  nop();
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)param_1);
  do {
                    /* WARNING: Load size is inaccurate */
    pBVar9._0_4_ = *puVar3;
    uVar6 = *(undefined4 *)((long)puVar3 + 4);
    uVar7 = *(undefined4 *)(puVar3 + 1);
    uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_30);
    this_00 = (Projectile *)Board::AddProjectile(pBVar9._0_4_,uVar6,uVar7,uVar2,aRStack_18,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    fVar8 = *(float *)(lVar1 + 0x308);
    fVar5 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
    FUN_03635bb0(fVar5 * fVar8,this_00 + 0xd8);
    FUN_03635bb8(*(undefined4 *)(lVar1 + 0x30c),this_00 + 0xdc);
    FUN_03635b40(this_00 + 0x24,1);
    fVar5 = (float)iVar4;
    iVar4 = iVar4 + 1;
    EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,500.0,(fVar5 + -1.0) * 200.0,0.0);
    Projectile::SetVelocity(this_00,(SexyVector3 *)aRStack_18);
  } while (iVar4 != 3);
  (**(code **)(*(long *)param_1 + 0x48))(param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBurdockBatter::setState(BurdockBatterState, bool) */

void __thiscall PlantBurdockBatter::setState(PlantBurdockBatter *this,int param_2,char param_3)

{
  char cVar1;
  PlantAnimRig_WizardThorns *pPVar2;
  long lVar3;
  code *pcVar4;
  undefined4 uVar5;
  float fVar6;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_3 == '\0') && (*(int *)(*(long *)(this + 0x10) + 200) == param_2)) goto LAB_03638dbc;
  *(int *)(*(long *)(this + 0x10) + 200) = param_2;
  pPVar2 = (PlantAnimRig_WizardThorns *)FUN_036382f0();
  lVar3 = FUN_03638210(*(undefined8 *)(this + 0x10));
  switch(*(undefined4 *)(*(long *)(this + 0x10) + 200)) {
  case 4:
    if (this[0x44] == (PlantBurdockBatter)0x0) {
      pcVar4 = *(code **)(*(long *)pPVar2 + 0x1e8);
      goto LAB_03638e38;
    }
    FUN_03635c2c(asStack_58);
    goto LAB_03638e3c;
  default:
    pcVar4 = *(code **)(*(long *)pPVar2 + 0x80);
    cVar1 = isAttacking(this);
    goto joined_r0x03638f24;
  case 0xb:
    FUN_03635c94(asStack_70);
    break;
  case 0xc:
    FUN_03635cfc(asStack_70);
    break;
  case 0xd:
    FUN_03635d64(asStack_70);
    break;
  case 0xe:
    FUN_03635dcc(asStack_70);
    break;
  case 0xf:
    FUN_03635e34(asStack_70);
    break;
  case 0x10:
    FUN_03635e9c(asStack_70);
    break;
  case 0x11:
    fVar6 = (float)PVZ_T();
    pcVar4 = *(code **)(*(long *)pPVar2 + 0x1e8);
    *(float *)(this + 0x40) = fVar6 + *(float *)(lVar3 + 0x310);
LAB_03638e38:
    (*pcVar4)(asStack_58,pPVar2);
LAB_03638e3c:
    PlantAnimRig_DevilsFlower::playLoopAnimation((PlantAnimRig_DevilsFlower *)pPVar2,asStack_58);
    std::string::~string(asStack_58);
    pcVar4 = *(code **)(*(long *)pPVar2 + 0x80);
    cVar1 = isAttacking(this);
    goto joined_r0x03638f24;
  }
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PlantAnimRig_WizardThorns::PlayTapAnimation(pPVar2,asStack_70,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  pcVar4 = *(code **)(*(long *)pPVar2 + 0x80);
  cVar1 = isAttacking(this);
joined_r0x03638f24:
  uVar5 = 0x40000000;
  if (cVar1 == '\0') {
    uVar5 = 0x3f800000;
  }
  (*pcVar4)(uVar5,pPVar2);
LAB_03638dbc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBurdockBatter::CancelPlantfood() */

void __thiscall PlantBurdockBatter::CancelPlantfood(PlantBurdockBatter *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  setState(this,4,1);
  return;
}


/* PlantBurdockBatter::Idle() */

void __thiscall PlantBurdockBatter::Idle(PlantBurdockBatter *this)

{
  PlantFramework::Idle((PlantFramework *)this);
  setState(this,4,1);
  return;
}


/* PlantBurdockBatter::toHitBoardEntities(std::vector<BoardEntity*, std::allocator<BoardEntity*> >)
    */

void PlantBurdockBatter::toHitBoardEntities(PlantFramework *param_1)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  if (param_1[0x44] == (PlantFramework)0x0) {
    setState((PlantBurdockBatter *)param_1,0xd);
    return;
  }
  if (param_1[0x45] == (PlantFramework)0x0) {
    fVar2 = (float)PlantFramework::Rand(param_1,1.0);
    fVar3 = (float)Plant::GetGeneSkillBoost(*(Plant **)(param_1 + 0x10));
    if (fVar2 < fVar3) {
      param_1[0x45] = (PlantFramework)0x1;
      goto LAB_03639080;
    }
  }
  param_1[0x44] = (PlantFramework)0x0;
LAB_03639080:
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
  if (cVar1 != '\0') {
    setState((PlantBurdockBatter *)param_1,0x10,0);
    return;
  }
  setState((PlantBurdockBatter *)param_1,0xf);
  return;
}


/* PlantBurdockBatter::onAttackAnimDone() */

void __thiscall PlantBurdockBatter::onAttackAnimDone(PlantBurdockBatter *this)

{
  setState(this,0x11,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBurdockBatter::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantBurdockBatter::onAnimStoppedCallback(PlantBurdockBatter *this,string *param_1)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_036382f0(*(undefined8 *)(this + 0x10));
  if (*(int *)(*(long *)(this + 0x10) + 200) - 0xbU < 6) {
    switch(*(int *)(*(long *)(this + 0x10) + 200)) {
    case 0xb:
      FUN_03635c94();
      break;
    case 0xc:
      FUN_03635cfc();
      break;
    case 0xd:
      FUN_03635d64();
      break;
    case 0xe:
      FUN_03635dcc();
      break;
    case 0xf:
      FUN_03635e34();
      break;
    case 0x10:
      FUN_03635e9c(asStack_10);
    }
    cVar1 = std::operator==(param_1,asStack_10);
    std::string::~string(asStack_10);
    if (cVar1 != '\0') {
      onAttackAnimDone(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBurdockBatter::~PlantBurdockBatter() */

void __thiscall PlantBurdockBatter::~PlantBurdockBatter(PlantBurdockBatter *this)

{
  *(undefined ***)this = &PTR_GetClass_0666d720;
  std::vector<ProjectilePropertySheet*,std::allocator<ProjectilePropertySheet*>>::~vector
            ((vector<ProjectilePropertySheet*,std::allocator<ProjectilePropertySheet*>> *)
             (this + 0x28));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantBurdockBatter::~PlantBurdockBatter() */

void __thiscall PlantBurdockBatter::~PlantBurdockBatter(PlantBurdockBatter *this)

{
  ~PlantBurdockBatter(this);
  AK::FreeHook(this);
  return;
}


/* PlantBurdockBatter::enhanceStraightToProjectile(Projectile*) */

void __thiscall
PlantBurdockBatter::enhanceStraightToProjectile(PlantBurdockBatter *this,Projectile *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  BurdockBatter_SubSystem *this_00;
  float fVar5;
  float fVar6;
  
  lVar4 = FUN_03638210(*(undefined8 *)(this + 0x10));
  uVar1 = FUN_03635b3c(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
  FUN_03635b40(param_1 + 0x24,uVar1);
  fVar6 = *(float *)(lVar4 + 0x2d8);
  fVar5 = *(float *)(lVar4 + 0x2d4) - 1.0;
  iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
  iVar3 = FUN_03635bd8(*(undefined8 *)(this + 0x10));
  if (iVar3 < 3) {
    if (iVar3 == 2) {
      fVar6 = *(float *)(lVar4 + 0x2dc);
      iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
      fVar6 = (float)iVar2 * fVar6;
    }
    else {
      fVar6 = (float)iVar2 * fVar6;
    }
  }
  else {
    fVar6 = *(float *)(lVar4 + 0x2e0);
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    fVar6 = (float)iVar2 * fVar6;
  }
  this_00 = Board::GetGameSubSystem<BurdockBatter_SubSystem>(*(Board **)(gLawnApp + 0x9f0));
  BurdockBatter_SubSystem::addStraightProjectile(this_00,param_1,fVar5,fVar5,fVar6);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBurdockBatter::enhanceHomerToProjectile(Projectile*) */

void __thiscall
PlantBurdockBatter::enhanceHomerToProjectile(PlantBurdockBatter *this,Projectile *param_1)

{
  long lVar1;
  undefined8 uVar2;
  RtObject *this_00;
  BurdockBatterFallProjectile *pBVar3;
  BurdockBatter_SubSystem *pBVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  wstring awStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_03638210(*(undefined8 *)(this + 0x10));
  uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
  std::string::string(asStack_28,"BurdockBatterFallProjectile");
  Sexy::ToWString(asStack_28);
  Sexy::RtName::RtName(aRStack_18,awStack_20);
  PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_30,uVar2,0xc,aRStack_18);
  Sexy::RtName::~RtName(aRStack_18);
  FUN_05476c50(awStack_20);
  std::string::~string(asStack_28);
  nop();
  uVar2 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)aRStack_30);
  this_00 = (RtObject *)Board::AddProjectile((Board *)0x0,0,0x44480000,uVar2,aRStack_18,0,0);
  pBVar3 = Sexy::RtObject::Cast<BurdockBatterFallProjectile>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  fVar5 = (float)FUN_03635bac(*(undefined4 *)(param_1 + 0xd8));
  fVar6 = (float)FUN_03635bc0(*(undefined4 *)(param_1 + 0x170),*(undefined4 *)(param_1 + 0x17c),
                              *(undefined4 *)(param_1 + 0x180),*(undefined4 *)(param_1 + 0x184));
  FUN_03635bb0(fVar5 * fVar6 * *(float *)(lVar1 + 0x2fc),pBVar3 + 0xd8);
  FUN_03635bb8(*(undefined4 *)(lVar1 + 0x300),pBVar3 + 0xdc);
  pBVar4 = Board::GetGameSubSystem<BurdockBatter_SubSystem>(*(Board **)(gLawnApp + 0x9f0));
  BurdockBatter_SubSystem::addHomerProjectile((Projectile *)pBVar4,param_1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBurdockBatter::captureProjectileForPlantfood(Projectile*) */

void __thiscall
PlantBurdockBatter::captureProjectileForPlantfood(PlantBurdockBatter *this,Projectile *param_1)

{
  BurdockBatter_SubSystem *this_00;
  
  if (param_1 != (Projectile *)0x0) {
    this_00 = Board::GetGameSubSystem<BurdockBatter_SubSystem>(*(Board **)(gLawnApp + 0x9f0));
    BurdockBatter_SubSystem::addCriticalProjectile(this_00,param_1);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBurdockBatter::toHitProjectile(std::vector<Projectile*, std::allocator<Projectile*> >) */

void __thiscall
PlantBurdockBatter::toHitProjectile
          (PlantBurdockBatter *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_03638210(*(undefined8 *)(this + 0x10));
  if (this[0x44] == (PlantBurdockBatter)0x0) {
    iVar3 = FUN_03635bd8(*(undefined8 *)(this + 0x10));
    if ((iVar3 < 5) ||
       (fVar6 = (float)PlantFramework::Rand((PlantFramework *)this,1.0),
       *(float *)(lVar4 + 0x2f8) <= fVar6)) {
      setState(this,0xb,0);
    }
    else {
      setState(this,0xe,0);
    }
    goto LAB_0363aa50;
  }
  if (this[0x45] == (PlantBurdockBatter)0x0) {
    fVar6 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
    fVar7 = (float)Plant::GetGeneSkillBoost(*(Plant **)(this + 0x10));
    if (fVar7 <= fVar6) goto LAB_0363a9b4;
    this[0x45] = (PlantBurdockBatter)0x1;
  }
  else {
LAB_0363a9b4:
    this[0x44] = (PlantBurdockBatter)0x0;
  }
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    setState(this,0xf);
  }
  else {
    setState(this,0x10,0);
  }
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(param_2);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(param_2);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_18,(__normal_iterator *)&local_10), bVar2) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    captureProjectileForPlantfood(this,(Projectile *)*puVar5);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_18);
  }
LAB_0363aa50:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBurdockBatter::buildValidPropsList() */

void __thiscall PlantBurdockBatter::buildValidPropsList(PlantBurdockBatter *this)

{
  long lVar1;
  undefined8 uVar2;
  string *psVar3;
  ulong uVar4;
  ulong uVar5;
  ResourceInfo *local_30;
  wstring awStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  RtName aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<ProjectilePropertySheet*,std::allocator<ProjectilePropertySheet*>>::clear
            ((vector<ProjectilePropertySheet*,std::allocator<ProjectilePropertySheet*>> *)
             (this + 0x28));
  lVar1 = FUN_03638210(*(undefined8 *)(this + 0x10));
  uVar5 = 0;
  while( true ) {
    uVar4 = FUN_03635be4(*(undefined8 *)(lVar1 + 0x2b8),*(undefined8 *)(lVar1 + 0x2c0));
    if (uVar4 <= uVar5) break;
    uVar2 = Sexy::LazySingleton<PVZDB>::GetInstance();
    psVar3 = (string *)FUN_03635bf0(*(undefined8 *)(lVar1 + 0x2b8),uVar5);
    Sexy::ToWString(psVar3);
    Sexy::RtName::RtName(aRStack_18,awStack_28);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar2,0xc,aRStack_18);
    local_30 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    Sexy::RtName::~RtName(aRStack_18);
    FUN_05476c50(awStack_28);
    std::vector<ProjectilePropertySheet*,std::allocator<ProjectilePropertySheet*>>::push_back
              ((vector<ProjectilePropertySheet*,std::allocator<ProjectilePropertySheet*>> *)
               (this + 0x28),(ProjectilePropertySheet **)&local_30);
    uVar5 = uVar5 + 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBurdockBatter::Initialize() */

void __thiscall PlantBurdockBatter::Initialize(PlantBurdockBatter *this)

{
  long lVar1;
  BurdockBatter_SubSystem *this_00;
  
  PlantFramework::Initialize((PlantFramework *)this);
  lVar1 = FUN_03638210(*(undefined8 *)(this + 0x10));
  buildValidPropsList(this);
  this_00 = Board::GetGameSubSystem<BurdockBatter_SubSystem>(*(Board **)(gLawnApp + 0x9f0));
  Effect_Whirlpool::SetSpeedOfScale((Effect_Whirlpool *)this_00,*(float *)(lVar1 + 0x304));
  setState(this,4,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBurdockBatter::getValidProjectiles(std::vector<Projectile*, std::allocator<Projectile*> >&,
   Sexy::TRect<int>, bool) */

void __thiscall
PlantBurdockBatter::getValidProjectiles
          (PlantBurdockBatter *this,vector<Projectile*,std::allocator<Projectile*>> *param_1,
          Insets *param_3,char param_4)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  ResourceInfo *this_01;
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 uVar8;
  float *extraout_x1;
  float *extraout_x1_00;
  float *extraout_x1_01;
  float *extraout_x1_02;
  float *extraout_x1_03;
  float *extraout_x1_04;
  undefined8 uVar9;
  ResourceInfo *local_60;
  undefined8 local_58;
  undefined8 local_50;
  Insets aIStack_48 [16];
  undefined8 local_38 [2];
  Iterator aIStack_28 [32];
  long local_8;
  
  uVar9 = 0;
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_48,param_3);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x28);
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x2b);
  do {
    bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar1) {
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar9);
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)local_38,(RtWeakPtrBase *)&local_50);
    local_60 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)local_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_38);
    Sexy::RtId::~RtId((RtId *)&local_50);
    iVar3 = FUN_03635ba0(*(undefined4 *)(local_60 + 0xa8));
    pfVar5 = extraout_x1;
    if (iVar3 == *(int *)(*(long *)(this + 0x10) + 0x110)) {
      Projectile::CalcCollisionRectBoardSpace();
      cVar2 = Sexy::TRect<int>::Intersects((TRect<int> *)local_38,(TRect *)aIStack_48);
      pfVar5 = extraout_x1_00;
      if ((cVar2 != '\0') &&
         (cVar2 = isValidProjectile(this,(Projectile *)local_60), this_01 = local_60,
         pfVar5 = extraout_x1_01, cVar2 != '\0')) {
        if (param_4 != '\0') {
          pfVar5 = (float *)Projectile::GetVelocity((Projectile *)local_60);
          pfVar6 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            **)(this + 0x10));
          pfVar7 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                           *)this_01);
          if (((*pfVar6 - *pfVar7) * *pfVar5 < 0.0) ||
             (cVar2 = isCapturableProjectile(this,(Projectile *)this_01), pfVar5 = extraout_x1_02,
             cVar2 == '\0')) goto LAB_0363afc8;
        }
        local_58 = Projectile::GetProps((Projectile *)local_60);
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
        uVar8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
        local_50 = std::
                   find<__gnu_cxx::__normal_iterator<ProjectilePropertySheet**,std::vector<ProjectilePropertySheet*,std::allocator<ProjectilePropertySheet*>>>,ProjectilePropertySheet_const*>
                             (uVar4,uVar8,&local_58);
        local_38[0] = std::
                      vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      ::end(this_00);
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)local_38);
        pfVar5 = extraout_x1_03;
        if (bVar1) {
          uVar9 = 1;
          std::vector<Projectile*,std::allocator<Projectile*>>::push_back
                    (param_1,(Projectile **)&local_60);
          pfVar5 = extraout_x1_04;
        }
      }
    }
LAB_0363afc8:
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,(int)pfVar5);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBurdockBatter::getValidZombies(std::vector<Zombie*, std::allocator<Zombie*> >&,
   Sexy::TRect<int>) */

void __thiscall
PlantBurdockBatter::getValidZombies
          (PlantBurdockBatter *this,vector<Zombie*,std::allocator<Zombie*>> *param_1,Insets *param_3
          )

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  undefined8 uVar6;
  ResourceInfo *local_58;
  RtId aRStack_50 [8];
  Insets aIStack_48 [16];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [16];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Insets::Insets(aIStack_48,param_3);
  uVar4 = Sexy::LazySingleton<PVZDB>::GetInstance();
  uVar6 = 0;
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar4,0x29);
  while (bVar1 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar1) {
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_50);
    local_58 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_38);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtId::~RtId(aRStack_50);
    iVar3 = SharkMinion::getRow((SharkMinion *)local_58);
    iVar5 = extraout_w1;
    if (iVar3 == *(int *)(*(long *)(this + 0x10) + 0x110)) {
      (**(code **)(*(long *)local_58 + 0xb0))(aRStack_38,local_58);
      cVar2 = Sexy::TRect<int>::Intersects((TRect<int> *)aRStack_38,(TRect *)aIStack_48);
      iVar5 = extraout_w1_00;
      if ((cVar2 != '\0') &&
         (cVar2 = PlantSunBeanSubSystem::CanZombieSpewSun
                            ((PlantSunBeanSubSystem *)this,(Zombie *)local_58),
         iVar5 = extraout_w1_01, cVar2 != '\0')) {
        uVar6 = 1;
        std::vector<Zombie*,std::allocator<Zombie*>>::push_back(param_1,(Zombie **)&local_58);
        iVar5 = extraout_w1_02;
      }
    }
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar5);
  }
  Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBurdockBatter::getValidBoareEntities(std::vector<BoardEntity*, std::allocator<BoardEntity*>
   >&, Sexy::TRect<int>) */

void __thiscall
PlantBurdockBatter::getValidBoareEntities
          (PlantBurdockBatter *this,vector<BoardEntity*,std::allocator<BoardEntity*>> *param_1,
          Insets *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long *plVar6;
  Zombie *this_00;
  GridItem *pGVar7;
  byte bVar8;
  byte bVar9;
  RtObject *local_48;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  bVar8 = 0;
  local_8 = ___stack_chk_guard;
  bVar9 = 0;
  Sexy::Insets::Insets(aIStack_30,param_3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar3 = operator|(2,4);
  uVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  uVar5 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  EntityFinder::GetEntitiesTouchingRectangle(avStack_20,uVar3,aIStack_30,uVar4,uVar5);
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
    plVar6 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    local_48 = (RtObject *)*plVar6;
    if ((local_48 != (RtObject *)0x0) &&
       (cVar2 = RealObject::IsOnOpposingTeam(local_48,1), cVar2 != '\0')) {
      this_00 = Sexy::RtObject::Cast<Zombie>(local_48);
      pGVar7 = Sexy::RtObject::Cast<GridItem>(local_48);
      if ((this_00 == (Zombie *)0x0) || (cVar2 = Zombie::IsTargetable(this_00), cVar2 == '\0')) {
        if ((pGVar7 != (GridItem *)0x0) &&
           (cVar2 = (**(code **)(*(long *)pGVar7 + 0x200))(pGVar7), cVar2 != '\0')) {
          bVar8 = 1;
        }
      }
      else {
        bVar9 = 1;
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                (param_1,(BoardEntity **)&local_48);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar9 | bVar8);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBurdockBatter::scanBattleField() */

void __thiscall PlantBurdockBatter::scanBattleField(PlantBurdockBatter *this)

{
  char cVar1;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_68 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Projectile*,std::allocator<Projectile*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_68);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  getHitRect(this);
  cVar1 = getValidProjectiles(this,avStack_68,avStack_20,1);
  if (cVar1 == '\0') {
    getHitRect(this);
    cVar1 = getValidBoareEntities(this,avStack_38,avStack_20);
    if (cVar1 != '\0') {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20,
                 (vector *)avStack_38);
      toHitBoardEntities(this,avStack_20);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
    }
  }
  else {
    std::vector<Projectile*,std::allocator<Projectile*>>::vector(avStack_20,(vector *)avStack_68);
    toHitProjectile(this,avStack_20);
    std::vector<Projectile*,std::allocator<Projectile*>>::~vector(avStack_20);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_50);
  std::vector<Projectile*,std::allocator<Projectile*>>::~vector
            ((vector<Projectile*,std::allocator<Projectile*>> *)avStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBurdockBatter::UpdateActions() */

void __thiscall PlantBurdockBatter::UpdateActions(PlantBurdockBatter *this)

{
  float fVar1;
  
  if (*(int *)(*(long *)(this + 0x10) + 200) == 4) {
    scanBattleField(this);
    return;
  }
  if ((*(int *)(*(long *)(this + 0x10) + 200) == 0x11) &&
     (fVar1 = (float)PVZ_T(), *(float *)(this + 0x40) < fVar1)) {
    setState(this,4,0);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBurdockBatter::attackBoardEntity(BoardEntity*) */

void __thiscall PlantBurdockBatter::attackBoardEntity(PlantBurdockBatter *this,BoardEntity *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  Zombie *this_00;
  GridItem *pGVar4;
  undefined8 *puVar5;
  ZombieTosserSubSystem *pZVar6;
  float fVar7;
  float fVar8;
  undefined8 local_c0;
  undefined4 local_b8;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b0 [72];
  Plant *local_68;
  float local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar3 = FUN_03638210(*(undefined8 *)(this + 0x10));
  if (param_1 != (BoardEntity *)0x0) {
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if (this_00 == (Zombie *)0x0) {
      pGVar4 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1);
      if ((pGVar4 != (GridItem *)0x0) &&
         (cVar1 = (**(code **)(*(long *)pGVar4 + 0x200))(), cVar1 != '\0')) {
        DamageInfo::DamageInfo((DamageInfo *)&local_68);
        fVar7 = *(float *)(lVar3 + 0x2f0);
        local_60 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
        local_68 = *(Plant **)(this + 0x10);
        local_60 = local_60 * fVar7;
        if (*(int *)(local_68 + 200) == 0xe) {
          local_60 = local_60 * *(float *)(lVar3 + 0x2fc);
        }
        else if (*(int *)(local_68 + 200) - 0xfU < 2) {
          fVar7 = *(float *)(lVar3 + 0x308);
          local_60 = (float)Plant::GetTotalDamageRate(local_68);
          local_60 = local_60 * fVar7;
        }
        (**(code **)(*(long *)pGVar4 + 0x110))(pGVar4,(DamageInfo *)&local_68);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      }
    }
    else {
      DamageInfo::DamageInfo((DamageInfo *)&local_68);
      fVar8 = *(float *)(lVar3 + 0x2f0);
      fVar7 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
      local_60 = (float)Plant::GetDamageConstValue(*(Plant **)(this + 0x10));
      local_60 = local_60 + fVar8 * fVar7;
      local_68 = *(Plant **)(this + 0x10);
      switch(*(undefined4 *)(local_68 + 200)) {
      case 0xb:
      case 0xc:
      case 0xd:
        cVar1 = Zombie::CanBeLaunchedByPlants(this_00);
        if ((cVar1 != '\0') &&
           ((iVar2 = Zombie::GetSizeType(this_00), iVar2 == 0 ||
            (iVar2 = Zombie::GetSizeType(this_00), iVar2 == 1)))) {
          puVar5 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)this_00);
          local_c0 = *puVar5;
          local_b8 = *(undefined4 *)(puVar5 + 1);
          fVar7 = *(float *)(lVar3 + 0x2f4);
          iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
          local_c0 = CONCAT44(local_c0._4_4_,(float)local_c0 + fVar7 * (float)iVar2);
          pZVar6 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b0);
          ZombieTosserSubSystem::LaunchZombie
                    ((ZombieTosserSubSystem *)0x41200000,0x3f000000,pZVar6,this_00,&local_c0,
                     aRStack_b0,0);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_b0);
        }
        (**(code **)(*(long *)this_00 + 0x110))(this_00,(DamageInfo *)&local_68);
        break;
      case 0xe:
        DamageInfo::AddCondition((DamageInfo *)0x40400000,(DamageInfo *)&local_68,2);
        local_60 = *(float *)(lVar3 + 0x2fc) * local_60;
        (**(code **)(*(long *)this_00 + 0x110))(this_00,(DamageInfo *)&local_68);
        break;
      case 0xf:
      case 0x10:
        cVar1 = Zombie::CanBeLaunchedByPlants(this_00);
        if ((cVar1 != '\0') &&
           ((iVar2 = Zombie::GetSizeType(this_00), iVar2 == 0 ||
            (iVar2 = Zombie::GetSizeType(this_00), iVar2 == 1)))) {
          iVar2 = PlantFramework::Rand((PlantFramework *)this,600);
          EATextSquish::Vec3::Vec3((Vec3 *)&local_c0,1000.0,(float)iVar2,0.0);
          Zombie::FlickOff(this_00,(SexyVector3 *)&local_c0);
        }
                    /* WARNING: Load size is inaccurate */
        DamageInfo::AddCondition(*(DamageInfo **)(lVar3 + 0x30c),(DamageInfo *)&local_68,2);
        fVar7 = *(float *)(lVar3 + 0x308);
        local_60 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
        local_60 = local_60 * fVar7;
        (**(code **)(*(long *)this_00 + 0x110))(this_00,(DamageInfo *)&local_68);
      }
      DamageInfo::~DamageInfo((DamageInfo *)&local_68);
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBurdockBatter::getParabolicTargetPosition(Projectile*) */

void PlantBurdockBatter::getParabolicTargetPosition(Projectile *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  Zombie *this;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  TRect *extraout_x1;
  long lVar11;
  long lVar12;
  undefined4 in_s1;
  undefined4 in_s2;
  DVec3 aDStack_60 [16];
  float local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined1 auStack_40 [16];
  undefined8 local_30;
  undefined4 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3(aDStack_60);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(param_1 + 0x10));
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(param_1 + 0x10));
  iVar5 = BoardConstants::NUMBER_OF_COLUMNS();
  iVar6 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(param_1 + 0x10));
  Sexy::Insets::Insets((Insets *)&local_30,iVar3 + 1,iVar4,(iVar5 - iVar6) + -1,1);
  BoardTransforms::GridRectToBoardSpaceRect((BoardTransforms *)&local_30,extraout_x1);
  EntityFinder::GetEntitiesInRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,2,auStack_40
            );
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
  uVar9 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_20);
  BoardEntity::CalcGridPosition();
  EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
            ((BoardEntitySorter_ClosestByColumn *)&local_30,(DVec3 *)&local_50);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
            (uVar8,uVar9,(Insets *)&local_30);
  uVar8 = local_20;
  iVar3 = FUN_03635bf8(local_20,local_18);
  uVar1 = iVar3 - 1;
  if (-1 < (int)uVar1) {
    lVar12 = (long)(int)uVar1;
    lVar11 = lVar12 + -1;
    do {
      puVar10 = (undefined8 *)FUN_03635c04(uVar8,lVar12);
      this = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar10);
      if (this != (Zombie *)0x0) {
        uVar7 = operator|(1,8);
        cVar2 = Zombie::MatchesAny(this,uVar7);
        if ((cVar2 == '\0') &&
           (cVar2 = RealObject::IsOnOpposingTeam
                              ((RealObject *)this,*(RealObject **)(param_1 + 0x10)), cVar2 != '\0'))
        {
          uVar7 = (**(code **)(*(long *)this + 0x3b0))(0,this);
          local_30 = CONCAT44(in_s1,uVar7);
          local_28 = in_s2;
          goto LAB_0363bb84;
        }
      }
      lVar12 = lVar12 + -1;
      uVar8 = local_20;
    } while (lVar12 != lVar11 - (ulong)uVar1);
  }
  EntityFinder::GetEntitiesInRectangle
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,4,auStack_40
            );
  uVar8 = local_20;
  iVar3 = FUN_03635bf8(local_20,local_18);
  uVar1 = iVar3 - 1;
  if ((int)uVar1 < 0) {
LAB_0363bbc4:
    DVec3::DVec3((DVec3 *)&local_50);
    iVar3 = BoardConstants::GRIDSQUARE_WIDTH();
    iVar4 = BoardConstants::NUMBER_OF_COLUMNS();
    local_50 = (float)(iVar3 * iVar4 + 200);
    lVar11 = std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             **)(param_1 + 0x10));
    uStack_4c = *(undefined4 *)(lVar11 + 4);
    local_28 = 0;
    local_30 = CONCAT44(uStack_4c,local_50);
    local_48 = 0;
  }
  else {
    lVar12 = (long)(int)uVar1;
    lVar11 = lVar12 + -1;
    puVar10 = (undefined8 *)FUN_03635c04(uVar8,lVar12);
    this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
               *)Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar10);
    if (this_00 !=
        (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         *)0x0) goto LAB_0363bb58;
    do {
      do {
        lVar12 = lVar12 + -1;
        if (lVar12 == lVar11 - (ulong)uVar1) goto LAB_0363bbc4;
        puVar10 = (undefined8 *)FUN_03635c04(local_20,lVar12);
        this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   *)Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar10);
      } while (this_00 ==
               (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                *)0x0);
LAB_0363bb58:
      cVar2 = (**(code **)(*(long *)this_00 + 0x200))();
    } while (cVar2 == '\0');
    puVar10 = (undefined8 *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost(this_00);
    local_30 = *puVar10;
    local_28 = *(undefined4 *)(puVar10 + 1);
  }
LAB_0363bb84:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail((undefined4)local_30,local_30._4_4_,local_28);
  }
  return;
}


/* PlantBurdockBatter::enhanceParabolicToProjectile(Projectile*) */

void PlantBurdockBatter::enhanceParabolicToProjectile(Projectile *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x1;
  float fVar5;
  float fVar6;
  undefined4 in_s1;
  undefined4 in_s2;
  float fVar7;
  
  lVar3 = FUN_03638210(*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_03635b3c(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x24));
  FUN_03635b40(in_x1 + 0x24,uVar1);
  fVar5 = (float)getParabolicTargetPosition(param_1);
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x1);
  fVar6 = *pfVar4;
  pfVar4 = (float *)Projectile::GetVelocity((Projectile *)in_x1);
  fVar7 = *pfVar4;
  uVar1 = *(undefined4 *)(lVar3 + 0x2e4);
  iVar2 = FUN_03635bd8(*(undefined8 *)(param_1 + 0x10));
  if (iVar2 < 3) {
    if (iVar2 == 2) {
      uVar1 = *(undefined4 *)(lVar3 + 0x2e8);
    }
  }
  else {
    uVar1 = *(undefined4 *)(lVar3 + 0x2ec);
  }
  Board::GetGameSubSystem<BurdockBatter_SubSystem>(*(Board **)(gLawnApp + 0x9f0));
  BurdockBatter_SubSystem::addParabolicProjectile
            (uVar1,fVar5,in_s1,in_s2,0x43fa0000,ABS((fVar5 - fVar6) / fVar7));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBurdockBatter::doHit() */

void __thiscall PlantBurdockBatter::doHit(PlantBurdockBatter *this)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  Projectile *pPVar4;
  char *__s;
  RealObject *this_00;
  float fVar5;
  undefined8 local_68;
  undefined8 local_60 [2];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_03638210(*(undefined8 *)(this + 0x10));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  getHitRect(this);
  getValidProjectiles(this,avStack_50,(string *)local_60,0);
  getHitRect(this);
  getValidBoareEntities(this,avStack_20,(string *)local_60);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_50);
  local_60[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_50);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)local_60);
  if (bVar2) {
    do {
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68)
      ;
      pPVar4 = (Projectile *)*puVar3;
      switch(*(undefined4 *)(*(long *)(this + 0x10) + 200)) {
      case 0xb:
      case 0xd:
        fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,1.0);
        if (0.5 <= fVar5) goto LAB_0363bf38;
        enhanceStraightToProjectile(this,pPVar4);
        break;
      case 0xc:
LAB_0363bf38:
        enhanceParabolicToProjectile((Projectile *)this);
        break;
      case 0xe:
        enhanceHomerToProjectile(this,pPVar4);
        addHomerTriggerEffect(this);
        break;
      case 0xf:
        enhancePlantfoodToProjectile(this,pPVar4);
        break;
      case 0x10:
        enhanceAvatarToProjectile(this,pPVar4);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)local_60);
    } while (bVar2);
  }
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_60[0] = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)avStack_20);
  while (bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)local_60)
        , bVar2) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_68);
    attackBoardEntity(this,(BoardEntity *)*puVar3);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_68);
  }
  this_00 = *(RealObject **)(this + 0x10);
  iVar1 = *(int *)(this_00 + 200);
  if (iVar1 - 0xbU < 3) {
    __s = "Play_Plant_Hammerflower_Stabbing";
  }
  else if (iVar1 == 0xe) {
    __s = "byttneriameteorhammer_attack_normal";
  }
  else {
    if (1 < iVar1 - 0xfU) goto LAB_0363bea4;
    __s = "Play_Plant_Hammerflower_Striking";
  }
  std::string::string((string *)local_60,__s);
  RealObject::PlayPositionalSound(this_00,(string *)local_60,0.0);
  std::string::~string((string *)local_60);
  nop();
LAB_0363bea4:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_38);
  std::vector<Projectile*,std::allocator<Projectile*>>::~vector
            ((vector<Projectile*,std::allocator<Projectile*>> *)avStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBurdockBatter::OnAnimCommand(std::string const&, std::string const&) */

void PlantBurdockBatter::OnAnimCommand(string *param_1,string *param_2)

{
  uint uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FUN_036382f0(*(undefined8 *)(param_1 + 0x10));
  FUN_03635f04(asStack_10);
  uVar1 = std::operator==(param_2,asStack_10);
  std::string::~string(asStack_10);
  if ((uVar1 & 0xff) != 0) {
    doHit((PlantBurdockBatter *)param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

