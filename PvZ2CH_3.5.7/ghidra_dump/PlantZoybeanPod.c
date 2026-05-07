// Class: PlantZoybeanPod


/* PlantZoybeanPod::PlantZoybeanPod() */

void __thiscall PlantZoybeanPod::PlantZoybeanPod(PlantZoybeanPod *this)

{
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined4 *)(this + 0x28) = 0;
  this[0x35] = (PlantZoybeanPod)0x0;
  *(undefined ***)this = &PTR_GetClass_06635c00;
  return;
}


/* PlantZoybeanPod::StaticNew() */

PlantZoybeanPod * PlantZoybeanPod::StaticNew(void)

{
  PlantZoybeanPod *this;
  
  this = ::operator_new(0x38);
  PlantZoybeanPod(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantZoybeanPod::StaticClassInit() */

void PlantZoybeanPod::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantZoybeanPod");
    (*pcVar2)(plVar1,asStack_10,FUN_0345b264,0x38,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantZoybeanPod::StaticGetClass() */

long * PlantZoybeanPod::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantZoybeanPod",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantZoybeanPod::GetClass() const */

long * PlantZoybeanPod::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantZoybeanPod",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantZoybeanPod::~PlantZoybeanPod() */

void __thiscall PlantZoybeanPod::~PlantZoybeanPod(PlantZoybeanPod *this)

{
  *(undefined ***)this = &PTR_GetClass_06635c00;
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantZoybeanPod::~PlantZoybeanPod() */

void __thiscall PlantZoybeanPod::~PlantZoybeanPod(PlantZoybeanPod *this)

{
  ~PlantZoybeanPod(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantZoybeanPod::SetPopAnimDelegates(PlantAnimRig*) */

void __thiscall PlantZoybeanPod::SetPopAnimDelegates(PlantZoybeanPod *this,PlantAnimRig *param_1)

{
  PlantAnimRig *pPVar1;
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1<float> aDStack_68 [48];
  Delegate1<float> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::SetPopAnimDelegates((PlantFramework *)this,param_1);
  pPVar1 = (PlantAnimRig *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10))
  ;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,spawnZombieCallback);
  Sexy::Delegate1<float>::Delegate1<PlantZoybeanPod,void(PlantZoybeanPod::*)(float)>
            (aDStack_68,aCStack_98);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,spawnZombieCallback);
  Sexy::Delegate1<float>::Delegate1<PlantZoybeanPod,void(PlantZoybeanPod::*)(float)>
            (aDStack_38,aCStack_80);
  PlantAnimRig::SetPlantDelegates(pPVar1,aDStack_68,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantZoybeanPod::setState(unsigned int) */

void __thiscall PlantZoybeanPod::setState(PlantZoybeanPod *this,uint param_1)

{
  uint uVar1;
  PlantAnimRig_ZoybeanPod *this_00;
  long lVar2;
  code *__n;
  code *pcVar3;
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> aRStack_50 [72];
  long local_8;
  
  uVar1 = *(uint *)(*(long *)(this + 0x10) + 200);
  __n = (code *)(ulong)uVar1;
  local_8 = ___stack_chk_guard;
  if (uVar1 == param_1) goto switchD_0345c5fc_default;
  *(uint *)(*(long *)(this + 0x10) + 200) = param_1;
  this_00 = (PlantAnimRig_ZoybeanPod *)FUN_0345c55c();
  switch(*(undefined4 *)(*(long *)(this + 0x10) + 200)) {
  case 0xb:
    PlantAnimRig::SetState((PlantAnimRig *)this_00,0x10);
    (**(code **)(*(long *)this_00 + 0x110))(this_00);
    std::string::append((string *)(this_00 + 0x3b8),"idle",(size_t)__n);
    break;
  case 0xc:
    PlantAnimRig::SetState((PlantAnimRig *)this_00,0xe);
    PlantAnimRig_Citron::PlayPreviewAnim(SUB81(this_00,0));
    std::string::append((string *)(this_00 + 0x3b8),"idle2",(size_t)__n);
    break;
  case 0xd:
    PlantAnimRig::SetState((PlantAnimRig *)this_00,0x12);
    PlantAnimRig_Reincarnation::PlayPreviewAnim(SUB81(this_00,0));
    std::string::append((string *)(this_00 + 0x3b8),"idle3",(size_t)__n);
    break;
  case 0xe:
    PlantAnimRig::SetState((PlantAnimRig *)this_00,0x11);
    FUN_05475d88(asStack_58,this_00 + 0x3b8);
    PlantAnimRig_ZoybeanPod::PlayTransition(this_00,asStack_58);
    std::string::~string(asStack_58);
    break;
  case 0xf:
    lVar2 = *(long *)this_00;
    goto LAB_0345c630;
  case 0x10:
    PlantAnimRig::SetState((PlantAnimRig *)this_00,0xf);
    PlantAnimRig_ZoybeanPod::PlayRecovery(this_00);
    std::string::append((string *)(this_00 + 0x3b8),"idle4",(size_t)__n);
    break;
  case 0x11:
    __n = *(code **)(*(long *)this + 0xa8);
    (*__n)(this,0);
    lVar2 = *(long *)this_00;
LAB_0345c630:
    pcVar3 = *(code **)(lVar2 + 0x130);
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate(aRStack_50);
    (*pcVar3)(this_00,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                *)aRStack_50);
    std::string::append((string *)(this_00 + 0x3b8),"transition3",(size_t)__n);
  }
switchD_0345c5fc_default:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PlantZoybeanPod::ApplyPlantfood() */

void __thiscall PlantZoybeanPod::ApplyPlantfood(PlantZoybeanPod *this)

{
  PlantFramework::ApplyPlantfood((PlantFramework *)this);
  setState(this,0x11);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantZoybeanPod::CancelPlantfood() */

void __thiscall PlantZoybeanPod::CancelPlantfood(PlantZoybeanPod *this)

{
  PopAnimRig *this_00;
  undefined4 uVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::ManualCancelPlantfood((PlantFramework *)this);
  if (this[0x34] != (PlantZoybeanPod)0x0) {
    this_00 = (PopAnimRig *)FUN_0345c55c(*(undefined8 *)(this + 0x10));
    std::string::string(asStack_10,"idle4");
    uVar1 = PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_10);
    *(undefined4 *)(this + 0x2c) = uVar1;
    std::string::~string(asStack_10);
    nop();
  }
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x30) = uVar1;
  setState(this,0x10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantZoybeanPod::UpdateActions() */

void __thiscall PlantZoybeanPod::UpdateActions(PlantZoybeanPod *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  PopAnimRig *this_00;
  char *__nptr;
  long lVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PopAnimRig *)FUN_0345c55c(*(undefined8 *)(this + 0x10));
  iVar5 = *(int *)(*(long *)(this + 0x10) + 200);
  do {
    fVar6 = (float)PVZ_T();
    iVar3 = *(int *)(*(long *)(this + 0x10) + 200);
    switch(iVar3) {
    case 0xb:
    case 0xc:
    case 0x10:
      if (*(float *)(this + 0x2c) <= fVar6 - *(float *)(this + 0x30)) {
        setState(this,0xe);
        iVar3 = *(int *)(*(long *)(this + 0x10) + 200);
      }
      break;
    case 0xd:
      if (*(float *)(this + 0x2c) <= fVar6 - *(float *)(this + 0x30)) {
        setState(this,0xf);
        iVar3 = *(int *)(*(long *)(this + 0x10) + 200);
      }
      break;
    case 0xe:
      cVar1 = PopAnimRig::IsPlayingAnything(this_00);
      if (cVar1 != '\0') goto LAB_0345c8f4;
      FUN_05475ffc(asStack_18,this_00 + 0x3b8,4,1);
      bVar2 = std::operator==(asStack_18,"");
      if (bVar2) {
LAB_0345c994:
        uVar7 = PVZ_T();
        *(undefined4 *)(this + 0x30) = uVar7;
        if (this[0x34] != (PlantZoybeanPod)0x0) {
          std::string::string(asStack_10,"idle2");
          uVar7 = PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_10);
          *(undefined4 *)(this + 0x2c) = uVar7;
          std::string::~string(asStack_10);
          nop();
        }
        setState(this,0xc);
      }
      else {
        __nptr = (char *)FUN_0547429c(asStack_18);
        lVar4 = strtol(__nptr,(char **)0x0,10);
        iVar3 = (int)lVar4;
        if (iVar3 == 2) {
          uVar7 = PVZ_T();
          *(undefined4 *)(this + 0x30) = uVar7;
          if (this[0x34] != (PlantZoybeanPod)0x0) {
            std::string::string(asStack_10,"idle3");
            uVar7 = PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_10);
            *(undefined4 *)(this + 0x2c) = uVar7;
            std::string::~string(asStack_10);
            nop();
          }
          setState(this,0xd);
        }
        else if (iVar3 == 4) {
          uVar7 = PVZ_T();
          *(undefined4 *)(this + 0x30) = uVar7;
          if (this[0x34] != (PlantZoybeanPod)0x0) {
            std::string::string(asStack_10,"idle");
            uVar7 = PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_10);
            *(undefined4 *)(this + 0x2c) = uVar7;
            std::string::~string(asStack_10);
            nop();
          }
          setState(this,0xb);
        }
        else if (iVar3 == 0) goto LAB_0345c994;
      }
      std::string::~string(asStack_18);
      iVar3 = *(int *)(*(long *)(this + 0x10) + 200);
      break;
    case 0xf:
    case 0x11:
      cVar1 = PopAnimRig::IsPlayingAnything(this_00);
      if (cVar1 == '\0') {
        if (this[0x34] != (PlantZoybeanPod)0x0) {
          std::string::string(asStack_10,"idle4");
          uVar7 = PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_10);
          *(undefined4 *)(this + 0x2c) = uVar7;
          std::string::~string(asStack_10);
          nop();
        }
        uVar7 = PVZ_T();
        *(undefined4 *)(this + 0x30) = uVar7;
        setState(this,0x10);
      }
LAB_0345c8f4:
      iVar3 = *(int *)(*(long *)(this + 0x10) + 200);
      goto joined_r0x0345c900;
    }
joined_r0x0345c900:
    bVar2 = iVar5 == iVar3;
    iVar5 = iVar3;
    if (bVar2) {
      if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantZoybeanPod::initializeAnimationTiming() */

void __thiscall PlantZoybeanPod::initializeAnimationTiming(PlantZoybeanPod *this)

{
  PlantAnimRig_ZoybeanPod *this_00;
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (PlantAnimRig_ZoybeanPod *)FUN_0345c55c(*(undefined8 *)(this + 0x10));
  lVar1 = FUN_0345cbbc(*(undefined8 *)(this + 0x10));
  fVar4 = *(float *)(lVar1 + 0x300);
  fVar2 = (float)PlantAnimRig_ZoybeanPod::CalcTransitionTime(this_00);
  *(float *)(this + 0x2c) = (fVar4 - fVar2) * 0.25;
  std::string::string(asStack_10,"transition3");
  fVar2 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this_00,asStack_10);
  *(float *)(this_00 + 0x3c8) = fVar2 * 0.5;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"transition4");
  uVar3 = PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this_00,asStack_10);
  *(undefined4 *)(this_00 + 0x3cc) = uVar3;
  std::string::~string(asStack_10);
  nop();
  this[0x34] = (PlantZoybeanPod)0x0;
  fVar2 = *(float *)(this + 0x2c);
  if (fVar2 <= 0.0) {
    this[0x34] = (PlantZoybeanPod)0x1;
    std::string::string(asStack_10,"idle3");
    fVar2 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this_00,asStack_10);
    *(float *)(this_00 + 0x3c8) = *(float *)(this_00 + 0x3c8) + fVar2;
    std::string::~string(asStack_10);
    nop();
    std::string::string(asStack_10,"idle4");
    fVar2 = (float)PopAnimRig::CalcAnimLengthSeconds((PopAnimRig *)this_00,asStack_10);
    *(float *)(this_00 + 0x3cc) = *(float *)(this_00 + 0x3cc) + fVar2;
    std::string::~string(asStack_10);
    nop();
  }
  else {
    *(float *)(this_00 + 0x3c8) = *(float *)(this_00 + 0x3c8) + fVar2;
    *(float *)(this_00 + 0x3cc) = *(float *)(this_00 + 0x3cc) + fVar2;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantZoybeanPod::Initialize() */

void __thiscall PlantZoybeanPod::Initialize(PlantZoybeanPod *this)

{
  PopAnimRig *this_00;
  long lVar1;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  lVar1 = *(long *)(this + 0x10);
  *(undefined4 *)(lVar1 + 200) = 0;
  this_00 = (PopAnimRig *)FUN_0345c55c(lVar1);
  initializeAnimationTiming(this);
  if (this[0x34] != (PlantZoybeanPod)0x0) {
    std::string::string(asStack_10,"idle");
    uVar2 = PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_10);
    *(undefined4 *)(this + 0x2c) = uVar2;
    std::string::~string(asStack_10);
    nop();
  }
  uVar2 = PVZ_T();
  *(undefined4 *)(this + 0x30) = uVar2;
  setState(this,0xb);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this_00 + 0x3c0),(RtWeakPtrBase *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantZoybeanPod::UpdatePowerUpStats() */

void __thiscall PlantZoybeanPod::UpdatePowerUpStats(PlantZoybeanPod *this)

{
  long lVar1;
  PopAnimRig *this_00;
  char *__s;
  undefined4 uVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0345c55c(*(undefined8 *)(this + 0x10));
  if (lVar1 != 0) {
    initializeAnimationTiming(this);
    this_00 = (PopAnimRig *)FUN_0345c55c(*(undefined8 *)(this + 0x10));
    if (this[0x34] != (PlantZoybeanPod)0x0) {
      switch(*(undefined4 *)(*(long *)(this + 0x10) + 200)) {
      case 0xb:
        __s = "idle";
        break;
      case 0xc:
        __s = "idle2";
        break;
      case 0xd:
        __s = "idle3";
        break;
      default:
        goto switchD_0345cf3c_caseD_e;
      case 0x10:
        __s = "idle4";
      }
      std::string::string(asStack_10,__s);
      uVar2 = PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_10);
      *(undefined4 *)(this + 0x2c) = uVar2;
      std::string::~string(asStack_10);
      nop();
    }
  }
switchD_0345cf3c_caseD_e:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantZoybeanPod::AutoFire() */

void __thiscall PlantZoybeanPod::AutoFire(PlantZoybeanPod *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  
  FUN_0345cbbc(*(undefined8 *)(this + 0x10));
  lVar3 = *(long *)(this + 0x10);
  fVar4 = (float)PVZ_T();
  uVar2 = *(undefined8 *)(this + 0x10);
  *(float *)(lVar3 + 300) = fVar4 + 0.5;
  this[0x35] = (PlantZoybeanPod)0x1;
  uVar1 = FUN_0345a750(uVar2);
  switch(uVar1) {
  case 0:
  case 1:
    *(undefined4 *)(this + 0x28) = 0;
    return;
  case 2:
    *(undefined4 *)(this + 0x28) = 1;
    return;
  case 3:
    *(undefined4 *)(this + 0x28) = 2;
    return;
  default:
    *(undefined4 *)(this + 0x28) = 3;
    return;
  case 5:
    *(undefined4 *)(this + 0x28) = 4;
    return;
  }
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantZoybeanPod::spawnZombie(std::string, int) */

void __thiscall
PlantZoybeanPod::spawnZombie(PlantZoybeanPod *this,string *param_2,undefined4 param_3)

{
  bool bVar1;
  string *psVar2;
  float *pfVar3;
  Zombie *this_00;
  ZombieZoybeanPodGatlingPea *pZVar4;
  char *__s;
  long *plVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  PopAnimRig *local_58;
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_40 [16];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_29;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar2 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<ZombieType>>::GetInstancePtr();
  ObjectTypeDirectory<ZombieType>::GetTypeFromTypeName(psVar2);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(*(_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                    **)(this + 0x10));
  fVar9 = *pfVar3;
  fVar8 = pfVar3[1];
  fVar7 = pfVar3[2];
  Board::SpawnZombieParams::SpawnZombieParams((SpawnZombieParams *)&local_30);
  local_2c = 0;
  local_2b = 1;
  local_29 = 1;
  plVar5 = *(long **)(gLawnApp + 0x9f0);
  pcVar6 = *(code **)(*plVar5 + 0x318);
  local_30 = param_3;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_40,(RtWeakPtrBase *)aRStack_48);
  this_00 = (Zombie *)
            (*pcVar6)(plVar5,aRStack_40,0xfffffffb,(RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_40);
  bVar1 = std::operator==(param_2,"zoybeanpod_armor1");
  if (bVar1) {
    local_58 = (PopAnimRig *)Zombie::GetAnimRig(this_00);
    __s = "zombie_armor_cone_norm";
  }
  else {
    bVar1 = std::operator==(param_2,"zoybeanpod_armor2");
    if (!bVar1) goto LAB_0345e6ac;
    local_58 = (PopAnimRig *)Zombie::GetAnimRig(this_00);
    __s = "zombie_armor_bucket_norm";
  }
  std::string::string((string *)aRStack_40,__s);
  PopAnimRig::SetLayerVisibility(local_58,(string *)aRStack_40,true);
  std::string::~string((string *)aRStack_40);
  nop();
LAB_0345e6ac:
  pcVar6 = *(code **)(*(long *)this_00 + 0x278);
  EATextSquish::Vec3::Vec3((Vec3 *)aRStack_40,fVar9 + 9.0,fVar8 + 10.0,fVar7);
  (*pcVar6)(this_00,aRStack_40);
  RealObject::JoinTeam((RealObject *)this_00,1);
  bVar1 = std::operator==(param_2,"zombie_zoybeanpodgatlingpea");
  if (bVar1) {
    Zombie::SetFacing(this_00,1);
    pZVar4 = Sexy::RtObject::Cast<ZombieZoybeanPodGatlingPea>((RtObject *)this_00);
    if (pZVar4 != (ZombieZoybeanPodGatlingPea *)0x0) {
      ZombieZoybeanPodGatlingPea::SetInstigator((Plant *)pZVar4);
    }
  }
  (**(code **)(*(long *)this_00 + 0x198))(this_00,param_3);
  ValidatePlantData::~ValidatePlantData((ValidatePlantData *)&local_30);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantZoybeanPod::spawnZombieCallback(float) */

void PlantZoybeanPod::spawnZombieCallback(float param_1)

{
  char cVar1;
  undefined4 uVar2;
  long *in_x0;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined4 in_register_00005004;
  undefined8 uVar6;
  undefined8 extraout_d0;
  float fVar7;
  DVec2 aDStack_2728 [8];
  string asStack_2720 [8];
  random_device arStack_2718 [5000];
  mersenne_twister_engine amStack_1390 [5000];
  long local_8;
  
  uVar6 = CONCAT44(in_register_00005004,param_1);
  local_8 = ___stack_chk_guard;
  if ((*(Board **)(gLawnApp + 0x9f0) != (Board *)0x0) &&
     (cVar1 = Board::IsLevelEnded(*(Board **)(gLawnApp + 0x9f0)), uVar6 = extraout_d0, cVar1 != '\0'
     )) goto LAB_0345e810;
  cVar1 = (**(code **)(*in_x0 + 0x180))(uVar6);
  if (cVar1 != '\0') {
    (**(code **)(*in_x0 + 0xa8))();
    goto LAB_0345e810;
  }
  lVar3 = FUN_0345cbbc(in_x0[2]);
  if (*(char *)((long)in_x0 + 0x35) == '\0') {
switchD_0345e890_caseD_3:
    std::string::string(asStack_2720,"default");
    std::random_device::random_device(arStack_2718,asStack_2720);
    std::string::~string(asStack_2720);
    nop();
    uVar2 = std::random_device::operator()(arStack_2718);
    thunk_FUN_0345d478(amStack_1390,uVar2);
    DVec2::DVec2(aDStack_2728,0.0,1.0);
    fVar5 = std::uniform_real_distribution<float>::operator()
                      ((uniform_real_distribution<float> *)aDStack_2728,amStack_1390);
    uVar2 = FUN_0345a750(in_x0[2]);
    switch(uVar2) {
    case 0:
      FUN_05475d88(asStack_2720,lVar3 + 0x2c0);
      spawnZombie();
      std::string::~string(asStack_2720);
      break;
    case 1:
      FUN_05475d88(asStack_2720,lVar3 + 0x2c0);
      spawnZombie();
      std::string::~string(asStack_2720);
      break;
    case 2:
      lVar4 = lVar3 + 0x2c0;
      if (*(float *)(lVar3 + 0x2e8) < fVar5) {
        lVar4 = lVar3 + 0x2c8;
      }
      FUN_05475d88(asStack_2720,lVar4);
      spawnZombie();
      std::string::~string(asStack_2720);
      break;
    case 3:
    case 4:
      if (fVar5 <= *(float *)(lVar3 + 0x2ec)) {
        lVar4 = lVar3 + 0x2c8;
      }
      else {
        lVar4 = lVar3 + 0x2d0;
        if (*(float *)(lVar3 + 0x2ec) + *(float *)(lVar3 + 0x2f0) < fVar5) {
          lVar4 = lVar3 + 0x2c0;
        }
      }
      FUN_05475d88(asStack_2720,lVar4);
      spawnZombie();
      std::string::~string(asStack_2720);
      break;
    case 5:
      if (fVar5 <= *(float *)(lVar3 + 0x2ec)) {
        lVar3 = lVar3 + 0x2c8;
      }
      else {
        fVar7 = *(float *)(lVar3 + 0x2ec) + *(float *)(lVar3 + 0x2f0);
        if (fVar5 <= fVar7) {
          lVar3 = lVar3 + 0x2d0;
        }
        else if (fVar5 <= fVar7 + *(float *)(lVar3 + 0x2f4)) {
          lVar3 = lVar3 + 0x2d8;
        }
        else {
          lVar3 = lVar3 + 0x2c0;
        }
      }
      FUN_05475d88(asStack_2720,lVar3);
      spawnZombie();
      std::string::~string(asStack_2720);
    }
    std::random_device::~random_device(arStack_2718);
  }
  else {
    switch((int)in_x0[5]) {
    case 0:
      FUN_05475d88(asStack_2720,lVar3 + 0x2c0);
      spawnZombie();
      std::string::~string(asStack_2720);
      break;
    case 1:
      FUN_05475d88(asStack_2720,lVar3 + 0x2c8);
      spawnZombie();
      std::string::~string(asStack_2720);
      break;
    case 2:
      FUN_05475d88(asStack_2720,lVar3 + 0x2d0);
      spawnZombie();
      std::string::~string(asStack_2720);
      break;
    default:
      goto switchD_0345e890_caseD_3;
    case 4:
      FUN_05475d88(asStack_2720,lVar3 + 0x2d8);
      spawnZombie();
      std::string::~string(asStack_2720);
    }
  }
LAB_0345e810:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantZoybeanPod::DoSpecial(int) */

void PlantZoybeanPod::DoSpecial(int param_1)

{
  RtMixedPtrBase *this;
  char cVar1;
  undefined4 uVar2;
  PlantZoybeanPod *pPVar3;
  long lVar4;
  PopAnimRig *this_00;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  pPVar3 = (PlantZoybeanPod *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  lVar4 = FUN_0345cbbc(*(undefined8 *)(pPVar3 + 0x10));
  cVar1 = Plant::GetAvatarEnable(*(Plant **)(pPVar3 + 0x10));
  lVar7 = lVar4 + 0x2b8;
  if (cVar1 == '\0') {
    lVar7 = lVar4 + 0x2e0;
  }
  FUN_05475d88(asStack_10,lVar7);
  uVar2 = FUN_0345a750(*(undefined8 *)(pPVar3 + 0x10));
  spawnZombie(pPVar3,asStack_10,uVar2);
  std::string::~string(asStack_10);
  this_00 = (PopAnimRig *)FUN_0345c55c(*(undefined8 *)(pPVar3 + 0x10));
  this = (RtMixedPtrBase *)(this_00 + 0x3d0);
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this);
  if (cVar1 != '\0') {
    plVar6 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this)
    ;
    (**(code **)(*plVar6 + 0x48))();
  }
  Board::AddEffect<Effect_ZoybeanPodSmoke>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)this,(RtWeakPtrBase *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  std::string::string(asStack_18,"transition4");
  fVar8 = (float)PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_18);
  std::string::string(asStack_10,"transition3");
  fVar9 = (float)PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  std::string::~string(asStack_18);
  nop();
  if (pPVar3[0x34] == (PlantZoybeanPod)0x0) {
    fVar10 = *(float *)(pPVar3 + 0x2c);
  }
  else {
    std::string::string(asStack_10,"idle4");
    fVar10 = (float)PopAnimRig::CalcAnimLengthSeconds(this_00,asStack_10);
    std::string::~string(asStack_10);
    nop();
  }
  uVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)asStack_10,(RtWeakPtrBase *)asStack_18);
  Effect_ZoybeanPodSmoke::StartSmoke
            ((Effect_ZoybeanPodSmoke *)((fVar8 - fVar9 * 0.5) + fVar10),uVar5,asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

