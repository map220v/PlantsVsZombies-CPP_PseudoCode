// Class: PlantStunion


/* PlantStunion::CanApplyPlantfood() */

bool __thiscall PlantStunion::CanApplyPlantfood(PlantStunion *this)

{
  return *(int *)(*(long *)(this + 0x10) + 200) != 2;
}


/* PlantStunion::ApplyPlantfood() */

void __thiscall PlantStunion::ApplyPlantfood(PlantStunion *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  *(undefined4 *)(*(long *)(this + 0x10) + 200) = 5;
  return;
}


/* PlantStunion::PlantStunion() */

void __thiscall PlantStunion::PlantStunion(PlantStunion *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  this[0x28] = (PlantStunion)0x1;
  *(undefined ***)this = &PTR_GetClass_067d5790;
  return;
}


/* PlantStunion::StaticNew() */

PlantStunion * PlantStunion::StaticNew(void)

{
  PlantStunion *this;
  
  this = ::operator_new(0x30);
  PlantStunion(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStunion::StaticClassInit() */

void PlantStunion::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantStunion");
    (*pcVar2)(plVar1,asStack_10,FUN_040b789c,0x30,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantStunion::StaticGetClass() */

long * PlantStunion::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantStunion",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantStunion::GetClass() const */

long * PlantStunion::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantStunion",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantStunion::~PlantStunion() */

void __thiscall PlantStunion::~PlantStunion(PlantStunion *this)

{
  *(undefined ***)this = &PTR_GetClass_067d5790;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantStunion::~PlantStunion() */

void __thiscall PlantStunion::~PlantStunion(PlantStunion *this)

{
  ~PlantStunion(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStunion::UpdateActions() */

void __thiscall PlantStunion::UpdateActions(PlantStunion *this)

{
  int iVar1;
  char cVar2;
  PopAnimRig *this_00;
  long *plVar3;
  PlantAnimRig *pPVar4;
  UIEasyButtonWidget *this_01;
  code *pcVar5;
  RtMixedPtrBase aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  iVar1 = *(int *)(*(UIEasyButtonWidget **)(this + 0x10) + 200);
  local_8 = ___stack_chk_guard;
  if (iVar1 == 4) {
    PlantFramework::FindTargetZombie(aRStack_58,this,0);
    cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_58);
    if (cVar2 != '\0') {
      this_01 = *(UIEasyButtonWidget **)(this + 0x10);
      *(undefined4 *)(this_01 + 200) = 2;
      plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(this_01);
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
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
  }
  else if (iVar1 == 2) {
    this_00 = (PopAnimRig *)
              UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    cVar2 = PopAnimRig::IsPlayingAnything(this_00);
    if (cVar2 == '\0') {
      Plant::KillPlant(*(Plant **)(this + 0x10),1,0,0x8000000000);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantStunion::Initialize() */

void __thiscall PlantStunion::Initialize(PlantStunion *this)

{
  int iVar1;
  long lVar2;
  
  PlantFramework::Initialize((PlantFramework *)this);
  this[0x28] = (PlantStunion)0x1;
  lVar2 = FUN_040b89c4(*(undefined8 *)(this + 0x10));
  iVar1 = FUN_040b7528(*(undefined8 *)(this + 0x10));
  FUN_040b7530(lVar2 + 0x3b8,1 < iVar1);
  return;
}


/* PlantStunion::GetStunTimeAddedByLevel() */

undefined4 __thiscall PlantStunion::GetStunTimeAddedByLevel(PlantStunion *this)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = FUN_040b8a94(*(undefined8 *)(this + 0x10));
  iVar1 = FUN_040b7528(*(undefined8 *)(this + 0x10));
  puVar3 = (undefined4 *)FUN_040b7550(*(undefined8 *)(lVar2 + 0x2c8),(long)(iVar1 + -1));
  return *puVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStunion::spawnGasProjectile(int, int) */

void __thiscall PlantStunion::spawnGasProjectile(PlantStunion *this,int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long extraout_x0;
  long lVar6;
  StunionGasProjectile *this_00;
  EffectAnimRig_StunionProjectile *this_01;
  Effect_PopAnim *this_02;
  ResourceInfo *pRVar7;
  char *__s;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  int local_28;
  int local_24;
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  uVar8 = *(undefined8 *)(this + 0x10);
  local_8 = ___stack_chk_guard;
  iVar3 = FUN_040b7528(uVar8);
  FUN_040b7504(aRStack_18,uVar8);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  iVar4 = BoardTransforms::GridToBoardSpaceXUnbounded(param_1);
  iVar5 = BoardTransforms::GridToBoardSpaceYUnbounded(param_2);
  Plant::GetProps();
  lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  lVar6 = FUN_040b7540(*(undefined8 *)(lVar6 + 0x70),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  uVar8 = *(undefined8 *)(gLawnApp + 0x9f0);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_18,(RtWeakPtrBase *)(lVar6 + 8));
  Board::AddProjectile
            ((Board *)(float)iVar4,(float)iVar5,0x41200000,uVar8,aRStack_18,
             *(undefined8 *)(this + 0x10),0);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  iVar4 = (int)*(float *)(extraout_x0 + 0x2b8);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    iVar4 = iVar4 + 1;
  }
  fVar10 = *(float *)(lVar6 + 0x44);
  fVar9 = (float)GetStunTimeAddedByLevel(this);
  iVar5 = (int)lVar6;
  StunionGasProjectile::SetTravelDistance(this_00,(float)iVar4);
  GridItemLava::SetLifeTime((GridItemLava *)this_00,fVar9 + fVar10);
  Projectile::GetAnimRig((Projectile *)this_00);
  nop();
  EffectAnimRig_StunionProjectile::SetAdvanced(this_01,1 < iVar3);
  bVar2 = (bool)Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  EffectAnimRig_StunionProjectile::SetAvatar(this_01,bVar2);
  EffectAnimRig_StunionProjectile::PlayIntro(this_01);
  this_02 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  BoardTransforms::GridToBoardSpacePos((BoardTransforms *)(ulong)(param_1 - 1),param_2,iVar5);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,(float)local_28 + *(float *)(extraout_x0 + 700),
             (float)local_24 + *(float *)(extraout_x0 + 0x2c0),0.0);
  iVar4 = (**(code **)(*(long *)this_00 + 200))(this_00);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_02,(SexyVector3 *)aRStack_18,iVar4 + 1);
  std::string::string(asStack_20,"POPANIM_EFFECTS_STUNION_PF_BURPCLOUD_PROJECTILE");
  GetPAMByName(asStack_20);
  pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_02,(PopAnim *)pRVar7,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(this_02,true);
  if (1 < iVar3) {
    __s = "spawn1";
  }
  else {
    __s = "spawn";
  }
  std::string::string((string *)aRStack_18,__s);
  nop();
  Effect_PopAnim::PlaySingleAnimation(this_02,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStunion::doPlantfoodEffect() */

void __thiscall PlantStunion::doPlantfoodEffect(PlantStunion *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  PlantChilibeanSubSystem *this_00;
  float fVar5;
  float fVar6;
  float fVar7;
  int local_34;
  int local_30 [2];
  int local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_34 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  local_30[0] = local_34 + -1;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_20,local_30);
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_20,&local_34);
  local_30[0] = local_34 + 1;
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_20,local_30);
  Plant::GetProps();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  lVar4 = FUN_040b7540(*(undefined8 *)(lVar4 + 0x70),1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  (**(code **)(*(long *)this + 0x2b8))((RtWeakPtr<Sexy::ResourceInfo> *)local_30,this,1);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 != '\0') {
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    local_28 = local_28 + iVar2;
  }
  fVar7 = *(float *)(lVar4 + 0x44);
  fVar5 = (float)GetStunTimeAddedByLevel(this);
  fVar6 = (float)Plant::GetZombieConditionExtendRate(*(Plant **)(this + 0x10),0x18);
  this_00 = Board::GetGameSubSystem<PlantChilibeanSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  iVar2 = FUN_040b7528(*(undefined8 *)(this + 0x10));
  PlantChilibeanSubSystem::ApplyGasEffectToArea
            (this_00,(TRect *)local_30,(fVar5 + fVar7) * fVar6,(vector *)avStack_20,1 < iVar2);
  iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
  if (0 < local_34) {
    spawnGasProjectile(this,iVar2,local_34 + -1);
  }
  spawnGasProjectile(this,iVar2,local_34);
  iVar3 = BoardConstants::NUMBER_OF_ROWS();
  if (local_34 < iVar3 + -1) {
    spawnGasProjectile(this,iVar2,local_34 + 1);
  }
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantStunion::OnAnimCommand(std::string const&, std::string const&) */

void PlantStunion::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"hide_shadow");
  if (bVar1) {
    param_1[0x28] = (string)0x0;
  }
  if (*(int *)(*(long *)(param_1 + 0x10) + 200) == 5) {
    bVar1 = std::operator==(param_2,"use_action");
    if (bVar1) {
      doPlantfoodEffect((PlantStunion *)param_1);
      PlantFramework::OnAnimCommand(param_1,param_2);
      return;
    }
  }
  PlantFramework::OnAnimCommand(param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantStunion::DoSpecial(int) */

void PlantStunion::DoSpecial(int param_1)

{
  int iVar1;
  PlantStunion *this;
  long lVar2;
  PlantChilibeanSubSystem *this_00;
  float fVar3;
  float fVar4;
  undefined4 local_30 [4];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  this = (PlantStunion *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  local_30[0] = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
  std::vector<int,std::allocator<int>>::push_back
            ((vector<int,std::allocator<int>> *)avStack_20,(int *)local_30);
  Plant::GetProps();
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  lVar2 = FUN_040b7540(*(undefined8 *)(lVar2 + 0x70),0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_30);
  fVar4 = *(float *)(lVar2 + 0x44);
  fVar3 = (float)GetStunTimeAddedByLevel(this);
  this_00 = Board::GetGameSubSystem<PlantChilibeanSubSystem>(*(Board **)(gLawnApp + 0x9f0));
  (**(code **)(*(long *)this + 0x2b8))((RtWeakPtr<Sexy::ResourceInfo> *)local_30,this,0);
  iVar1 = FUN_040b7528(*(undefined8 *)(this + 0x10));
  PlantChilibeanSubSystem::ApplyGasEffectToArea
            (this_00,(TRect *)local_30,fVar3 + fVar4,(vector *)avStack_20,1 < iVar1);
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

