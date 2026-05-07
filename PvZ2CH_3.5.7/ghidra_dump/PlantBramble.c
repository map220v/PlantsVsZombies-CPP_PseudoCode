// Class: PlantBramble


/* PlantBramble::onStandaloneEffectFinishedCallback(StandaloneEffect*) */

void PlantBramble::onStandaloneEffectFinishedCallback(StandaloneEffect *param_1)

{
  (**(code **)(**(long **)(param_1 + 0x10) + 0x48))(*(long **)(param_1 + 0x10));
  return;
}


/* PlantBramble::HasShadow() */

void __thiscall PlantBramble::HasShadow(PlantBramble *this)

{
  FUN_04195288(*(undefined4 *)(*(long *)(this + 0x10) + 0x1d0));
  return;
}


/* PlantBramble::CanBeShoveled() */

byte __thiscall PlantBramble::CanBeShoveled(PlantBramble *this)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x10);
  cVar1 = FUN_041952a0(uVar3,10);
  bVar2 = 0;
  if (cVar1 == '\0') {
    bVar2 = FUN_041952a0(uVar3,0xb);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* PlantBramble::IsInvincible() const */

void __thiscall PlantBramble::IsInvincible(PlantBramble *this)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 0x10);
  cVar1 = FUN_041952a0(uVar2,10);
  if (cVar1 == '\0') {
    FUN_041952a0(uVar2,0xb);
    return;
  }
  return;
}


/* PlantBramble::CalcRenderOrder() */

undefined8 __thiscall PlantBramble::CalcRenderOrder(PlantBramble *this)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(this + 0x10);
  cVar1 = FUN_041952a0(uVar2,10);
  if ((cVar1 == '\0') && (cVar1 = FUN_041952a0(uVar2,0xb), cVar1 == '\0')) {
    uVar2 = PlantFramework::CalcRenderOrder((PlantFramework *)this);
    return uVar2;
  }
  return 0x6512f;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBramble::UpdateActions() */

void __thiscall PlantBramble::UpdateActions(PlantBramble *this)

{
  undefined8 *puVar1;
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *this_00;
  undefined8 local_18;
  float local_10;
  long local_8;
  
  this_00 = *(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  if (*(int *)(this_00 + 200) == 0xb) {
    puVar1 = (undefined8 *)
             std::
             _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
             ::_M_leftmost(this_00);
    local_18 = *puVar1;
    local_10 = *(float *)(puVar1 + 1) + 40.0;
    (**(code **)(*(long *)this_00 + 0x78))(this_00,&local_18);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBramble::PlantBramble() */

void __thiscall PlantBramble::PlantBramble(PlantBramble *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067fc000;
  return;
}


/* PlantBramble::StaticNew() */

PlantBramble * PlantBramble::StaticNew(void)

{
  PlantBramble *this;
  
  this = ::operator_new(0x28);
  PlantBramble(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBramble::StaticClassInit() */

void PlantBramble::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantBramble");
    (*pcVar2)(plVar1,asStack_10,FUN_041957d8,0x28,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBramble::StaticGetClass() */

long * PlantBramble::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantBramble",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBramble::GetClass() const */

long * PlantBramble::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantBramble",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBramble::IsReadyToAttack() */

void __thiscall PlantBramble::IsReadyToAttack(PlantBramble *this)

{
  FUN_041952a0(*(undefined8 *)(this + 0x10),10);
  return;
}


/* PlantBramble::~PlantBramble() */

void __thiscall PlantBramble::~PlantBramble(PlantBramble *this)

{
  *(undefined ***)this = &PTR_GetClass_067fc000;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantBramble::~PlantBramble() */

void __thiscall PlantBramble::~PlantBramble(PlantBramble *this)

{
  ~PlantBramble(this);
  AK::FreeHook(this);
  return;
}


/* PlantBramble::onAnimStoppedCallback(std::string const&) */

void __thiscall PlantBramble::onAnimStoppedCallback(PlantBramble *this,string *param_1)

{
  bool bVar1;
  PlantAnimRig_Bramble *this_00;
  
  bVar1 = std::operator==(param_1,"attack");
  if (!bVar1) {
    return;
  }
  this_00 = (PlantAnimRig_Bramble *)FUN_04195bd0(*(undefined8 *)(this + 0x10));
  PlantAnimRig_Bramble::PlayAttackLoop(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBramble::setState(int) */

void __thiscall PlantBramble::setState(PlantBramble *this,int param_1)

{
  PlantAnimRig_Bramble *pPVar1;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != *(int *)(*(long *)(this + 0x10) + 200)) {
    *(int *)(*(long *)(this + 0x10) + 200) = param_1;
    pPVar1 = (PlantAnimRig_Bramble *)FUN_04195bd0();
    if (*(int *)(*(long *)(this + 0x10) + 200) == 10) {
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string(asStack_58,"onAnimStoppedCallback");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
                 asStack_58);
      PlantAnimRig_Bramble::PlayAttackReady(pPVar1,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBramble::PrepareToAttack() */

void __thiscall PlantBramble::PrepareToAttack(PlantBramble *this)

{
  setState(this,10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBramble::LeaveWithDinoTread() */

void __thiscall PlantBramble::LeaveWithDinoTread(PlantBramble *this)

{
  int iVar1;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar2;
  undefined8 *puVar3;
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [8];
  undefined4 local_60;
  float fStack_5c;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  setState(this,0xb);
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  std::string::string(asStack_68,"POPANIM_EFFECTS_DINO_BRONTO_TREAD");
  GetPAMByName(asStack_68);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_60);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  std::string::~string(asStack_68);
  nop();
  puVar3 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           **)(this + 0x10));
  fStack_5c = (float)((ulong)*puVar3 >> 0x20);
  local_58 = *(undefined4 *)(puVar3 + 1);
  _local_60 = CONCAT44(fStack_5c - 20.0,(int)*puVar3);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this_00,(SexyVector3 *)&local_60,-1);
  Effect_PopAnim::SetCentered(this_00,true);
  iVar1 = (**(code **)(**(long **)(this + 0x10) + 0x170))(*(long **)(this + 0x10));
  FUN_04195280(this_00 + 0x1c,iVar1 + -1);
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string(asStack_68,"onStandaloneEffectFinishedCallback");
  RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_70,
             asStack_68);
  StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this_00,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  std::string::string(asStack_68,"soil");
  Effect_PopAnim::PlaySingleAnimation(this_00,asStack_68,0);
  std::string::~string(asStack_68);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

