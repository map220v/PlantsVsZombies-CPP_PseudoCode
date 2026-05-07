// Class: Effect_AngerFlame


/* Effect_AngerFlame::SetFlameCol(int) */

void __thiscall Effect_AngerFlame::SetFlameCol(Effect_AngerFlame *this,int param_1)

{
  *(int *)(this + 0x218) = param_1;
  return;
}


/* Effect_AngerFlame::GetFlameCol() */

undefined4 __thiscall Effect_AngerFlame::GetFlameCol(Effect_AngerFlame *this)

{
  return *(undefined4 *)(this + 0x218);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_AngerFlame::StaticClassInit() */

void Effect_AngerFlame::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_AngerFlame");
    (*pcVar2)(plVar1,asStack_10,FUN_04133be4,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_AngerFlame::StaticGetClass() */

long * Effect_AngerFlame::StaticGetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_AngerFlame",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_AngerFlame::GetClass() const */

long * Effect_AngerFlame::GetClass(void)

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
  uVar2 = PopAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_AngerFlame",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_AngerFlame::SetFlameRow(int) */

void __thiscall Effect_AngerFlame::SetFlameRow(Effect_AngerFlame *this,int param_1)

{
  *(int *)(this + 0x21c) = param_1;
  return;
}


/* Effect_AngerFlame::GetFlameRow() */

undefined4 __thiscall Effect_AngerFlame::GetFlameRow(Effect_AngerFlame *this)

{
  return *(undefined4 *)(this + 0x21c);
}


/* Effect_AngerFlame::IsSpread() */

Effect_AngerFlame __thiscall Effect_AngerFlame::IsSpread(Effect_AngerFlame *this)

{
  return this[0x214];
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_AngerFlame::getFlameBeginAnim() */

void Effect_AngerFlame::getFlameBeginAnim(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x210) == 0) {
    __s = "idle";
  }
  else if (*(int *)(in_x0 + 0x210) == 1) {
    __s = "idle_1";
  }
  else {
    __s = "idle_2";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_AngerFlame::getFlameLoopAnim() */

void Effect_AngerFlame::getFlameLoopAnim(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x210) == 0) {
    __s = "idle2";
  }
  else if (*(int *)(in_x0 + 0x210) == 1) {
    __s = "idle2_1";
  }
  else {
    __s = "idle2_2";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_AngerFlame::getFlameEndAnim() */

void Effect_AngerFlame::getFlameEndAnim(void)

{
  long lVar1;
  long in_x0;
  char *__s;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  if (*(int *)(in_x0 + 0x210) == 0) {
    __s = "idle3";
  }
  else if (*(int *)(in_x0 + 0x210) == 1) {
    __s = "idle3_1";
  }
  else {
    __s = "idle3_2";
  }
  std::string::string(in_x8,__s);
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* Effect_AngerFlame::~Effect_AngerFlame() */

void __thiscall Effect_AngerFlame::~Effect_AngerFlame(Effect_AngerFlame *this)

{
  *(undefined ***)this = &PTR_GetClass_067ebfb0;
  *(undefined ***)(this + 0x10) = &PTR__Effect_AngerFlame_067ec0d0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x228));
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to Effect_AngerFlame::~Effect_AngerFlame() */

void __thiscall Effect_AngerFlame::~Effect_AngerFlame(Effect_AngerFlame *this)

{
  ~Effect_AngerFlame(this + -0x10);
  return;
}


/* Effect_AngerFlame::~Effect_AngerFlame() */

void __thiscall Effect_AngerFlame::~Effect_AngerFlame(Effect_AngerFlame *this)

{
  ~Effect_AngerFlame(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to Effect_AngerFlame::~Effect_AngerFlame() */

void __thiscall Effect_AngerFlame::~Effect_AngerFlame(Effect_AngerFlame *this)

{
  ~Effect_AngerFlame(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_AngerFlame::OnFlameBegin(std::string const&, std::string const&, int) */

void Effect_AngerFlame::OnFlameBegin(string *param_1,string *param_2,int param_3)

{
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getFlameLoopAnim();
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_AngerFlame::Effect_AngerFlame() */

void __thiscall Effect_AngerFlame::Effect_AngerFlame(Effect_AngerFlame *this)

{
  long lVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_067ebfb0;
  *(undefined ***)(this + 0x10) = &PTR__Effect_AngerFlame_067ec0d0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x228));
  *(undefined4 *)(this + 0x218) = 0xffffffff;
  *(undefined4 *)(this + 0x21c) = 0xffffffff;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x228),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  this[0x215] = (Effect_AngerFlame)0x0;
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x210) = 0;
  this[0x214] = (Effect_AngerFlame)0x0;
  *(undefined4 *)(this + 0x220) = 0;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_AngerFlame::StaticNew() */

Effect_AngerFlame * Effect_AngerFlame::StaticNew(void)

{
  Effect_AngerFlame *this;
  
  this = ::operator_new(0x230);
  Effect_AngerFlame(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_AngerFlame::SetOwningEffect(Effect_PopAnim*) */

void __thiscall Effect_AngerFlame::SetOwningEffect(Effect_AngerFlame *this,Effect_PopAnim *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (Effect_PopAnim *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x228),(RtWeakPtrBase *)aRStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_AngerFlame::OnFlameEnd(std::string const&, std::string const&, int) */

void Effect_AngerFlame::OnFlameEnd(string *param_1,string *param_2,int param_3)

{
  RtMixedPtrBase *this;
  char cVar1;
  long *plVar2;
  
  this = (RtMixedPtrBase *)(param_1 + 0x228);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtrBase::ClearId((RtWeakPtrBase *)this);
  return;
}


/* Effect_AngerFlame::SetFlameDelay(float) */

void __thiscall Effect_AngerFlame::SetFlameDelay(Effect_AngerFlame *this,float param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0x220) = fVar1 + param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_AngerFlame::StartFlame() */

void __thiscall Effect_AngerFlame::StartFlame(Effect_AngerFlame *this)

{
  long lVar1;
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  getFlameBeginAnim();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"OnFlameBegin");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  lVar1 = ___stack_chk_guard;
  this[0x214] = (Effect_AngerFlame)0x1;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_AngerFlame::onUpdate() */

void __thiscall Effect_AngerFlame::onUpdate(Effect_AngerFlame *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)PVZ_EOT();
  if (((*(float *)(this + 0x220) < fVar1) &&
      (fVar2 = (float)PVZ_T(), *(float *)(this + 0x220) < fVar2)) &&
     (this[0x215] == (Effect_AngerFlame)0x0)) {
    StartFlame(this);
    *(float *)(this + 0x220) = fVar1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_AngerFlame::EndFlame() */

void __thiscall Effect_AngerFlame::EndFlame(Effect_AngerFlame *this)

{
  string asStack_70 [8];
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this[0x215] = (Effect_AngerFlame)0x1;
  local_8 = ___stack_chk_guard;
  this[0x214] = (Effect_AngerFlame)0x0;
  getFlameEndAnim();
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
  std::string::string(asStack_58,"OnFlameEnd");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
  std::string::~string(asStack_70);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_AngerFlame::onPopAnimInitialized() */

void __thiscall Effect_AngerFlame::onPopAnimInitialized(Effect_AngerFlame *this)

{
  undefined4 uVar1;
  
  PopAnimRig::onPopAnimInitialized((PopAnimRig *)this);
  uVar1 = PVZ_EOT();
  this[0x215] = (Effect_AngerFlame)0x0;
  *(undefined4 *)(this + 0x220) = uVar1;
  return;
}

