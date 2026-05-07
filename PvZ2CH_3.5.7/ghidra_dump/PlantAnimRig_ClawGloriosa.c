// Class: PlantAnimRig_ClawGloriosa


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ClawGloriosa::getPlantFoodMainAnimName() */

void PlantAnimRig_ClawGloriosa::getPlantFoodMainAnimName(void)

{
  long lVar1;
  char cVar2;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(in_x0 + 0x210));
  if (cVar2 == '\0') {
    __s = "plantfood";
  }
  else {
    __s = "plantfood_avatar";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_ClawGloriosa::~PlantAnimRig_ClawGloriosa() */

void __thiscall
PlantAnimRig_ClawGloriosa::~PlantAnimRig_ClawGloriosa(PlantAnimRig_ClawGloriosa *this)

{
  *(undefined ***)this = &PTR_GetClass_06728da0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ClawGloriosa_06729008;
  PlantAnimRig::~PlantAnimRig((PlantAnimRig *)this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ClawGloriosa::~PlantAnimRig_ClawGloriosa() */

void __thiscall
PlantAnimRig_ClawGloriosa::~PlantAnimRig_ClawGloriosa(PlantAnimRig_ClawGloriosa *this)

{
  ~PlantAnimRig_ClawGloriosa(this + -0x10);
  return;
}


/* PlantAnimRig_ClawGloriosa::~PlantAnimRig_ClawGloriosa() */

void __thiscall
PlantAnimRig_ClawGloriosa::~PlantAnimRig_ClawGloriosa(PlantAnimRig_ClawGloriosa *this)

{
  ~PlantAnimRig_ClawGloriosa(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantAnimRig_ClawGloriosa::~PlantAnimRig_ClawGloriosa() */

void __thiscall
PlantAnimRig_ClawGloriosa::~PlantAnimRig_ClawGloriosa(PlantAnimRig_ClawGloriosa *this)

{
  ~PlantAnimRig_ClawGloriosa(this + -0x10);
  return;
}


/* PlantAnimRig_ClawGloriosa::PlantAnimRig_ClawGloriosa() */

void __thiscall
PlantAnimRig_ClawGloriosa::PlantAnimRig_ClawGloriosa(PlantAnimRig_ClawGloriosa *this)

{
  PlantAnimRig::PlantAnimRig((PlantAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_06728da0;
  *(undefined ***)(this + 0x10) = &PTR__PlantAnimRig_ClawGloriosa_06729008;
  return;
}


/* PlantAnimRig_ClawGloriosa::StaticNew() */

PlantAnimRig_ClawGloriosa * PlantAnimRig_ClawGloriosa::StaticNew(void)

{
  PlantAnimRig_ClawGloriosa *this;
  
  this = ::operator_new(0x3b8);
  PlantAnimRig_ClawGloriosa(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ClawGloriosa::StaticClassInit() */

void PlantAnimRig_ClawGloriosa::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantAnimRig_ClawGloriosa");
    (*pcVar2)(plVar1,asStack_10,FUN_03aff808,0x3b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantAnimRig_ClawGloriosa::StaticGetClass() */

long * PlantAnimRig_ClawGloriosa::StaticGetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_ClawGloriosa",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantAnimRig_ClawGloriosa::GetClass() const */

long * PlantAnimRig_ClawGloriosa::GetClass(void)

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
  uVar2 = PlantAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"PlantAnimRig_ClawGloriosa",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ClawGloriosa::PlayShieldAnim() */

void __thiscall PlantAnimRig_ClawGloriosa::PlayShieldAnim(PlantAnimRig_ClawGloriosa *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"shield");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ClawGloriosa::PlayRecoveryAnim() */

void __thiscall PlantAnimRig_ClawGloriosa::PlayRecoveryAnim(PlantAnimRig_ClawGloriosa *this)

{
  int iVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_40,"claw_recovery");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (iVar1 != -1) {
    PlantAnimRig::SetState((PlantAnimRig *)this,0xe);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ClawGloriosa::PlaySuckEffect() */

void __thiscall PlantAnimRig_ClawGloriosa::PlaySuckEffect(PlantAnimRig_ClawGloriosa *this)

{
  RtObject *this_00;
  ClawGloriosaProps *pCVar1;
  float *pfVar2;
  Effect_PopAnim *pEVar3;
  ResourceInfo *pRVar4;
  StandaloneEffect *pSVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  RtWeakPtr<Sexy::SoundResource> aRStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::GetProps();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  pCVar1 = Sexy::RtObject::Cast<ClawGloriosaProps_const>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x210));
  fVar9 = *pfVar2;
  fVar8 = pfVar2[1];
  fVar6 = *(float *)(pCVar1 + 0x2f0);
  fVar7 = *(float *)(pCVar1 + 0x2f4);
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_28,(RtWeakPtrBase *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  pEVar3 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  std::string::string(asStack_20,"POPANIM_EFFECTS_CLAWGLORIOSA_SUCTION");
  GetPAMByName(asStack_20);
  pRVar4 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar3,(PopAnim *)pRVar4,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_20);
  nop();
  pEVar3 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  Effect_PopAnim::SetCentered(pEVar3,true);
  pSVar5 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_18,fVar6 + fVar9,fVar7 + fVar8,0.0);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar5,(SexyVector3 *)aRStack_18,899999);
  pSVar5 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  StandaloneEffect::SetKeepAlive(pSVar5,false);
  pEVar3 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  std::string::string((string *)aRStack_18,"suck");
  Effect_PopAnim::PlaySingleAnimation(pEVar3,aRStack_18,0);
  std::string::~string((string *)aRStack_18);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ClawGloriosa::PlayAttackAnim(std::string const&, std::string const&) */

void __thiscall
PlantAnimRig_ClawGloriosa::PlayAttackAnim
          (PlantAnimRig_ClawGloriosa *this,string *param_1,string *param_2)

{
  bool bVar1;
  int iVar2;
  RtMixedPtr aRStack_a8 [8];
  RtId aRStack_a0 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_98 [72];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"");
  if (bVar1) {
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_98);
  }
  else {
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_a8);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_98,aRStack_a0,param_2);
    Sexy::RtId::~RtId(aRStack_a0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_a8);
  }
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,(RtReflectionDelegate *)aRStack_98);
  iVar2 = PopAnimRig::PlayAndStop((PopAnimRig *)this,param_1,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  if (iVar2 != -1) {
    *(undefined4 *)(this + 0x218) = 2;
  }
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_98);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar2 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantAnimRig_ClawGloriosa::PlayPlantFood() */

void __thiscall PlantAnimRig_ClawGloriosa::PlayPlantFood(PlantAnimRig_ClawGloriosa *this)

{
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x208))(asStack_18);
  std::string::string(asStack_10,"onAnimStoppedCallback");
  PlayAttackAnim(this,asStack_18,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

