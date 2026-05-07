// Class: WaveProgressMeter


/* WaveProgressMeter::setFillPercentage(int) */

void __thiscall WaveProgressMeter::setFillPercentage(WaveProgressMeter *this,int param_1)

{
  this[0x168] = SUB41(param_1,0);
  return;
}


/* WaveProgressMeter::onGamePaused() */

void __thiscall WaveProgressMeter::onGamePaused(WaveProgressMeter *this)

{
  (**(code **)(*(long *)this + 0xe8))(this,5);
  return;
}


/* WaveProgressMeter::onGameUnpaused() */

void __thiscall WaveProgressMeter::onGameUnpaused(WaveProgressMeter *this)

{
  (**(code **)(*(long *)this + 0xe8))(this,2);
  return;
}


/* WaveProgressMeter::onNewWaveStarting(int, WaveDefinition const*) */

void WaveProgressMeter::onNewWaveStarting(int param_1,WaveDefinition *param_2)

{
  char cVar1;
  
  cVar1 = UIWidget::IsVisible((UIWidget *)(ulong)(uint)param_1);
  if (cVar1 != '\0') {
    return;
  }
  UIWidget::SetVisible((UIWidget *)(ulong)(uint)param_1,true);
  return;
}


/* WaveProgressMeter::onWaveStart(int, WaveType::WaveType, bool) */

void WaveProgressMeter::onWaveStart(UIWidget *param_1)

{
  char cVar1;
  
  cVar1 = UIWidget::IsVisible(param_1);
  if (cVar1 != '\0') {
    return;
  }
  UIWidget::SetVisible(param_1,true);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveProgressMeter::StaticClassInit() */

void WaveProgressMeter::StaticClassInit(void)

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
    std::string::string(asStack_10,"WaveProgressMeter");
    (*pcVar2)(plVar1,asStack_10,FUN_04509614,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveProgressMeter::StaticGetClass() */

long * WaveProgressMeter::StaticGetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WaveProgressMeter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveProgressMeter::GetClass() const */

long * WaveProgressMeter::GetClass(void)

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
  uVar2 = UIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"WaveProgressMeter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WaveProgressMeter::onSetPercentage(unsigned char) */

void __thiscall WaveProgressMeter::onSetPercentage(WaveProgressMeter *this,uchar param_1)

{
  setFillPercentage(this,(uint)param_1);
  return;
}


/* WaveProgressMeter::setCurrentDisplayPercentage(int) */

void __thiscall WaveProgressMeter::setCurrentDisplayPercentage(WaveProgressMeter *this,int param_1)

{
  *(float *)(this + 0x164) = (float)param_1;
  return;
}


/* WaveProgressMeter::onSetCurrentDisplayPercentage(unsigned char) */

void __thiscall
WaveProgressMeter::onSetCurrentDisplayPercentage(WaveProgressMeter *this,uchar param_1)

{
  setCurrentDisplayPercentage(this,(uint)param_1);
  return;
}


/* WaveProgressMeter::setFlagsTriggered(int) */

void __thiscall WaveProgressMeter::setFlagsTriggered(WaveProgressMeter *this,int param_1)

{
  ulong uVar1;
  WaveProgressMeter WVar2;
  ulong uVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  
  WVar2 = this[0x169];
  if ((uint)(byte)WVar2 != param_1) {
    if ((int)(uint)(byte)WVar2 < param_1) {
      uVar1 = (ulong)(byte)WVar2 + 1;
      uVar3 = uVar1;
      uVar6 = (ulong)(byte)WVar2;
      do {
        uVar5 = uVar3;
        pfVar4 = (float *)FUN_04509054(*(undefined8 *)(this + 0x170),uVar6);
        fVar7 = (float)PVZ_T();
        *pfVar4 = fVar7 + 0.3 +
                  (0.5 / (float)(int)(param_1 - (uint)(byte)WVar2)) *
                  (float)(int)((int)uVar6 - (uint)(byte)this[0x169]);
        uVar3 = uVar5 + 1;
        uVar6 = uVar5;
      } while (uVar5 != uVar1 + (~(uint)(byte)WVar2 + param_1));
    }
    this[0x169] = SUB41(param_1,0);
  }
  return;
}


/* WaveProgressMeter::onFlagWaveTriggered(int) */

void __thiscall WaveProgressMeter::onFlagWaveTriggered(WaveProgressMeter *this,int param_1)

{
  ulong uVar1;
  WaveProgressMeter WVar2;
  ulong uVar3;
  float *pfVar4;
  ulong uVar5;
  ulong uVar6;
  float fVar7;
  
  WVar2 = this[0x169];
  if ((uint)(byte)WVar2 != param_1) {
    if ((int)(uint)(byte)WVar2 < param_1) {
      uVar1 = (ulong)(byte)WVar2 + 1;
      uVar3 = uVar1;
      uVar6 = (ulong)(byte)WVar2;
      do {
        uVar5 = uVar3;
        pfVar4 = (float *)FUN_04509054(*(undefined8 *)(this + 0x170),uVar6);
        fVar7 = (float)PVZ_T();
        *pfVar4 = fVar7 + 0.3 +
                  (0.5 / (float)(int)(param_1 - (uint)(byte)WVar2)) *
                  (float)(int)((int)uVar6 - (uint)(byte)this[0x169]);
        uVar3 = uVar5 + 1;
        uVar6 = uVar5;
      } while (uVar5 != uVar1 + (~(uint)(byte)WVar2 + param_1));
    }
    this[0x169] = SUB41(param_1,0);
  }
  return;
}


/* WaveProgressMeter::updateState_Ready() */

void __thiscall WaveProgressMeter::updateState_Ready(WaveProgressMeter *this)

{
  float *pfVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  
  lVar3 = 0;
  if (this[0x169] != (WaveProgressMeter)0x0) {
    do {
      fVar4 = (float)PVZ_T();
      pfVar1 = (float *)FUN_04509054(*(undefined8 *)(this + 0x170),lVar3);
      if (*pfVar1 <= fVar4) {
        fVar4 = (float)PVZ_EOT();
        *pfVar1 = fVar4;
      }
      iVar2 = (int)lVar3;
      lVar3 = lVar3 + 1;
    } while (iVar2 + 1 < (int)(uint)(byte)this[0x169]);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveProgressMeter::AddToRenderQueue(RenderQueue*) */

void __thiscall WaveProgressMeter::AddToRenderQueue(WaveProgressMeter *this,RenderQueue *param_1)

{
  short sVar1;
  RtObject *this_00;
  UIWidgetSheet *pUVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantImitater::GetImitatedPlant();
  this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_50);
  pUVar2 = Sexy::RtObject::Cast<UIWidgetSheet>(this_00);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
  sVar1 = *(short *)(pUVar2 + 0x5c);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x78);
  Sexy::Delegate1<Sexy::Graphics*>::
  Delegate1<WaveProgressMeter,void(WaveProgressMeter::*)(Sexy::Graphics*)>(aDStack_38,aRStack_50);
  RenderQueue::Add(param_1,sVar1 + 200000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveProgressMeter::registerForEvents() */

void __thiscall WaveProgressMeter::registerForEvents(WaveProgressMeter *this)

{
  undefined *puVar1;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  CBMemberTranslatorX aCStack_e0 [24];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  Delegate0 aDStack_38 [48];
  long local_8;
  
  puVar1 = gMessageRouter;
  local_8 = ___stack_chk_guard;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onWaveStart);
  local_100 = local_c8;
  uStack_f8 = uStack_c0;
  local_f0 = local_b8;
  MessageRouter::
  Subscribe<int,WaveType::WaveType,bool,Sexy::CBMemberTranslatorX<WaveProgressMeter,void(WaveProgressMeter::*)(int,WaveType::WaveType,bool)>>
            ((MessageRouter *)puVar1,Message::WaveStarted,&local_100);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNewWaveStarting);
  local_120 = local_b0;
  uStack_118 = uStack_a8;
  local_110 = local_a0;
  MessageRouter::
  Subscribe<int,WaveDefinition_const*,Sexy::CBMemberTranslatorX<WaveProgressMeter,void(WaveProgressMeter::*)(int,WaveDefinition_const*)>>
            ((MessageRouter *)puVar1,Message::NewWaveStarting,&local_120);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onFlagWaveTriggered);
  local_130 = local_88;
  local_140 = local_98;
  uStack_138 = uStack_90;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<WaveProgressMeter,void(WaveProgressMeter::*)(int)>>
            ((MessageRouter *)puVar1,Message::FlagWaveTriggered,&local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSetPercentage);
  local_160 = local_80;
  uStack_158 = uStack_78;
  local_150 = local_70;
  MessageRouter::
  Subscribe<unsigned_char,Sexy::CBMemberTranslatorX<WaveProgressMeter,void(WaveProgressMeter::*)(unsigned_char)>>
            ((MessageRouter *)puVar1,Message::ProgressMeterSetPercentage,&local_160);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSetCurrentDisplayPercentage);
  local_150 = local_58;
  local_160 = local_68;
  uStack_158 = uStack_60;
  MessageRouter::
  Subscribe<unsigned_char,Sexy::CBMemberTranslatorX<WaveProgressMeter,void(WaveProgressMeter::*)(unsigned_char)>>
            ((MessageRouter *)puVar1,Message::ProgressMeterSetCurrentDisplayPercentage,&local_160);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onSetFlagCount);
  local_140 = local_50;
  uStack_138 = uStack_48;
  local_130 = local_40;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<WaveProgressMeter,void(WaveProgressMeter::*)(int)>>
            ((MessageRouter *)puVar1,Message::ProgressMeterSetFlagCount,&local_140);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGamePaused);
  Sexy::Delegate0::Delegate0<WaveProgressMeter,void(WaveProgressMeter::*)()>(aDStack_38,aCStack_e0);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GamePaused,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onGameUnpaused);
  Sexy::Delegate0::Delegate0<WaveProgressMeter,void(WaveProgressMeter::*)()>(aDStack_38,aCStack_e0);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::GameUnpaused,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveProgressMeter::~WaveProgressMeter() */

void __thiscall WaveProgressMeter::~WaveProgressMeter(WaveProgressMeter *this)

{
  *(undefined ***)this = &PTR_GetClass_068572c0;
  *(undefined ***)(this + 0x10) = &PTR__WaveProgressMeter_06857460;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x188));
  std::vector<float,std::allocator<float>>::~vector
            ((vector<float,std::allocator<float>> *)(this + 0x170));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to WaveProgressMeter::~WaveProgressMeter() */

void __thiscall WaveProgressMeter::~WaveProgressMeter(WaveProgressMeter *this)

{
  ~WaveProgressMeter(this + -0x10);
  return;
}


/* WaveProgressMeter::~WaveProgressMeter() */

void __thiscall WaveProgressMeter::~WaveProgressMeter(WaveProgressMeter *this)

{
  ~WaveProgressMeter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to WaveProgressMeter::~WaveProgressMeter() */

void __thiscall WaveProgressMeter::~WaveProgressMeter(WaveProgressMeter *this)

{
  ~WaveProgressMeter(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveProgressMeter::setFlagCount(int) */

void __thiscall WaveProgressMeter::setFlagCount(WaveProgressMeter *this,int param_1)

{
  int iVar1;
  float fVar2;
  float local_10 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((uint)(byte)this[0x16a] != param_1) {
    std::vector<float,std::allocator<float>>::clear
              ((vector<float,std::allocator<float>> *)(this + 0x170));
    this[0x169] = (WaveProgressMeter)0x0;
    this[0x16a] = SUB41(param_1,0);
    if ((param_1 & 0xffU) != 0) {
      fVar2 = (float)PVZ_EOT();
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        local_10[0] = fVar2;
        std::vector<float,std::allocator<float>>::push_back
                  ((vector<float,std::allocator<float>> *)(this + 0x170),local_10);
      } while (iVar1 < (int)(uint)(byte)this[0x16a]);
    }
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)local_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x188),(RtWeakPtr *)local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_10);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveProgressMeter::WaveProgressMeter() */

void __thiscall WaveProgressMeter::WaveProgressMeter(WaveProgressMeter *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_068572c0;
  *(undefined ***)(this + 0x10) = &PTR__WaveProgressMeter_06857460;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x170));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x188));
  this[0x168] = (WaveProgressMeter)0x0;
  this[0x16b] = (WaveProgressMeter)0x1;
  this[0x169] = (WaveProgressMeter)0x0;
  this[0x16a] = (WaveProgressMeter)0x0;
  *(undefined4 *)(this + 0x164) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x188),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::vector<float,std::allocator<float>>::clear
            ((vector<float,std::allocator<float>> *)(this + 0x170));
  setFlagCount(this,1);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WaveProgressMeter::StaticNew() */

WaveProgressMeter * WaveProgressMeter::StaticNew(void)

{
  WaveProgressMeter *this;
  
  this = ::operator_new(400);
  WaveProgressMeter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveProgressMeter::onSetFlagCount(int) */

void __thiscall WaveProgressMeter::onSetFlagCount(WaveProgressMeter *this,int param_1)

{
  int iVar1;
  float fVar2;
  float afStack_10 [2];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if ((uint)(byte)this[0x16a] != param_1) {
    std::vector<float,std::allocator<float>>::clear
              ((vector<float,std::allocator<float>> *)(this + 0x170));
    this[0x169] = (WaveProgressMeter)0x0;
    this[0x16a] = SUB41(param_1,0);
    if ((param_1 & 0xffU) != 0) {
      fVar2 = (float)PVZ_EOT();
      iVar1 = 0;
      do {
        iVar1 = iVar1 + 1;
        afStack_10[0] = fVar2;
        std::vector<float,std::allocator<float>>::push_back
                  ((vector<float,std::allocator<float>> *)(this + 0x170),afStack_10);
      } while (iVar1 < (int)(uint)(byte)this[0x16a]);
    }
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)afStack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x188),(RtWeakPtr *)afStack_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)afStack_10);
  }
  if (lStack_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WaveProgressMeter::Draw(Sexy::Graphics*) */

void __thiscall WaveProgressMeter::Draw(WaveProgressMeter *this,Graphics *param_1)

{
  RtMixedPtr<Sexy::Image> *this_00;
  uint uVar1;
  WaveProgressMeter WVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  LotteryResultProgressBar *pLVar8;
  SalesProgressBar *pSVar9;
  float *pfVar10;
  Image *pIVar11;
  ResourceInfo *pRVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  GraphicsAutoState aGStack_60 [8];
  int local_58 [4];
  Insets aIStack_48 [8];
  int local_40;
  int local_3c;
  Insets aIStack_38 [16];
  float local_28 [4];
  float local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_60,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  lVar7 = Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
  if (lVar7 != 0) {
    lVar7 = Board::GetWaveManager(*(Board **)(gLawnApp + 0x9f0));
    cVar3 = FUN_0450903c(*(undefined4 *)(lVar7 + 0x13e4));
    if (cVar3 != '\0') goto LAB_0450a398;
  }
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f140);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  fVar24 = (float)iVar4 * 0.33333334;
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f140);
  iVar5 = SalesProgressBar::GetCurrentLevel(pSVar9);
  iVar4 = FUN_04508fc4(*(undefined4 *)(this + 0x38));
  iVar14 = (int)fVar24;
  local_28[0] = (float)iVar4;
  local_18[0] = fVar24 + fVar24;
  pfVar10 = eastl::max_alt<float>(local_28,local_18);
  fVar17 = *pfVar10;
  fVar25 = (float)(int)fVar17;
  iVar15 = (int)(fVar25 - (fVar24 + fVar24));
  Sexy::Insets::Insets((Insets *)local_58,0,0,iVar14,iVar5);
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f118);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  fVar26 = (float)iVar4 * 0.33333334;
  pSVar9 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f118);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar9);
  iVar6 = FUN_04509340(3);
  iVar4 = iVar4 + iVar6;
  Sexy::Insets::Insets(aIStack_48,(Insets *)local_58);
  local_40 = (int)fVar26;
  local_3c = iVar4;
  fVar18 = (float)FUN_04509354(0x40e00000);
  fVar19 = (float)FUN_04509354(0x3fc00000);
  fVar20 = (float)FUN_04509354(0x40a00000);
  fVar21 = (float)PVZ_Dt();
  fVar22 = (float)FUN_0450932c();
  local_28[0] = (float)(byte)this[0x168];
  *(float *)(this + 0x164) = *(float *)(this + 0x164) + fVar21 * fVar22;
  local_18[0] = 100.0;
  pfVar10 = eastl::min_alt<float>((float *)(this + 0x164),local_28);
  pfVar10 = eastl::min_alt<float>(local_18,pfVar10);
  fVar21 = *pfVar10;
  fVar22 = fVar25 - fVar20 * 2.0;
  *(float *)(this + 0x164) = fVar21;
  local_28[0] = fVar21 * 0.01 * fVar22 - (fVar26 + fVar26);
  local_18[0] = 0.0;
  pfVar10 = eastl::max_alt<float>(local_28,local_18);
  fVar21 = *pfVar10;
  Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)local_18,param_1);
  Sexy::Graphics::ClipRect
            (param_1,(int)((fVar20 - fVar21) + fVar22),(int)(fVar18 - fVar19),(int)fVar22,iVar4);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f118);
  Sexy::Graphics::DrawImage(param_1,pIVar11,(int)fVar20,(int)(fVar18 - fVar19),(int)fVar22,iVar4);
  Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)local_18);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f140);
  Sexy::Graphics::DrawImage(param_1,pIVar11,0,0,(TRect *)local_58);
  if (0 < iVar15) {
    local_58[0] = iVar14;
    Sexy::Insets::Insets((Insets *)local_18,iVar14,0,iVar15,iVar5);
    pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f140);
    Sexy::Graphics::DrawImage(param_1,pIVar11,(TRect *)local_18,(TRect *)local_58);
  }
  pLVar8 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f140);
  iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
  local_58[0] = (int)((float)iVar4 - fVar24);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f140);
  Sexy::Graphics::DrawImage(param_1,pIVar11,(int)((float)iVar15 + fVar24),0,(TRect *)local_58);
  if (this[0x16a] == (WaveProgressMeter)0x0) {
LAB_0450a6ac:
    WVar2 = this[0x16b];
  }
  else {
    this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x188);
    cVar3 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
    if (cVar3 != '\0') {
      lVar7 = Board::GetLevelDefinition(*(Board **)(gLawnApp + 0x9f0));
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                        ((RtWeakPtr<Sexy::ResourceInfo> *)(lVar7 + 0x68));
      GetResourceId<Sexy::Image>((string *)(lVar7 + 0x108),*(int *)(gLawnApp + 0xd8));
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)local_18,(RtWeakPtrBase *)local_28);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)this_00,(RtWeakPtr *)local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
      Sexy::RtId::~RtId((RtId *)local_28);
    }
    uVar13 = (uint)(fVar22 / (float)(byte)this[0x16a]);
    if (this[0x16a] == (WaveProgressMeter)0x0) goto LAB_0450a6ac;
    uVar16 = 0;
    uVar1 = uVar13;
    do {
      iVar4 = 0;
      if (uVar16 < (byte)this[0x169]) {
        pfVar10 = (float *)FUN_04509054(*(undefined8 *)(this + 0x170),uVar16);
        fVar19 = *pfVar10;
        fVar18 = (float)PVZ_EOT();
        if (fVar19 < fVar18) {
          uVar23 = PVZ_T();
          local_28[0] = 0.0;
          local_18[0] = (float)FUN_04509340(0xfffffff4);
          iVar4 = CurveLerp<int>(fVar19 - 0.3,fVar19,uVar23,(Insets *)local_28,
                                 (GraphicsAutoState *)local_18,3);
        }
        else {
          iVar4 = FUN_04509340(0xfffffff4);
        }
      }
      uVar16 = uVar16 + 1;
      Sexy::Insets::Insets(aIStack_38,0,-0xf,(int)fVar17,0x28);
      Sexy::Insets::Insets((Insets *)local_28,aIStack_38);
      FUN_045094b4((GraphicsAutoState *)local_18,(Insets *)local_28);
      Sexy::Graphics::SetClipRect(param_1,(TRect *)local_18);
      pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f078);
      fVar18 = (fVar25 - fVar20) - (float)uVar1;
      uVar1 = uVar1 + uVar13;
      iVar5 = FUN_04509340(2);
      iVar6 = FUN_04509340(5);
      Sexy::Graphics::DrawImage(param_1,pIVar11,(int)((float)iVar5 + fVar18),iVar6 + iVar4);
      Sexy::Graphics::ClearClipRect(param_1);
      pRVar12 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)this_00);
      iVar5 = FUN_04509340(4);
      iVar6 = FUN_04509340(5);
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar12,(int)((float)iVar5 + fVar18),iVar6 + iVar4)
      ;
    } while (uVar16 < (byte)this[0x16a]);
    WVar2 = this[0x16b];
  }
  if (WVar2 != (WaveProgressMeter)0x0) {
    pLVar8 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f0b0);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar8);
    iVar5 = FUN_04509340(0);
    iVar6 = FUN_04509340(0xfffffffc);
    pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f0b0);
    Sexy::Graphics::DrawImageF
              (param_1,pIVar11,
               ((((fVar25 - fVar20) - fVar21) - fVar26) + (float)iVar5) - (float)(iVar4 / 2),
               (float)iVar6);
  }
LAB_0450a398:
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_60);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to WaveProgressMeter::Draw(Sexy::Graphics*) */

void __thiscall WaveProgressMeter::Draw(WaveProgressMeter *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

