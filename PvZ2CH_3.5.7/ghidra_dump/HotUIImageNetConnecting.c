// Class: HotUIImageNetConnecting


/* HotUIImageNetConnecting::onUpdate() */

void __thiscall HotUIImageNetConnecting::onUpdate(HotUIImageNetConnecting *this)

{
  *(double *)(this + 0x298) = *(double *)(this + 0x298) - 0.1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIImageNetConnecting::StaticClassInit() */

void HotUIImageNetConnecting::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIImageNetConnecting");
    (*pcVar2)(plVar1,asStack_10,FUN_034be960,0x2a0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIImageNetConnecting::StaticGetClass() */

long * HotUIImageNetConnecting::StaticGetClass(void)

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
  uVar2 = HotUIImage::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIImageNetConnecting",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIImageNetConnecting::SetWaitingImage(Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall
HotUIImageNetConnecting::SetWaitingImage(HotUIImageNetConnecting *this,RtWeakPtr *param_2)

{
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x290),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIImageNetConnecting::onInitializeWidget() */

void __thiscall HotUIImageNetConnecting::onInitializeWidget(HotUIImageNetConnecting *this)

{
  string *extraout_x1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIImage::onInitializeWidget((HotUIImage *)this);
  HotUIHelpers::GetImageFromStringId((HotUIHelpers *)(this + 0x280),extraout_x1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x290),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIImageNetConnecting::onDraw(Sexy::Graphics*) */

void __thiscall HotUIImageNetConnecting::onDraw(HotUIImageNetConnecting *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ResourceInfo *pRVar7;
  LotteryResultProgressBar *this_01;
  SalesProgressBar *this_02;
  undefined8 uVar8;
  wstring awStack_38 [8];
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar4 = FUN_034b7438(0x3c);
  Sexy::Insets::Insets(aIStack_28,0,0,*(int *)(this + 0x50),iVar4);
  cVar2 = LawnApp::IsPrimeTextReady(gLawnApp);
  if (cVar2 != '\0') {
    Sexy::ToWString((string *)(this + 0x288));
    TodStringTranslate(awStack_38);
    uVar8 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZShaoEr_32_ThickOutline)
    ;
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar8,aCStack_18,5,1);
    FUN_05476c50(auStack_30);
    FUN_05476c50(awStack_38);
  }
  this_00 = (RtWeakPtr *)(this + 0x290);
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar3) {
    pRVar7 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    iVar4 = *(int *)(this + 0x50);
    this_01 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    iVar1 = *(int *)(this + 0x54);
    this_02 = (SalesProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar6 = SalesProgressBar::GetCurrentLevel(this_02);
    Sexy::Graphics::DrawImageRotated
              (param_1,(Image *)pRVar7,(iVar4 - iVar5) / 2,(iVar1 - iVar6) / 2,
               *(double *)(this + 0x298),(TRect *)0x0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIImageNetConnecting::onProcessStringReplaceMap(std::map<std::string, std::string,
   std::less<std::string >, std::allocator<std::pair<std::string const, std::string > > > const&) */

void __thiscall
HotUIImageNetConnecting::onProcessStringReplaceMap(HotUIImageNetConnecting *this,map *param_1)

{
  HotUIZPSMeterProperties *pHVar1;
  undefined8 uVar2;
  
  HotUIImage::onProcessStringReplaceMap((HotUIImage *)this,param_1);
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  uVar2 = HotUIWidget::processStringReplaceMapHelper
                    ((HotUIWidget *)this,(string *)(pHVar1 + 0x1a0),param_1);
  thunk_FUN_05475e00(this + 0x280,uVar2);
  uVar2 = HotUIWidget::processStringReplaceMapHelper
                    ((HotUIWidget *)this,(string *)(pHVar1 + 0x1a8),param_1);
  thunk_FUN_05475e00(this + 0x288,uVar2);
  return;
}


/* HotUIImageNetConnecting::HotUIImageNetConnecting() */

void __thiscall HotUIImageNetConnecting::HotUIImageNetConnecting(HotUIImageNetConnecting *this)

{
  HotUIImage::HotUIImage((HotUIImage *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_0664b3f0;
  Set8BytesTo0(this + 0x280);
  Set8BytesTo0(this + 0x288);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x290));
  *(undefined8 *)(this + 0x298) = 0;
  return;
}


/* HotUIImageNetConnecting::StaticNew() */

HotUIImageNetConnecting * HotUIImageNetConnecting::StaticNew(void)

{
  HotUIImageNetConnecting *this;
  
  this = ::operator_new(0x2a0);
  HotUIImageNetConnecting(this);
  return this;
}


/* HotUIImageNetConnecting::~HotUIImageNetConnecting() */

void __thiscall HotUIImageNetConnecting::~HotUIImageNetConnecting(HotUIImageNetConnecting *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_0664b3f0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x290));
  std::string::~string((string *)(this + 0x288));
  std::string::~string((string *)(this + 0x280));
  HotUIImage::~HotUIImage((HotUIImage *)this);
  return;
}


/* HotUIImageNetConnecting::~HotUIImageNetConnecting() */

void __thiscall HotUIImageNetConnecting::~HotUIImageNetConnecting(HotUIImageNetConnecting *this)

{
  ~HotUIImageNetConnecting(this);
  AK::FreeHook(this);
  return;
}

