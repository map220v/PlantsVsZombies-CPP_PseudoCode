// Class: PlantChestnut


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChestnut::StaticClassInit() */

void PlantChestnut::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantChestnut");
    (*pcVar2)(plVar1,asStack_10,FUN_040c56dc,0x58,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantChestnut::StaticGetClass() */

long * PlantChestnut::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantChestnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantChestnut::GetClass() const */

long * PlantChestnut::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantChestnut",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantChestnut::ApplyPlantfood() */

void __thiscall PlantChestnut::ApplyPlantfood(PlantChestnut *this)

{
  PlantHydrocotyledrummer::setState((PlantHydrocotyledrummer *)this,5);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChestnut::SpawnPlaceIsSafe() */

void __thiscall PlantChestnut::SpawnPlaceIsSafe(PlantChestnut *this)

{
  byte bVar1;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point(aPStack_10,*(int *)(*(long *)(this + 0x10) + 0x114) + 1,
                     *(int *)(*(long *)(this + 0x10) + 0x110));
  bVar1 = PlantSmallChestnut::IsDangerous(aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1 ^ 1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChestnut::FireProjectile(PlantWeapon) */

void __thiscall PlantChestnut::FireProjectile(PlantChestnut *this,undefined4 param_2)

{
  long lVar1;
  DailySignActivityWidget *this_00;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = param_2;
  local_8 = ___stack_chk_guard;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  this_00 = (DailySignActivityWidget *)
            Plant::Fire(*(Plant **)(this + 0x10),a_Stack_10,
                        *(undefined4 *)(*(Plant **)(this + 0x10) + 0x110),param_2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  DailySignActivityWidget::setIsCanAwardToday(this_00,true);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(*(long *)(this + 0x10) + 0x150) = 0xffffffff;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChestnut::FirePlantFoodProjectile() */

void __thiscall PlantChestnut::FirePlantFoodProjectile(PlantChestnut *this)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  SexyVector3 *this_01;
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Vec3 aVStack_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  FireProjectile(this,1);
  this_00 = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             *)FireProjectile(this,1);
  pcVar1 = *(code **)(*(long *)this_00 + 0x78);
  this_01 = (SexyVector3 *)
            std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(this_00);
  uVar3 = 0;
  uVar2 = 0x41a00000;
  EATextSquish::Vec3::Vec3(aVStack_28,-20.0,20.0,0.0);
  local_18 = Sexy::SexyVector3::operator+(this_01,(SexyVector3 *)aVStack_28);
  local_14 = uVar2;
  local_10 = uVar3;
  (*pcVar1)(this_00,&local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChestnut::PlayPlantFoodEffect() */

void __thiscall PlantChestnut::PlayPlantFoodEffect(PlantChestnut *this)

{
  char cVar1;
  undefined4 uVar2;
  float *pfVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  char *__s;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_01;
  float fVar5;
  float fVar6;
  float local_30;
  float local_2c;
  string asStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,0.0,-10.0);
  this_01 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(this_01);
  fVar5 = *pfVar3;
  fVar6 = pfVar3[1];
  uVar2 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(this_01 + 0x110),0);
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    __s = "plantfood_2";
  }
  else {
    __s = "plantfood";
  }
  std::string::string(asStack_28,__s);
  nop();
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_20,"POPANIM_PLANT_SMALL_CHESTNUT");
  GetPAMByName(asStack_20);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  std::string::~string(asStack_20);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_18,(float)(int)(local_30 + fVar5),(float)(int)(local_2c + fVar6),0.0);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_18,-1);
  FUN_040c3898(this_00 + 0x1c,uVar2);
  Effect_PopAnim::PlaySingleAnimation(this_00,asStack_28,0);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantChestnut::PlantChestnut() */

void __thiscall PlantChestnut::PlantChestnut(PlantChestnut *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR_GetClass_067d82d0;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = uVar1;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0x34));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x40));
  return;
}


/* PlantChestnut::StaticNew() */

PlantChestnut * PlantChestnut::StaticNew(void)

{
  PlantChestnut *this;
  
  this = ::operator_new(0x58);
  PlantChestnut(this);
  return this;
}


/* PlantChestnut::Initialize() */

void __thiscall PlantChestnut::Initialize(PlantChestnut *this)

{
  bool bVar1;
  PlantAnimRig_Pinecone *this_00;
  undefined4 uVar2;
  
  PlantFramework::Initialize((PlantFramework *)this);
  this_00 = (PlantAnimRig_Pinecone *)FUN_040c4a60(*(undefined8 *)(this + 0x10));
  bVar1 = (bool)FUN_040c38b0(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Pinecone::SetElec(this_00,bVar1);
  PlantHydrocotyledrummer::setState((PlantHydrocotyledrummer *)this,4);
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x28) = 0;
  this[0x30] = (PlantChestnut)0x0;
  *(undefined4 *)(this + 0x2c) = uVar2;
  return;
}


/* PlantChestnut::OnCloseMouthStopped() */

void __thiscall PlantChestnut::OnCloseMouthStopped(PlantChestnut *this)

{
  long *plVar1;
  
  PlantHydrocotyledrummer::setState((PlantHydrocotyledrummer *)this,4);
  plVar1 = (long *)FUN_040c4a60(*(undefined8 *)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  return;
}


/* PlantChestnut::GetMaxChildrenCount() */

undefined4 __thiscall PlantChestnut::GetMaxChildrenCount(PlantChestnut *this)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  
  lVar2 = FUN_040c4b7c(*(undefined8 *)(this + 0x10));
  iVar1 = FUN_040c38a8(*(undefined8 *)(this + 0x10));
  puVar3 = (undefined4 *)FUN_040c38d0(*(undefined8 *)(lVar2 + 0x2c0),(long)(iVar1 + -1));
  return *puVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChestnut::GetChildrenLaunchInterval() */

void __thiscall PlantChestnut::GetChildrenLaunchInterval(PlantChestnut *this)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  Plant *this_00;
  float fVar4;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_040c4b7c(*(undefined8 *)(this + 0x10));
  this_00 = *(Plant **)(this + 0x10);
  iVar1 = FUN_040c38a8(this_00);
  pfVar3 = (float *)FUN_040c38f0(*(undefined8 *)(lVar2 + 0x2d8),(long)(iVar1 + -1));
  fVar4 = *pfVar3;
  local_10 = (float)Plant::GetGeneSkillBoost(this_00);
  local_10 = fVar4 - local_10;
  local_c = 1.0;
  pfVar3 = eastl::max_alt<float>(&local_10,&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*pfVar3);
}


/* PlantChestnut::Idle() */

void __thiscall PlantChestnut::Idle(PlantChestnut *this)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  
  plVar1 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  (**(code **)(*plVar1 + 0x118))();
  PlantHydrocotyledrummer::setState((PlantHydrocotyledrummer *)this,4);
  fVar3 = (float)PVZ_EOT();
  if (*(float *)(this + 0x2c) == fVar3) {
    lVar2 = FUN_040c38e4(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x48));
    if (lVar2 == 0) {
      uVar5 = PVZ_T();
      *(undefined4 *)(this + 0x2c) = uVar5;
      return;
    }
    fVar3 = (float)PVZ_T();
    fVar4 = (float)GetChildrenLaunchInterval(this);
    *(float *)(this + 0x2c) = fVar4 + fVar3;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChestnut::OnOpenMouthStopped() */

void __thiscall PlantChestnut::OnOpenMouthStopped(PlantChestnut *this)

{
  PlantAnimRig_Chestnut *pPVar1;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlantAnimRig_Chestnut *)FUN_040c4a60(*(undefined8 *)(this + 0x10));
  if (*(int *)(this + 0x28) < 2) {
    PlantGreenTurnip::GetAnimationStopDelegate((PlantGreenTurnip *)this);
    PlantAnimRig_Chestnut::PlayLaunchLastChild(pPVar1,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
  }
  else {
    PlantGreenTurnip::GetAnimationStopDelegate((PlantGreenTurnip *)this);
    PlantAnimRig_Chestnut::PlayLaunchChild(pPVar1,aRStack_50);
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
/* PlantChestnut::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantChestnut::onAnimStoppedCallback(PlantChestnut *this,string *param_1)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(*(long *)(this + 0x10) + 200) == 10) {
    FUN_040c4a60();
    PlantAnimRig_Chestnut::GetOpenMouthName();
    cVar1 = std::operator==(param_1,asStack_10);
    std::string::~string(asStack_10);
    if (cVar1 == '\0') {
      PlantAnimRig_Chestnut::GetCloseMouthName();
      cVar1 = std::operator==(param_1,asStack_10);
      std::string::~string(asStack_10);
      if (cVar1 != '\0') {
        OnCloseMouthStopped(this);
      }
    }
    else {
      OnOpenMouthStopped(this);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChestnut::LaunchChildren(int) */

void __thiscall PlantChestnut::LaunchChildren(PlantChestnut *this,int param_1)

{
  PlantAnimRig_Chestnut *pPVar1;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  *(int *)(this + 0x28) = param_1;
  local_8 = ___stack_chk_guard;
  pPVar1 = (PlantAnimRig_Chestnut *)FUN_040c4a60(*(undefined8 *)(this + 0x10));
  PlantGreenTurnip::GetAnimationStopDelegate((PlantGreenTurnip *)this);
  PlantAnimRig_Chestnut::PlayOpenMouth(pPVar1,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  PlantHydrocotyledrummer::setState((PlantHydrocotyledrummer *)this,10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChestnut::PlayChildJumpEffect(Sexy::SexyVector2 const&) */

void __thiscall PlantChestnut::PlayChildJumpEffect(PlantChestnut *this,SexyVector2 *param_1)

{
  char cVar1;
  int iVar2;
  float *pfVar3;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar4;
  char *__s;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_78;
  float local_74;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtWeakPtr aRStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_78,0.0,-12.0);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar5 = *pfVar3;
  fVar6 = pfVar3[1];
  fVar9 = *(float *)param_1;
  fVar7 = *(float *)(param_1 + 4);
  fVar8 = pfVar3[2];
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  cVar1 = FUN_040c38b0(*(undefined8 *)(this + 0x10));
  if (cVar1 == '\0') {
    __s = "POPANIM_PLANT_SMALL_CHESTNUT";
  }
  else {
    __s = "POPANIM_PLANT_SMALL_CHESTNUT_LV5";
  }
  std::string::string(asStack_68,__s);
  GetPAMByName(asStack_68);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  std::string::~string(asStack_68);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string((string *)aRStack_60,"onStandaloneEffectFinishedCallback");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,asStack_68,
             aRStack_60);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_00,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)aRStack_60);
  nop();
  Sexy::RtId::~RtId((RtId *)asStack_68);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  Effect_PopAnim::SetCentered(this_00,true);
  EATextSquish::Vec3::Vec3
            ((Vec3 *)aRStack_60,(float)(int)(local_78 + fVar5 + fVar9),
             (float)(int)(local_74 + fVar6 + fVar7),(float)(int)fVar8);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)aRStack_60,-1);
  iVar2 = (**(code **)(**(long **)(this + 0x10) + 200))(*(long **)(this + 0x10));
  FUN_040c3898(this_00 + 0x1c,iVar2 + 1);
  std::string::string((string *)aRStack_60,"spawn");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_60,0);
  std::string::~string((string *)aRStack_60);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantChestnut::OnAnimCommand(std::string const&, std::string const&) */

undefined8 PlantChestnut::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  
  bVar1 = std::operator==(param_2,"launch_child");
  if (bVar1) {
    iVar2 = PlantFramework::Rand((PlantFramework *)param_1,0x14);
    *(float *)(param_1 + 0x34) = (float)(iVar2 + -10);
    iVar2 = PlantFramework::Rand((PlantFramework *)param_1,10);
    *(float *)(param_1 + 0x38) = (float)(5 - iVar2);
    PlayChildJumpEffect((PlantChestnut *)param_1,(SexyVector2 *)(param_1 + 0x34));
    return 1;
  }
  bVar1 = std::operator==(param_2,"avatar_fire");
  if (bVar1) {
    FireProjectile((PlantChestnut *)param_1,2);
  }
  else {
    bVar1 = std::operator==(param_2,"plantfood_fire");
    if (bVar1) {
      FirePlantFoodProjectile((PlantChestnut *)param_1);
      uVar3 = PlantFramework::OnAnimCommand(param_1,param_2);
      return uVar3;
    }
    bVar1 = std::operator==(param_2,"plantfood_effect");
    if (bVar1) {
      PlayPlantFoodEffect((PlantChestnut *)param_1);
    }
  }
  uVar3 = PlantFramework::OnAnimCommand(param_1,param_2);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChestnut::onDestroy() */

void __thiscall PlantChestnut::onDestroy(PlantChestnut *this)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  char cVar4;
  RtMixedPtrBase *this_00;
  long lVar5;
  undefined8 local_28;
  undefined8 local_20;
  Point aPStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::onDestroy((PlantFramework *)this);
  local_28 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x40));
  local_20 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)(this + 0x40));
  while (bVar3 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar3) {
    this_00 = (RtMixedPtrBase *)
              std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
    cVar4 = Sexy::RtMixedPtrBase::IsValid(this_00);
    puVar2 = gMessageRouter;
    if (cVar4 != '\0') {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_00);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar1 = *(int *)(lVar5 + 0x114);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      Sexy::Point::Point(aPStack_18,iVar1,*(int *)(lVar5 + 0x110));
      MessageRouter::Broadcast<Plant*,Sexy::Point&,Sexy::RtWeakPtr<Plant>,Sexy::Point>
                ((MessageRouter *)puVar2,Message::PlantMoving,aRStack_10,aPStack_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChestnut::CancelPlantfood() */

void __thiscall PlantChestnut::CancelPlantfood(PlantChestnut *this)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  RtMixedPtrBase *this_00;
  long lVar6;
  undefined8 local_28;
  undefined8 local_20;
  Point aPStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar2 == '\0') {
    FirePlantFoodProjectile(this);
  }
  iVar4 = GetMaxChildrenCount(this);
  iVar5 = FUN_040c38e4(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x48));
  if ((0 < iVar4 - iVar5) && (this[0x30] != (PlantChestnut)0x0)) {
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)(this + 0x40));
    local_20 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)(this + 0x40));
    while (bVar3 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20), bVar3)
    {
      this_00 = (RtMixedPtrBase *)
                std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
      cVar2 = Sexy::RtMixedPtrBase::IsValid(this_00);
      puVar1 = gMessageRouter;
      if (cVar2 != '\0') {
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)this_00);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        iVar4 = *(int *)(lVar6 + 0x114);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
        Sexy::Point::Point(aPStack_18,iVar4,*(int *)(lVar6 + 0x110));
        MessageRouter::Broadcast<Plant*,Sexy::Point&,Sexy::RtWeakPtr<Plant>,Sexy::Point>
                  ((MessageRouter *)puVar1,Message::PlantMoving,aRStack_10,aPStack_18);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
    }
    this[0x30] = (PlantChestnut)0x0;
  }
  PlantHydrocotyledrummer::setState((PlantHydrocotyledrummer *)this,4);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantChestnut::~PlantChestnut() */

void __thiscall PlantChestnut::~PlantChestnut(PlantChestnut *this)

{
  *(undefined ***)this = &PTR_GetClass_067d82d0;
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x40))
  ;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantChestnut::~PlantChestnut() */

void __thiscall PlantChestnut::~PlantChestnut(PlantChestnut *this)

{
  ~PlantChestnut(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChestnut::UpdateIdleAction() */

void __thiscall PlantChestnut::UpdateIdleAction(PlantChestnut *this)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  undefined *puVar1;
  bool bVar2;
  char cVar3;
  PlantChestnut PVar4;
  int iVar5;
  int iVar6;
  RtMixedPtrBase *pRVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
LAB_040c5a50:
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  do {
    if (!bVar2) {
      iVar5 = GetMaxChildrenCount(this);
      iVar6 = FUN_040c38e4(*(undefined8 *)(this + 0x40),*(undefined8 *)(this + 0x48));
      iVar5 = iVar5 - iVar6;
      if (iVar5 < 1) {
        if ((iVar5 != 0) || (this[0x30] == (PlantChestnut)0x0)) goto LAB_040c5ae0;
        local_28 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::begin(this_00);
        local_20 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(this_00);
        while( true ) {
          bVar2 = __gnu_cxx::operator!=
                            ((__normal_iterator *)&local_28,(__normal_iterator *)&local_20);
          PVar4 = (PlantChestnut)0x0;
          if (!bVar2) break;
          pRVar7 = (RtMixedPtrBase *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_28);
          cVar3 = Sexy::RtMixedPtrBase::IsValid(pRVar7);
          puVar1 = gMessageRouter;
          if (cVar3 != '\0') {
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_10,(RtWeakPtrBase *)pRVar7);
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar7);
            iVar5 = *(int *)(lVar8 + 0x114);
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)pRVar7);
            Sexy::Point::Point((Point *)&local_18,iVar5,*(int *)(lVar8 + 0x110));
            MessageRouter::Broadcast<Plant*,Sexy::Point&,Sexy::RtWeakPtr<Plant>,Sexy::Point>
                      ((MessageRouter *)puVar1,Message::PlantMoving,
                       (__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                        *)&local_10,(__normal_iterator *)&local_18);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
          }
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_28);
        }
      }
      else {
        fVar9 = (float)PVZ_T();
        if ((fVar9 <= *(float *)(this + 0x2c)) || (cVar3 = SpawnPlaceIsSafe(this), cVar3 == '\0'))
        goto LAB_040c5ae0;
        LaunchChildren(this,iVar5);
        uVar11 = PVZ_EOT();
        PVar4 = (PlantChestnut)0x1;
        *(undefined4 *)(this + 0x2c) = uVar11;
      }
      this[0x30] = PVar4;
LAB_040c5ae0:
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    pRVar7 = (RtMixedPtrBase *)
             std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    cVar3 = Sexy::RtMixedPtrBase::IsValid(pRVar7);
    if (cVar3 == '\0') break;
    FUN_040c46e4((__normal_iterator *)&local_18);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  } while( true );
  __gnu_cxx::
  __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
  ::__normal_iterator<Sexy::RenderStateManager::Context**>
            ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              *)&local_10,(__normal_iterator *)&local_18);
  local_18 = std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::erase
                       ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                        this_00,local_10);
  fVar9 = (float)PVZ_EOT();
  if (*(float *)(this + 0x2c) == fVar9) {
    fVar9 = (float)PVZ_T();
    fVar10 = (float)GetChildrenLaunchInterval(this);
    *(float *)(this + 0x2c) = fVar10 + fVar9;
  }
  goto LAB_040c5a50;
}


/* PlantChestnut::UpdateActions() */

void __thiscall PlantChestnut::UpdateActions(PlantChestnut *this)

{
  if (*(int *)(*(long *)(this + 0x10) + 200) != 4) {
    return;
  }
  UpdateIdleAction(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChestnut::GetChildType() */

void PlantChestnut::GetChildType(void)

{
  char cVar1;
  long in_x0;
  string *psVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  string asStack_30 [8];
  wstring awStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_040c38b0(*(undefined8 *)(in_x0 + 0x10));
  if (cVar1 == '\0') {
    psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
    std::string::string(asStack_18,"smallChestnut");
    ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar2);
    std::string::~string(asStack_18);
    nop();
  }
  else {
    uVar3 = Sexy::LazySingleton<PVZDB>::GetInstance();
    std::string::string(asStack_30,"smallChestnutLv5");
    Sexy::ToWString(asStack_30);
    Sexy::RtName::RtName((RtName *)asStack_18,awStack_28);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>(aRStack_20,uVar3,6,(RtName *)asStack_18);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)aRStack_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
    Sexy::RtName::~RtName((RtName *)asStack_18);
    FUN_05476c50(awStack_28);
    std::string::~string(asStack_30);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChestnut::SpawnChild(Sexy::SexyVector2 const&) */

void __thiscall PlantChestnut::SpawnChild(PlantChestnut *this,SexyVector2 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  Plant *this_00;
  undefined8 *puVar5;
  long lVar6;
  PlantSmallChestnut *this_01;
  undefined8 uVar7;
  float local_30;
  float local_2c;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  float local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_30,66.0,0.0);
  uVar1 = *(undefined4 *)(*(long *)(this + 0x10) + 0x114);
  uVar2 = *(undefined4 *)(*(long *)(this + 0x10) + 0x110);
  uVar7 = *(undefined8 *)(gLawnApp + 0x9f0);
  GetChildType();
  uVar4 = FUN_040c38a8(*(undefined8 *)(this + 0x10));
  this_00 = (Plant *)Board::AddPlant((Board *)0x0,uVar7,uVar1,uVar2,
                                     (RtWeakPtr<Sexy::ResourceInfo> *)&local_18,0,1,uVar4,0,0,1,0,0,
                                     0,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Plant::CopyBoostProperty(this_00,*(undefined8 *)(this + 0x10),4);
  Plant::CopyBoostProperty(this_00,*(undefined8 *)(this + 0x10),6);
  Plant::CopyBoostProperty(this_00,*(undefined8 *)(this + 0x10),7);
  Plant::Heal(this_00);
  puVar5 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this_00);
  fStack_14 = (float)((ulong)*puVar5 >> 0x20);
  local_10 = *(undefined4 *)(puVar5 + 1);
  local_18 = (float)*puVar5;
  _local_18 = CONCAT44(local_2c + fStack_14 + *(float *)(param_1 + 4),
                       local_30 + local_18 + *(float *)param_1);
  (**(code **)(*(long *)this_00 + 0x78))(this_00,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  Plant::SetTravellingOutsideGroup(this_00,true);
  lVar6 = FUN_040c4b7c(*(undefined8 *)(this + 0x10));
  iVar3 = *(int *)(lVar6 + 0x2b8);
  this_01 = Sexy::RtObject::Cast<PlantSmallChestnut>(*(RtObject **)(this_00 + 0xa8));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  PlantDracaena::SetTargetZombie((PlantDracaena *)this_01,aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  DangerRoomManager::SetCurrentLevel((DangerRoomManager *)this_01,iVar3);
  PlantSmallChestnut::SetPositioinOffset(this_01,param_1);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)aRStack_28);
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x40),
             (RtWeakPtr *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChestnut::OnChildJumpStopped() */

void __thiscall PlantChestnut::OnChildJumpStopped(PlantChestnut *this)

{
  PlantAnimRig_Chestnut *pPVar1;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SpawnChild(this,(SexyVector2 *)(this + 0x34));
  if (*(int *)(*(long *)(this + 0x10) + 200) == 10) {
    *(int *)(this + 0x28) = *(int *)(this + 0x28) + -1;
    pPVar1 = (PlantAnimRig_Chestnut *)FUN_040c4a60();
    if (*(int *)(this + 0x28) < 2) {
      if (*(int *)(this + 0x28) == 1) {
        PlantGreenTurnip::GetAnimationStopDelegate((PlantGreenTurnip *)this);
        PlantAnimRig_Chestnut::PlayLaunchLastChild(pPVar1,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
      }
      else {
        PlantGreenTurnip::GetAnimationStopDelegate((PlantGreenTurnip *)this);
        PlantAnimRig_Chestnut::PlayCloseMouth(pPVar1,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
      }
    }
    else {
      PlantGreenTurnip::GetAnimationStopDelegate((PlantGreenTurnip *)this);
      PlantAnimRig_Chestnut::PlayLaunchChild(pPVar1,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantChestnut::onStandaloneEffectFinishedCallback(StandaloneEffect*) */

void PlantChestnut::onStandaloneEffectFinishedCallback(StandaloneEffect *param_1)

{
  PlantAnimRig_Chestnut *pPVar1;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  SpawnChild((PlantChestnut *)param_1,(SexyVector2 *)(param_1 + 0x34));
  if (*(int *)(*(long *)(param_1 + 0x10) + 200) == 10) {
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    pPVar1 = (PlantAnimRig_Chestnut *)FUN_040c4a60();
    if (*(int *)(param_1 + 0x28) < 2) {
      if (*(int *)(param_1 + 0x28) == 1) {
        PlantGreenTurnip::GetAnimationStopDelegate((PlantGreenTurnip *)param_1);
        PlantAnimRig_Chestnut::PlayLaunchLastChild(pPVar1,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
      }
      else {
        PlantGreenTurnip::GetAnimationStopDelegate((PlantGreenTurnip *)param_1);
        PlantAnimRig_Chestnut::PlayCloseMouth(pPVar1,aRStack_50);
        RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
        ::~RtReflectionDelegate(aRStack_50);
      }
    }
    else {
      PlantGreenTurnip::GetAnimationStopDelegate((PlantGreenTurnip *)param_1);
      PlantAnimRig_Chestnut::PlayLaunchChild(pPVar1,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
    }
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

