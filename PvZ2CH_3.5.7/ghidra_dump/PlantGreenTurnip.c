// Class: PlantGreenTurnip


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGreenTurnip::GetAnimationStopDelegate() */

void __thiscall PlantGreenTurnip::GetAnimationStopDelegate(PlantGreenTurnip *this)

{
  RtMixedPtr aRStack_20 [8];
  RtId aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_20);
  std::string::string(asStack_10,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate();
  std::string::~string(asStack_10);
  nop();
  Sexy::RtId::~RtId(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGreenTurnip::FindTargetAndFire(PlantWeapon) */

undefined8 PlantGreenTurnip::FindTargetAndFire(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  uVar1 = PlantFramework::FindTargetAndFire();
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGreenTurnip::StaticClassInit() */

void PlantGreenTurnip::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantGreenTurnip");
    (*pcVar2)(plVar1,asStack_10,FUN_040e3948,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGreenTurnip::StaticGetClass() */

long * PlantGreenTurnip::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantGreenTurnip",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGreenTurnip::GetClass() const */

long * PlantGreenTurnip::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantGreenTurnip",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGreenTurnip::GetPlantAction(int) */

undefined4 __thiscall PlantGreenTurnip::GetPlantAction(PlantGreenTurnip *this,int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 1) {
    uVar1 = 3;
    if (param_1 != 2) {
      uVar1 = 0;
    }
    return uVar1;
  }
  return 4;
}


/* PlantGreenTurnip::GetPlantfoodProjectileDropRect() */

Insets * PlantGreenTurnip::GetPlantfoodProjectileDropRect(void)

{
  long in_x0;
  float *pfVar1;
  Insets *in_x8;
  float fVar2;
  
  Sexy::Insets::Insets(in_x8,0x28,0,100,0x32);
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(in_x0 + 0x10));
  fVar2 = pfVar1[1];
  *(int *)in_x8 = (int)((float)*(int *)in_x8 + *pfVar1);
  *(int *)(in_x8 + 4) = (int)((float)*(int *)(in_x8 + 4) + fVar2);
  return in_x8;
}


/* PlantGreenTurnip::Idle() */

void __thiscall PlantGreenTurnip::Idle(PlantGreenTurnip *this)

{
  long *plVar1;
  
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGreenTurnip::PlayImpactEffect(BoardEntity*, Sexy::RtWeakPtr<ProjectilePropertySheet> const&)
    */

void __thiscall
PlantGreenTurnip::PlayImpactEffect(PlantGreenTurnip *this,BoardEntity *param_1,RtWeakPtr *param_2)

{
  undefined4 uVar1;
  long lVar2;
  ValueRange *pVVar3;
  float *pfVar4;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar5;
  char *__s;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_28;
  float local_24;
  RtWeakPtr aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo((ResistenceValueInfo *)&local_28)
  ;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  pVVar3 = (ValueRange *)FUN_040e08b0(*(undefined8 *)(lVar2 + 0x150),0);
  local_28 = (float)ValueRange::GetRandomValue(pVVar3);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  pVVar3 = (ValueRange *)FUN_040e08b0(*(undefined8 *)(lVar2 + 0x150),1);
  fVar6 = (float)ValueRange::GetRandomValue(pVVar3);
  local_24 = fVar6;
  pfVar4 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)param_1);
  fVar8 = pfVar4[1];
  fVar7 = pfVar4[2];
  fVar9 = local_28 + *pfVar4;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  GetPAMByName((string *)(lVar2 + 0x140));
  uVar1 = Board::MakeRenderOrder(0x64960,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),0);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar5,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3(aVStack_18,fVar9,(fVar8 - fVar7) + fVar6,0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aVStack_18,-1);
  FUN_040e0868(this_00 + 0x1c,uVar1);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
  __s = (char *)FUN_0547429c(lVar2 + 0x148);
  std::string::string((string *)aVStack_18,__s);
  Effect_PopAnim::PlaySingleAnimation(this_00,aVStack_18,2);
  std::string::~string((string *)aVStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGreenTurnip::launchSpecialProjectile(Sexy::SexyVector3, int) */

void PlantGreenTurnip::launchSpecialProjectile(long param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  StrawburstProjectile *this;
  RtWeakPtrBase *pRVar3;
  ResourceInfo *pRVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  Plant *pPVar7;
  RtWeakPtr<Sexy::SoundResource> aRStack_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
  if (cVar1 == '\0') {
    uVar6 = 1;
    uVar5 = 1;
  }
  else {
    uVar6 = 2;
    uVar5 = 2;
  }
  pPVar7 = *(Plant **)(param_1 + 0x10);
  *(undefined4 *)(pPVar7 + 0x150) = uVar6;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Plant::Fire(pPVar7,a_Stack_10,param_2,uVar5);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  uVar5 = FUN_040e0870(*(undefined8 *)(this + 0xe0));
  uVar5 = operator|(uVar5,0x2000);
  FUN_040e0874(this + 0xe0,uVar5);
  bVar2 = (bool)Plant::GetAvatarEnable(*(Plant **)(param_1 + 0x10));
  StrawburstProjectile::SetJamFlag(this,bVar2);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(param_1 + 0x30));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(param_1 + 0x30));
  while (bVar2 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar2) {
    pRVar3 = (RtWeakPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_30,pRVar3);
    pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
    if (pRVar4 != (ResourceInfo *)0x0) {
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)aRStack_18);
      BoardEntity::SetHitted((BoardEntity *)pRVar4,a_Stack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGreenTurnip::DoSpecial(int) */

void PlantGreenTurnip::DoSpecial(int param_1)

{
  ulong uVar1;
  SexyVector3 *this;
  undefined4 uVar2;
  undefined4 uVar3;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  uVar1 = (ulong)(uint)param_1;
  uVar2 = 0;
  uVar3 = 0;
  local_8 = ___stack_chk_guard;
  EATextSquish::Vec3::Vec3(aVStack_28,50.0,0.0,0.0);
  this = (SexyVector3 *)
         std::
         _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
         ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                         **)(uVar1 + 0x10));
  local_18 = Sexy::SexyVector3::operator+(this,(SexyVector3 *)aVStack_28);
  local_14 = uVar2;
  local_10 = uVar3;
  launchSpecialProjectile(uVar1,*(undefined4 *)(*(long *)(uVar1 + 0x10) + 0x110));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGreenTurnip::PlantGreenTurnip() */

void __thiscall PlantGreenTurnip::PlantGreenTurnip(PlantGreenTurnip *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067dd160;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  *(undefined4 *)(this + 0x28) = 3;
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


/* PlantGreenTurnip::StaticNew() */

PlantGreenTurnip * PlantGreenTurnip::StaticNew(void)

{
  PlantGreenTurnip *this;
  
  this = ::operator_new(0x48);
  PlantGreenTurnip(this);
  return this;
}


/* PlantGreenTurnip::SetProjectileCount(int) */

void __thiscall PlantGreenTurnip::SetProjectileCount(PlantGreenTurnip *this,int param_1)

{
  PlantAnimRig_HollyKnight *this_00;
  
  *(int *)(this + 0x28) = param_1;
  this_00 = (PlantAnimRig_HollyKnight *)FUN_040e2900(*(undefined8 *)(this + 0x10));
  PlantAnimRig_HollyKnight::SetNumDamageStates(this_00,*(int *)(this + 0x28));
  return;
}


/* PlantGreenTurnip::CancelPlantfood() */

void __thiscall PlantGreenTurnip::CancelPlantfood(PlantGreenTurnip *this)

{
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  SetProjectileCount(this,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGreenTurnip::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantGreenTurnip::onAnimStoppedCallback(PlantGreenTurnip *this,string *param_1)

{
  char cVar1;
  PlantAnimRig_GreenTurnip *this_00;
  long *plVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlantAnimRig_GreenTurnip *)FUN_040e2900(*(undefined8 *)(this + 0x10));
  PlantAnimRig_GreenTurnip::GetRecoverLabel(this_00);
  cVar1 = std::operator==(param_1,asStack_10);
  std::string::~string(asStack_10);
  if (cVar1 != '\0') {
    SetProjectileCount(this,3);
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar2 + 0x118))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGreenTurnip::GetProjectileBounceCount() */

undefined4 __thiscall PlantGreenTurnip::GetProjectileBounceCount(PlantGreenTurnip *this)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  lVar2 = FUN_040e2a80(*(undefined8 *)(this + 0x10));
  iVar1 = FUN_040e08a8(*(undefined8 *)(this + 0x10));
  if (-1 < iVar1) {
    uVar5 = *(undefined8 *)(lVar2 + 0x2c8);
    uVar3 = FUN_040e08bc(uVar5,*(undefined8 *)(lVar2 + 0x2d0));
    if ((ulong)(long)iVar1 < uVar3) {
      puVar4 = (undefined4 *)FUN_040e08c8(uVar5,(long)(iVar1 + -1));
      return *puVar4;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGreenTurnip::LaunchProjectileAt(GreenTurnipProjectile*, Sexy::SexyVector3 const&, float,
   float) */

void __thiscall
PlantGreenTurnip::LaunchProjectileAt
          (PlantGreenTurnip *this,GreenTurnipProjectile *param_1,SexyVector3 *param_2,float param_3,
          float param_4)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_18;
  int iStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_040e2a80(*(undefined8 *)(this + 0x10));
  fVar7 = *(float *)(lVar2 + 0x2c0);
  lVar2 = FUN_040e2a80(*(undefined8 *)(this + 0x10));
  fVar5 = (float)PlantFramework::Rand((PlantFramework *)this,param_3 * *(float *)(lVar2 + 0x2c0));
  fVar5 = fVar5 + fVar7;
  lVar2 = FUN_040e2a80(*(undefined8 *)(this + 0x10));
  fVar6 = *(float *)(lVar2 + 700);
  lVar2 = FUN_040e2a80(*(undefined8 *)(this + 0x10));
  fVar7 = (float)PlantFramework::Rand((PlantFramework *)this,param_4 * *(float *)(lVar2 + 700));
  fVar7 = fVar7 + fVar6;
  BoardEntity::CalcGridPosition();
  GreenTurnipProjectile::SetInitialLaunchValues(param_1,fVar5,fVar7,iStack_14);
  iVar1 = GetProjectileBounceCount(this);
  GreenTurnipProjectile::SetBounceCount(param_1,iVar1);
  Projectile::LaunchAt((Projectile *)param_1,param_2,fVar5,fVar7);
  pfVar3 = (float *)Projectile::GetVelocity((Projectile *)param_1);
  fVar7 = pfVar3[2];
  fVar5 = *pfVar3;
  if (1.0 < fVar7) {
    puVar4 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            *)param_1);
    local_10 = *(undefined4 *)(puVar4 + 1);
    local_18 = (float)*puVar4;
    iStack_14 = (int)((ulong)*puVar4 >> 0x20);
    _local_18 = CONCAT44(iStack_14,(float)(int)((fVar5 / fVar7) * 10.0) + local_18);
    (**(code **)(*(long *)param_1 + 0x78))(param_1,&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGreenTurnip::Fire(Sexy::RtWeakPtr<Zombie>, int, PlantWeapon) */

void PlantGreenTurnip::Fire
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,
               PlantGreenTurnip *param_4,RtWeakPtrBase *param_5,undefined8 param_6,
               undefined4 param_7)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  GreenTurnipProjectile *extraout_x0;
  ResourceInfo *pRVar5;
  long *plVar6;
  float *pfVar7;
  GreenTurnipProjectile *pGVar8;
  code *pcVar9;
  Plant *pPVar10;
  long lVar11;
  float fVar12;
  RtMixedPtrBase aRStack_38 [8];
  int local_30;
  int local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar2 = (**(code **)(*(long *)param_4 + 0x180))();
  if (cVar2 == '\0') {
    if (*(int *)(param_4 + 0x28) < 1) {
      pGVar8 = (GreenTurnipProjectile *)0x0;
    }
    else {
      lVar11 = *(long *)(param_4 + 0x10);
      uVar3 = GetPlantAction(param_4,*(int *)(param_4 + 0x28));
      pPVar10 = *(Plant **)(param_4 + 0x10);
      *(undefined4 *)(lVar11 + 0x150) = uVar3;
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_5);
      Plant::Fire(pPVar10,(RtWeakPtr<Sexy::SoundResource> *)&local_18,param_6,param_7);
      nop();
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      iVar4 = *(int *)(param_4 + 0x28);
      *(undefined4 *)(*(long *)(param_4 + 0x10) + 0x150) = 0xffffffff;
      SetProjectileCount(param_4,iVar4 + -1);
      PlantFramework::FindTargetZombie(aRStack_38,param_4,0);
      (**(code **)(*(long *)param_4 + 0xf8))
                ((RtWeakPtr<Sexy::SoundResource> *)&local_18,param_4,param_7);
      pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      DVec3::DVec3((DVec3 *)&local_28);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_38);
      if (cVar2 == '\0') {
        if (pRVar5 == (ResourceInfo *)0x0) {
          pfVar7 = (float *)std::
                            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                            **)(param_4 + 0x10));
          local_24 = pfVar7[1];
          local_28 = *pfVar7 + 600.0;
          local_20 = 0;
        }
        else {
          GridItem::GetGridLocation();
          BoardTransforms::GridToBoardSpace((Point *)&local_18);
          local_28 = (float)local_30;
          local_20 = 0x41c80000;
          local_24 = (float)local_2c;
        }
      }
      else {
        plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
        pcVar9 = *(code **)(*plVar6 + 0x3b0);
        lVar11 = FUN_040e2a80(*(undefined8 *)(param_4 + 0x10));
        local_18 = (*pcVar9)(*(undefined4 *)(lVar11 + 700),plVar6);
        local_14 = param_2;
        local_10 = param_3;
        Sexy::SexyVector3::operator=((SexyVector3 *)&local_28,(SexyVector3 *)&local_18);
        fVar1 = local_28;
        pfVar7 = (float *)std::
                          _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          **)(param_4 + 0x10));
        fVar12 = *pfVar7;
        if (fVar1 < fVar12) {
          iVar4 = BoardConstants::GRIDSQUARE_WIDTH();
          local_28 = fVar12 + (float)iVar4 * 0.5;
        }
      }
      LaunchProjectileAt(param_4,extraout_x0,(SexyVector3 *)&local_28,0.1,0.1);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      pGVar8 = extraout_x0;
    }
  }
  else {
    (**(code **)(*(long *)param_4 + 0xa8))(param_4,0);
    pGVar8 = (GreenTurnipProjectile *)0x0;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pGVar8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGreenTurnip::UpdateActions() */

void __thiscall PlantGreenTurnip::UpdateActions(PlantGreenTurnip *this)

{
  int iVar1;
  Effect_AngerFlame *this_00;
  PlantAnimRig_GreenTurnip *pPVar2;
  long lVar3;
  float fVar4;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (Effect_AngerFlame *)
            UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  iVar1 = Effect_AngerFlame::GetFlameCol(this_00);
  if (iVar1 == 1) {
    if (*(int *)(this + 0x28) == 0) {
      pPVar2 = (PlantAnimRig_GreenTurnip *)FUN_040e2900(*(undefined8 *)(this + 0x10));
      PlantAnimRig_GreenTurnip::PlaySleep(pPVar2);
      fVar4 = (float)PVZ_T();
      lVar3 = FUN_040e2a80(*(undefined8 *)(this + 0x10));
      *(float *)(this + 0x2c) = fVar4 + *(float *)(lVar3 + 0x2b8);
    }
  }
  else if ((iVar1 == 0xe) && (fVar4 = (float)PVZ_T(), *(float *)(this + 0x2c) < fVar4)) {
    pPVar2 = (PlantAnimRig_GreenTurnip *)FUN_040e2900(*(undefined8 *)(this + 0x10));
    GetAnimationStopDelegate(this);
    PlantAnimRig_GreenTurnip::PLayRecover(pPVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGreenTurnip::findLeftmostTargetType(BoardEntityTypeFlag, int) */

void __thiscall
PlantGreenTurnip::findLeftmostTargetType(PlantGreenTurnip *this,undefined4 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  Zombie *pZVar7;
  GridItem *pGVar8;
  code *pcVar9;
  RealObject *this_00;
  RealObject *pRVar10;
  float fVar11;
  float fVar12;
  undefined8 local_50;
  undefined8 local_48;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  pRVar10 = (RealObject *)0x0;
  local_8 = ___stack_chk_guard;
  iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
  Sexy::Insets::Insets(aIStack_30,0,param_3,iVar3,1);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,param_2,aIStack_30);
  local_50 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  fVar12 = 1e+06;
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
    if (!bVar1) {
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pRVar10);
    }
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50);
    this_00 = (RealObject *)*puVar6;
    cVar2 = RealObject::IsOnOpposingTeam(this_00,*(RealObject **)(this + 0x10));
    if (cVar2 != '\0') {
      iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
      fVar11 = (float)FUN_040e09a4(*(undefined4 *)(this_00 + 0x18),*(undefined4 *)(this_00 + 0x1c),
                                   *(undefined4 *)(this_00 + 0x20));
      iVar4 = BoardTransforms::BoardSpaceToGridX(fVar11);
      if (iVar4 < iVar3) {
        pZVar7 = Sexy::RtObject::Cast<Zombie>((RtObject *)this_00);
        if (pZVar7 == (Zombie *)0x0) {
LAB_040e327c:
          pGVar8 = Sexy::RtObject::Cast<GridItem>((RtObject *)this_00);
          if ((((pGVar8 == (GridItem *)0x0) ||
               ((cVar2 = RealObject::IsOnTeam(pGVar8,1), cVar2 != '\0' &&
                (cVar2 = (**(code **)(*(long *)pGVar8 + 0x208))(pGVar8), cVar2 != '\0')))) ||
              ((cVar2 = RealObject::IsOnTeam(pGVar8,2), cVar2 != '\0' &&
               (cVar2 = (**(code **)(*(long *)pGVar8 + 0x200))(pGVar8), cVar2 != '\0')))) &&
             (fVar11 = (float)FUN_040e09a4(*(undefined4 *)(this_00 + 0x18),
                                           *(undefined4 *)(this_00 + 0x1c),
                                           *(undefined4 *)(this_00 + 0x20)), fVar11 < fVar12)) {
            pRVar10 = this_00;
            fVar12 = fVar11;
          }
        }
        else {
          uVar5 = operator|(1,8);
          cVar2 = Zombie::MatchesAny(pZVar7,uVar5);
          if (cVar2 == '\0') {
            pcVar9 = *(code **)(*(long *)pZVar7 + 0x3d0);
            Plant::GetType();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_40);
            cVar2 = (*pcVar9)(pZVar7,aRStack_38,0);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
            if (cVar2 == '\x01') goto LAB_040e327c;
          }
        }
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGreenTurnip::findBestTargetInRow(int) */

void PlantGreenTurnip::findBestTargetInRow(int param_1)

{
  long lVar1;
  undefined4 in_w1;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = findLeftmostTargetType((PlantGreenTurnip *)param_1,2,in_w1);
  if ((lVar1 == 0) &&
     (lVar1 = findLeftmostTargetType((PlantGreenTurnip *)param_1,4,in_w1), lVar1 == 0)) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)in_x8);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGreenTurnip::ApplyPlantfood() */

void __thiscall PlantGreenTurnip::ApplyPlantfood(PlantGreenTurnip *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x30));
  return;
}


/* PlantGreenTurnip::~PlantGreenTurnip() */

void __thiscall PlantGreenTurnip::~PlantGreenTurnip(PlantGreenTurnip *this)

{
  *(undefined ***)this = &PTR_GetClass_067dd160;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantGreenTurnip::~PlantGreenTurnip() */

void __thiscall PlantGreenTurnip::~PlantGreenTurnip(PlantGreenTurnip *this)

{
  ~PlantGreenTurnip(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGreenTurnip::TakePlantfoodProjectileDropDamage() */

void __thiscall PlantGreenTurnip::TakePlantfoodProjectileDropDamage(PlantGreenTurnip *this)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  Zombie *pZVar7;
  GridItem *pGVar8;
  code *pcVar9;
  undefined8 uVar10;
  RtObject *this_00;
  float fVar11;
  float fVar12;
  RtWeakPtr<Sexy::SoundResource> aRStack_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_a8 [8];
  Point aPStack_a0 [8];
  undefined4 local_98;
  undefined4 local_94;
  undefined1 auStack_90 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetPlantfoodProjectileDropRect();
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesTouchingRectangle
            (avStack_80,uVar3,auStack_90,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),
             *(undefined4 *)(*(long *)(this + 0x10) + 0x110));
  FUN_040e0884(aRStack_68,*(undefined8 *)(this + 0x10));
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_68);
  lVar4 = FUN_040e099c(*(undefined8 *)(lVar4 + 0x70));
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_c8,(RtWeakPtrBase *)(lVar4 + 8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
  fVar12 = *(float *)(lVar4 + 0x18);
  fVar11 = (float)Plant::GetTotalDamageRate(*(Plant **)(this + 0x10));
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
  uVar5 = operator|(*(undefined8 *)(lVar4 + 0x30),0x4000000);
  uVar5 = operator|(uVar5,0x800);
  uVar5 = operator|(uVar5,0x2000);
  uVar10 = *(undefined8 *)(this + 0x10);
  Sexy::Point::Point(aPStack_a0,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_98,1.0,0.0);
  DamageInfo::DamageInfo
            ((DamageInfo *)(fVar11 * fVar12),local_98,local_94,aRStack_68,uVar5,uVar10,aPStack_a0,0)
  ;
  local_c0 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_b8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_c0,(__normal_iterator *)&local_b8);
    if (!bVar1) {
      DamageInfo::~DamageInfo((DamageInfo *)aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_c8);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar6 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c0);
    this_00 = (RtObject *)*puVar6;
    uVar3 = FUN_040e07cc(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
    cVar2 = RealObject::IsOnOpposingTeam(this_00,uVar3);
    if (cVar2 != '\0') {
      pZVar7 = Sexy::RtObject::Cast<Zombie>(this_00);
      if (pZVar7 == (Zombie *)0x0) {
        pGVar8 = Sexy::RtObject::Cast<GridItem>(this_00);
        if (((pGVar8 != (GridItem *)0x0) &&
            (cVar2 = (**(code **)(*(long *)pGVar8 + 0x200))(), cVar2 != '\0')) &&
           (cVar2 = (**(code **)(*(long *)pGVar8 + 0x210))(pGVar8,*(undefined8 *)(this + 0x10)),
           cVar2 != '\0')) {
          (**(code **)(*(long *)pGVar8 + 0x110))(pGVar8,aRStack_68);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)&local_98,(RtWeakPtrBase *)aPStack_a0);
          std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
          push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                     *)(this + 0x30),(RtWeakPtr *)&local_98);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_a0);
          PlayImpactEffect(this,(BoardEntity *)pGVar8,(RtWeakPtr *)aRStack_c8);
        }
      }
      else {
        cVar2 = (**(code **)(*(long *)pZVar7 + 0x328))();
        if (cVar2 == '\0') {
          pcVar9 = *(code **)(*(long *)this + 0x3e0);
          ToolPacketData::GetProps();
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_a8,(RtWeakPtrBase *)aRStack_b0);
          cVar2 = (*pcVar9)(this,aRStack_a8,1);
          if (cVar2 != '\0') {
            pcVar9 = *(code **)(*(long *)pZVar7 + 0x3d0);
            Plant::GetType();
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_98,(RtWeakPtrBase *)aPStack_a0);
            cVar2 = (*pcVar9)(pZVar7,(FastCurve *)&local_98,0);
            if (cVar2 != '\0') {
              cVar2 = (**(code **)(*(long *)pZVar7 + 0xb8))(pZVar7,7);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_a0);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
              if (cVar2 != '\0') {
                (**(code **)(*(long *)pZVar7 + 0x110))(pZVar7,aRStack_68);
                ToolPacketData::GetProps();
                Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                          ((RtWeakPtr<Sexy::SoundResource> *)&local_98,(RtWeakPtrBase *)aPStack_a0);
                std::
                vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
                push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>
                           *)(this + 0x30),(RtWeakPtr *)&local_98);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_a0);
                PlayImpactEffect(this,(BoardEntity *)pZVar7,(RtWeakPtr *)aRStack_c8);
              }
              goto LAB_040e40a4;
            }
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_98);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)aPStack_a0);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
        }
      }
    }
LAB_040e40a4:
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c0);
  } while( true );
}


/* PlantGreenTurnip::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantGreenTurnip::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = std::operator==(param_2,"plantfood_projectile_drop_ground");
  if (!bVar1) {
    uVar2 = PlantFramework::OnAnimCommand(param_1,param_2);
    return uVar2;
  }
  TakePlantfoodProjectileDropDamage((PlantGreenTurnip *)param_1);
  return 1;
}

