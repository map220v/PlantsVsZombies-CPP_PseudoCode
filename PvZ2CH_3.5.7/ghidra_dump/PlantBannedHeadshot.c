// Class: PlantBannedHeadshot


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBannedHeadshot::StaticClassInit() */

void PlantBannedHeadshot::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantBannedHeadshot");
    (*pcVar2)(plVar1,asStack_10,FUN_03619638,0x1b8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantBannedHeadshot::StaticGetClass() */

long * PlantBannedHeadshot::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"PlantBannedHeadshot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBannedHeadshot::GetClass() const */

long * PlantBannedHeadshot::GetClass(void)

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
  (*pcVar3)(plVar1,"PlantBannedHeadshot",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantBannedHeadshot::InitView(std::string) */

void PlantBannedHeadshot::InitView(long param_1)

{
  thunk_FUN_05475e00(param_1 + 0x1b0);
  return;
}


/* PlantBannedHeadshot::~PlantBannedHeadshot() */

void __thiscall PlantBannedHeadshot::~PlantBannedHeadshot(PlantBannedHeadshot *this)

{
  *(undefined ***)this = &PTR_GetClass_06669110;
  *(undefined ***)(this + 0x10) = &PTR__PlantBannedHeadshot_066692b0;
  std::string::~string((string *)(this + 0x1b0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1a0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to PlantBannedHeadshot::~PlantBannedHeadshot() */

void __thiscall PlantBannedHeadshot::~PlantBannedHeadshot(PlantBannedHeadshot *this)

{
  ~PlantBannedHeadshot(this + -0x10);
  return;
}


/* PlantBannedHeadshot::~PlantBannedHeadshot() */

void __thiscall PlantBannedHeadshot::~PlantBannedHeadshot(PlantBannedHeadshot *this)

{
  ~PlantBannedHeadshot(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to PlantBannedHeadshot::~PlantBannedHeadshot() */

void __thiscall PlantBannedHeadshot::~PlantBannedHeadshot(PlantBannedHeadshot *this)

{
  ~PlantBannedHeadshot(this + -0x10);
  return;
}


/* PlantBannedHeadshot::PlantBannedHeadshot() */

void __thiscall PlantBannedHeadshot::PlantBannedHeadshot(PlantBannedHeadshot *this)

{
  undefined **__n;
  
  UIWidget::UIWidget((UIWidget *)this);
  __n = &PTR_GetClass_06669110;
  *(undefined ***)this = &PTR_GetClass_06669110;
  *(undefined ***)(this + 0x10) = &PTR__PlantBannedHeadshot_066692b0;
  Sexy::Insets::Insets((Insets *)(this + 0x164));
  Sexy::Insets::Insets((Insets *)(this + 0x174));
  Sexy::Insets::Insets((Insets *)(this + 0x184));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a0));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1a8));
  Set8BytesTo0((string *)(this + 0x1b0));
  std::string::append((string *)(this + 0x1b0),"",(size_t)__n);
  return;
}


/* PlantBannedHeadshot::StaticNew() */

PlantBannedHeadshot * PlantBannedHeadshot::StaticNew(void)

{
  PlantBannedHeadshot *this;
  
  this = ::operator_new(0x1b8);
  PlantBannedHeadshot(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBannedHeadshot::doInit() */

void __thiscall PlantBannedHeadshot::doInit(PlantBannedHeadshot *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  string *psVar5;
  char *__s;
  undefined8 uVar6;
  string *extraout_x1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
  std::string::string(asStack_20,"IMAGE_UI_PVZ1_BANNED_BG");
  GetImageByNameWithUIFallback(asStack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1a0),(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"IMAGE_UI_PVZ1_BANNED_COVER");
  GetImageByNameWithUIFallback(asStack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1a8),(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  std::string::~string(asStack_20);
  nop();
  __s = (char *)FUN_0547429c(this + 0x1b0);
  std::string::string((string *)&local_18,__s);
  Sexy::Upper((Sexy *)&local_18,extraout_x1);
  std::string::~string((string *)&local_18);
  nop();
  uVar6 = FUN_0547429c(asStack_28);
  Sexy::StrFormat("IMAGE_UI_HEADSHOT_PLANT_%s",asStack_20,uVar6);
  GetImageByNameWithUIFallback(asStack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x198),(RtWeakPtr *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1a0));
  if (bVar1) {
    iVar2 = FUN_036192ac(*(undefined4 *)(this + 0x38));
    *(int *)(this + 0x17c) = iVar2;
    iVar3 = FUN_036192b0(*(undefined4 *)(this + 0x3c));
    *(undefined4 *)(this + 0x174) = 0;
    *(int *)(this + 0x180) = iVar3;
    *(undefined4 *)(this + 0x178) = 0;
    *(int *)(this + 0x18c) = (int)((float)iVar2 * 0.33);
    *(int *)(this + 400) = (int)((float)iVar3 * 0.33);
    iVar4 = FUN_036194cc(9);
    *(int *)(this + 0x184) = (iVar2 - (int)((float)iVar2 * 0.33)) - iVar4;
    iVar2 = FUN_036194cc(0xf);
    *(int *)(this + 0x188) = (iVar3 - (int)((float)iVar3 * 0.33)) - iVar2;
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x198));
    if (bVar1) {
      iVar2 = (int)((float)*(int *)(this + 0x17c) * 0.6);
      iVar3 = (int)((float)*(int *)(this + 0x180) * 0.6);
      Sexy::Insets::Insets
                ((Insets *)&local_18,(*(int *)(this + 0x17c) - iVar2) / 2,
                 (*(int *)(this + 0x180) - iVar3) / 2,iVar2,iVar3);
      *(undefined8 *)(this + 0x164) = local_18;
      *(undefined8 *)(this + 0x16c) = uStack_10;
    }
  }
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBannedHeadshot::onLoadComplete() */

void __thiscall PlantBannedHeadshot::onLoadComplete(PlantBannedHeadshot *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  string *psVar5;
  char *__s;
  undefined8 uVar6;
  string *extraout_x1;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  undefined8 uStack_18;
  undefined8 uStack_10;
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
  std::string::string(asStack_20,"IMAGE_UI_PVZ1_BANNED_BG");
  GetImageByNameWithUIFallback(asStack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1a0),(RtWeakPtr *)&uStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_18);
  std::string::~string(asStack_20);
  nop();
  std::string::string(asStack_20,"IMAGE_UI_PVZ1_BANNED_COVER");
  GetImageByNameWithUIFallback(asStack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1a8),(RtWeakPtr *)&uStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_18);
  std::string::~string(asStack_20);
  nop();
  __s = (char *)FUN_0547429c(this + 0x1b0);
  std::string::string((string *)&uStack_18,__s);
  Sexy::Upper((Sexy *)&uStack_18,extraout_x1);
  std::string::~string((string *)&uStack_18);
  nop();
  uVar6 = FUN_0547429c(asStack_28);
  Sexy::StrFormat("IMAGE_UI_HEADSHOT_PLANT_%s",asStack_20,uVar6);
  GetImageByNameWithUIFallback(asStack_20);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x198),(RtWeakPtr *)&uStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&uStack_18);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1a0));
  if (bVar1) {
    iVar2 = FUN_036192ac(*(undefined4 *)(this + 0x38));
    *(int *)(this + 0x17c) = iVar2;
    iVar3 = FUN_036192b0(*(undefined4 *)(this + 0x3c));
    *(undefined4 *)(this + 0x174) = 0;
    *(int *)(this + 0x180) = iVar3;
    *(undefined4 *)(this + 0x178) = 0;
    *(int *)(this + 0x18c) = (int)((float)iVar2 * 0.33);
    *(int *)(this + 400) = (int)((float)iVar3 * 0.33);
    iVar4 = FUN_036194cc(9);
    *(int *)(this + 0x184) = (iVar2 - (int)((float)iVar2 * 0.33)) - iVar4;
    iVar2 = FUN_036194cc(0xf);
    *(int *)(this + 0x188) = (iVar3 - (int)((float)iVar3 * 0.33)) - iVar2;
    bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x198));
    if (bVar1) {
      iVar2 = (int)((float)*(int *)(this + 0x17c) * 0.6);
      iVar3 = (int)((float)*(int *)(this + 0x180) * 0.6);
      Sexy::Insets::Insets
                ((Insets *)&uStack_18,(*(int *)(this + 0x17c) - iVar2) / 2,
                 (*(int *)(this + 0x180) - iVar3) / 2,iVar2,iVar3);
      *(undefined8 *)(this + 0x164) = uStack_18;
      *(undefined8 *)(this + 0x16c) = uStack_10;
    }
  }
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_30);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantBannedHeadshot::Draw(Sexy::Graphics*) */

void __thiscall PlantBannedHeadshot::Draw(PlantBannedHeadshot *this,Graphics *param_1)

{
  char cVar1;
  bool bVar2;
  ResourceInfo *pRVar3;
  GraphicsAutoState aGStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  cVar1 = PneumaticSeedBank::IsInitialized((PneumaticSeedBank *)this);
  if (cVar1 == '\0') goto LAB_0361ba1c;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1a0));
  if (bVar2) {
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1a0));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar3,*(int *)(this + 0x174),*(int *)(this + 0x178),
               *(int *)(this + 0x17c),*(int *)(this + 0x180));
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x198));
    if (bVar2) goto LAB_0361bae0;
LAB_0361ba88:
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1a8));
    if (bVar2) {
LAB_0361bb1c:
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x1a8));
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar3,*(int *)(this + 0x184),*(int *)(this + 0x188),
                 *(int *)(this + 0x18c),*(int *)(this + 400));
    }
  }
  else {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x198));
    if (!bVar2) goto LAB_0361ba88;
LAB_0361bae0:
    Sexy::Insets::Insets(aIStack_18,(Insets *)(this + 0x164));
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x198));
    DrawAdaptiveInInscribedCircleImage(param_1,aIStack_18,pRVar3);
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x1a8));
    if (bVar2) goto LAB_0361bb1c;
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
LAB_0361ba1c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to PlantBannedHeadshot::Draw(Sexy::Graphics*) */

void __thiscall PlantBannedHeadshot::Draw(PlantBannedHeadshot *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

