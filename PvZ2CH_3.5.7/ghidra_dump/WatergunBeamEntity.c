// Class: WatergunBeamEntity


/* WatergunBeamEntity::getAngleForVector(Sexy::SexyVector2 const&) */

float __thiscall
WatergunBeamEntity::getAngleForVector(WatergunBeamEntity *this,SexyVector2 *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = *(float *)param_1;
  fVar1 = atanf(-*(float *)(param_1 + 4) / fVar2);
  if (fVar2 < 0.0) {
    fVar1 = fVar1 + 3.1415927;
  }
  return fVar1;
}


/* WatergunBeamEntity::CanShowWatergun(bool) */

void __thiscall WatergunBeamEntity::CanShowWatergun(WatergunBeamEntity *this,bool param_1)

{
  this[0xe8] = (WatergunBeamEntity)param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WatergunBeamEntity::drawLaserFromToScreenSpace(Sexy::Graphics*, Sexy::SexyVector2 const&,
   Sexy::SexyVector2 const&, Sexy::SexyVector2 const&, Sexy::SexyVector2 const&, Effect_PopAnim*) */

void WatergunBeamEntity::drawLaserFromToScreenSpace
               (Graphics *param_1,SexyVector2 *param_2,SexyVector2 *param_3,SexyVector2 *param_4,
               SexyVector2 *param_5,Effect_PopAnim *param_6)

{
  PopAnimRig *this;
  undefined1 uVar1;
  UIWidget *in_x6;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 local_40 [2];
  undefined4 local_38 [2];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  uVar1 = SUB81(param_5,0);
  local_8 = ___stack_chk_guard;
  local_40[0] = Sexy::SexyVector2::operator-(param_4,param_3);
  fVar2 = (float)DVec2::getLength((DVec2 *)local_40);
  local_38[0] = Sexy::SexyVector2::operator-((SexyVector2 *)param_6,param_5);
  fVar3 = (float)DVec2::getLength((DVec2 *)local_38);
  fVar4 = (float)getAngleForVector((WatergunBeamEntity *)param_1,(SexyVector2 *)local_40);
  Sexy::FastCurve::SetOutRange((FastCurve *)local_38,fVar2 / fVar3,1.0);
  Sexy::SexyTransform2D::CreateTransformWithPivot
            ((SexyTransform2D *)param_3,(SexyVector2 *)local_38,fVar4,param_5,(SexyVector2 *)0x1,
             (bool)uVar1);
  this = (PopAnimRig *)UIWidget::GetAtlasImage(in_x6);
  PopAnimRig::SetRenderTransform(this,aSStack_30);
  StandaloneEffect::SetVisibility((StandaloneEffect *)in_x6,true);
  StandaloneEffect::Draw((StandaloneEffect *)in_x6,(Graphics *)param_2);
  StandaloneEffect::SetVisibility((StandaloneEffect *)in_x6,false);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WatergunBeamEntity::StaticClassInit() */

void WatergunBeamEntity::StaticClassInit(void)

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
    std::string::string(asStack_10,"WatergunBeamEntity");
    (*pcVar2)(plVar1,asStack_10,FUN_04caf5f0,0x168,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WatergunBeamEntity::StaticGetClass() */

long * WatergunBeamEntity::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"WatergunBeamEntity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WatergunBeamEntity::GetClass() const */

long * WatergunBeamEntity::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"WatergunBeamEntity",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WatergunBeamEntity::InitParams(WatergunBeamParams) */

void __thiscall WatergunBeamEntity::InitParams(WatergunBeamEntity *this,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar7 = BoardConstants::GRIDSQUARE_WIDTH();
  fVar8 = (float)iVar7;
  fVar9 = param_2[1];
  fVar10 = param_2[3];
  fVar1 = param_2[2];
  fVar2 = param_2[4];
  fVar3 = param_2[5];
  fVar4 = param_2[6];
  fVar5 = param_2[7];
  fVar6 = param_2[8];
  *(float *)(this + 0x120) = fVar8 * *param_2;
  *(float *)(this + 0x124) = fVar8 * fVar9;
  *(float *)(this + 0x128) = fVar1;
  *(float *)(this + 300) = fVar8 * fVar10;
  *(float *)(this + 0x130) = fVar2;
  *(float *)(this + 0x134) = fVar3;
  *(float *)(this + 0x138) = fVar4;
  *(float *)(this + 0x13c) = fVar5;
  *(float *)(this + 0x140) = fVar6;
  return;
}


/* WatergunBeamEntity::BuffZombie(Zombie*) */

void __thiscall WatergunBeamEntity::BuffZombie(WatergunBeamEntity *this,Zombie *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = Zombie::HasCondition(param_1,0x74);
  if (cVar1 != '\0') {
    return;
  }
  uVar2 = Zombie::GetConditionTracker(param_1);
                    /* WARNING: Load size is inaccurate */
  ZombieConditionTracker::SetAdditionalValue(*(ZombieConditionTracker **)(this + 0x134),uVar2,0x74);
  uVar2 = Zombie::GetConditionTracker(param_1);
                    /* WARNING: Load size is inaccurate */
  ZombieConditionTracker::SetExtraAdditionalValue
            (*(ZombieConditionTracker **)(this + 0x138),uVar2,0x74);
                    /* WARNING: Load size is inaccurate */
  Zombie::ApplyCondition(*(Zombie **)(this + 0x130),0,param_1,0x74,1);
  return;
}


/* WatergunBeamEntity::BuffPlant(Plant*) */

void __thiscall WatergunBeamEntity::BuffPlant(WatergunBeamEntity *this,Plant *param_1)

{
  if (param_1 != (Plant *)0x0) {
    Plant::ApplyCondition(*(undefined4 *)(this + 0x13c),0,param_1,0x1f);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WatergunBeamEntity::boardToScreenSpace(Sexy::SexyVector3 const&) */

void __thiscall
WatergunBeamEntity::boardToScreenSpace(WatergunBeamEntity *this,SexyVector3 *param_1)

{
  float fVar1;
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange
            (local_10,*(float *)param_1,*(float *)(param_1 + 4) - *(float *)(param_1 + 8));
  fVar1 = (float)FUN_04cab600(0x3f800000);
  Sexy::SexyVector2::operator*=((SexyVector2 *)local_10,fVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WatergunBeamEntity::artPointToScreenPoint(Sexy::Point const&) */

void __thiscall WatergunBeamEntity::artPointToScreenPoint(WatergunBeamEntity *this,Point *param_1)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  FastCurve aFStack_10 [8];
  long local_8;
  
  fVar3 = (float)*(int *)(param_1 + 4);
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange(aFStack_10,(float)*(int *)param_1,fVar3);
  fVar1 = (float)FUN_04cab600(0x3f800000);
  uVar2 = Sexy::SexyVector2::operator*((SexyVector2 *)aFStack_10,fVar1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,fVar3);
}


/* WatergunBeamEntity::CalcBeamCollisionRect() */

void WatergunBeamEntity::CalcBeamCollisionRect(void)

{
  int iVar1;
  int iVar2;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar3;
  Insets *in_x8;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = 0.0;
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    fVar6 = 20.0;
  }
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  fVar5 = *pfVar3;
  fVar4 = pfVar3[1];
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  iVar2 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Insets::Insets
            (in_x8,(int)fVar5,(int)((fVar4 - fVar6) - (float)(int)((float)iVar1 * 0.7)),
             (int)(float)(int)(*(float *)(in_x0 + 200) - fVar5),(int)(float)iVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WatergunBeamEntity::DrawCollisionInfo(Sexy::Graphics*) */

void __thiscall WatergunBeamEntity::DrawCollisionInfo(WatergunBeamEntity *this,Graphics *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  CalcBeamCollisionRect();
  Sexy::Color::Color(aCStack_18,0,0xff,0);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  fVar3 = *(float *)(param_1 + 0x20);
  iVar1 = FUN_04cab5ec(local_28);
  fVar4 = *(float *)(param_1 + 0x18);
  fVar5 = *(float *)(param_1 + 0x24);
  local_28 = (int)((float)(int)(((float)iVar1 - fVar3) * fVar4) + fVar3);
  iVar1 = FUN_04cab5ec(local_24);
  fVar3 = *(float *)(param_1 + 0x1c);
  local_24 = (int)((float)(int)(((float)iVar1 - fVar5) * fVar3) + fVar5);
  iVar1 = FUN_04cab5ec(local_20);
  local_20 = (int)((float)iVar1 * fVar4);
  iVar1 = FUN_04cab5ec(local_1c);
  local_1c = (int)((float)iVar1 * fVar3);
  Sexy::Graphics::DrawRect(param_1,(TRect *)&local_28);
  Sexy::Color::Color(aCStack_18,0xff,0,0xff);
  Sexy::Graphics::SetColor(param_1,aCStack_18);
  puVar2 = (undefined4 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  fVar3 = (float)FUN_04cab600(*puVar2);
  fVar4 = (float)FUN_04cab600((float)puVar2[1] - (float)puVar2[2]);
  Sexy::Graphics::FillRect(param_1,(int)(fVar3 - 4.0),(int)(fVar4 - 4.0),8,8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WatergunBeamEntity::CreateWatergunRig() */

void __thiscall WatergunBeamEntity::CreateWatergunRig(WatergunBeamEntity *this)

{
  RtWeakPtr<SpartanBambooMatrixSystem> *this_00;
  int iVar1;
  Effect_PopAnim *pEVar2;
  StandaloneEffect *this_01;
  int local_30;
  int local_2c;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = Board::MakeRenderOrder(0x64960,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1,0);
  BoardEntity::CalcGridPosition();
  this_00 = (RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xe0);
  BoardTransforms::GridToBoardSpace((Point *)&local_18);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)&local_18,(float)(local_30 + -0x78),(float)(local_2c + -0x78),0.0);
  std::string::string(asStack_28,"POPANIM_EFFECTS_ARTIFACT_WATERGUN_ENTITY");
  PopAnimEffectFactory::CreateEffect(aRStack_20,local_18,local_14,local_10,asStack_28,iVar1 + 1,0,0)
  ;
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=(this_00,(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  std::string::string((string *)aRStack_20,"attack");
  Effect_PopAnim::PlaySingleAnimation(pEVar2,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
  this_01 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  StandaloneEffect::SetKeepAlive(this_01,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WatergunBeamEntity::CalcCurrentPushDelta() */

float __thiscall WatergunBeamEntity::CalcCurrentPushDelta(WatergunBeamEntity *this)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if (*(int *)(this + 0xa4) == 2) {
    fVar4 = *(float *)(this + 0x124);
    fVar5 = (float)PVZ_Dt();
    fVar5 = fVar5 * -fVar4;
  }
  else {
    iVar1 = FUN_04cab074(*(undefined8 *)(this + 0xf0),*(undefined8 *)(this + 0xf8));
    if (iVar1 == 0) {
      fVar4 = *(float *)(this + 0x124);
      fVar5 = (float)PVZ_Dt();
      return fVar5 * fVar4;
    }
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)(this + 0xf0));
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0xf0));
    iVar1 = thunk_FUN_04cacc6c(uVar2,uVar3);
    fVar4 = (float)ClampFloat(*(float *)(this + 0x120) - *(float *)(this + 300) * (float)iVar1,0.0,
                              9999.0);
    fVar5 = (float)PVZ_Dt();
    fVar5 = fVar5 * fVar4;
  }
  return fVar5;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WatergunBeamEntity::PushZombie(Zombie*) */

void __thiscall WatergunBeamEntity::PushZombie(WatergunBeamEntity *this,Zombie *param_1)

{
  undefined8 *puVar1;
  float fVar2;
  undefined8 local_18;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Zombie *)0x0) {
    puVar1 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    local_18 = *puVar1;
    local_10 = *(undefined4 *)(puVar1 + 1);
    fVar2 = (float)CalcCurrentPushDelta(this);
    local_18 = CONCAT44(local_18._4_4_,fVar2 + (float)local_18);
    (**(code **)(*(long *)param_1 + 0x78))(param_1,&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WatergunBeamEntity::DrawBeamRig(Sexy::Graphics*) */

void __thiscall WatergunBeamEntity::DrawBeamRig(WatergunBeamEntity *this,Graphics *param_1)

{
  SexyVector3 *pSVar1;
  float fVar2;
  GraphicsAutoState aGStack_58 [8];
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  float fStack_44;
  undefined4 local_40;
  float local_3c;
  float local_38 [2];
  float local_30;
  DVec3 aDStack_28 [16];
  undefined4 local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_58,param_1);
  DVec3::DVec3((DVec3 *)local_38);
  DVec3::DVec3(aDStack_28);
  if (*(int *)(this + 0xa4) != 0) {
    pSVar1 = (SexyVector3 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)this);
    Sexy::SexyVector3::operator=((SexyVector3 *)local_38,pSVar1);
    fVar2 = *(float *)(this + 0xcc);
    local_38[0] = (float)*(int *)(this + 0x144) + local_38[0];
    local_30 = local_30 - (float)*(int *)(this + 0x148);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,*(float *)(this + 200),fVar2,0.0);
    Sexy::SexyVector3::operator=((SexyVector3 *)aDStack_28,(SexyVector3 *)&local_18);
    ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
              ((ResistenceValueInfo *)&local_50);
    if (*(int *)(this + 0xa4) == 1) {
      local_50 = boardToScreenSpace(this,(SexyVector3 *)local_38);
      local_4c = fVar2;
    }
    else if (*(int *)(this + 0xa4) == 2) {
      fVar2 = *(float *)(this + 0xc4);
      EATextSquish::Vec3::Vec3((Vec3 *)&local_18,*(float *)(this + 0xc0),fVar2,0.0);
      local_50 = boardToScreenSpace(this,(SexyVector3 *)&local_18);
      local_4c = fVar2;
    }
    local_48 = boardToScreenSpace(this,(SexyVector3 *)aDStack_28);
    fStack_44 = fVar2;
    local_40 = artPointToScreenPoint(this,(Point *)(this + 0x14c));
    local_3c = fVar2;
    local_18 = artPointToScreenPoint(this,(Point *)(this + 0x154));
    local_14 = fVar2;
    Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0xd0));
    drawLaserFromToScreenSpace
              ((Graphics *)this,(SexyVector2 *)param_1,(SexyVector2 *)&local_50,
               (SexyVector2 *)&local_48,(SexyVector2 *)&local_40,(Effect_PopAnim *)&local_18);
    *(undefined8 *)(this + 0xb0) = *(undefined8 *)(this + 0xa8);
    *(ulong *)(this + 0xa8) = CONCAT44(fStack_44,local_48);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WatergunBeamEntity::FindBeamCollisionTargets(BoardEntityTypeFlag) */

void WatergunBeamEntity::FindBeamCollisionTargets
               (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *param_1,
               undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(param_1);
  CalcBeamCollisionRect();
  EntityFinder::GetEntitiesInRectangle(param_1,param_3,auStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WatergunBeamEntity::WatergunBeamEntity() */

void __thiscall WatergunBeamEntity::WatergunBeamEntity(WatergunBeamEntity *this)

{
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_06998780;
  *(undefined ***)(this + 0x10) = &PTR__WatergunBeamEntity_06998968;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xa8));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xb0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xb8));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xc0));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 200));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xd8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xe0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x108));
  Sexy::Point::Point((Point *)(this + 0x144));
  Sexy::Point::Point((Point *)(this + 0x14c));
  Sexy::Point::Point((Point *)(this + 0x154));
  Sexy::Point::Point((Point *)(this + 0x15c));
  return;
}


/* WatergunBeamEntity::StaticNew() */

WatergunBeamEntity * WatergunBeamEntity::StaticNew(void)

{
  WatergunBeamEntity *this;
  
  this = ::operator_new(0x168);
  WatergunBeamEntity(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WatergunBeamEntity::DrawHitRig(Sexy::Graphics*) */

void WatergunBeamEntity::DrawHitRig(Graphics *param_1)

{
  char cVar1;
  StandaloneEffect *pSVar2;
  UIWidget *this;
  PopAnimRig *this_00;
  float fVar3;
  undefined4 local_40 [2];
  FastCurve aFStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::empty
                    ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                     (param_1 + 0xf0));
  if ((cVar1 == '\0') && (*(int *)(param_1 + 0xa4) == 1)) {
    fVar3 = (float)FUN_04cab600(0x3f800000);
    local_40[0] = Sexy::SexyVector2::operator*((SexyVector2 *)(param_1 + 200),fVar3);
    Sexy::FastCurve::SetOutRange
              (aFStack_38,(float)*(int *)(param_1 + 0x15c),(float)*(int *)(param_1 + 0x160));
    fVar3 = (float)FUN_04cab600(0x3f800000);
    Sexy::SexyVector2::operator*=((SexyVector2 *)aFStack_38,fVar3);
    pSVar2 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xd8));
    StandaloneEffect::SetVisibility(pSVar2,true);
    Sexy::SexyTransform2D::CreateTransformWithPivot
              ((SexyVector2 *)local_40,0.0,1.0,(SexyVector2 *)aFStack_38,true);
    this = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xd8));
    this_00 = (PopAnimRig *)UIWidget::GetAtlasImage(this);
    PopAnimRig::SetRenderTransform(this_00,aSStack_30);
  }
  else {
    pSVar2 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xd8));
    StandaloneEffect::SetVisibility(pSVar2,false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WatergunBeamEntity::onDraw(Sexy::Graphics*) */

void __thiscall WatergunBeamEntity::onDraw(WatergunBeamEntity *this,Graphics *param_1)

{
  DrawBeamRig(this,param_1);
  DrawHitRig((Graphics *)this);
  return;
}


/* WatergunBeamEntity::~WatergunBeamEntity() */

void __thiscall WatergunBeamEntity::~WatergunBeamEntity(WatergunBeamEntity *this)

{
  RtWeakPtr *this_00;
  RtWeakPtr *this_01;
  RtWeakPtr *this_02;
  bool bVar1;
  long *plVar2;
  
  this_00 = (RtWeakPtr *)(this + 0xd0);
  *(undefined ***)this = &PTR_GetClass_06998780;
  *(undefined ***)(this + 0x10) = &PTR__WatergunBeamEntity_06998968;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  this_01 = (RtWeakPtr *)(this + 0xd8);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar2 + 0x48))();
  }
  this_02 = (RtWeakPtr *)(this + 0xe0);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_02);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
    (**(code **)(*plVar2 + 0x48))();
  }
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x108)
            );
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0xf0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_02);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to WatergunBeamEntity::~WatergunBeamEntity() */

void __thiscall WatergunBeamEntity::~WatergunBeamEntity(WatergunBeamEntity *this)

{
  ~WatergunBeamEntity(this + -0x10);
  return;
}


/* WatergunBeamEntity::~WatergunBeamEntity() */

void __thiscall WatergunBeamEntity::~WatergunBeamEntity(WatergunBeamEntity *this)

{
  ~WatergunBeamEntity(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WatergunBeamEntity::~WatergunBeamEntity() */

void __thiscall WatergunBeamEntity::~WatergunBeamEntity(WatergunBeamEntity *this)

{
  ~WatergunBeamEntity(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WatergunBeamEntity::onInitialized() */

void __thiscall WatergunBeamEntity::onInitialized(WatergunBeamEntity *this)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  Effect_PopAnim *pEVar4;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  BoardEntity::onInitialized((BoardEntity *)this);
  *(undefined4 *)(this + 0xa4) = 0;
  pEVar4._0_4_ = (Effect_PopAnim *)PVZ_EOT();
                    /* WARNING: Store size is inaccurate */
  *(Effect_PopAnim **)(this + 0xec) = pEVar4._0_4_;
  iVar2 = Board::MakeRenderOrder(0x64960,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1,0);
  std::string::string(asStack_28,"POPANIM_EFFECTS_LOTUSSHOOTER_LVL5_BEAM");
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,0.0,0.0,0.0);
  PopAnimEffectFactory::CreateEffect(aRStack_20,local_18,uStack_14,local_10,asStack_28,iVar2,0,0);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xd0),(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
  std::string::string((string *)&local_18,"idle");
  Effect_PopAnim::PlayLoopingAnimation(pEVar4._0_4_,uVar3,(Vec3 *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  std::string::string(asStack_28,"POPANIM_EFFECTS_ARTIFACT_WATERGUN_HIT");
  EATextSquish::Vec3::Vec3((Vec3 *)&local_18,0.0,0.0,0.0);
  PopAnimEffectFactory::CreateEffect
            (aRStack_20,local_18,uStack_14,local_10,asStack_28,iVar2 + 1,0,0);
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xd8),(RtWeakPtrBase *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  uVar3 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
  std::string::string((string *)&local_18,"idle");
  Effect_PopAnim::PlayLoopingAnimation(pEVar4._0_4_,uVar3,(Vec3 *)&local_18,0);
  std::string::~string((string *)&local_18);
  nop();
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_18)
  ;
  *(ulong *)(this + 0xa8) = CONCAT44(uStack_14,local_18);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_18)
  ;
  *(ulong *)(this + 0xb0) = CONCAT44(uStack_14,local_18);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_18)
  ;
  *(ulong *)(this + 0xb8) = CONCAT44(uStack_14,local_18);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_18)
  ;
  *(ulong *)(this + 0xc0) = CONCAT44(uStack_14,local_18);
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_18)
  ;
  *(ulong *)(this + 200) = CONCAT44(uStack_14,local_18);
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0xf0));
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::clear
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x108)
            );
  Sexy::Point::Point((Point *)&local_18,0xf,-0x1e);
  *(ulong *)(this + 0x144) = CONCAT44(uStack_14,local_18);
  Sexy::Point::Point((Point *)&local_18,-3,0x62);
  *(ulong *)(this + 0x14c) = CONCAT44(uStack_14,local_18);
  Sexy::Point::Point((Point *)&local_18,0xd3,0x62);
  *(ulong *)(this + 0x154) = CONCAT44(uStack_14,local_18);
  Sexy::Point::Point((Point *)&local_18,0x7c,0x5e);
  lVar1 = ___stack_chk_guard;
  *(ulong *)(this + 0x15c) = CONCAT44(uStack_14,local_18);
  this[0xe8] = (WatergunBeamEntity)0x0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WatergunBeamEntity::setBeamState(WatergunBeamEntity::BeamState) */

void __thiscall WatergunBeamEntity::setBeamState(WatergunBeamEntity *this,int param_2)

{
  StandaloneEffect *pSVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  
  if (*(int *)(this + 0xa4) != param_2) {
    *(int *)(this + 0xa4) = param_2;
    if (param_2 == 1) {
      pSVar1 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
      StandaloneEffect::SetVisibility(pSVar1,true);
      if (this[0xe8] != (WatergunBeamEntity)0x0) {
        pSVar1 = (StandaloneEffect *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
        StandaloneEffect::SetVisibility(pSVar1,true);
      }
      fVar4 = *(float *)(this + 0x1c);
      fVar2 = (float)FUN_04cab200(*(undefined4 *)(this + 0x18),fVar4,*(undefined4 *)(this + 0x20));
      *(float *)(this + 0xcc) = (float)*(int *)(this + 0x148) + fVar4;
      *(float *)(this + 200) = (float)*(int *)(this + 0x144) + fVar2;
      fVar2 = (float)PVZ_T();
      *(float *)(this + 0xec) = fVar2 + *(float *)(this + 0x128);
      return;
    }
    if (param_2 == 0) {
      pSVar1 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd0));
      StandaloneEffect::SetVisibility(pSVar1,false);
      pSVar1 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
      StandaloneEffect::SetVisibility(pSVar1,false);
      pSVar1 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
      StandaloneEffect::SetVisibility(pSVar1,false);
      uVar3 = PVZ_EOT();
      *(undefined4 *)(this + 0xec) = uVar3;
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::clear
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                 (this + 0xf0));
      std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::clear
                ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                 (this + 0x108));
      return;
    }
    if (param_2 == 2) {
      pSVar1 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                         ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xd8));
      StandaloneEffect::SetVisibility(pSVar1,false);
      if (this[0xe8] != (WatergunBeamEntity)0x0) {
        pSVar1 = (StandaloneEffect *)
                 Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xe0));
        StandaloneEffect::SetVisibility(pSVar1,false);
      }
      fVar4 = *(float *)(this + 0x1c);
      fVar2 = (float)FUN_04cab200(*(undefined4 *)(this + 0x18),fVar4,*(undefined4 *)(this + 0x20));
      *(float *)(this + 0xc4) = (float)*(int *)(this + 0x148) + fVar4;
      *(float *)(this + 0xc0) = (float)*(int *)(this + 0x144) + fVar2;
    }
  }
  return;
}


/* WatergunBeamEntity::StartBeam() */

void __thiscall WatergunBeamEntity::StartBeam(WatergunBeamEntity *this)

{
  if (*(int *)(this + 0xa4) != 0) {
    return;
  }
  setBeamState(this,1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WatergunBeamEntity::ZombieDied(Zombie*, DamageInfo const*) */

void WatergunBeamEntity::ZombieDied(Zombie *param_1,DamageInfo *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_2 != (DamageInfo *)0x0) {
    this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)(param_1 + 0xf0);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this);
    ToolPacketData::GetProps();
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                         (uVar2,uVar3,(RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar1) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::erase
                ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)this,
                 local_10);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WatergunBeamEntity::PushZombies() */

void __thiscall WatergunBeamEntity::PushZombies(WatergunBeamEntity *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  Zombie *pZVar5;
  ZombieZombossMech *pZVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  RtWeakPtr *this_01;
  ResourceInfo *pRVar9;
  long lVar10;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindBeamCollisionTargets((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,this,2);
  uVar7 = local_20;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xf0);
  iVar3 = FUN_04cab060(local_20,local_18);
  if (0 < iVar3) {
    lVar10 = 0;
    while( true ) {
      puVar4 = (undefined8 *)FUN_04cab06c(uVar7,lVar10);
      pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
      cVar1 = Zombie::IsBoss(pZVar5);
      uVar7 = local_20;
      if (((((cVar1 == '\0') &&
            (pZVar6 = Sexy::RtObject::Cast<ZombieZombossMech>((RtObject *)pZVar5), uVar7 = local_20,
            pZVar6 == (ZombieZombossMech *)0x0)) &&
           (cVar1 = (**(code **)(*(long *)pZVar5 + 0x4d8))(pZVar5), uVar7 = local_20, cVar1 == '\0')
           ) && ((((cVar1 = (**(code **)(*(long *)pZVar5 + 0x508))(pZVar5), uVar7 = local_20,
                   cVar1 == '\0' &&
                   (cVar1 = FUN_04cac65c(*(undefined4 *)(pZVar5 + 0xcc)), uVar7 = local_20,
                   cVar1 == '\0')) &&
                  ((cVar1 = (**(code **)(*(long *)pZVar5 + 0x328))(pZVar5), uVar7 = local_20,
                   cVar1 == '\0' &&
                   ((cVar1 = Zombie::IsIgnoringAllDamage(pZVar5), uVar7 = local_20, cVar1 == '\0' &&
                    (cVar1 = Zombie::IsControlled(pZVar5), uVar7 = local_20, cVar1 == '\0')))))) &&
                 (cVar1 = Zombie::IsSuspended(pZVar5), uVar7 = local_20, cVar1 == '\0')))) &&
         ((((cVar1 = Zombie::HasFogImmune(pZVar5), uVar7 = local_20, cVar1 == '\0' &&
            (cVar1 = Zombie::IsBerserk(pZVar5), uVar7 = local_20, cVar1 == '\0')) &&
           (cVar1 = Zombie::IsTargetable(pZVar5), uVar7 = local_20, cVar1 != '\0')) &&
          ((cVar1 = RealObject::IsOnOpposingTeam(pZVar5,1), uVar7 = local_20, cVar1 != '\0' &&
           (cVar1 = Zombie::HasCondition(pZVar5,0x92), uVar7 = local_20, cVar1 == '\0')))))) {
        uVar7 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
        uVar8 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
        FUN_04cab06c(local_20,lVar10);
        ToolPacketData::GetProps();
        local_38 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                             (uVar7,uVar8,(RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        local_28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_38,(__normal_iterator *)&local_28)
        ;
        uVar7 = local_20;
        if (bVar2) {
          puVar4 = (undefined8 *)FUN_04cab06c(local_20,lVar10);
          pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
          BuffZombie(this,pZVar5);
          FUN_04cab06c(local_20,lVar10);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)&local_30);
          std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                    ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
                     this_00,(RtWeakPtr *)&local_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
          uVar7 = local_20;
        }
      }
      if (iVar3 <= (int)lVar10 + 1) break;
      lVar10 = lVar10 + 1;
      local_20 = uVar7;
    }
  }
  local_30 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar2) {
    this_01 = (RtWeakPtr *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_01);
    PushZombie(this,(Zombie *)pRVar9);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WatergunBeamEntity::BuffPlants() */

void __thiscall WatergunBeamEntity::BuffPlants(WatergunBeamEntity *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  Plant *pPVar7;
  long lVar8;
  undefined8 local_38;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FindBeamCollisionTargets((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20,this,1);
  iVar3 = FUN_04cab060(local_20,local_18);
  if (0 < iVar3) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x108);
    lVar8 = 0;
    do {
      while( true ) {
        uVar4 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin(this_00);
        uVar5 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end(this_00);
        FUN_04cab06c(local_20,lVar8);
        ToolPacketData::GetProps();
        local_38 = std::
                   find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Plant>*,std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>>,Sexy::RtWeakPtr<GameObject>>
                             (uVar4,uVar5,(RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        local_28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_38,(__normal_iterator *)&local_28)
        ;
        if (!bVar2) break;
        puVar6 = (undefined8 *)FUN_04cab06c(local_20,lVar8);
        pPVar7 = Sexy::RtObject::Cast<Plant>((RtObject *)*puVar6);
        BuffPlant(this,pPVar7);
        lVar1 = lVar8 + 1;
        FUN_04cab06c(local_20,lVar8);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_28,(RtWeakPtrBase *)aRStack_30);
        std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)this_00,
                   (RtWeakPtr *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
        lVar8 = lVar1;
        if (iVar3 <= (int)lVar1) goto LAB_04cb29b0;
      }
      lVar8 = lVar8 + 1;
    } while ((int)lVar8 < iVar3);
  }
LAB_04cb29b0:
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WatergunBeamEntity::UpdateBeam() */

void __thiscall WatergunBeamEntity::UpdateBeam(WatergunBeamEntity *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float local_10;
  float fStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xa4) != 0) {
    if ((*(int *)(this + 0xa4) == 1) &&
       (fVar3 = *(float *)(this + 0xec), fVar2 = (float)PVZ_T(), fVar3 < fVar2)) {
      setBeamState(this,2);
    }
    fVar2 = *(float *)(this + 0x1c);
    local_10 = (float)FUN_04cab200(*(undefined4 *)(this + 0x18),fVar2,*(undefined4 *)(this + 0x20));
    fStack_c = fVar2 + (float)*(int *)(this + 0x148);
    local_10 = local_10 + (float)*(int *)(this + 0x144);
    fVar2 = (float)FUN_04cab600(0x3f800000);
    Sexy::SexyVector2::operator*((SexyVector2 *)&local_10,fVar2);
    if (*(int *)(this + 0xa4) == 2) {
      *(ulong *)(this + 0xb8) = CONCAT44(fStack_c,local_10);
      fVar2 = (float)CalcCurrentPushDelta(this);
      fVar3 = *(float *)(this + 0xc0);
      *(float *)(this + 0xc0) = fVar3 - fVar2;
      if (*(float *)(this + 200) <= fVar3 - fVar2) {
        *(undefined8 *)(this + 0xc0) = *(undefined8 *)(this + 200);
        setBeamState(this,0);
      }
    }
    else {
      fVar2 = (float)CalcCurrentPushDelta(this);
      *(float *)(this + 200) = *(float *)(this + 200) + fVar2;
      iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1);
      if (*(float *)(this + 200) < (float)iVar1) {
        PushZombies(this);
        BuffPlants(this);
      }
      else {
        *(float *)(this + 200) = (float)iVar1;
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
/* WatergunBeamEntity::onUpdate() */

void __thiscall WatergunBeamEntity::onUpdate(WatergunBeamEntity *this)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fStack_10;
  float fStack_c;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (*(int *)(this + 0xa4) != 0) {
    if ((*(int *)(this + 0xa4) == 1) &&
       (fVar3 = *(float *)(this + 0xec), fVar2 = (float)PVZ_T(), fVar3 < fVar2)) {
      setBeamState(this,2);
    }
    fVar2 = *(float *)(this + 0x1c);
    fStack_10 = (float)FUN_04cab200(*(undefined4 *)(this + 0x18),fVar2,*(undefined4 *)(this + 0x20))
    ;
    fStack_c = fVar2 + (float)*(int *)(this + 0x148);
    fStack_10 = fStack_10 + (float)*(int *)(this + 0x144);
    fVar2 = (float)FUN_04cab600(0x3f800000);
    Sexy::SexyVector2::operator*((SexyVector2 *)&fStack_10,fVar2);
    if (*(int *)(this + 0xa4) == 2) {
      *(ulong *)(this + 0xb8) = CONCAT44(fStack_c,fStack_10);
      fVar2 = (float)CalcCurrentPushDelta(this);
      fVar3 = *(float *)(this + 0xc0);
      *(float *)(this + 0xc0) = fVar3 - fVar2;
      if (*(float *)(this + 200) <= fVar3 - fVar2) {
        *(undefined8 *)(this + 0xc0) = *(undefined8 *)(this + 200);
        setBeamState(this,0);
      }
    }
    else {
      fVar2 = (float)CalcCurrentPushDelta(this);
      *(float *)(this + 200) = *(float *)(this + 200) + fVar2;
      iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar1 = BoardTransforms::GridToBoardSpaceX(iVar1);
      if (*(float *)(this + 200) < (float)iVar1) {
        PushZombies(this);
        BuffPlants(this);
      }
      else {
        *(float *)(this + 200) = (float)iVar1;
      }
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WatergunBeamEntity::PlantCreate(Plant*) */

void __thiscall WatergunBeamEntity::PlantCreate(WatergunBeamEntity *this,Plant *param_1)

{
  float *pfVar1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((param_1 != (Plant *)0x0) && (*(int *)(this + 0xa4) == 1)) &&
     (pfVar1 = (float *)std::
                        _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                        ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                       *)param_1), *pfVar1 <= *(float *)(this + 200))) {
    BuffPlant(this,param_1);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
    std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
              ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
               (this + 0x108),(RtWeakPtr *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

