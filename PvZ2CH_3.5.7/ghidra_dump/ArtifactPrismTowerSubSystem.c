// Class: ArtifactPrismTowerSubSystem


/* ArtifactPrismTowerSubSystem::SetLaserProps(ArtifactPrismTowerSubSystem::LaserShooterProps) */

void __thiscall
ArtifactPrismTowerSubSystem::SetLaserProps
          (ArtifactPrismTowerSubSystem *this,LaserShooterProps *param_2)

{
  LaserShooterProps::operator=((LaserShooterProps *)(this + 0x10),param_2);
  return;
}


/* ArtifactPrismTowerSubSystem::AddToRenderQueue(RenderQueue*) */

void ArtifactPrismTowerSubSystem::AddToRenderQueue(RenderQueue *param_1)

{
  Board::MakeRenderOrder(0x64d48,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + -1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPrismTowerSubSystem::StaticClassInit() */

void ArtifactPrismTowerSubSystem::StaticClassInit(void)

{
  CRefSymbolDb *pCVar1;
  long *plVar2;
  code *pcVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"LaserShooterProps");
    (*pcVar3)(plVar2,asStack_10,FUN_037d345c,0x20,0);
    std::string::~string(asStack_10);
    nop();
  }
  pCVar1 = (CRefSymbolDb *)Reflection::CRefSymbolDb::GetManualReflection();
  if ((pCVar1 != (CRefSymbolDb *)0x0) &&
     (plVar2 = (long *)Reflection::CRefSymbolDb::GetManualSymbolBuilder(pCVar1),
     plVar2 != (long *)0x0)) {
    pcVar3 = *(code **)(*plVar2 + 0x18);
    std::string::string(asStack_10,"ArtifactPrismTowerSubSystem");
    (*pcVar3)(plVar2,asStack_10,FUN_037d37d4,0x70,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArtifactPrismTowerSubSystem::StaticGetClass() */

long * ArtifactPrismTowerSubSystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactPrismTowerSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArtifactPrismTowerSubSystem::GetClass() const */

long * ArtifactPrismTowerSubSystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"ArtifactPrismTowerSubSystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPrismTowerSubSystem::GetLaserShooterPos() */

void ArtifactPrismTowerSubSystem::GetLaserShooterPos(void)

{
  FastCurve local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange(local_10,161.0,320.0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10._0_4_,local_10._4_4_);
}


/* ArtifactPrismTowerSubSystem::LaserLevelUp() */

void __thiscall ArtifactPrismTowerSubSystem::LaserLevelUp(ArtifactPrismTowerSubSystem *this)

{
  *(int *)(this + 0x34) = *(int *)(this + 0x34) + 1;
  return;
}


/* ArtifactPrismTowerSubSystem::IsLaserInLevel(ArtifactPrismTowerSubSystem::LaserShooter) */

bool __thiscall
ArtifactPrismTowerSubSystem::IsLaserInLevel(ArtifactPrismTowerSubSystem *this,int param_2)

{
  return *(int *)(this + 0x34) == param_2;
}


/* ArtifactPrismTowerSubSystem::~ArtifactPrismTowerSubSystem() */

void __thiscall
ArtifactPrismTowerSubSystem::~ArtifactPrismTowerSubSystem(ArtifactPrismTowerSubSystem *this)

{
  *(undefined ***)this = &PTR_GetClass_0669a080;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x68));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x60));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x58));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
  std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>((RtWeakPtr *)(this + 0x10));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* ArtifactPrismTowerSubSystem::~ArtifactPrismTowerSubSystem() */

void __thiscall
ArtifactPrismTowerSubSystem::~ArtifactPrismTowerSubSystem(ArtifactPrismTowerSubSystem *this)

{
  ~ArtifactPrismTowerSubSystem(this);
  AK::FreeHook(this);
  return;
}


/* ArtifactPrismTowerSubSystem::ArtifactPrismTowerSubSystem() */

void __thiscall
ArtifactPrismTowerSubSystem::ArtifactPrismTowerSubSystem(ArtifactPrismTowerSubSystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0669a080;
  LaserShooterProps::LaserShooterProps((LaserShooterProps *)(this + 0x10));
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x48));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x50));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x58));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x60));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x68));
  return;
}


/* ArtifactPrismTowerSubSystem::StaticNew() */

ArtifactPrismTowerSubSystem * ArtifactPrismTowerSubSystem::StaticNew(void)

{
  ArtifactPrismTowerSubSystem *this;
  
  this = ::operator_new(0x70);
  ArtifactPrismTowerSubSystem(this);
  return this;
}


/* ArtifactPrismTowerSubSystem::LaserNeedLevelUp() */

undefined8 __thiscall
ArtifactPrismTowerSubSystem::LaserNeedLevelUp(ArtifactPrismTowerSubSystem *this)

{
  char cVar1;
  float fVar2;
  
  if (*(float *)(this + 0x38) < 0.001) {
    return 0;
  }
  if ((*(int *)(this + 0x34) != 0) && (cVar1 = IsLaserInLevel(this,3), cVar1 == '\0')) {
    cVar1 = IsLaserInLevel(this,2);
    if ((cVar1 != '\0') &&
       (fVar2 = (float)PVZ_T(),
       *(float *)(this + 0x24) + *(float *)(this + 0x38) + *(float *)(this + 0x20) < fVar2)) {
      return 1;
    }
    cVar1 = IsLaserInLevel(this,1);
    if ((cVar1 != '\0') &&
       (fVar2 = (float)PVZ_T(), *(float *)(this + 0x20) + *(float *)(this + 0x38) < fVar2)) {
      return 1;
    }
  }
  return 0;
}


/* ArtifactPrismTowerSubSystem::CheckShouldBreakFogShield() */

void __thiscall
ArtifactPrismTowerSubSystem::CheckShouldBreakFogShield(ArtifactPrismTowerSubSystem *this)

{
  bool bVar1;
  char cVar2;
  RtObject *this_00;
  Zombie *pZVar3;
  float fVar4;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x40));
  if (bVar1) {
    this_00 = (RtObject *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x40));
    pZVar3 = Sexy::RtObject::Cast<Zombie>(this_00);
    if ((pZVar3 != (Zombie *)0x0) &&
       (fVar4 = (float)PVZ_T(), *(float *)(this + 0x28) < fVar4 - *(float *)(this + 0x38))) {
      cVar2 = Zombie::HasCondition(pZVar3,0x6a);
      if (cVar2 != '\0') {
        Zombie::EndCondition(pZVar3,0x6a);
        return;
      }
      cVar2 = Zombie::HasCondition(pZVar3,0x6b);
      if (cVar2 != '\0') {
        Zombie::EndCondition(pZVar3,0x6b);
        return;
      }
      cVar2 = Zombie::HasCondition(pZVar3,0x6c);
      if (cVar2 != '\0') {
        Zombie::EndCondition(pZVar3,0x6c);
        return;
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPrismTowerSubSystem::LoadLaserEffect(std::string, ArtifactPrismTowerSubSystem::LaserType)
    */

void ArtifactPrismTowerSubSystem::LoadLaserEffect
               (undefined8 param_1,undefined8 param_2,string *param_3,int param_4)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  Effect_PopAnim *this;
  ResourceInfo *pRVar4;
  char *pcVar5;
  size_t __n;
  string asStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  pLVar1 = gLawnApp;
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"LevelCommon2");
  cVar2 = LawnApp::IsGroupLoadComplete(pLVar1,asStack_18);
  std::string::~string(asStack_18);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_18,"LevelCommon2");
    LawnApp::LoadGroup(pLVar1,asStack_18);
    std::string::~string(asStack_18);
    nop();
  }
  std::string::string(asStack_20,"");
  nop();
  __n = 0;
  iVar3 = Board::MakeRenderOrder(0x64d48,2);
  if (param_4 == 1) {
    pcVar5 = (char *)FUN_0547429c(&DAT_06ab1520);
    std::string::append(asStack_20,pcVar5,__n);
    iVar3 = Board::MakeRenderOrder(0x64d48,5,0);
  }
  else if (param_4 == 0) {
    iVar3 = iVar3 + -3;
    pcVar5 = (char *)FUN_0547429c(&DAT_06ab1540);
    std::string::append(asStack_20,pcVar5,__n);
  }
  else if (param_4 == 2) {
    iVar3 = iVar3 + -2;
    pcVar5 = (char *)FUN_0547429c(&DAT_06ab1550);
    std::string::append(asStack_20,pcVar5,__n);
  }
  this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  GetPAMByName(param_3);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_18);
  Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,0.0,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)asStack_18,-1);
  FUN_037d1968(this + 0x1c,iVar3);
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this,asStack_20,0);
  StandaloneEffect::SetIsScreenSpaceEffect((StandaloneEffect *)this,false);
  StandaloneEffect::SetVisibility((StandaloneEffect *)this,false);
  ToolPacketData::GetProps();
  std::string::~string(asStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPrismTowerSubSystem::GetLaserRig() */

void ArtifactPrismTowerSubSystem::GetLaserRig(void)

{
  RtWeakPtr *this;
  long in_x0;
  ResourceInfo *pRVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this = (RtWeakPtr *)(in_x0 + 0x58);
  local_8 = ___stack_chk_guard;
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
  if (pRVar1 == (ResourceInfo *)0x0) {
    FUN_05475d88(asStack_18,&DAT_06ab1558);
    LoadLaserEffect(aRStack_10);
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPrismTowerSubSystem::RenderLaser(Sexy::Graphics*) */

void ArtifactPrismTowerSubSystem::RenderLaser(Graphics *param_1)

{
  int iVar1;
  UIWidget *this;
  PopAnimRig *this_00;
  StandaloneEffect *pSVar2;
  Graphics *in_x1;
  undefined1 in_w4;
  float fVar3;
  float fVar4;
  float fVar5;
  GraphicsAutoState aGStack_78 [8];
  undefined4 local_70 [2];
  FastCurve aFStack_68 [8];
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_78,in_x1);
  if (1 < *(uint *)(param_1 + 0x30)) {
    local_70[0] = GetLaserShooterPos();
    fVar5 = *(float *)(param_1 + 0x4c);
    Sexy::FastCurve::SetOutRange(aFStack_68,*(float *)(param_1 + 0x48),fVar5);
    fVar3 = (float)FUN_037d1ae0(0x3f800000);
    local_60 = Sexy::SexyVector2::operator*((SexyVector2 *)local_70,fVar3);
    local_5c = fVar5;
    fVar3 = (float)FUN_037d1ae0(0x3f800000);
    local_58 = Sexy::SexyVector2::operator*((SexyVector2 *)aFStack_68,fVar3);
    local_54 = fVar5;
    fVar3 = (float)FUN_037d1ae0(0x3f800000);
    local_50 = Sexy::SexyVector2::operator*((SexyVector2 *)&DAT_06ab15b0,fVar3);
    local_4c = fVar5;
    fVar3 = (float)FUN_037d1ae0(0x3f800000);
    local_48 = Sexy::SexyVector2::operator*((SexyVector2 *)&DAT_06ab1608,fVar3);
    local_44 = fVar5;
    local_40 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_58,(SexyVector2 *)&local_60);
    local_3c = fVar5;
    fVar3 = (float)DVec2::getLength((DVec2 *)&local_40);
    local_38 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_48,(SexyVector2 *)&local_50);
    local_34 = fVar5;
    fVar5 = (float)DVec2::getLength((DVec2 *)&local_38);
    iVar1 = *(int *)(param_1 + 0x34);
    fVar4 = (float)WatergunBeamEntity::getAngleForVector
                             ((WatergunBeamEntity *)param_1,(SexyVector2 *)&local_40);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,fVar3 / fVar5,(float)iVar1 * 0.6);
    Sexy::SexyTransform2D::CreateTransformWithPivot
              ((SexyTransform2D *)&local_60,(SexyVector2 *)&local_38,fVar4,(SexyVector2 *)&local_50,
               (SexyVector2 *)0x1,(bool)in_w4);
    GetLaserRig();
    this = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    this_00 = (PopAnimRig *)UIWidget::GetAtlasImage(this);
    PopAnimRig::SetRenderTransform(this_00,aSStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    GetLaserRig();
    pSVar2 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    StandaloneEffect::SetVisibility(pSVar2,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    GetLaserRig();
    pSVar2 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    StandaloneEffect::Draw(pSVar2,in_x1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    GetLaserRig();
    pSVar2 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    StandaloneEffect::SetVisibility(pSVar2,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_78);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPrismTowerSubSystem::RenderLaserUpdate() */

void ArtifactPrismTowerSubSystem::RenderLaserUpdate(void)

{
  int iVar1;
  WatergunBeamEntity *in_x0;
  UIWidget *this;
  PopAnimRig *this_00;
  StandaloneEffect *this_01;
  undefined1 in_w4;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 local_70 [2];
  FastCurve aFStack_68 [8];
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (1 < *(uint *)(in_x0 + 0x30)) {
    local_70[0] = GetLaserShooterPos();
    fVar4 = *(float *)(in_x0 + 0x4c);
    Sexy::FastCurve::SetOutRange(aFStack_68,*(float *)(in_x0 + 0x48),fVar4);
    fVar2 = (float)FUN_037d1ae0(0x3f800000);
    local_60 = Sexy::SexyVector2::operator*((SexyVector2 *)local_70,fVar2);
    local_5c = fVar4;
    fVar2 = (float)FUN_037d1ae0(0x3f800000);
    local_58 = Sexy::SexyVector2::operator*((SexyVector2 *)aFStack_68,fVar2);
    local_54 = fVar4;
    fVar2 = (float)FUN_037d1ae0(0x3f800000);
    local_50 = Sexy::SexyVector2::operator*((SexyVector2 *)&DAT_06ab15b0,fVar2);
    local_4c = fVar4;
    fVar2 = (float)FUN_037d1ae0(0x3f800000);
    local_48 = Sexy::SexyVector2::operator*((SexyVector2 *)&DAT_06ab1608,fVar2);
    local_44 = fVar4;
    local_40 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_58,(SexyVector2 *)&local_60);
    local_3c = fVar4;
    fVar2 = (float)DVec2::getLength((DVec2 *)&local_40);
    local_38 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_48,(SexyVector2 *)&local_50);
    local_34 = fVar4;
    fVar4 = (float)DVec2::getLength((DVec2 *)&local_38);
    iVar1 = *(int *)(in_x0 + 0x34);
    fVar3 = (float)WatergunBeamEntity::getAngleForVector(in_x0,(SexyVector2 *)&local_40);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,fVar2 / fVar4,(float)iVar1 * 0.6);
    Sexy::SexyTransform2D::CreateTransformWithPivot
              ((SexyTransform2D *)&local_60,(SexyVector2 *)&local_38,fVar3,(SexyVector2 *)&local_50,
               (SexyVector2 *)0x1,(bool)in_w4);
    GetLaserRig();
    this = (UIWidget *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    this_00 = (PopAnimRig *)UIWidget::GetAtlasImage(this);
    PopAnimRig::SetRenderTransform(this_00,aSStack_30);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    GetLaserRig();
    this_01 = (StandaloneEffect *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
    StandaloneEffect::SetVisibility(this_01,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPrismTowerSubSystem::GetLaserImapctRig() */

void ArtifactPrismTowerSubSystem::GetLaserImapctRig(void)

{
  RtWeakPtr *this;
  long in_x0;
  ResourceInfo *pRVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this = (RtWeakPtr *)(in_x0 + 0x60);
  local_8 = ___stack_chk_guard;
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
  if (pRVar1 == (ResourceInfo *)0x0) {
    FUN_05475d88(asStack_18,&DAT_06ab15f8);
    LoadLaserEffect(aRStack_10);
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPrismTowerSubSystem::SetLaserState(ArtifactPrismTowerSubSystem::LaserState) */

void ArtifactPrismTowerSubSystem::SetLaserState
               (undefined1 param_1 [16],undefined4 param_2,long param_3,int param_4)

{
  StandaloneEffect *pSVar1;
  undefined4 uVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_3 + 0x30) != param_4) {
    uVar2 = GetLaserShooterPos();
    *(int *)(param_3 + 0x30) = param_4;
    *(undefined4 *)(param_3 + 0x48) = uVar2;
    *(undefined4 *)(param_3 + 0x4c) = param_2;
    switch(param_4) {
    case 0:
      *(undefined4 *)(param_3 + 0x34) = 0;
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)aRStack_10);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(param_3 + 0x40),(RtWeakPtr *)aRStack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      *(undefined4 *)(param_3 + 0x38) = 0;
      uVar2 = GetLaserShooterPos();
      *(undefined4 *)(param_3 + 0x48) = uVar2;
      *(undefined4 *)(param_3 + 0x4c) = param_2;
      GetLaserRig();
      pSVar1 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      StandaloneEffect::SetVisibility(pSVar1,false);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      GetLaserImapctRig();
      pSVar1 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      StandaloneEffect::SetVisibility(pSVar1,false);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      break;
    case 1:
      *(undefined4 *)(param_3 + 0x34) = 1;
      break;
    case 2:
      *(undefined4 *)(param_3 + 0x34) = 1;
      uVar2 = GetLaserShooterPos();
      *(undefined4 *)(param_3 + 0x48) = uVar2;
      *(undefined4 *)(param_3 + 0x4c) = param_2;
      GetLaserRig();
      pSVar1 = (StandaloneEffect *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      StandaloneEffect::SetVisibility(pSVar1,true);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
      uVar2 = PVZ_T();
      *(undefined4 *)(param_3 + 0x38) = uVar2;
      break;
    case 3:
      *(undefined4 *)(param_3 + 0x38) = 0;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPrismTowerSubSystem::LaserHitBlasting(BoardEntity*, Sexy::SexyVector2 const&) */

void ArtifactPrismTowerSubSystem::LaserHitBlasting(BoardEntity *param_1,SexyVector2 *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  UIWidget *this;
  PopAnimRig *this_00;
  StandaloneEffect *this_01;
  long *extraout_x0;
  SexyVector2 *in_x2;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  float local_64;
  undefined4 local_60;
  undefined4 local_5c;
  SexyTransform2D aSStack_58 [80];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar4 = (float)FUN_037d1ae0(0x3f800000);
  local_88[0] = Sexy::SexyVector2::operator*((SexyVector2 *)(param_1 + 0x48),fVar4);
  Sexy::SexyVector2::operator-((SexyVector2 *)local_88,in_x2);
  uVar5 = 0x42b80000;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_60,100.0,92.0);
  fVar4 = (float)FUN_037d1ae0(0x3f800000);
  local_80 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_60,fVar4);
  local_7c = uVar5;
  local_60 = GetLaserShooterPos();
  local_5c = uVar5;
  fVar4 = (float)FUN_037d1ae0(0x3f800000);
  local_78 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_60,fVar4);
  fVar6 = *(float *)(param_1 + 0x4c);
  local_74 = uVar5;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_60,*(float *)(param_1 + 0x48),fVar6);
  fVar4 = (float)FUN_037d1ae0(0x3f800000);
  local_70 = Sexy::SexyVector2::operator*((SexyVector2 *)&local_60,fVar4);
  local_6c = fVar6;
  local_68 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_70,(SexyVector2 *)&local_78);
  iVar1 = *(int *)(param_1 + 0x34);
  local_64 = fVar6;
  fVar4 = (float)WatergunBeamEntity::getAngleForVector
                           ((WatergunBeamEntity *)param_1,(SexyVector2 *)&local_68);
  Sexy::SexyTransform2D::CreateTransformWithPivot
            ((SexyVector2 *)local_88,fVar4,(float)iVar1 * 0.3,(SexyVector2 *)&local_80,true);
  GetLaserImapctRig();
  this = (UIWidget *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  this_00 = (PopAnimRig *)UIWidget::GetAtlasImage(this);
  PopAnimRig::SetRenderTransform(this_00,aSStack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  GetLaserImapctRig();
  this_01 = (StandaloneEffect *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  StandaloneEffect::SetVisibility(this_01,true);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  if ((((param_2 != (SexyVector2 *)0x0) &&
       (bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_2), bVar2)) &&
      (nop(), extraout_x0 != (long *)0x0)) &&
     ((cVar3 = (**(code **)(*extraout_x0 + 0x328))(), cVar3 != '\0' ||
      (cVar3 = (**(code **)(*extraout_x0 + 0x330))(extraout_x0), cVar3 != '\0')))) {
    fVar4 = (float)WatergunBeamEntity::getAngleForVector
                             ((WatergunBeamEntity *)param_1,(SexyVector2 *)&local_68);
    Sexy::SexyTransform2D::CreateTransformWithPivot
              ((SexyVector2 *)local_88,fVar4,1.5,(SexyVector2 *)&local_80,true);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPrismTowerSubSystem::GetLaserShooterRig() */

void ArtifactPrismTowerSubSystem::GetLaserShooterRig(void)

{
  RtWeakPtr *this;
  long in_x0;
  ResourceInfo *pRVar1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  this = (RtWeakPtr *)(in_x0 + 0x68);
  local_8 = ___stack_chk_guard;
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
  if (pRVar1 == (ResourceInfo *)0x0) {
    FUN_05475d88(asStack_18,&DAT_06ab15c0);
    LoadLaserEffect(aRStack_10);
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    std::string::~string(asStack_18);
  }
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPrismTowerSubSystem::UpdateLaserShooterLayer() */

void __thiscall
ArtifactPrismTowerSubSystem::UpdateLaserShooterLayer(ArtifactPrismTowerSubSystem *this)

{
  UIWidget *this_00;
  PopAnimRig *this_01;
  StandaloneEffect *pSVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 local_40;
  undefined4 local_3c;
  FastCurve aFStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  uVar5 = 0x42b80000;
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange(aFStack_38,90.0,92.0);
  fVar2 = (float)FUN_037d1ae0(0x3f800000);
  local_40 = Sexy::SexyVector2::operator*((SexyVector2 *)aFStack_38,fVar2);
  local_3c = uVar5;
  uVar3 = GetLaserShooterPos();
  fVar2 = (float)FUN_037d1ae0(uVar3);
  GetLaserShooterPos();
  fVar4 = (float)FUN_037d1ae0(uVar5);
  Sexy::FastCurve::SetOutRange(aFStack_38,fVar2,fVar4);
  Sexy::SexyTransform2D::CreateTransformWithPivot
            ((SexyVector2 *)aFStack_38,0.0,1.0,(SexyVector2 *)&local_40,true);
  GetLaserShooterRig();
  this_00 = (UIWidget *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aFStack_38);
  this_01 = (PopAnimRig *)UIWidget::GetAtlasImage(this_00);
  PopAnimRig::SetRenderTransform(this_01,aSStack_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aFStack_38);
  if (*(int *)(this + 0x30) - 1U < 2) {
    GetLaserShooterRig();
    pSVar1 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aFStack_38);
    StandaloneEffect::SetVisibility(pSVar1,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aFStack_38);
  }
  else {
    GetLaserShooterRig();
    pSVar1 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aFStack_38);
    StandaloneEffect::SetVisibility(pSVar1,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aFStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPrismTowerSubSystem::CanBeTarget(BoardEntity*) */

void ArtifactPrismTowerSubSystem::CanBeTarget(BoardEntity *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  long *extraout_x0;
  string *psVar4;
  GridItem *pGVar5;
  code *pcVar6;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 != (BoardEntity *)0x0) && (cVar1 = BoardEntity::IsOnScreen(param_1), cVar1 != '\0'))
  {
    bVar2 = Sexy::RtObject::IsA<Zombie>((RtObject *)param_1);
    if (bVar2) {
      nop();
      if (extraout_x0 != (long *)0x0) {
        cVar1 = (**(code **)(*extraout_x0 + 0x328))();
        if (cVar1 == '\0') {
          pcVar6 = *(code **)(*extraout_x0 + 0x3d0);
          psVar4 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          std::string::string(asStack_20,"nekotail");
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar4);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
          cVar1 = (*pcVar6)(extraout_x0,aRStack_10,0);
          bVar3 = 0;
          if ((cVar1 != '\0') && (cVar1 = Zombie::HasCondition(extraout_x0,0x27), cVar1 == '\0')) {
            bVar3 = Zombie::HasCondition(extraout_x0,0x25);
            bVar3 = bVar3 ^ 1;
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
          std::string::~string(asStack_20);
          nop();
          goto LAB_037d3f3c;
        }
      }
    }
    else {
      bVar2 = Sexy::RtObject::IsA<GridItem>((RtObject *)param_1);
      if ((bVar2) &&
         (pGVar5 = Sexy::RtObject::Cast<GridItem>((RtObject *)param_1), pGVar5 != (GridItem *)0x0))
      {
        bVar3 = (**(code **)(*(long *)pGVar5 + 0x200))();
        goto LAB_037d3f3c;
      }
    }
  }
  bVar3 = 0;
LAB_037d3f3c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPrismTowerSubSystem::CheckShouldExplodeZombie(BoardEntity*, float) */

void __thiscall
ArtifactPrismTowerSubSystem::CheckShouldExplodeZombie
          (ArtifactPrismTowerSubSystem *this,BoardEntity *param_1,float param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  Zombie *this_00;
  float *pfVar6;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar7;
  undefined8 *puVar8;
  BoardEntity *pBVar9;
  code *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_a0;
  undefined8 local_98;
  Point aPStack_90 [8];
  undefined4 local_88;
  undefined4 local_84;
  string asStack_80 [24];
  RtWeakPtr aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar11 = (float)PVZ_Dt();
  if (((param_1 == (BoardEntity *)0x0) ||
      (this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 == (Zombie *)0x0)) ||
     (cVar1 = Zombie::IsBoss(this_00), cVar1 != '\0')) goto LAB_037d40f8;
  fVar12 = (float)FUN_037d197c(*(undefined4 *)(this_00 + 0x280));
  fVar13 = (float)FUN_037d1980(*(undefined4 *)(this_00 + 0x2a8));
  if (fVar11 * param_2 <= fVar13 + fVar12) {
    fVar11 = (float)Zombie::GetHeadDropHitPoints(this_00);
    if (fVar11 < 0.0) goto LAB_037d40f8;
    fVar11 = (float)FUN_037d197c(*(undefined4 *)(this_00 + 0x280));
    fVar12 = (float)Zombie::GetHeadDropHitPoints(this_00);
    if (fVar12 <= fVar11) goto LAB_037d40f8;
  }
  if (0.0 < *(float *)(this + 0x2c)) {
    pfVar6 = (float *)std::
                      _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                      ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                     *)param_1);
    fVar12 = *pfVar6;
    fVar11 = pfVar6[1];
    fVar13 = pfVar6[2];
    this_01 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    std::string::string(asStack_80,"POPANIM_EFFECTS_CHERRYBOMB_EXPLOSION_TOP");
    GetPAMByName(asStack_80);
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_68);
    Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar7,(RtClass *)0x0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    std::string::~string(asStack_80);
    nop();
    (**(code **)(*(long *)this_01 + 0x80))(0x3fc00000,this_01);
    EATextSquish::Vec3::Vec3
              ((Vec3 *)aRStack_68,(float)(int)(fVar12 - 130.0),(float)(int)(fVar11 - 290.0),
               (float)(int)fVar13);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_01,(SexyVector3 *)aRStack_68,-1);
    FUN_037d1968(this_01 + 0x1c,500000);
    std::string::string((string *)aRStack_68,"animation");
    Effect_PopAnim::PlaySingleAnimation(this_01,aRStack_68,0);
    std::string::~string((string *)aRStack_68);
    nop();
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)asStack_80);
    uVar3 = operator|(2,4);
    iVar4 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
    iVar5 = SharkMinion::getRow((SharkMinion *)this_00);
    Sexy::Insets::Insets((Insets *)aRStack_68,iVar4 + -1,iVar5 + -1,3,3);
    EntityFinder::GetEntitiesInGridSquares(asStack_80,uVar3,aRStack_68);
    local_a0 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)asStack_80);
    local_98 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_80);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_a0,(__normal_iterator *)&local_98), bVar2)
    {
      puVar8 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a0)
      ;
      pBVar9 = (BoardEntity *)*puVar8;
      cVar1 = CanBeTarget(pBVar9);
      if (cVar1 != '\0') {
        fVar11 = *(float *)(this + 0x2c);
        pcVar10 = *(code **)(*(long *)pBVar9 + 0x110);
        Sexy::Point::Point(aPStack_90,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
        DamageInfo::DamageInfo
                  ((DamageInfo *)(param_2 * fVar11),local_88,local_84,aRStack_68,aPStack_90,0);
        (*pcVar10)(pBVar9,aRStack_68);
        DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a0);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)asStack_80);
  }
LAB_037d40f8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPrismTowerSubSystem::ApplyLaserDamage(BoardEntity*) */

void __thiscall
ArtifactPrismTowerSubSystem::ApplyLaserDamage
          (ArtifactPrismTowerSubSystem *this,BoardEntity *param_1)

{
  ArtifactPrismTower *this_00;
  code *pcVar1;
  float fVar2;
  float fVar3;
  Point aPStack_78 [8];
  undefined4 local_70;
  undefined4 local_6c;
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (ArtifactPrismTower *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x10))
  ;
  fVar2 = (float)PVZ_T();
  fVar2 = (float)ArtifactPrismTower::DpsCalculator(this_00,param_1,fVar2 - *(float *)(this + 0x38));
  fVar3 = (float)PVZ_Dt();
  pcVar1 = *(code **)(*(long *)param_1 + 0x110);
  Sexy::Point::Point(aPStack_78,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_70,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(fVar3 * fVar2),local_70,local_6c,aDStack_68,0x2000000000000,0,aPStack_78
             ,0);
  (*pcVar1)(param_1,aDStack_68);
  DamageInfo::~DamageInfo(aDStack_68);
  CheckShouldExplodeZombie(this,param_1,fVar2);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPrismTowerSubSystem::FindLaserTargetByType(BoardEntityTypeFlag, float&) */

void ArtifactPrismTowerSubSystem::FindLaserTargetByType
               (undefined1 param_1 [16],float param_2,PlantUltomato *param_3,undefined4 param_4,
               float *param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  BoardEntity *pBVar8;
  BoardEntity *pBVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ResistenceValueInfo aRStack_60 [8];
  float local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  Insets aIStack_40 [16];
  FastCurve aFStack_30 [16];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo(aRStack_60);
  uVar7 = 0;
  pBVar9 = (BoardEntity *)0x0;
  local_58 = (float)GetLaserShooterPos();
  local_54 = param_2;
  Sexy::Insets::Insets(aIStack_40,0,0,10,*(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20,param_4,
             aIStack_40);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&local_20);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&local_20);
  Sexy::Point::Point((Point *)&local_48,(int)local_58,(int)local_54);
  EntityFinder::BoardEntitySorter_ClosestByColumn::BoardEntitySorter_ClosestByColumn
            ((BoardEntitySorter_ClosestByColumn *)aFStack_30,(Point *)&local_48);
  std::
  sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,EntityFinder::BoardEntitySorter_ClosestByColumn>
            (uVar2,uVar3,aFStack_30);
  fVar13 = *(float *)(param_3 + 0x18);
  fVar10 = (float)Sexy::SexyMath::DegToRad(*(float *)(param_3 + 0x1c));
  uVar2 = local_20;
  lVar4 = FUN_037d1994(local_20,local_18);
  if (lVar4 != 0) {
    do {
      puVar5 = (undefined8 *)FUN_037d19a0(uVar2,uVar7);
      pBVar8 = (BoardEntity *)*puVar5;
      cVar1 = CanBeTarget(pBVar8);
      if (cVar1 != '\0') {
        fVar11 = (float)FUN_037d19ac(*(undefined4 *)(pBVar8 + 0x18),*(undefined4 *)(pBVar8 + 0x1c),
                                     *(undefined4 *)(pBVar8 + 0x20));
        lVar4 = Board::GetBoardProperties(*(Board **)(gLawnApp + 0x9f0));
        if (fVar11 <= *(float *)(lVar4 + 0x10)) {
          local_50 = PlantUltomato::getPositionForTarget(param_3,pBVar8);
          local_4c = fVar11;
          local_48 = Sexy::SexyVector2::operator-((SexyVector2 *)&local_50,(SexyVector2 *)&local_58)
          ;
          local_44 = fVar11;
          fVar11 = (float)VectorNorm((FPoint *)&local_48);
          if (fVar11 <= fVar13 * fVar13) {
            Sexy::FastCurve::SetOutRange(aFStack_30,1.0,0.0);
            fVar12 = (float)Sexy::SexyVector2::AngleBetween
                                      ((SexyVector2 *)aFStack_30,(SexyVector2 *)&local_48);
            if ((fVar12 <= fVar10) && ((pBVar9 == (BoardEntity *)0x0 || (fVar11 < *param_5)))) {
              *param_5 = fVar11;
              pBVar9 = pBVar8;
            }
          }
        }
      }
      uVar2 = local_20;
      uVar7 = uVar7 + 1;
      uVar6 = FUN_037d1994(local_20,local_18);
    } while (uVar7 < uVar6);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pBVar9);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPrismTowerSubSystem::FindLaserTarget() */

void ArtifactPrismTowerSubSystem::FindLaserTarget(void)

{
  RtWeakPtr *this;
  bool bVar1;
  char cVar2;
  PlantUltomato *in_x0;
  ResourceInfo *pRVar3;
  ResourceInfo *pRVar4;
  float fVar5;
  undefined4 local_20 [2];
  undefined4 local_18 [2];
  undefined4 local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_20[0] = GetLaserShooterPos();
  pRVar3 = (ResourceInfo *)FindLaserTargetByType();
  if ((pRVar3 != (ResourceInfo *)0x0) ||
     (pRVar3 = (ResourceInfo *)FindLaserTargetByType(), pRVar3 != (ResourceInfo *)0x0)) {
    this = (RtWeakPtr *)(in_x0 + 0x40);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
    if (bVar1) {
      pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
      cVar2 = CanBeTarget((BoardEntity *)pRVar4);
      if (cVar2 != '\0') {
        pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
        local_18[0] = PlantUltomato::getPositionForTarget(in_x0,(BoardEntity *)pRVar4);
        local_10[0] = Sexy::SexyVector2::operator-((SexyVector2 *)local_18,(SexyVector2 *)local_20);
        fVar5 = (float)VectorNorm((FPoint *)local_10);
        if (15.0 < ABS(fVar5 - 0.0)) {
          pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArtifactPrismTowerSubSystem::Update() */

void ArtifactPrismTowerSubSystem::Update(void)

{
  RtWeakPtr *this;
  bool bVar1;
  char cVar2;
  ArtifactPrismTowerSubSystem *in_x0;
  BoardEntity *pBVar3;
  ResourceInfo *pRVar4;
  float *pfVar5;
  StandaloneEffect *pSVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float in_s1;
  float fVar10;
  float local_24;
  undefined4 local_20;
  float fStack_1c;
  undefined4 local_18 [2];
  undefined4 local_10;
  undefined4 uStack_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  RenderLaserUpdate();
  if (*(uint *)(in_x0 + 0x30) < 2) goto LAB_037d4ac4;
  cVar2 = LaserNeedLevelUp(in_x0);
  if (cVar2 == '\0') {
    local_20 = GetLaserShooterPos();
    fStack_1c = in_s1;
    if (*(int *)(in_x0 + 0x30) == 3) goto LAB_037d49d4;
LAB_037d491c:
    this = (RtWeakPtr *)(in_x0 + 0x40);
    fStack_1c = in_s1;
    pBVar3 = (BoardEntity *)Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
    cVar2 = CanBeTarget((BoardEntity *)pRVar4);
    if (cVar2 == '\0') {
      pBVar3 = (BoardEntity *)FindLaserTarget();
    }
    else {
      CheckShouldBreakFogShield(in_x0);
    }
    if (pBVar3 == (BoardEntity *)0x0) goto LAB_037d49d4;
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this);
    if (pBVar3 != (BoardEntity *)pRVar4) {
      *(undefined4 *)(in_x0 + 0x34) = 1;
      uVar7 = PVZ_T();
      *(undefined4 *)(in_x0 + 0x38) = uVar7;
    }
    bVar1 = false;
    fVar8 = (float)PlantUltomato::getPositionForTarget((PlantUltomato *)in_x0,pBVar3);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_10,fVar8,in_s1);
    *(ulong *)(in_x0 + 0x50) = CONCAT44(uStack_c,local_10);
  }
  else {
    LaserLevelUp(in_x0);
    local_20 = GetLaserShooterPos();
    fStack_1c = in_s1;
    if (*(int *)(in_x0 + 0x30) != 3) goto LAB_037d491c;
LAB_037d49d4:
    pBVar3 = (BoardEntity *)0x0;
    *(ulong *)(in_x0 + 0x50) = CONCAT44(fStack_1c,local_20);
    bVar1 = true;
  }
  local_18[0] = Sexy::SexyVector2::operator-
                          ((SexyVector2 *)(in_x0 + 0x50),(SexyVector2 *)(in_x0 + 0x48));
  fVar8 = (float)DVec2::getLength((DVec2 *)local_18);
  fVar10 = *(float *)(in_x0 + 0x18);
  fVar9 = (float)PVZ_Dt();
  local_10 = 0x3f800000;
  local_24 = (fVar9 * fVar10) / fVar8;
  pfVar5 = eastl::min_alt<float>(&local_24,(float *)&local_10);
  local_10 = Sexy::SexyVector2::operator*((SexyVector2 *)local_18,*pfVar5);
  Sexy::TPoint<float>::operator+=((TPoint<float> *)(in_x0 + 0x48),(TPoint *)&local_10);
  if ((7.0 <= fVar8) || (!bVar1)) {
    GetLaserRig();
    pSVar6 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    StandaloneEffect::SetVisibility(pSVar6,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    if (7.0 <= fVar8) {
      GetLaserImapctRig();
      pSVar6 = (StandaloneEffect *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      StandaloneEffect::SetVisibility(pSVar6,false);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
      goto LAB_037d4ac4;
    }
  }
  else {
    GetLaserRig();
    pSVar6 = (StandaloneEffect *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    StandaloneEffect::SetVisibility(pSVar6,false);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  }
  if (*(int *)(in_x0 + 0x30) == 3) {
    SetLaserState();
  }
  else if ((pBVar3 != (BoardEntity *)0x0) && (*(int *)(in_x0 + 0x30) == 2)) {
    LaserHitBlasting((BoardEntity *)in_x0,(SexyVector2 *)pBVar3);
    ApplyLaserDamage(in_x0,pBVar3);
  }
LAB_037d4ac4:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

