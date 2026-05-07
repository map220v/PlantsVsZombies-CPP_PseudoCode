// Class: HotUIImageBorder


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIImageBorder::StaticClassInit() */

void HotUIImageBorder::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIImageBorder");
    (*pcVar2)(plVar1,asStack_10,FUN_03629374,0x290,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIImageBorder::StaticGetClass() */

long * HotUIImageBorder::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"HotUIImageBorder",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIImageBorder::onInitializeWidget() */

void __thiscall HotUIImageBorder::onInitializeWidget(HotUIImageBorder *this)

{
  string *extraout_x1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIImage::onInitializeWidget((HotUIImage *)this);
  HotUIHelpers::GetImageFromStringId((HotUIHelpers *)(this + 0x280),extraout_x1);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x288),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIImageBorder::onProcessStringReplaceMap(std::map<std::string, std::string,
   std::less<std::string >, std::allocator<std::pair<std::string const, std::string > > > const&) */

void __thiscall HotUIImageBorder::onProcessStringReplaceMap(HotUIImageBorder *this,map *param_1)

{
  HotUIZPSMeterProperties *pHVar1;
  undefined8 uVar2;
  
  HotUIImage::onProcessStringReplaceMap((HotUIImage *)this,param_1);
  pHVar1 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  uVar2 = HotUIWidget::processStringReplaceMapHelper
                    ((HotUIWidget *)this,(string *)(pHVar1 + 0x1a8),param_1);
  thunk_FUN_05475e00(this + 0x280,uVar2);
  return;
}


/* HotUIImageBorder::SetBorderImage(Sexy::RtWeakPtr<Sexy::Image>) */

void __thiscall HotUIImageBorder::SetBorderImage(HotUIImageBorder *this,RtWeakPtr *param_2)

{
  RtMixedPtr<Sexy::Image> *this_00;
  int iVar1;
  char cVar2;
  bool bVar3;
  HotUIZPSMeterProperties *pHVar4;
  long lVar5;
  
  pHVar4 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
  if ((*(int *)(pHVar4 + 0x20) != 2) && (*(int *)(pHVar4 + 0x30) != 2)) {
LAB_03629800:
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x288),param_2);
    return;
  }
  this_00 = (RtMixedPtr<Sexy::Image> *)(this + 0x288);
  cVar2 = Sexy::RtMixedPtr<Sexy::Image>::operator!(this_00);
  if (cVar2 == '\0') {
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(param_2);
    if (!bVar3) goto LAB_03629800;
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar1 = *(int *)(lVar5 + 0x38);
    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    if (iVar1 == *(int *)(lVar5 + 0x38)) {
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      iVar1 = *(int *)(lVar5 + 0x3c);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
      if (iVar1 == *(int *)(lVar5 + 0x3c)) goto LAB_03629800;
    }
  }
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=((RtWeakPtr<PowerPropertySheet> *)this_00,param_2);
  HotUIWidget::MarkLayoutDirty((HotUIWidget *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIImageBorder::onDraw(Sexy::Graphics*) */

void __thiscall HotUIImageBorder::onDraw(HotUIImageBorder *this,Graphics *param_1)

{
  bool bVar1;
  HotUIZPSMeterProperties *pHVar2;
  DynamicPadding *extraout_x1;
  RtWeakPtr<Sexy::SoundResource> aRStack_68 [8];
  undefined1 auStack_60 [16];
  RtWeakPtr aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  HotUIImage::onDraw((HotUIImage *)this,param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x288));
  if (bVar1) {
    pHVar2 = HotUIWidget::getProps<HotUIZPSMeterProperties>((HotUIWidget *)this);
    HotUIHelpers::GetInsetsFromDynamicPadding((HotUIHelpers *)(pHVar2 + 0x1b0),extraout_x1);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_68,(RtWeakPtrBase *)(this + 0x288));
    UIImageDrawInfo::UIImageDrawInfo
              ((UIImageDrawInfo *)aRStack_50,aRStack_68,*(undefined4 *)(pHVar2 + 0x1a0),
               *(undefined4 *)(pHVar2 + 0x1a4),auStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    HotUIImage::drawImageHelper((HotUIImage *)this,param_1,(UIImageDrawInfo *)aRStack_50);
    std::_Destroy<Sexy::RtWeakPtr<GridItemHydraFog>>(aRStack_50);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIImageBorder::HotUIImageBorder() */

void __thiscall HotUIImageBorder::HotUIImageBorder(HotUIImageBorder *this)

{
  HotUIImage::HotUIImage((HotUIImage *)this);
  *(undefined ***)this = &PTR_GetWidgetClass_0666c3e0;
  Set8BytesTo0(this + 0x280);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x288));
  return;
}


/* HotUIImageBorder::StaticNew() */

HotUIImageBorder * HotUIImageBorder::StaticNew(void)

{
  HotUIImageBorder *this;
  
  this = ::operator_new(0x290);
  HotUIImageBorder(this);
  return this;
}


/* HotUIImageBorder::~HotUIImageBorder() */

void __thiscall HotUIImageBorder::~HotUIImageBorder(HotUIImageBorder *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_0666c3e0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x288));
  std::string::~string((string *)(this + 0x280));
  HotUIImage::~HotUIImage((HotUIImage *)this);
  return;
}


/* HotUIImageBorder::~HotUIImageBorder() */

void __thiscall HotUIImageBorder::~HotUIImageBorder(HotUIImageBorder *this)

{
  ~HotUIImageBorder(this);
  AK::FreeHook(this);
  return;
}

