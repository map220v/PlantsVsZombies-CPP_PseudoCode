// Class: ZombieAnimRig_Piano


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Piano::StaticClassInit() */

void ZombieAnimRig_Piano::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombieAnimRig_Piano");
    (*pcVar2)(plVar1,asStack_10,FUN_04606274,0x250,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Piano::StaticGetClass() */

long * ZombieAnimRig_Piano::StaticGetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Piano",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Piano::GetClass() const */

long * ZombieAnimRig_Piano::GetClass(void)

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
  uVar2 = ZombieAnimRig::StaticGetClass();
  (*pcVar3)(plVar1,"ZombieAnimRig_Piano",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombieAnimRig_Piano::SetDamaged() */

void __thiscall ZombieAnimRig_Piano::SetDamaged(ZombieAnimRig_Piano *this)

{
  *(undefined4 *)(this + 0x240) = 2;
  return;
}


/* ZombieAnimRig_Piano::SetUndamaged() */

void __thiscall ZombieAnimRig_Piano::SetUndamaged(ZombieAnimRig_Piano *this)

{
  *(undefined4 *)(this + 0x240) = 1;
  return;
}


/* ZombieAnimRig_Piano::~ZombieAnimRig_Piano() */

void __thiscall ZombieAnimRig_Piano::~ZombieAnimRig_Piano(ZombieAnimRig_Piano *this)

{
  *(undefined ***)this = &PTR_GetClass_06871880;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Piano_06871af8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
  ZombieAnimRig::~ZombieAnimRig((ZombieAnimRig *)this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Piano::~ZombieAnimRig_Piano() */

void __thiscall ZombieAnimRig_Piano::~ZombieAnimRig_Piano(ZombieAnimRig_Piano *this)

{
  ~ZombieAnimRig_Piano(this + -0x10);
  return;
}


/* ZombieAnimRig_Piano::~ZombieAnimRig_Piano() */

void __thiscall ZombieAnimRig_Piano::~ZombieAnimRig_Piano(ZombieAnimRig_Piano *this)

{
  ~ZombieAnimRig_Piano(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombieAnimRig_Piano::~ZombieAnimRig_Piano() */

void __thiscall ZombieAnimRig_Piano::~ZombieAnimRig_Piano(ZombieAnimRig_Piano *this)

{
  ~ZombieAnimRig_Piano(this + -0x10);
  return;
}


/* ZombieAnimRig_Piano::ZombieAnimRig_Piano() */

void __thiscall ZombieAnimRig_Piano::ZombieAnimRig_Piano(ZombieAnimRig_Piano *this)

{
  ZombieAnimRig::ZombieAnimRig((ZombieAnimRig *)this);
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined ***)this = &PTR_GetClass_06871880;
  *(undefined ***)(this + 0x10) = &PTR__ZombieAnimRig_Piano_06871af8;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x248));
  return;
}


/* ZombieAnimRig_Piano::StaticNew() */

ZombieAnimRig_Piano * ZombieAnimRig_Piano::StaticNew(void)

{
  ZombieAnimRig_Piano *this;
  
  this = ::operator_new(0x250);
  ZombieAnimRig_Piano(this);
  return this;
}


/* ZombieAnimRig_Piano::IsPianoAnimPlaying() */

void __thiscall ZombieAnimRig_Piano::IsPianoAnimPlaying(ZombieAnimRig_Piano *this)

{
  PopAnimRig *this_00;
  
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
  PopAnimRig::IsPlayingAnything(this_00);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Piano::DrawPiano(Sexy::Graphics*) */

void __thiscall ZombieAnimRig_Piano::DrawPiano(ZombieAnimRig_Piano *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  PopAnimRig *pPVar2;
  long lVar3;
  Color aCStack_18 [16];
  long local_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248);
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x108))();
  if (cVar1 == '\0') {
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    PopAnimRig::ClearMultiplicativeOverlayColor(pPVar2);
  }
  else {
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*(long *)this + 0xf8))(aCStack_18,this);
    PopAnimRig::SetMultiplicativeOverlayColor(pPVar2,aCStack_18);
  }
  cVar1 = (**(code **)(*(long *)this + 0x100))(this);
  if (cVar1 == '\0') {
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    PopAnimRig::ClearShaderOverrideColor(pPVar2);
  }
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar3 = FUN_046057a0(*(undefined8 *)(this + 0x20));
  PopAnimRig::Draw(pPVar2,param_1,(SexyTransform2D *)(lVar3 + 0x6c));
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Piano::onPreDraw(Sexy::Graphics*) */

void __thiscall ZombieAnimRig_Piano::onPreDraw(ZombieAnimRig_Piano *this,Graphics *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  PopAnimRig *pPVar2;
  long lVar3;
  Color aCStack_18 [16];
  long lStack_8;
  
  this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248);
  lStack_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0x108))();
  if (cVar1 == '\0') {
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    PopAnimRig::ClearMultiplicativeOverlayColor(pPVar2);
  }
  else {
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    (**(code **)(*(long *)this + 0xf8))(aCStack_18,this);
    PopAnimRig::SetMultiplicativeOverlayColor(pPVar2,aCStack_18);
  }
  cVar1 = (**(code **)(*(long *)this + 0x100))(this);
  if (cVar1 == '\0') {
    pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    PopAnimRig::ClearShaderOverrideColor(pPVar2);
  }
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
  lVar3 = FUN_046057a0(*(undefined8 *)(this + 0x20));
  PopAnimRig::Draw(pPVar2,param_1,(SexyTransform2D *)(lVar3 + 0x6c));
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Piano::AddWarpEffect() */

void __thiscall ZombieAnimRig_Piano::AddWarpEffect(ZombieAnimRig_Piano *this)

{
  PopAnimRig *this_00;
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
  Sexy::Color::Color(aCStack_18,1);
  PopAnimRig::SetShaderOverrideColor(this_00,aCStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Piano::RemoveWarpEffect() */

void __thiscall ZombieAnimRig_Piano::RemoveWarpEffect(ZombieAnimRig_Piano *this)

{
  PopAnimRig *this_00;
  
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
  PopAnimRig::ClearShaderOverrideColor(this_00);
  return;
}


/* ZombieAnimRig_Piano::SetAnimRateOverride(float) */

void __thiscall ZombieAnimRig_Piano::SetAnimRateOverride(ZombieAnimRig_Piano *this,float param_1)

{
  long *plVar1;
  
  PopAnimRig::SetAnimRateOverride((PopAnimRig *)this,param_1);
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
  (**(code **)(*plVar1 + 0x80))(param_1);
  return;
}


/* ZombieAnimRig_Piano::ClearAnimRateOverride() */

void __thiscall ZombieAnimRig_Piano::ClearAnimRateOverride(ZombieAnimRig_Piano *this)

{
  long *plVar1;
  
  PopAnimRig::ClearAnimRateOverride((PopAnimRig *)this);
  plVar1 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
  (**(code **)(*plVar1 + 0x88))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Piano::PlayPianoDeath() */

void __thiscall ZombieAnimRig_Piano::PlayPianoDeath(ZombieAnimRig_Piano *this)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248))
  ;
  std::string::string(asStack_40,"die");
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  PopAnimRig::PlayAndStop(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombieAnimRig_Piano::PlayDie() */

void __thiscall ZombieAnimRig_Piano::PlayDie(ZombieAnimRig_Piano *this)

{
  PlayPianoDeath(this);
  ZombieAnimRig::PlayDie((ZombieAnimRig *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Piano::onPianoDamageAnimationEnd(std::string const&) */

void ZombieAnimRig_Piano::onPianoDamageAnimationEnd(string *param_1)

{
  PopAnimRig *pPVar1;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(undefined4 *)(param_1 + 0x240) = 4;
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x248));
  std::string::string(asStack_40,"play2");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Piano::PlayStreetIdle(RtReflectionDelegate<Sexy::Delegate3<std::string const&,
   std::string const&, int> >) */

void ZombieAnimRig_Piano::PlayStreetIdle(ZombieAnimRig *param_1)

{
  undefined4 uVar1;
  PopAnimRig *pPVar2;
  string asStack_58 [8];
  DummyInit aDStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pPVar2 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x248));
  std::string::string(asStack_58,"idle");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_50);
  PopAnimRig::PlayAndContinue(pPVar2,asStack_58,0,aDStack_50);
  std::string::~string(asStack_58);
  nop();
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> *)
             aDStack_50);
  uVar1 = ZombieAnimRig::PlayStreetIdle(param_1,aDStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aDStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* ZombieAnimRig_Piano::UpdatePiano() */

void __thiscall ZombieAnimRig_Piano::UpdatePiano(ZombieAnimRig_Piano *this)

{
  PopAnimRig *this_00;
  float fVar1;
  float fVar2;
  
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                      ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
  fVar1 = (float)PVZ_T();
  fVar2 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar1,fVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Piano::choosePianoPlayingAnimation() */

void __thiscall ZombieAnimRig_Piano::choosePianoPlayingAnimation(ZombieAnimRig_Piano *this)

{
  bool bVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x240) == 1) {
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
    std::string::string(asStack_68,"play");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onPianoPlayAnimationEnd");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    iVar2 = PopAnimRig::PlayAndStop(pPVar3,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    bVar1 = iVar2 != -1;
  }
  else if (*(int *)(this + 0x240) == 2) {
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x248));
    std::string::string(asStack_68,"damage");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onPianoDamageAnimationEnd");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    iVar2 = PopAnimRig::PlayAndStop(pPVar3,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    bVar1 = iVar2 != -1;
    *(undefined4 *)(this + 0x240) = 3;
  }
  else {
    bVar1 = false;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Piano::PlayWalk(RtReflectionDelegate<Sexy::Delegate3<std::string const&,
   std::string const&, int> >) */

void ZombieAnimRig_Piano::PlayWalk(ZombieAnimRig_Piano *param_1)

{
  undefined1 uVar1;
  char cVar2;
  string asStack_40 [8];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x240) != 0) {
    std::string::string(asStack_40,"idle");
    cVar2 = PopAnimRig::IsAnimStringActive((PopAnimRig *)param_1,asStack_40);
    std::string::~string(asStack_40);
    nop();
    if (cVar2 == '\0') {
      uVar1 = 1;
      goto LAB_04606204;
    }
  }
  *(undefined4 *)(param_1 + 0x210) = 2;
  *(undefined4 *)(param_1 + 0x240) = 1;
  std::string::string(asStack_40,"play");
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue((PopAnimRig *)param_1,asStack_40,0,aDStack_38);
  std::string::~string(asStack_40);
  nop();
  uVar1 = choosePianoPlayingAnimation(param_1);
LAB_04606204:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Piano::onPianoPlayAnimationEnd(std::string const&) */

void ZombieAnimRig_Piano::onPianoPlayAnimationEnd(string *param_1)

{
  bool bVar1;
  int iVar2;
  PopAnimRig *pPVar3;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x240) == 1) {
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x248));
    std::string::string(asStack_68,"play");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onPianoPlayAnimationEnd");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    iVar2 = PopAnimRig::PlayAndStop(pPVar3,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    bVar1 = iVar2 != -1;
  }
  else if (*(int *)(param_1 + 0x240) == 2) {
    pPVar3 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0x248));
    std::string::string(asStack_68,"damage");
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
    std::string::string(asStack_58,"onPianoDamageAnimationEnd");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    iVar2 = PopAnimRig::PlayAndStop(pPVar3,asStack_68,0,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
    std::string::~string(asStack_68);
    nop();
    bVar1 = iVar2 != -1;
    *(undefined4 *)(param_1 + 0x240) = 3;
  }
  else {
    bVar1 = false;
  }
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Piano::onPopAnimInitialized() */

void __thiscall ZombieAnimRig_Piano::onPopAnimInitialized(ZombieAnimRig_Piano *this)

{
  string *psVar1;
  long lVar2;
  PopAnim *pPVar3;
  RtClass *pRVar4;
  size_t __n;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  ZombieAnimRig::onPopAnimInitialized((ZombieAnimRig *)this);
  std::string::string(asStack_28,"POPANIM_ZOMBIE_PIANO");
  nop();
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  std::string::string(asStack_10,"piano");
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar1);
  std::string::~string(asStack_10);
  nop();
  lVar2 = FUN_046057a0(*(undefined8 *)(this + 0x20));
  __n = 0;
  lVar2 = FUN_05474374(*(long *)(lVar2 + 0x58) + 0x58,"zombie_piano_holiday");
  if (lVar2 != -1) {
    std::string::append(asStack_28,"POPANIM_ZOMBIE_PIANO_HOLIDAY",__n);
  }
  GetPAMByName(asStack_28);
  pPVar3 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_18);
  pRVar4 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig(pPVar3,pRVar4);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x248),(RtWeakPtrBase *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Piano::getHeadLayerNames() */

void ZombieAnimRig_Piano::getHeadLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18410 & 1;
  if (((DAT_06b18410 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18410), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18400,"zombie_piano_skull");
    nop();
    std::string::string((string *)&DAT_06b18408,"zombie_piano_jaw");
    nop();
    __cxa_guard_release(&DAT_06b18410);
    __cxa_atexit(FUN_046056c0,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18390 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18390), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b183a8,(string *)&DAT_06b18400,(allocator *)&DAT_06b18410);
    __cxa_guard_release(&DAT_06b18390);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b183a8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b183a8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Piano::getArmLayerNames() */

void ZombieAnimRig_Piano::getArmLayerNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b183d0 & 1;
  if (((DAT_06b183d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b183d0), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b18440,"zombie_piano_arm_outer_lower");
    nop();
    std::string::string((string *)&DAT_06b18448,"zombie_piano_hand_outer");
    nop();
    __cxa_guard_release(&DAT_06b183d0);
    __cxa_atexit(FUN_046056ec,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b18320 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18320), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b183d8,(string *)&DAT_06b18440,(allocator *)&sClass);
    __cxa_guard_release(&DAT_06b18320);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b183d8,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b183d8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombieAnimRig_Piano::getArmReplacementPairNames() */

void ZombieAnimRig_Piano::getArmReplacementPairNames(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  lVar1 = ___stack_chk_guard;
  uVar3 = DAT_06b18398 & 1;
  if (((DAT_06b18398 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b18398), iVar2 != 0)) {
    std::string::string((string *)&DAT_06b183f0,"zombie_piano_arm_outer_upper");
    nop();
    std::string::string((string *)&DAT_06b183f8,"zombie_piano_arm_outer_upper_bone");
    nop();
    __cxa_guard_release(&DAT_06b18398);
    __cxa_atexit(FUN_04605718,uVar3,&DAT_06a88000);
  }
  if (((DAT_06b183a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_06b183a0), iVar2 != 0)) {
    std::vector<std::string,std::allocator<std::string>>::vector<std::string*,void>
              ((string *)&DAT_06b18428,(string *)&DAT_06b183f0,(allocator *)&DAT_06b18400);
    __cxa_guard_release(&DAT_06b183a0);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b18428,
                 &DAT_06a88000);
  }
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&DAT_06b18428);
}

