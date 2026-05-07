// Class: RenaiWaveProgressMeter


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiWaveProgressMeter::StaticClassInit() */

void RenaiWaveProgressMeter::StaticClassInit(void)

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
    std::string::string(asStack_10,"RenaiWaveProgressMeter");
    (*pcVar2)(plVar1,asStack_10,FUN_0450b0d0,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RenaiWaveProgressMeter::StaticGetClass() */

long * RenaiWaveProgressMeter::StaticGetClass(void)

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
  uVar2 = WaveProgressMeter::StaticGetClass();
  (*pcVar3)(plVar1,"RenaiWaveProgressMeter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* RenaiWaveProgressMeter::GetClass() const */

long * RenaiWaveProgressMeter::GetClass(void)

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
  uVar2 = WaveProgressMeter::StaticGetClass();
  (*pcVar3)(plVar1,"RenaiWaveProgressMeter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiWaveProgressMeter::RenaiWaveProgressMeter() */

void __thiscall RenaiWaveProgressMeter::RenaiWaveProgressMeter(RenaiWaveProgressMeter *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WaveProgressMeter::WaveProgressMeter((WaveProgressMeter *)this);
  *(undefined ***)this = &PTR_GetClass_068574b0;
  *(undefined ***)(this + 0x10) = &PTR__RenaiWaveProgressMeter_06857650;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a0));
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x198) = 1;
  *(undefined4 *)(this + 0x194) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1a0),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RenaiWaveProgressMeter::StaticNew() */

RenaiWaveProgressMeter * RenaiWaveProgressMeter::StaticNew(void)

{
  RenaiWaveProgressMeter *this;
  
  this = ::operator_new(0x1a8);
  RenaiWaveProgressMeter(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiWaveProgressMeter::UpdateMoonSpacing() */

void __thiscall RenaiWaveProgressMeter::UpdateMoonSpacing(RenaiWaveProgressMeter *this)

{
  int iVar1;
  int iVar2;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float local_10;
  float local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f270);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(this_00);
  this_01 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f270);
  SalesProgressBar::GetCurrentLevel(this_01);
  iVar2 = FUN_0450a964(*(undefined4 *)(this + 0x38));
  local_10 = (float)iVar2;
  local_c = (float)iVar1 * 0.6666667;
  pfVar3 = eastl::max_alt<float>(&local_10,&local_c);
  fVar4 = *pfVar3;
  fVar5 = (float)FUN_0450a9f4();
  if (*(int *)(this + 0x198) < 1) {
    fVar4 = (float)(int)fVar4 - fVar5 * 2.0;
  }
  else {
    fVar4 = ((float)(int)fVar4 - fVar5 * 2.0) / (float)*(int *)(this + 0x198);
  }
  *(int *)(this + 400) = (int)fVar4;
  if (local_8 == ___stack_chk_guard) {
    Sexy::OutputDebugStrF
              ((wchar_t *)
               "RenaiWaveProgressMeter::UpdateMoonSpacing m_MoonSpacing = %d m_TotalWaveCount = %d")
    ;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RenaiWaveProgressMeter::setMoonWaveNumber(int) */

void __thiscall RenaiWaveProgressMeter::setMoonWaveNumber(RenaiWaveProgressMeter *this,int param_1)

{
  *(int *)(this + 0x194) = param_1;
  UpdateMoonSpacing(this);
  return;
}


/* RenaiWaveProgressMeter::setTotalWaveCount(int) */

void __thiscall RenaiWaveProgressMeter::setTotalWaveCount(RenaiWaveProgressMeter *this,int param_1)

{
  *(int *)(this + 0x198) = param_1;
  UpdateMoonSpacing(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RenaiWaveProgressMeter::Draw(Sexy::Graphics*) */

void __thiscall RenaiWaveProgressMeter::Draw(RenaiWaveProgressMeter *this,Graphics *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *pLVar5;
  SalesProgressBar *pSVar6;
  float *pfVar7;
  Image *pIVar8;
  float fVar9;
  float fVar10;
  GraphicsAutoState aGStack_30 [8];
  float local_28 [4];
  float local_18 [2];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  WaveProgressMeter::Draw((WaveProgressMeter *)this,param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f270);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  fVar9 = (float)iVar1 * 0.33333334;
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f270);
  iVar1 = SalesProgressBar::GetCurrentLevel(pSVar6);
  iVar2 = FUN_0450a964(*(undefined4 *)(this + 0x38));
  local_18[0] = fVar9 + fVar9;
  local_28[0] = (float)iVar2;
  pfVar7 = eastl::max_alt<float>(local_28,local_18);
  fVar10 = *pfVar7;
  Sexy::Insets::Insets((Insets *)local_28,0,0,(int)fVar9,iVar1);
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f248);
  iVar1 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f248);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar6);
  iVar3 = FUN_0450a9e0(3);
  Sexy::Insets::Insets((Insets *)local_18,(Insets *)local_28);
  local_10 = (int)((float)iVar1 * 0.33333334);
  local_c = iVar2 + iVar3;
  fVar9 = (float)FUN_0450a9f4();
  if (0 < *(int *)(this + 0x194)) {
    pIVar8 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b0f1a8);
    iVar1 = *(int *)(this + 0x194);
    iVar2 = *(int *)(this + 400);
    iVar3 = FUN_0450a9e0(2);
    iVar4 = FUN_0450a9e0(5);
    Sexy::Graphics::DrawImage
              (param_1,pIVar8,
               (int)((((float)(int)fVar10 - fVar9) - (float)(iVar1 * iVar2)) + (float)iVar3),iVar4);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to RenaiWaveProgressMeter::Draw(Sexy::Graphics*) */

void __thiscall RenaiWaveProgressMeter::Draw(RenaiWaveProgressMeter *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* RenaiWaveProgressMeter::registerForEvents() */

void __thiscall RenaiWaveProgressMeter::registerForEvents(RenaiWaveProgressMeter *this)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  WaveProgressMeter::registerForEvents((WaveProgressMeter *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,setMoonWaveNumber);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<RenaiWaveProgressMeter,void(RenaiWaveProgressMeter::*)(int)>>
            ((MessageRouter *)puVar1,Message::SetMoonWaveNum,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,setTotalWaveCount);
  local_40 = local_8;
  local_50 = local_18;
  uStack_48 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<RenaiWaveProgressMeter,void(RenaiWaveProgressMeter::*)(int)>>
            ((MessageRouter *)puVar1,Message::SetTotalWaveCount,&local_50);
  return;
}


/* RenaiWaveProgressMeter::~RenaiWaveProgressMeter() */

void __thiscall RenaiWaveProgressMeter::~RenaiWaveProgressMeter(RenaiWaveProgressMeter *this)

{
  *(undefined ***)this = &PTR_GetClass_068574b0;
  *(undefined ***)(this + 0x10) = &PTR__RenaiWaveProgressMeter_06857650;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
  WaveProgressMeter::~WaveProgressMeter((WaveProgressMeter *)this);
  return;
}


/* non-virtual thunk to RenaiWaveProgressMeter::~RenaiWaveProgressMeter() */

void __thiscall RenaiWaveProgressMeter::~RenaiWaveProgressMeter(RenaiWaveProgressMeter *this)

{
  ~RenaiWaveProgressMeter(this + -0x10);
  return;
}


/* RenaiWaveProgressMeter::~RenaiWaveProgressMeter() */

void __thiscall RenaiWaveProgressMeter::~RenaiWaveProgressMeter(RenaiWaveProgressMeter *this)

{
  ~RenaiWaveProgressMeter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to RenaiWaveProgressMeter::~RenaiWaveProgressMeter() */

void __thiscall RenaiWaveProgressMeter::~RenaiWaveProgressMeter(RenaiWaveProgressMeter *this)

{
  ~RenaiWaveProgressMeter(this + -0x10);
  return;
}

