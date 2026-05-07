// Class: AdaptorJoustPlayMeterHUD


/* AdaptorJoustPlayMeterHUD::~AdaptorJoustPlayMeterHUD() */

void __thiscall AdaptorJoustPlayMeterHUD::~AdaptorJoustPlayMeterHUD(AdaptorJoustPlayMeterHUD *this)

{
  *(undefined ***)this = &PTR_GetClass_066abc20;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066abf80;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066abfc8;
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* AdaptorJoustPlayMeterHUD::~AdaptorJoustPlayMeterHUD() */

void __thiscall AdaptorJoustPlayMeterHUD::~AdaptorJoustPlayMeterHUD(AdaptorJoustPlayMeterHUD *this)

{
  ~AdaptorJoustPlayMeterHUD(this);
  AK::FreeHook(this);
  return;
}


/* AdaptorJoustPlayMeterHUD::AdaptorJoustPlayMeterHUD() */

void __thiscall AdaptorJoustPlayMeterHUD::AdaptorJoustPlayMeterHUD(AdaptorJoustPlayMeterHUD *this)

{
  undefined4 uVar1;
  
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined ***)this = &PTR_GetClass_066abc20;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_066abf80;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_066abfc8;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0x3f000000;
  *(undefined4 *)(this + 300) = 0x3f000000;
  *(undefined4 *)(this + 0x130) = 0x3f000000;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x140) = 4;
  *(undefined4 *)(this + 0x134) = uVar1;
  *(undefined4 *)(this + 0x138) = uVar1;
  *(undefined4 *)(this + 0x13c) = 0x40400000;
  return;
}


/* AdaptorJoustPlayMeterHUD::StaticNew() */

AdaptorJoustPlayMeterHUD * AdaptorJoustPlayMeterHUD::StaticNew(void)

{
  AdaptorJoustPlayMeterHUD *this;
  
  this = ::operator_new(0x148);
  AdaptorJoustPlayMeterHUD(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustPlayMeterHUD::StaticClassInit() */

void AdaptorJoustPlayMeterHUD::StaticClassInit(void)

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
    std::string::string(asStack_10,"AdaptorJoustPlayMeterHUD");
    (*pcVar2)(plVar1,asStack_10,FUN_03867b64,0x148,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustPlayMeterHUD::StaticGetClass() */

long * AdaptorJoustPlayMeterHUD::StaticGetClass(void)

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
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorJoustPlayMeterHUD",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustPlayMeterHUD::GetClass() const */

long * AdaptorJoustPlayMeterHUD::GetClass(void)

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
  uVar2 = HotUIAdaptor::StaticGetClass();
  (*pcVar3)(plVar1,"AdaptorJoustPlayMeterHUD",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AdaptorJoustPlayMeterHUD::SetLerpCurveType(CurveType) */

void __thiscall
AdaptorJoustPlayMeterHUD::SetLerpCurveType(AdaptorJoustPlayMeterHUD *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x140) = param_2;
  return;
}


/* AdaptorJoustPlayMeterHUD::SetScoreLerpDelay(float) */

void __thiscall
AdaptorJoustPlayMeterHUD::SetScoreLerpDelay(AdaptorJoustPlayMeterHUD *this,float param_1)

{
  *(float *)(this + 0x13c) = param_1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustPlayMeterHUD::SetTimerVisible(bool) */

void __thiscall
AdaptorJoustPlayMeterHUD::SetTimerVisible(AdaptorJoustPlayMeterHUD *this,bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"TimerRoot");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustPlayMeterHUD::SetAvatarsVisible(bool) */

void __thiscall
AdaptorJoustPlayMeterHUD::SetAvatarsVisible(AdaptorJoustPlayMeterHUD *this,bool param_1)

{
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"LeftAvatarIcon");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"RightAvatarIcon");
  HotUIAdaptor::setWidgetVisibility((HotUIAdaptor *)this,asStack_10,param_1);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustPlayMeterHUD::SetAvatarIndices(int, int) */

void __thiscall
AdaptorJoustPlayMeterHUD::SetAvatarIndices(AdaptorJoustPlayMeterHUD *this,int param_1,int param_2)

{
  int extraout_w1;
  int extraout_w1_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"LeftAvatarIcon");
  JoustUtils::AvatarGetImagePtr((JoustUtils *)(ulong)(uint)param_1,extraout_w1);
  HotUIAdaptor::setImageWidgetImage((HotUIAdaptor *)this,asStack_10,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"RightAvatarIcon");
  JoustUtils::AvatarGetImagePtr((JoustUtils *)(ulong)(uint)param_2,extraout_w1_00);
  HotUIAdaptor::setImageWidgetImage((HotUIAdaptor *)this,asStack_10,aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustPlayMeterHUD::setScoreLerpTarget(float) */

void __thiscall
AdaptorJoustPlayMeterHUD::setScoreLerpTarget(AdaptorJoustPlayMeterHUD *this,float param_1)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  
  *(float *)(this + 300) = param_1;
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(this + 0x130);
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x134) = uVar1;
  fVar2 = (float)PVZ_T();
  fVar3 = (float)FUN_03867920(*(undefined4 *)(this + 0x13c));
  *(float *)(this + 0x138) = fVar3 + fVar2;
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x038682b0 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* AdaptorJoustPlayMeterHUD::updateScoreLerpTarget() */

void AdaptorJoustPlayMeterHUD::updateScoreLerpTarget(void)

{
  undefined1 auVar1 [16];
  AdaptorJoustPlayMeterHUD *in_x0;
  undefined4 in_s0;
  undefined1 in_register_00005004 [12];
  float fVar2;
  float fVar3;
  undefined4 local_10;
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(in_x0 + 0x120) != 0) {
    fVar3 = (float)*(int *)(in_x0 + 0x120) /
            (float)(*(int *)(in_x0 + 0x120) + *(int *)(in_x0 + 0x124));
    local_10 = 0;
    local_c = 0x3eb33333;
    fVar2 = ABS(0.5 - fVar3);
    auVar1._4_12_ = in_register_00005004;
    auVar1._0_4_ = in_s0;
    fVar2 = CurveLerp<float>(auVar1,0x3f000000,fVar2 + fVar2,&local_10,&local_c,3);
    if (0.5 < fVar3) {
      setScoreLerpTarget(in_x0,fVar2 + 0.5);
    }
    else {
      setScoreLerpTarget(in_x0,0.5 - fVar2);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustPlayMeterHUD::SetLeftScoreTarget(int) */

void __thiscall
AdaptorJoustPlayMeterHUD::SetLeftScoreTarget(AdaptorJoustPlayMeterHUD *this,int param_1)

{
  *(int *)(this + 0x120) = param_1;
  updateScoreLerpTarget();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustPlayMeterHUD::SetLeftScoreText(int) */

void __thiscall
AdaptorJoustPlayMeterHUD::SetLeftScoreText(AdaptorJoustPlayMeterHUD *this,int param_1)

{
  HotUISeedPacketList *pHVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"LabelScoreLeft");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)pHVar1 + 0x360);
  Sexy::CommaSeparate(param_1);
  (*pcVar2)(pHVar1,asStack_10);
  FUN_05476c50(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustPlayMeterHUD::SetLeftScore(int) */

void __thiscall AdaptorJoustPlayMeterHUD::SetLeftScore(AdaptorJoustPlayMeterHUD *this,int param_1)

{
  SetLeftScoreTarget(this,param_1);
  SetLeftScoreText(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustPlayMeterHUD::SetTimer(int) */

void __thiscall AdaptorJoustPlayMeterHUD::SetTimer(AdaptorJoustPlayMeterHUD *this,int param_1)

{
  HotUISeedPacketList *pHVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"TimerLabel");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)pHVar1 + 0x360);
  Sexy::StrFormat(L"%d:%.2d",asStack_10,(ulong)(uint)(param_1 / 0x3c),(ulong)(uint)(param_1 % 0x3c))
  ;
  (*pcVar2)(pHVar1,asStack_10);
  FUN_05476c50(asStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustPlayMeterHUD::SetRightScore(int) */

void __thiscall AdaptorJoustPlayMeterHUD::SetRightScore(AdaptorJoustPlayMeterHUD *this,int param_1)

{
  HotUISeedPacketList *pHVar1;
  code *pcVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x124) = param_1;
  std::string::string(asStack_10,"LabelScoreRight");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_10);
  std::string::~string(asStack_10);
  nop();
  pcVar2 = *(code **)(*(long *)pHVar1 + 0x360);
  Sexy::CommaSeparate(param_1);
  (*pcVar2)(pHVar1,asStack_10);
  FUN_05476c50(asStack_10);
  updateScoreLerpTarget();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustPlayMeterHUD::updateUIScoreCenter(float) */

void __thiscall
AdaptorJoustPlayMeterHUD::updateUIScoreCenter(AdaptorJoustPlayMeterHUD *this,float param_1)

{
  int iVar1;
  HotUISeedPacketList *pHVar2;
  float fVar3;
  float fVar4;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *(float *)(this + 0x130) = param_1;
  iVar1 = FUN_0386797c(0x194);
  fVar4 = (float)iVar1;
  std::string::string(asStack_18,"BackgroundImageLeft");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_18);
  std::string::~string(asStack_18);
  nop();
  *(int *)(pHVar2 + 0x50) = (int)(fVar4 * param_1);
  std::string::string(asStack_18,"BackgroundImageRight");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_18);
  std::string::~string(asStack_18);
  nop();
  fVar3 = fVar4 * (1.0 - param_1);
  *(int *)(pHVar2 + 0x48) = (int)-fVar3;
  iVar1 = FUN_0386797c(3);
  *(int *)(pHVar2 + 0x50) = (int)(fVar3 + (float)iVar1);
  std::string::string(asStack_18,"GauntletScoreOffset");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_18);
  std::string::~string(asStack_18);
  nop();
  *(int *)(pHVar2 + 0x48) = (int)(fVar4 * (param_1 + -0.5));
  std::string::string(asStack_18,"PoleImageLeft");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_18);
  std::string::~string(asStack_18);
  nop();
  pHVar2[0x59] = (HotUISeedPacketList)0x1;
  Sexy::Insets::Insets((Insets *)asStack_18,0,0,(int)(fVar4 * param_1),*(int *)(pHVar2 + 0x54));
  HotUIImage::SetOverrideClipRect((HotUIImage *)pHVar2,(TRect *)asStack_18);
  std::string::string(asStack_18,"PoleImageRight");
  pHVar2 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(*(HotUIFile **)(this + 0xf8),asStack_18);
  std::string::~string(asStack_18);
  nop();
  pHVar2[0x59] = (HotUISeedPacketList)0x1;
  Sexy::Insets::Insets
            ((Insets *)asStack_18,(int)(fVar4 - fVar3),0,(int)fVar4,*(int *)(pHVar2 + 0x54));
  HotUIImage::SetOverrideClipRect((HotUIImage *)pHVar2,(TRect *)asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AdaptorJoustPlayMeterHUD::onLinkToUIViewCreated() */

void __thiscall AdaptorJoustPlayMeterHUD::onLinkToUIViewCreated(AdaptorJoustPlayMeterHUD *this)

{
  updateUIScoreCenter(this,0.5);
  return;
}


/* AdaptorJoustPlayMeterHUD::SnapScoresToCurrentValues() */

void __thiscall AdaptorJoustPlayMeterHUD::SnapScoresToCurrentValues(AdaptorJoustPlayMeterHUD *this)

{
  undefined4 uVar1;
  
  *(float *)(this + 0x128) = *(float *)(this + 300);
  updateUIScoreCenter(this,*(float *)(this + 300));
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x134) = uVar1;
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x138) = uVar1;
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03868854 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* AdaptorJoustPlayMeterHUD::updateScoreLerp() */

void __thiscall AdaptorJoustPlayMeterHUD::updateScoreLerp(AdaptorJoustPlayMeterHUD *this)

{
  float fVar1;
  undefined1 auVar2 [16];
  
  fVar1 = (float)PVZ_EOT();
  if (*(float *)(this + 0x138) == fVar1) {
    return;
  }
  auVar2 = PVZ_T();
  if (auVar2._0_4_ <= *(float *)(this + 0x138)) {
    fVar1 = CurveLerp<float>(auVar2,*(float *)(this + 0x138),auVar2._0_4_,this + 0x128,this + 300,
                             *(undefined4 *)(this + 0x140));
    updateUIScoreCenter(this,fVar1);
    return;
  }
  updateUIScoreCenter(this,*(float *)(this + 300));
  *(float *)(this + 0x138) = fVar1;
  return;
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03868854 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* AdaptorJoustPlayMeterHUD::Update() */

void __thiscall AdaptorJoustPlayMeterHUD::Update(AdaptorJoustPlayMeterHUD *this)

{
  float fVar1;
  undefined1 auVar2 [16];
  
  fVar1 = (float)PVZ_EOT();
  if (*(float *)(this + 0x138) == fVar1) {
    return;
  }
  auVar2 = PVZ_T();
  if (auVar2._0_4_ <= *(float *)(this + 0x138)) {
    fVar1 = CurveLerp<float>(auVar2,*(float *)(this + 0x138),auVar2._0_4_,this + 0x128,this + 300,
                             *(undefined4 *)(this + 0x140));
    updateUIScoreCenter(this,fVar1);
    return;
  }
  updateUIScoreCenter(this,*(float *)(this + 300));
  *(float *)(this + 0x138) = fVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AdaptorJoustPlayMeterHUD::onLoadUIView() */

void __thiscall AdaptorJoustPlayMeterHUD::onLoadUIView(AdaptorJoustPlayMeterHUD *this)

{
  long lVar1;
  HotUIManager *this_00;
  HotUIFile *pHVar2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  lVar1 = FUN_0386791c(*(undefined8 *)(this + 0xf8));
  if (lVar1 == 0) {
    std::
    map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
    ::map(amStack_38);
    this_00 = (HotUIManager *)Sexy::LazySingleton<HotUIManager>::GetInstance();
    std::string::string(asStack_40,"JoustPlayMeter");
    pHVar2 = (HotUIFile *)HotUIManager::LoadUIFile(this_00,asStack_40,(map *)amStack_38);
    std::string::~string(asStack_40);
    nop();
    HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar2);
    std::
    map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
    ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            *)amStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

