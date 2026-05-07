// Class: AirshipProgressMeter


/* AirshipProgressMeter::onAirshipSetPercentage(float) */

void __thiscall
AirshipProgressMeter::onAirshipSetPercentage(AirshipProgressMeter *this,float param_1)

{
  *(float *)(this + 0x164) = param_1;
  return;
}


/* AirshipProgressMeter::~AirshipProgressMeter() */

void __thiscall AirshipProgressMeter::~AirshipProgressMeter(AirshipProgressMeter *this)

{
  *(undefined ***)this = &PTR_GetClass_068ccac0;
  *(undefined ***)(this + 0x10) = &PTR__AirshipProgressMeter_068ccc60;
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to AirshipProgressMeter::~AirshipProgressMeter() */

void __thiscall AirshipProgressMeter::~AirshipProgressMeter(AirshipProgressMeter *this)

{
  ~AirshipProgressMeter(this + -0x10);
  return;
}


/* AirshipProgressMeter::~AirshipProgressMeter() */

void __thiscall AirshipProgressMeter::~AirshipProgressMeter(AirshipProgressMeter *this)

{
  ~AirshipProgressMeter(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AirshipProgressMeter::~AirshipProgressMeter() */

void __thiscall AirshipProgressMeter::~AirshipProgressMeter(AirshipProgressMeter *this)

{
  ~AirshipProgressMeter(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirshipProgressMeter::StaticClassInit() */

void AirshipProgressMeter::StaticClassInit(void)

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
    std::string::string(asStack_10,"AirshipProgressMeter");
    (*pcVar2)(plVar1,asStack_10,FUN_0475aa58,0x170,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AirshipProgressMeter::StaticGetClass() */

long * AirshipProgressMeter::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"AirshipProgressMeter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AirshipProgressMeter::GetClass() const */

long * AirshipProgressMeter::GetClass(void)

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
  (*pcVar3)(plVar1,"AirshipProgressMeter",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AirshipProgressMeter::AirshipProgressMeter() */

void __thiscall AirshipProgressMeter::AirshipProgressMeter(AirshipProgressMeter *this)

{
  undefined4 uVar1;
  
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_068ccac0;
  *(undefined ***)(this + 0x10) = &PTR__AirshipProgressMeter_068ccc60;
  uVar1 = PVZ_EOT();
  this[0x16c] = (AirshipProgressMeter)0x0;
  *(undefined4 *)(this + 0x168) = uVar1;
  *(undefined4 *)(this + 0x164) = 0x42c80000;
  return;
}


/* AirshipProgressMeter::StaticNew() */

AirshipProgressMeter * AirshipProgressMeter::StaticNew(void)

{
  AirshipProgressMeter *this;
  
  this = ::operator_new(0x170);
  AirshipProgressMeter(this);
  return this;
}


/* AirshipProgressMeter::FlashDamage() */

void __thiscall AirshipProgressMeter::FlashDamage(AirshipProgressMeter *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x168) = uVar1;
  return;
}


/* AirshipProgressMeter::onAirshipTakeDamage(float) */

void AirshipProgressMeter::onAirshipTakeDamage(float param_1)

{
  long in_x0;
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(in_x0 + 0x168) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirshipProgressMeter::AddToRenderQueue(RenderQueue*) */

void __thiscall
AirshipProgressMeter::AddToRenderQueue(AirshipProgressMeter *this,RenderQueue *param_1)

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
  Delegate1<AirshipProgressMeter,void(AirshipProgressMeter::*)(Sexy::Graphics*)>
            (aDStack_38,aRStack_50);
  RenderQueue::Add(param_1,sVar1 + 200000,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AirshipProgressMeter::registerForEvents() */

void __thiscall AirshipProgressMeter::registerForEvents(AirshipProgressMeter *this)

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
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAirshipTakeDamage);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<float,Sexy::CBMemberTranslatorX<AirshipProgressMeter,void(AirshipProgressMeter::*)(float)>>
            ((MessageRouter *)puVar1,Message::AirshipTakeDamage,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onAirshipSetPercentage);
  local_40 = local_8;
  local_50 = local_18;
  uStack_48 = uStack_10;
  MessageRouter::
  Subscribe<float,Sexy::CBMemberTranslatorX<AirshipProgressMeter,void(AirshipProgressMeter::*)(float)>>
            ((MessageRouter *)puVar1,Message::AirshipSetPercentage,&local_50);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AirshipProgressMeter::Draw(Sexy::Graphics*) */

void __thiscall AirshipProgressMeter::Draw(AirshipProgressMeter *this,Graphics *param_1)

{
  AirshipProgressMeter AVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LotteryResultProgressBar *pLVar7;
  SalesProgressBar *pSVar8;
  int *piVar9;
  undefined8 uVar10;
  Image *pIVar11;
  float *pfVar12;
  CachedUIResourcePtr<Sexy::Image> *pCVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  double dVar19;
  float fVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float local_c4;
  GraphicsAutoState aGStack_c0 [8];
  Insets aIStack_b8 [16];
  Insets aIStack_a8 [8];
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88 [2];
  int local_80;
  int local_78 [2];
  int local_70;
  int local_68 [2];
  undefined4 local_60;
  Insets aIStack_58 [16];
  Insets aIStack_48 [8];
  int local_40;
  undefined4 local_3c;
  float local_38 [4];
  float local_28 [4];
  float local_18 [2];
  int local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_c0,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  fVar20 = *(float *)(this + 0x168);
  fVar14 = (float)PVZ_EOT();
  if (fVar20 < fVar14) {
    uVar18 = PVZ_T();
    local_18[0] = 0.0;
    local_28[0] = 1.0;
    fVar14 = CurveLerp<float>(fVar20,fVar20 + 0.25,uVar18,local_28,local_18,3);
  }
  else {
    fVar14 = 0.0;
  }
  if (this[0x16c] == (AirshipProgressMeter)0x0) {
    pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b233b8;
  }
  else {
    pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b23410;
  }
  pLVar7 = (LotteryResultProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar13);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  pSVar8 = (SalesProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar13);
  iVar4 = SalesProgressBar::GetCurrentLevel(pSVar8);
  local_28[0] = (float)FUN_0475a7c4(*(undefined4 *)(this + 0x38));
  local_18[0] = (float)((int)((float)iVar3 * 0.33333334) << 1);
  piVar9 = eastl::max_alt<int>((int *)local_28,(int *)local_18);
  iVar21 = *piVar9;
  Sexy::Insets::Insets(aIStack_b8,0,0,(int)((float)iVar3 * 0.33333334),iVar4);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b23528);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b23528);
  iVar3 = SalesProgressBar::GetCurrentLevel(pSVar8);
  iVar6 = FUN_0475a900(3);
  iVar3 = iVar3 + iVar6;
  Sexy::Insets::Insets(aIStack_a8,aIStack_b8);
  AVar1 = this[0x16c];
  uVar18 = 0;
  local_a0 = (int)(float)iVar5;
  if (AVar1 != (AirshipProgressMeter)0x0) {
    uVar18 = 0x41500000;
  }
  fVar22 = (float)iVar21;
  local_9c = iVar3;
  fVar20 = (float)FUN_0475a914(uVar18);
  fVar15 = (float)FUN_0475a914(0x40a00000);
  fVar16 = (float)FUN_0475a914(0x40e00000);
  fVar17 = (float)FUN_0475a914(0x3fc00000);
  fVar23 = *(float *)(this + 0x164);
  local_c4 = fVar15;
  cVar2 = Sexy::IsNearZero(fVar23,0.001);
  if (cVar2 == '\0') {
    iVar5 = (int)fVar20;
    iVar21 = (int)((fVar22 - fVar20) - fVar15);
    local_18[0] = 0.0;
    local_38[0] = (float)iVar21;
    local_28[0] = fVar23 * 0.01 * local_38[0];
    pfVar12 = eastl::min_alt<float>(local_38,local_28);
    pfVar12 = eastl::max_alt<float>(local_18,pfVar12);
    fVar20 = *pfVar12;
    local_18[0] = fVar20 + fVar15;
    pfVar12 = eastl::max_alt<float>(local_18,&local_c4);
    local_c4 = *pfVar12;
    Sexy::GraphicsAutoState::GraphicsAutoState((GraphicsAutoState *)local_68,param_1);
    iVar6 = (int)(fVar16 - fVar17);
    Sexy::Graphics::ClipRect(param_1,iVar5,iVar6,(int)fVar20,iVar3);
    if (fVar23 <= 25.0) {
      pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b233e0;
    }
    else if (fVar23 <= 50.0) {
      pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b23470;
    }
    else if (85.0 < fVar23) {
      pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b23578;
    }
    else {
      pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b234d8;
    }
    pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar13);
    Sexy::Graphics::DrawImage(param_1,pIVar11,iVar5,iVar6,iVar21,iVar3);
    Sexy::Insets::Insets(aIStack_58,0xff,0xff,0xff,0x96);
    Sexy::Insets::Insets(aIStack_48,aIStack_58);
    local_3c = 0;
    Sexy::Insets::Insets((Insets *)local_38,aIStack_48);
    Sexy::Insets::Insets((Insets *)local_28,aIStack_58);
    Sexy::ColorLerp((Sexy *)local_18,fVar14,(Insets *)local_38,(Insets *)local_28);
    Sexy::Graphics::SetColor(param_1,(Color *)local_18);
    Sexy::Graphics::FillRect(param_1,iVar5,iVar6,iVar21,iVar3);
    Sexy::GraphicsAutoState::~GraphicsAutoState((GraphicsAutoState *)local_68);
    AVar1 = this[0x16c];
  }
  if (AVar1 == (AirshipProgressMeter)0x0) {
    pLVar7 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b233b8);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    pLVar7 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b234a8);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    fVar14 = (fVar22 / (float)iVar3) * (float)iVar5;
    Sexy::Insets::Insets((Insets *)local_18,(int)(fVar22 - fVar14),0,(int)fVar14,iVar4);
    uVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b234a8);
    Draw3SliceImage(param_1,(Insets *)local_18,uVar10);
  }
  else {
    pLVar7 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b23410);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    pLVar7 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b23438);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    fVar14 = (fVar22 / (float)iVar3) * (float)iVar5;
    pLVar7 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b23438);
    if (pLVar7 == (LotteryResultProgressBar *)0x0) goto LAB_0475b538;
    Sexy::Insets::Insets((Insets *)&local_98,(int)(fVar22 - fVar14),0,(int)fVar14,iVar4);
    Sexy::Insets::Insets((Insets *)local_88,(Insets *)&local_98);
    local_80 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    local_80 = local_80 / 3;
    Sexy::Insets::Insets((Insets *)local_78,(Insets *)local_88);
    local_78[0] = (local_90 + local_98) - local_70;
    Sexy::Insets::Insets
              ((Insets *)local_68,local_80 + local_88[0],local_94,(local_90 - local_80) - local_70,
               local_8c);
    dVar19 = (double)local_80;
    iVar3 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar7);
    Sexy::Insets::Insets(aIStack_58,0,0,(int)(dVar19 * 0.5),iVar3);
    iVar3 = local_80;
    iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar7);
    Sexy::Insets::Insets(aIStack_48,(int)((double)iVar3 * 0.5),0,iVar3,iVar4);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    iVar4 = local_70;
    iVar3 = iVar3 - local_70;
    iVar5 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar7);
    Sexy::Insets::Insets((Insets *)local_38,iVar3,0,iVar4,iVar5);
    iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
    iVar3 = iVar3 - local_80;
    iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar7);
    Sexy::Insets::Insets((Insets *)local_28,local_40,0,iVar3 - local_70,iVar4);
    Sexy::Insets::Insets((Insets *)local_18,(Insets *)&local_98);
    local_60 = 10;
    fVar14 = (float)local_80 * 0.5;
    local_10 = (int)fVar14;
    local_88[0] = (int)(fVar14 + (float)local_88[0]);
    local_80 = (int)(((float)local_90 * 0.75 - fVar14) - 5.0);
    local_68[0] = local_88[0] + local_80;
    local_70 = ((local_90 - local_80) - local_10) + -10;
    local_78[0] = (local_90 + local_98) - local_70;
    Sexy::Graphics::DrawImage(param_1,(Image *)pLVar7,(TRect *)local_18,(TRect *)aIStack_58);
    Sexy::Graphics::DrawImage(param_1,(Image *)pLVar7,(TRect *)local_88,(TRect *)aIStack_48);
    Sexy::Graphics::DrawImage(param_1,(Image *)pLVar7,(TRect *)local_68,(TRect *)local_28);
    Sexy::Graphics::DrawImage(param_1,(Image *)pLVar7,(TRect *)local_78,(TRect *)local_38);
  }
  iVar3 = FUN_0475a900(0xfffffff6);
  iVar4 = FUN_0475a900(0xfffffffb);
  pLVar7 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b23550);
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar7);
  if (this[0x16c] == (AirshipProgressMeter)0x0) {
    pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b233b8;
  }
  else {
    pCVar13 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b23410;
  }
  pSVar8 = (SalesProgressBar *)CachedUIResourcePtr<Sexy::Image>::operator->(pCVar13);
  iVar6 = SalesProgressBar::GetCurrentLevel(pSVar8);
  pSVar8 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b23550);
  iVar21 = SalesProgressBar::GetCurrentLevel(pSVar8);
  pIVar11 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b23550);
  Sexy::Graphics::DrawImageF
            (param_1,pIVar11,(float)((iVar3 + iVar4) - iVar5 / 2),(float)(iVar6 / 2 - iVar21 / 2));
LAB_0475b538:
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_c0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to AirshipProgressMeter::Draw(Sexy::Graphics*) */

void __thiscall AirshipProgressMeter::Draw(AirshipProgressMeter *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

