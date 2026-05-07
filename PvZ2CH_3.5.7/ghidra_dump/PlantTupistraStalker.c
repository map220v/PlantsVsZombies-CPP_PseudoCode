// Class: PlantTupistraStalker


/* PlantTupistraStalker::TakeSmashAttack(Sexy::RtWeakPtr<Zombie>) */

void PlantTupistraStalker::TakeSmashAttack(long param_1)

{
  char cVar1;
  
  cVar1 = Plant::IsInvincible(*(Plant **)(param_1 + 0x10),false);
  if (cVar1 != '\0') {
    return;
  }
  Plant::KillPlant(*(Plant **)(param_1 + 0x10),0,0,1);
  return;
}


/* PlantTupistraStalker::CanApplyPlantfood() */

bool __thiscall PlantTupistraStalker::CanApplyPlantfood(PlantTupistraStalker *this)

{
  return 1 < *(int *)(*(long *)(this + 0x10) + 200) - 10U;
}


/* PlantTupistraStalker::GetEntityHeight() const */

undefined4 __thiscall PlantTupistraStalker::GetEntityHeight(PlantTupistraStalker *this)

{
  undefined4 uVar1;
  
  uVar1 = 2;
  if (*(int *)(*(long *)(this + 0x10) + 200) - 0xbU < 2) {
    uVar1 = 0;
  }
  return uVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTupistraStalker::StaticClassInit() */

void PlantTupistraStalker::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantTupistraStalker");
    (*pcVar2)(plVar1,asStack_10,FUN_04158b98,0x48,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTupistraStalker::StaticGetClass() */

long * PlantTupistraStalker::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantTupistraStalker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTupistraStalker::GetClass() const */

long * PlantTupistraStalker::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantTupistraStalker",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantTupistraStalker::CanFireZombie(Zombie const*) const */

byte __thiscall PlantTupistraStalker::CanFireZombie(PlantTupistraStalker *this,Zombie *param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = RealObject::IsOnOpposingTeam((RealObject *)param_1,*(RealObject **)(this + 0x10));
  if ((((cVar1 == '\0') || (cVar1 = (**(code **)(*(long *)param_1 + 0x328))(param_1), cVar1 != '\0')
       ) || (cVar1 = (**(code **)(*(long *)param_1 + 0x330))(param_1), cVar1 != '\0')) ||
     ((cVar1 = Zombie::IsIgnoringAllDamage(param_1), cVar1 != '\0' ||
      (cVar1 = Zombie::IsControlled(param_1), cVar1 != '\0')))) {
    bVar2 = 0;
  }
  else {
    bVar2 = Zombie::IsInvisible(param_1);
    bVar2 = bVar2 ^ 1;
  }
  return bVar2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTupistraStalker::targetFound() */

void __thiscall PlantTupistraStalker::targetFound(PlantTupistraStalker *this)

{
  undefined4 uVar1;
  RtMixedPtrBase aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Plant::FindTarget(aRStack_10,*(undefined8 *)(this + 0x10),0);
  uVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* PlantTupistraStalker::PlantTupistraStalker() */

void __thiscall PlantTupistraStalker::PlantTupistraStalker(PlantTupistraStalker *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067f0830;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x38));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x40));
  return;
}


/* PlantTupistraStalker::StaticNew() */

PlantTupistraStalker * PlantTupistraStalker::StaticNew(void)

{
  PlantTupistraStalker *this;
  
  this = ::operator_new(0x48);
  PlantTupistraStalker(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTupistraStalker::Initialize() */

void __thiscall PlantTupistraStalker::Initialize(PlantTupistraStalker *this)

{
  undefined4 uVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x28) = uVar1;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x38),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x40),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTupistraStalker::~PlantTupistraStalker() */

void __thiscall PlantTupistraStalker::~PlantTupistraStalker(PlantTupistraStalker *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long *plVar2;
  RtWeakPtr *this_01;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_01 = (RtWeakPtr *)(this + 0x38);
  *(undefined ***)this = &PTR_GetClass_067f0830;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_01);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
    (**(code **)(*plVar2 + 0x48))();
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_01,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  this_00 = (RtWeakPtr *)(this + 0x40);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_01);
  PlantFramework::~PlantFramework((PlantFramework *)this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTupistraStalker::~PlantTupistraStalker() */

void __thiscall PlantTupistraStalker::~PlantTupistraStalker(PlantTupistraStalker *this)

{
  ~PlantTupistraStalker(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTupistraStalker::createEffectSpin(bool) */

void PlantTupistraStalker::createEffectSpin(bool param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  Effect_PopAnim *this;
  ResourceInfo *pRVar8;
  char in_w1;
  char *__s;
  undefined1 *__n;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  int iVar9;
  undefined1 auStack_28 [8];
  RtMixedPtrBase aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  uVar6 = (ulong)param_1;
  local_8 = ___stack_chk_guard;
  iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(uVar6 + 0x10));
  iVar9 = 0;
  iVar3 = SharkMinion::getRow(*(SharkMinion **)(uVar6 + 0x10));
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    lVar7 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(uVar6 + 0x10));
    iVar9 = (int)*(float *)(lVar7 + 8);
  }
  __n = auStack_28;
  std::string::string(asStack_18,"POPANIM_EFFECTS_TUPISTRASTALKER_SPIN");
  GetPAMByName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_20);
  if (cVar1 != '\0') {
    this = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_20);
    Effect_PopAnim::CreatePopAnimRig(this,(PopAnim *)pRVar8,(RtClass *)0x0);
    Effect_PopAnim::SetCentered(this,true);
    iVar2 = BoardTransforms::GridToBoardSpaceX(iVar2);
    iVar4 = BoardTransforms::GridToBoardSpaceY(iVar3);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,(float)iVar2,(float)iVar4 - 115.0,(float)iVar9);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)asStack_18,-1);
    uVar5 = Board::MakeRenderOrder(0x64960,iVar3,0);
    FUN_04154dec(this + 0x1c,uVar5);
    std::string::string(asStack_18,"idle1");
    nop();
    if (in_w1 != '\0') {
      cVar1 = Plant::GetAvatarEnable(*(Plant **)(uVar6 + 0x10));
      if (cVar1 == '\0') {
        __s = "idle2";
      }
      else {
        __s = "idle3";
      }
      std::string::append(asStack_18,__s,(size_t)__n);
    }
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(this,asStack_18,0);
    std::string::~string(asStack_18);
  }
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTupistraStalker::tryCreateEffectSpin(bool) */

void PlantTupistraStalker::tryCreateEffectSpin(bool param_1)

{
  RtWeakPtr *this;
  bool bVar1;
  long *plVar2;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this = (RtWeakPtr *)((ulong)param_1 + 0x40);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar2 + 0x48))();
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  createEffectSpin(param_1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTupistraStalker::createDamageEffect(int, int) */

void __thiscall
PlantTupistraStalker::createDamageEffect(PlantTupistraStalker *this,int param_1,int param_2)

{
  int iVar1;
  long lVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  Board *this_01;
  string asStack_28 [8];
  RtWeakPtr aRStack_20 [8];
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_18);
  iVar1 = BoardTransforms::GridToBoardSpaceX(param_1);
  local_18 = (float)iVar1;
  iVar1 = BoardTransforms::GridToBoardSpaceY(param_2);
  local_14 = (float)iVar1;
  local_10 = 0;
  this_01 = *(Board **)(gLawnApp + 0x9f0);
  if (this_01[0x119] != (Board)0x0) {
    lVar2 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(this + 0x10));
    local_10 = *(undefined4 *)(lVar2 + 8);
  }
  this_00 = Board::AddEffect<Effect_PopAnim>(this_01);
  std::string::string(asStack_28,"POPANIM_EFFECTS_AIR_MISSILE_EFFECT");
  GetPAMByName(asStack_28);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::SetCentered(this_00,true);
  iVar1 = (**(code **)(**(long **)(this + 0x10) + 0x170))(*(long **)(this + 0x10));
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this_00,(SexyVector3 *)&local_18,iVar1 + 1);
  std::string::string((string *)aRStack_20,"idle");
  Effect_PopAnim::PlaySingleAnimation(this_00,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTupistraStalker::getReducedTime() */

float __thiscall PlantTupistraStalker::getReducedTime(PlantTupistraStalker *this)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(this + 0x10);
  iVar1 = FUN_04154e14(uVar3);
  if ((1 < iVar1) && (lVar2 = FUN_041572ec(uVar3), lVar2 != 0)) {
    iVar1 = FUN_04154e14(*(undefined8 *)(this + 0x10));
    if (iVar1 < 3) {
      return *(float *)(lVar2 + 0x2c0);
    }
    return (*(float *)(lVar2 + 0x2c4) + 1.0) * *(float *)(lVar2 + 0x2c0);
  }
  return 0.0;
}


/* PlantTupistraStalker::getRestTime() */

float __thiscall PlantTupistraStalker::getRestTime(PlantTupistraStalker *this)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_041572ec(*(undefined8 *)(this + 0x10));
  if (lVar1 != 0) {
    fVar3 = *(float *)(lVar1 + 700);
    fVar2 = (float)getReducedTime(this);
    return fVar3 - fVar2;
  }
  return 3.0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTupistraStalker::createEffectAttack(bool) */

void PlantTupistraStalker::createEffectAttack(bool param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  EffectTupistraAttack *this;
  ResourceInfo *pRVar9;
  char in_w1;
  char *__s;
  string *psVar10;
  RtWeakPtr<Sexy::SoundResource> *in_x8;
  BoardEntity *this_00;
  RealObject *this_01;
  int iVar11;
  RtMixedPtrBase aRStack_80 [8];
  string asStack_78 [8];
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  uVar7 = (ulong)param_1;
  this_00 = *(BoardEntity **)(uVar7 + 0x10);
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_04154e1c(this_00);
  iVar11 = 0;
  iVar3 = BoardEntity::CalcColumnPosition(this_00);
  iVar4 = SharkMinion::getRow(*(SharkMinion **)(uVar7 + 0x10));
  if (*(char *)(*(long *)(gLawnApp + 0x9f0) + 0x119) != '\0') {
    lVar8 = std::
            _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
            ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                            **)(uVar7 + 0x10));
    iVar11 = (int)*(float *)(lVar8 + 8);
  }
  std::string::string(asStack_60,"POPANIM_EFFECTS_TUPISTRASTALKER_ATTACK");
  GetPAMByName(asStack_60);
  std::string::~string(asStack_60);
  nop();
  cVar2 = Sexy::RtMixedPtrBase::IsValid(aRStack_80);
  if (cVar2 != '\0') {
    this = Board::AddEffect<EffectTupistraAttack>(*(Board **)(gLawnApp + 0x9f0));
    pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_80);
    Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,(PopAnim *)pRVar9,(RtClass *)0x0);
    Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
    iVar3 = BoardTransforms::GridToBoardSpaceX(iVar3);
    iVar5 = BoardTransforms::GridToBoardSpaceY(iVar4);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_60,(float)iVar3,(float)iVar5 - 35.0,(float)iVar11);
    StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)asStack_60,-1);
    Effect_PopAnim::SetPopAnimDelegates((Effect_PopAnim *)this);
    uVar6 = Board::MakeRenderOrder(0x61e68,iVar4,0);
    FUN_04154dec(this + 0x1c,uVar6);
    psVar10 = asStack_60;
    if (cVar1 == '\0') {
      std::string::string(asStack_78,"animation");
      nop();
    }
    else {
      std::string::string(asStack_78,"animation_lv5");
      nop();
    }
    if (in_w1 != '\0') {
      cVar1 = Plant::GetAvatarEnable(*(Plant **)(uVar7 + 0x10));
      if (cVar1 == '\0') {
        __s = "animation_plantfood";
      }
      else {
        __s = "animation_plantfood_avatar";
      }
      std::string::append(asStack_78,__s,(size_t)psVar10);
    }
    Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,asStack_78,0);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_60,"onStandaloneEffectFinishedCallback");
    RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_68,
               asStack_60);
    StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_60);
    nop();
    Sexy::RtId::~RtId(aRStack_68);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_78);
  }
  this_01 = *(RealObject **)(uVar7 + 0x10);
  std::string::string(asStack_60,"Play_Plant_Tupistrastalker_Attack");
  RealObject::PlayPositionalSound(this_01,asStack_60,0.0);
  std::string::~string(asStack_60);
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(in_x8,(RtWeakPtrBase *)asStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTupistraStalker::tryCreateEffectAttack(bool) */

void PlantTupistraStalker::tryCreateEffectAttack(bool param_1)

{
  RtWeakPtr *this;
  bool bVar1;
  long *plVar2;
  CthulhuEyeballEffect *pCVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this = (RtWeakPtr *)((ulong)param_1 + 0x38);
  local_8 = ___stack_chk_guard;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this);
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar2 + 0x48))();
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  createEffectAttack(param_1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)this,(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  pCVar3 = (CthulhuEyeballEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_10,(RtWeakPtrBase *)aRStack_18);
  CthulhuEyeballEffect::SetCthulhuEasyButton(pCVar3,(RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTupistraStalker::OnAnimCommand(std::string const&, std::string const&) */

void PlantTupistraStalker::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"use_action");
  if (bVar1) {
    return;
  }
  bVar1 = std::operator==(param_2,"use_special");
  if (!bVar1) {
    PlantFramework::OnAnimCommand(param_1,param_2);
    return;
  }
  tryCreateEffectAttack(SUB81(param_1,0));
  tryCreateEffectSpin(SUB81(param_1,0));
  PlantFramework::OnAnimCommand(param_1,param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTupistraStalker::tryAttack() */

void __thiscall PlantTupistraStalker::tryAttack(PlantTupistraStalker *this)

{
  undefined4 uVar1;
  PlantAnimRig_TupistraStalker *extraout_x0;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
  nop();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"onAnimStoppedCallback");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  uVar1 = FUN_04154e1c(*(undefined8 *)(this + 0x10));
  PlantAnimRig_TupistraStalker::LoopAttack(extraout_x0,aRStack_50,uVar1);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  tryCreateEffectAttack(SUB81(this,0));
  tryCreateEffectSpin(SUB81(this,0));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTupistraStalker::setState(unsigned int) */

void __thiscall PlantTupistraStalker::setState(PlantTupistraStalker *this,uint param_1)

{
  undefined4 uVar1;
  PlantAnimRig_Cactus *extraout_x0;
  undefined8 extraout_x0_00;
  PlantAnimRig_TupistraStalker *extraout_x0_01;
  long extraout_x0_02;
  long *plVar2;
  UIEasyButtonWidget *this_00;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  this_00 = *(UIEasyButtonWidget **)(this + 0x10);
  local_8 = ___stack_chk_guard;
  *(uint *)(this_00 + 200) = param_1;
  switch(param_1) {
  case 10:
    tryAttack(this);
    break;
  case 0xb:
    UIEasyButtonWidget::GetImageNormal(this_00);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    PlantAnimRig_TupistraStalker::Submerging(extraout_x0_01,aRStack_50);
    goto LAB_04157ce4;
  case 0xc:
    std::string::string(asStack_58,"Play_Plant_Tupistrastalker_Down");
    RealObject::PlayPositionalSound((RealObject *)this_00,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
    UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    nop();
    FUN_04154e3c(extraout_x0_02 + 0x3b8,1);
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    (**(code **)(*plVar2 + 0x118))();
    uVar1 = PVZ_T();
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)(this + 0x28) = uVar1;
    *(undefined4 *)(this + 0x30) = 0;
    break;
  case 0xd:
    UIEasyButtonWidget::GetImageNormal(this_00);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    PlantAnimRig_Cactus::PlayPlantfoodUp(extraout_x0,aRStack_50);
LAB_04157ce4:
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    break;
  case 0xe:
    UIEasyButtonWidget::GetImageNormal(this_00);
    nop();
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              (aRStack_50,aRStack_60,asStack_58);
    uVar1 = FUN_04154e1c(*(undefined8 *)(this + 0x10));
    PlantAnimRig_TupistraStalker::Jumping
              (extraout_x0_00,
               (RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50,uVar1);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantTupistraStalker::onStandaloneEffectFinishedCallback(StandaloneEffect*) */

void PlantTupistraStalker::onStandaloneEffectFinishedCallback(StandaloneEffect *param_1)

{
  setState((PlantTupistraStalker *)param_1,0xb);
  return;
}


/* PlantTupistraStalker::ApplyPlantfood() */

void __thiscall PlantTupistraStalker::ApplyPlantfood(PlantTupistraStalker *this)

{
  setState(this,5);
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  return;
}


/* PlantTupistraStalker::UpdateActions() */

void __thiscall PlantTupistraStalker::UpdateActions(PlantTupistraStalker *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  
  cVar1 = Plant::IsSuspended(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    iVar2 = *(int *)(*(long *)(this + 0x10) + 200);
    if (iVar2 == 4) goto LAB_04157fa0;
LAB_04157f4c:
    if (iVar2 == 0xc) {
      fVar4 = (float)PVZ_T();
      fVar7 = *(float *)(this + 0x28);
      fVar5 = (float)getRestTime(this);
      iVar2 = 0xc;
      if (fVar5 + fVar7 < fVar4) {
        uVar6 = PVZ_EOT();
        *(undefined4 *)(this + 0x28) = uVar6;
        setState(this,0xd);
      }
      do {
        iVar3 = iVar2;
        iVar2 = *(int *)(*(long *)(this + 0x10) + 200);
        while( true ) {
          if (iVar3 == iVar2) {
            return;
          }
          if (iVar2 != 4) goto LAB_04157f4c;
LAB_04157fa0:
          cVar1 = targetFound(this);
          if (cVar1 == '\0') break;
          setState(this,0xe);
          iVar3 = iVar2;
          iVar2 = *(int *)(*(long *)(this + 0x10) + 200);
        }
      } while( true );
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTupistraStalker::onAnimStoppedCallback(std::string const&) */

void __thiscall
PlantTupistraStalker::onAnimStoppedCallback(PlantTupistraStalker *this,string *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  long lVar2;
  long *plVar3;
  long extraout_x0;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar2 = FUN_05474374(param_1,"attack_loop",0);
  if (((lVar2 == -1) && (lVar2 = FUN_05474374(param_1,"plantfood",0), lVar2 == -1)) &&
     (lVar2 = FUN_05474374(param_1,"attack5",0), lVar2 == -1)) {
    lVar2 = FUN_05474374(param_1,"attack_end",0);
    if (lVar2 == -1) {
      lVar2 = FUN_05474374(param_1,"attack_special",0);
      if (lVar2 == -1) {
        lVar2 = FUN_05474374(param_1,"attack",0);
        if (lVar2 != -1) {
          setState(this,10);
          goto LAB_04158038;
        }
        lVar2 = FUN_05474374(param_1,&DAT_055e7830,0);
        if ((lVar2 != -1) || (lVar2 = FUN_05474374(param_1,"plantfood_off",0), lVar2 != -1)) {
          setState(this,0xc);
          goto LAB_04158038;
        }
        lVar2 = FUN_05474374(param_1,&DAT_05598570,0);
        if (lVar2 == -1) goto LAB_04158038;
        plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        (**(code **)(*plVar3 + 0x118))();
        UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
        nop();
        FUN_04154e3c(extraout_x0 + 0x3b8,0);
      }
      setState(this,4);
    }
    else {
      plVar3 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
      (**(code **)(*plVar3 + 0x118))();
      *(undefined4 *)(*(long *)(this + 0x10) + 200) = 4;
    }
  }
  else {
    this_00 = (RtWeakPtr *)(this + 0x40);
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if (bVar1) {
      plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      (**(code **)(*plVar3 + 0x48))();
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                (a_Stack_10);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
    }
  }
LAB_04158038:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTupistraStalker::spawnLeaf(int, int) */

void __thiscall PlantTupistraStalker::spawnLeaf(PlantTupistraStalker *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  GridItemTupistraLeaf *pGVar7;
  RtObject *this_00;
  Plant *this_01;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar5 = FUN_041572ec(*(undefined8 *)(this + 0x10));
  this_01 = *(Plant **)(this + 0x10);
  iVar2 = FUN_04154e14(this_01);
  fVar8 = (float)FUN_04154df8(*(undefined4 *)(this_01 + 0xf4),*(undefined4 *)(this_01 + 0x100),
                              *(undefined4 *)(this_01 + 0x104),*(undefined4 *)(this_01 + 0x3b8));
  fVar9 = (float)FUN_04154e08(*(undefined4 *)(this_01 + 0x3bc));
  fVar10 = (float)Plant::GetExtraDPSmodifier(this_01);
  fVar11 = (float)FUN_04154e0c(*(undefined4 *)(*(long *)(this + 0x10) + 0x424));
  Sexy::Point::Point((Point *)&local_10,param_1,param_2);
  iVar1 = local_10;
  if ((((local_10 != -1) && (local_c != -1)) &&
      (iVar3 = BoardConstants::NUMBER_OF_COLUMNS(), iVar1 < iVar3)) &&
     (lVar6 = FUN_04158458(local_10,local_c), lVar6 == 0)) {
    fVar11 = fVar9 * fVar8 * fVar10 * fVar11;
    pGVar7 = (GridItemTupistraLeaf *)FUN_0415853c(local_10,local_c);
    lVar6 = FUN_04158620(local_10,local_c);
    if (pGVar7 == (GridItemTupistraLeaf *)0x0) {
      if (lVar6 == 0) {
        this_00 = (RtObject *)
                  Board::AddGridItem(*(Board **)(gLawnApp + 0x9f0),(string *)(lVar5 + 0x2d0),
                                     local_10,local_c,iVar2);
        pGVar7 = Sexy::RtObject::Cast<GridItemTupistraLeaf>(this_00);
        uVar4 = FUN_02fd4330(*(undefined4 *)(*(long *)(this + 0x10) + 0x24));
        FUN_02fd4334(pGVar7 + 0x24,uVar4);
        GridItemTupistraLeaf::SetIdle(pGVar7);
        FUN_04154e44(fVar11,pGVar7 + 0x1b4);
      }
    }
    else {
      GridItemTupistraLeaf::ResetTimer(pGVar7);
      (**(code **)(*(long *)pGVar7 + 0x198))(pGVar7,iVar2);
      FUN_04154e44(fVar11,pGVar7 + 0x1b4);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTupistraStalker::trySpawnLeaves() */

void __thiscall PlantTupistraStalker::trySpawnLeaves(PlantTupistraStalker *this)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  
  piVar7 = &DAT_06aeed78;
  do {
    iVar6 = 2;
    piVar5 = piVar7;
    do {
      iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
      iVar1 = *piVar5;
      iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
      spawnLeaf(this,iVar3 + iVar1,iVar4 + piVar5[1]);
      bVar2 = iVar6 != 1;
      iVar6 = 1;
      piVar5 = piVar5 + 2;
    } while (bVar2);
    piVar7 = piVar7 + 4;
  } while (piVar7 != (int *)&PlantChainsawburmanniiProps::sClass);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTupistraStalker::CancelPlantfood() */

void __thiscall PlantTupistraStalker::CancelPlantfood(PlantTupistraStalker *this)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  long extraout_x0;
  long *plVar3;
  UIEasyButtonWidget *this_01;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x40);
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    plVar3 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar3 + 0x48))();
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)a_Stack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  }
  cVar2 = Plant::GetAvatarEnable(*(Plant **)(this + 0x10));
  if (cVar2 != '\0') {
    trySpawnLeaves(this);
  }
  this_01 = *(UIEasyButtonWidget **)(this + 0x10);
  *(undefined4 *)(this_01 + 200) = 4;
  UIEasyButtonWidget::GetImageNormal(this_01);
  nop();
  FUN_04154e3c(extraout_x0 + 0x3b8,0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTupistraStalker::dealDamage(int, int) */

void __thiscall PlantTupistraStalker::dealDamage(PlantTupistraStalker *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  GridItem *this_00;
  undefined8 *puVar5;
  Zombie *pZVar6;
  Plant *this_01;
  long lVar7;
  RtObject *this_02;
  code *pcVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  DamageInfo *pDVar13;
  undefined8 local_100;
  undefined8 local_f8;
  Point aPStack_f0 [8];
  undefined4 local_e8;
  undefined4 local_e4;
  Point aPStack_e0 [24];
  DamageInfo aDStack_c8 [96];
  undefined4 local_68;
  undefined4 local_64;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_041572ec(*(undefined8 *)(this + 0x10));
  this_01 = *(Plant **)(this + 0x10);
  fVar9 = (float)FUN_04154df8(*(undefined4 *)(this_01 + 0xf4),*(undefined4 *)(this_01 + 0x100),
                              *(undefined4 *)(this_01 + 0x104),*(undefined4 *)(this_01 + 0x3b8));
  fVar10 = (float)FUN_04154e08(*(undefined4 *)(this_01 + 0x3bc));
  fVar11 = (float)Plant::GetExtraDPSmodifier(this_01);
  lVar7 = *(long *)(this + 0x10);
  fVar12 = (float)FUN_04154e0c(*(undefined4 *)(lVar7 + 0x424));
  pDVar13._0_4_ = (DamageInfo *)(fVar9 * fVar10 * *(float *)(lVar4 + 0x2b8) * fVar11 * fVar12);
  Sexy::Point::Point(aPStack_e0,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_68,1.0,0.0);
  DamageInfo::DamageInfo(pDVar13._0_4_,local_68,local_64,aDStack_c8,lVar7,aPStack_e0,0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aPStack_e0);
  uVar3 = operator|(2,4);
  EntityFinder::GetEntitiesAtGridSquare(aPStack_e0,uVar3,param_1,param_2);
  local_100 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)aPStack_e0);
  local_f8 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)aPStack_e0);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_100,(__normal_iterator *)&local_f8), bVar1)
  {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_100);
    this_02 = (RtObject *)*puVar5;
    pZVar6 = Sexy::RtObject::Cast<Zombie>(this_02);
    if (((pZVar6 == (Zombie *)0x0) ||
        (cVar2 = (**(code **)(*(long *)pZVar6 + 0x328))(), cVar2 != '\0')) ||
       (cVar2 = RealObject::IsOnOpposingTeam(*(RealObject **)(this + 0x10),(RealObject *)pZVar6),
       cVar2 == '\0')) {
      this_00 = Sexy::RtObject::Cast<GridItem>(this_02);
      if (((this_00 != (GridItem *)0x0) &&
          (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)this_00,*(RealObject **)(this + 0x10))
          , cVar2 != '\0')) &&
         (cVar2 = (**(code **)(*(long *)this_00 + 0x200))(this_00), cVar2 != '\0')) {
        pcVar8 = *(code **)(*(long *)this_00 + 0x110);
        Sexy::Point::Point(aPStack_f0,-1,-1);
        Sexy::FastCurve::SetOutRange((FastCurve *)&local_e8,1.0,0.0);
        DamageInfo::DamageInfo(pDVar13._0_4_,local_e8,local_e4,(FastCurve *)&local_68,aPStack_f0,0);
        (*pcVar8)(this_00,(FastCurve *)&local_68);
        DamageInfo::~DamageInfo((DamageInfo *)&local_68);
      }
    }
    else {
      (**(code **)(*(long *)pZVar6 + 0x110))(pZVar6,aDStack_c8);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_100);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aPStack_e0);
  DamageInfo::~DamageInfo(aDStack_c8);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTupistraStalker::dealAreaDamage() */

void __thiscall PlantTupistraStalker::dealAreaDamage(PlantTupistraStalker *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  GridItem *this_00;
  undefined8 *puVar7;
  Zombie *pZVar8;
  Plant *this_01;
  long lVar9;
  RtObject *this_02;
  code *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  DamageInfo *pDVar15;
  undefined8 local_110;
  undefined8 local_108;
  Point aPStack_100 [8];
  undefined4 local_f8;
  undefined4 local_f4;
  Insets aIStack_f0 [16];
  Point aPStack_e0 [24];
  DamageInfo aDStack_c8 [96];
  undefined4 local_68;
  undefined4 local_64;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar6 = FUN_041572ec(*(undefined8 *)(this + 0x10));
  if (lVar6 != 0) {
    this_01 = *(Plant **)(this + 0x10);
    fVar11 = (float)FUN_04154df8(*(undefined4 *)(this_01 + 0xf4),*(undefined4 *)(this_01 + 0x100),
                                 *(undefined4 *)(this_01 + 0x104),*(undefined4 *)(this_01 + 0x3b8));
    fVar12 = (float)FUN_04154e08(*(undefined4 *)(this_01 + 0x3bc));
    fVar13 = (float)Plant::GetExtraDPSmodifier(this_01);
    lVar9 = *(long *)(this + 0x10);
    fVar14 = (float)FUN_04154e0c(*(undefined4 *)(lVar9 + 0x424));
    pDVar15._0_4_ = (DamageInfo *)(fVar11 * fVar12 * *(float *)(lVar6 + 0x2c8) * fVar13 * fVar14);
    Sexy::Point::Point(aPStack_e0,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&local_68,1.0,0.0);
    DamageInfo::DamageInfo(pDVar15._0_4_,local_68,local_64,aDStack_c8,lVar9,aPStack_e0,0);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aPStack_e0);
    iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
    iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    Sexy::Insets::Insets(aIStack_f0,iVar3 + -1,iVar4 + -1,3,3);
    uVar5 = operator|(2,4);
    EntityFinder::GetEntitiesInGridSquares(aPStack_e0,uVar5,aIStack_f0);
    local_110 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         *)aPStack_e0);
    local_108 = std::
                vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                       *)aPStack_e0);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_110,(__normal_iterator *)&local_108),
          bVar1) {
      puVar7 = (undefined8 *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_110);
      this_02 = (RtObject *)*puVar7;
      pZVar8 = Sexy::RtObject::Cast<Zombie>(this_02);
      if (((pZVar8 == (Zombie *)0x0) ||
          (cVar2 = (**(code **)(*(long *)pZVar8 + 0x328))(), cVar2 != '\0')) ||
         (cVar2 = RealObject::IsOnOpposingTeam(*(RealObject **)(this + 0x10),(RealObject *)pZVar8),
         cVar2 == '\0')) {
        this_00 = Sexy::RtObject::Cast<GridItem>(this_02);
        if (((this_00 != (GridItem *)0x0) &&
            (cVar2 = RealObject::IsOnOpposingTeam
                               ((RealObject *)this_00,*(RealObject **)(this + 0x10)), cVar2 != '\0')
            ) && (cVar2 = (**(code **)(*(long *)this_00 + 0x200))(this_00), cVar2 != '\0')) {
          pcVar10 = *(code **)(*(long *)this_00 + 0x110);
          Sexy::Point::Point(aPStack_100,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&local_f8,1.0,0.0);
          DamageInfo::DamageInfo
                    (pDVar15._0_4_,local_f8,local_f4,(FastCurve *)&local_68,aPStack_100,0);
          (*pcVar10)(this_00,(FastCurve *)&local_68);
          DamageInfo::~DamageInfo((DamageInfo *)&local_68);
        }
      }
      else {
        (**(code **)(*(long *)pZVar8 + 0x110))(pZVar8,aDStack_c8);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_110);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aPStack_e0);
    DamageInfo::~DamageInfo(aDStack_c8);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTupistraStalker::CallPlantfoodAttack() */

void __thiscall PlantTupistraStalker::CallPlantfoodAttack(PlantTupistraStalker *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  GridItem *this_00;
  undefined8 *puVar7;
  Zombie *pZVar8;
  Plant *this_01;
  long lVar9;
  RtObject *this_02;
  code *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  DamageInfo *pDVar15;
  undefined8 uStack_110;
  undefined8 uStack_108;
  Point aPStack_100 [8];
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  Insets aIStack_f0 [16];
  Point aPStack_e0 [24];
  DamageInfo aDStack_c8 [96];
  undefined4 uStack_68;
  undefined4 uStack_64;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  lVar6 = FUN_041572ec(*(undefined8 *)(this + 0x10));
  if (lVar6 != 0) {
    this_01 = *(Plant **)(this + 0x10);
    fVar11 = (float)FUN_04154df8(*(undefined4 *)(this_01 + 0xf4),*(undefined4 *)(this_01 + 0x100),
                                 *(undefined4 *)(this_01 + 0x104),*(undefined4 *)(this_01 + 0x3b8));
    fVar12 = (float)FUN_04154e08(*(undefined4 *)(this_01 + 0x3bc));
    fVar13 = (float)Plant::GetExtraDPSmodifier(this_01);
    lVar9 = *(long *)(this + 0x10);
    fVar14 = (float)FUN_04154e0c(*(undefined4 *)(lVar9 + 0x424));
    pDVar15._0_4_ = (DamageInfo *)(fVar11 * fVar12 * *(float *)(lVar6 + 0x2c8) * fVar13 * fVar14);
    Sexy::Point::Point(aPStack_e0,-1,-1);
    Sexy::FastCurve::SetOutRange((FastCurve *)&uStack_68,1.0,0.0);
    DamageInfo::DamageInfo(pDVar15._0_4_,uStack_68,uStack_64,aDStack_c8,lVar9,aPStack_e0,0);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aPStack_e0);
    iVar3 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
    iVar4 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    Sexy::Insets::Insets(aIStack_f0,iVar3 + -1,iVar4 + -1,3,3);
    uVar5 = operator|(2,4);
    EntityFinder::GetEntitiesInGridSquares(aPStack_e0,uVar5,aIStack_f0);
    uStack_110 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aPStack_e0);
    uStack_108 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aPStack_e0);
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&uStack_110,(__normal_iterator *)&uStack_108),
          bVar1) {
      puVar7 = (undefined8 *)
               std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&uStack_110);
      this_02 = (RtObject *)*puVar7;
      pZVar8 = Sexy::RtObject::Cast<Zombie>(this_02);
      if (((pZVar8 == (Zombie *)0x0) ||
          (cVar2 = (**(code **)(*(long *)pZVar8 + 0x328))(), cVar2 != '\0')) ||
         (cVar2 = RealObject::IsOnOpposingTeam(*(RealObject **)(this + 0x10),(RealObject *)pZVar8),
         cVar2 == '\0')) {
        this_00 = Sexy::RtObject::Cast<GridItem>(this_02);
        if (((this_00 != (GridItem *)0x0) &&
            (cVar2 = RealObject::IsOnOpposingTeam
                               ((RealObject *)this_00,*(RealObject **)(this + 0x10)), cVar2 != '\0')
            ) && (cVar2 = (**(code **)(*(long *)this_00 + 0x200))(this_00), cVar2 != '\0')) {
          pcVar10 = *(code **)(*(long *)this_00 + 0x110);
          Sexy::Point::Point(aPStack_100,-1,-1);
          Sexy::FastCurve::SetOutRange((FastCurve *)&uStack_f8,1.0,0.0);
          DamageInfo::DamageInfo
                    (pDVar15._0_4_,uStack_f8,uStack_f4,(FastCurve *)&uStack_68,aPStack_100,0);
          (*pcVar10)(this_00,(FastCurve *)&uStack_68);
          DamageInfo::~DamageInfo((DamageInfo *)&uStack_68);
        }
      }
      else {
        (**(code **)(*(long *)pZVar8 + 0x110))(pZVar8,aDStack_c8);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&uStack_110);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aPStack_e0);
    DamageInfo::~DamageInfo(aDStack_c8);
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTupistraStalker::getAttackLocations(std::vector<Sexy::Point, std::allocator<Sexy::Point> >&,
   int) */

void __thiscall
PlantTupistraStalker::getAttackLocations(PlantTupistraStalker *this,vector *param_1,int param_2)

{
  ulong uVar1;
  
  uVar1 = -(ulong)((uint)param_2 >> 0x1f) & 0xfffffff000000000 | (ulong)(uint)param_2 << 4;
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_1,
             (Point *)((long)&DAT_06aeed78 + uVar1));
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)param_1,
             (Point *)(&DAT_06aeed80 + uVar1));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantTupistraStalker::handleAttack(int) */

void __thiscall PlantTupistraStalker::handleAttack(PlantTupistraStalker *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_20);
  getAttackLocations(this,(vector *)&local_20,param_1);
  uVar7 = 0;
  while( true ) {
    uVar6 = FUN_04154e58(local_20,local_18);
    if (uVar6 <= uVar7) break;
    iVar2 = BoardEntity::CalcColumnPosition(*(BoardEntity **)(this + 0x10));
    piVar4 = (int *)FUN_04154e64(local_20,uVar7);
    iVar1 = *piVar4;
    iVar3 = SharkMinion::getRow(*(SharkMinion **)(this + 0x10));
    lVar5 = FUN_04154e64(local_20,uVar7);
    dealDamage(this,iVar2 + iVar1,iVar3 + *(int *)(lVar5 + 4));
    uVar7 = uVar7 + 1;
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantTupistraStalker::CallAttack() */

void __thiscall PlantTupistraStalker::CallAttack(PlantTupistraStalker *this)

{
  handleAttack(this,*(int *)(this + 0x2c));
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  return;
}

