// Class: CreatureAnimRig


/* CreatureAnimRig::SetGroundTrackName(std::string const&) */

void CreatureAnimRig::SetGroundTrackName(string *param_1)

{
  thunk_FUN_05475e00(param_1 + 0x218);
  return;
}


/* CreatureAnimRig::GetGroundTrackTranslation() const */

undefined4 __thiscall CreatureAnimRig::GetGroundTrackTranslation(CreatureAnimRig *this)

{
  return *(undefined4 *)(this + 0x220);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreatureAnimRig::HideGroundTrack() */

void __thiscall CreatureAnimRig::HideGroundTrack(CreatureAnimRig *this)

{
  char cVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"ground_swatch");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"ground_swatch_plane");
  PopAnimRig::SetLayerVisibility((PopAnimRig *)this,asStack_10,false);
  std::string::~string(asStack_10);
  nop();
  cVar1 = FUN_0547419c((string *)(this + 0x218));
  if (cVar1 == '\0') {
    PopAnimRig::SetLayerVisibility((PopAnimRig *)this,(string *)(this + 0x218),false);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CreatureAnimRig::IsPlaying(CreatureAnimRigState) */

bool __thiscall CreatureAnimRig::IsPlaying(CreatureAnimRig *this,int param_2)

{
  return *(int *)(this + 0x210) == param_2;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreatureAnimRig::getMeleeAnimationName() */

void __thiscall CreatureAnimRig::getMeleeAnimationName(CreatureAnimRig *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"melee");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* CreatureAnimRig::~CreatureAnimRig() */

void __thiscall CreatureAnimRig::~CreatureAnimRig(CreatureAnimRig *this)

{
  *(undefined ***)this = &PTR_GetClass_069030e0;
  *(undefined ***)(this + 0x10) = &PTR__CreatureAnimRig_06903230;
  std::string::~string((string *)(this + 0x218));
  PopAnimRig::~PopAnimRig((PopAnimRig *)this);
  return;
}


/* non-virtual thunk to CreatureAnimRig::~CreatureAnimRig() */

void __thiscall CreatureAnimRig::~CreatureAnimRig(CreatureAnimRig *this)

{
  ~CreatureAnimRig(this + -0x10);
  return;
}


/* CreatureAnimRig::~CreatureAnimRig() */

void __thiscall CreatureAnimRig::~CreatureAnimRig(CreatureAnimRig *this)

{
  ~CreatureAnimRig(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to CreatureAnimRig::~CreatureAnimRig() */

void __thiscall CreatureAnimRig::~CreatureAnimRig(CreatureAnimRig *this)

{
  ~CreatureAnimRig(this + -0x10);
  return;
}


/* CreatureAnimRig::CreatureAnimRig() */

void __thiscall CreatureAnimRig::CreatureAnimRig(CreatureAnimRig *this)

{
  PopAnimRig::PopAnimRig((PopAnimRig *)this);
  *(undefined ***)this = &PTR_GetClass_069030e0;
  *(undefined ***)(this + 0x10) = &PTR__CreatureAnimRig_06903230;
  Set8BytesTo0(this + 0x218);
  return;
}


/* CreatureAnimRig::StaticNew() */

CreatureAnimRig * CreatureAnimRig::StaticNew(void)

{
  CreatureAnimRig *this;
  
  this = ::operator_new(0x230);
  CreatureAnimRig(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreatureAnimRig::StaticClassInit() */

void CreatureAnimRig::StaticClassInit(void)

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
    std::string::string(asStack_10,"CreatureAnimRig");
    (*pcVar2)(plVar1,asStack_10,FUN_04814eec,0x230,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CreatureAnimRig::StaticGetClass() */

long * CreatureAnimRig::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"CreatureAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* CreatureAnimRig::GetClass() const */

long * CreatureAnimRig::GetClass(void)

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
  (*pcVar3)(plVar1,"CreatureAnimRig",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreatureAnimRig::PlayIdle(RtReflectionDelegate<Sexy::Delegate3<std::string const&, std::string
   const&, int> >) */

void __thiscall CreatureAnimRig::PlayIdle(CreatureAnimRig *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x128))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 1;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreatureAnimRig::PlayMelee(RtReflectionDelegate<Sexy::Delegate1<std::string const&> >) */

void __thiscall CreatureAnimRig::PlayMelee(CreatureAnimRig *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x138))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            (aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndStop((PopAnimRig *)this,asStack_58,3,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 3;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1 != -1);
  }
  return;
}


/* CreatureAnimRig::setAnimRateForWalkAnim(std::string const&) */

void __thiscall CreatureAnimRig::setAnimRateForWalkAnim(CreatureAnimRig *this,string *param_1)

{
  bool bVar1;
  int iVar2;
  float fVar3;
  
  bVar1 = std::operator==(param_1,"");
  if ((!bVar1) &&
     (fVar3 = (float)CalcWalkPixelsPerSecondForAnimLabel
                               ((PopAnimRig *)this,(string *)(this + 0x218),param_1), 0.0 < fVar3))
  {
    iVar2 = BoardConstants::GRIDSQUARE_WIDTH();
    (**(code **)(*(long *)this + 0x80))
              ((((float)iVar2 * *(float *)(this + 0x224)) / fVar3) * *(float *)(this + 0x228),this);
    return;
  }
  (**(code **)(*(long *)this + 0x80))(*(undefined4 *)(this + 0x228),this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreatureAnimRig::PlayWalk(RtReflectionDelegate<Sexy::Delegate3<std::string const&, std::string
   const&, int> >) */

void __thiscall CreatureAnimRig::PlayWalk(CreatureAnimRig *this,RtReflectionDelegate *param_2)

{
  int iVar1;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  (**(code **)(*(long *)this + 0x130))(asStack_58);
  RtReflectionDelegate<Sexy::Delegate3<std::string_const&,std::string_const&,int>>::
  RtReflectionDelegate(aRStack_50,param_2);
  iVar1 = PopAnimRig::PlayAndContinue((PopAnimRig *)this,asStack_58,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
              *)aRStack_50);
  std::string::~string(asStack_58);
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x210) = 2;
    PopAnimRig::CalcPlayingAnimLabelName();
    setAnimRateForWalkAnim(this,asStack_58);
    std::string::~string(asStack_58);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 != -1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreatureAnimRig::SetDesiredWalkVelocity(float) */

void __thiscall CreatureAnimRig::SetDesiredWalkVelocity(CreatureAnimRig *this,float param_1)

{
  string asStack_10 [8];
  long local_8;
  
  *(float *)(this + 0x224) = param_1;
  local_8 = ___stack_chk_guard;
  PopAnimRig::CalcPlayingAnimLabelName();
  setAnimRateForWalkAnim(this,asStack_10);
  std::string::~string(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreatureAnimRig::SetAnimRateModifier(float) */

void __thiscall CreatureAnimRig::SetAnimRateModifier(CreatureAnimRig *this,float param_1)

{
  string asStack_10 [8];
  long local_8;
  
  *(float *)(this + 0x228) = param_1;
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x210) == 2) {
    PopAnimRig::CalcPlayingAnimLabelName();
    setAnimRateForWalkAnim(this,asStack_10);
    std::string::~string(asStack_10);
  }
  else {
    (**(code **)(*(long *)this + 0x80))();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreatureAnimRig::CreatureUpdateAnim(bool) */

void __thiscall CreatureAnimRig::CreatureUpdateAnim(CreatureAnimRig *this,bool param_1)

{
  char cVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_24;
  float local_20;
  float local_1c;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_24 = 0.0;
  local_8 = ___stack_chk_guard;
  local_20 = 0.0;
  PopAnimRig::CalcPlayingAnimLabelName();
  if (param_1) {
    lVar2 = FUN_04814c90(*(undefined8 *)(this + 0x20));
    fVar5 = *(float *)(*(long *)(lVar2 + 0x50) + 0xc);
    cVar1 = PopAnimRig::CalcLayerTranslation
                      ((PopAnimRig *)this,(string *)(this + 0x218),&local_24,&local_20);
    fVar3 = (float)PVZ_T();
    fVar4 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim((PopAnimRig *)this,fVar3,fVar4);
    if (cVar1 != '\0') {
      PopAnimRig::CalcPlayingAnimLabelName();
      cVar1 = std::operator==(asStack_10,asStack_18);
      std::string::~string(asStack_10);
      if ((cVar1 == '\0') ||
         (lVar2 = FUN_04814c90(*(undefined8 *)(this + 0x20)),
         *(float *)(*(long *)(lVar2 + 0x50) + 0xc) < fVar5)) goto LAB_04815678;
      cVar1 = PopAnimRig::CalcLayerTranslation
                        ((PopAnimRig *)this,(string *)(this + 0x218),&local_1c,(float *)asStack_10);
      if (cVar1 != '\0') {
        *(float *)(this + 0x220) = local_1c - local_24;
        goto LAB_04815678;
      }
    }
  }
  else {
    fVar3 = (float)PVZ_T();
    fVar4 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim((PopAnimRig *)this,fVar3,fVar4);
  }
  *(undefined4 *)(this + 0x220) = 0;
LAB_04815678:
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* CreatureAnimRig::getEmptyLayerNames() const */

undefined * CreatureAnimRig::getEmptyLayerNames(void)

{
  int iVar1;
  
  if (((DAT_06b29c68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06b29c68), iVar1 != 0)) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&DAT_06b29cc0);
    __cxa_guard_release(&DAT_06b29c68);
    __cxa_atexit(std::vector<std::string,std::allocator<std::string>>::~vector,&DAT_06b29cc0,
                 &DAT_06a88000);
    return &DAT_06b29cc0;
  }
  return &DAT_06b29cc0;
}


/* CreatureAnimRig::onPopAnimInitialized() */

void __thiscall CreatureAnimRig::onPopAnimInitialized(CreatureAnimRig *this)

{
  PopAnimRig::onPopAnimInitialized((PopAnimRig *)this);
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x220) = 0;
  *(undefined4 *)(this + 0x228) = 0x3f800000;
  *(undefined4 *)(this + 0x224) = 0;
  return;
}

