// Class: ArcadePowerUpTemplateAdaptor


/* ArcadePowerUpTemplateAdaptor::~ArcadePowerUpTemplateAdaptor() */

void __thiscall
ArcadePowerUpTemplateAdaptor::~ArcadePowerUpTemplateAdaptor(ArcadePowerUpTemplateAdaptor *this)

{
  *(undefined ***)this = &PTR_GetClass_066743f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06674750;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06674798;
  std::string::~string((string *)(this + 0x128));
  std::string::~string((string *)(this + 0x120));
  HotUIAdaptor::~HotUIAdaptor((HotUIAdaptor *)this);
  return;
}


/* ArcadePowerUpTemplateAdaptor::~ArcadePowerUpTemplateAdaptor() */

void __thiscall
ArcadePowerUpTemplateAdaptor::~ArcadePowerUpTemplateAdaptor(ArcadePowerUpTemplateAdaptor *this)

{
  ~ArcadePowerUpTemplateAdaptor(this);
  AK::FreeHook(this);
  return;
}


/* ArcadePowerUpTemplateAdaptor::ArcadePowerUpTemplateAdaptor() */

void __thiscall
ArcadePowerUpTemplateAdaptor::ArcadePowerUpTemplateAdaptor(ArcadePowerUpTemplateAdaptor *this)

{
  HotUIAdaptor::HotUIAdaptor((HotUIAdaptor *)this);
  *(undefined ***)this = &PTR_GetClass_066743f0;
  *(undefined ***)(this + 0xd8) = &PTR_ButtonPress_06674750;
  *(undefined ***)(this + 0xe0) = &PTR_SliderVal_06674798;
  Set8BytesTo0(this + 0x120);
  Set8BytesTo0(this + 0x128);
  return;
}


/* ArcadePowerUpTemplateAdaptor::StaticNew() */

ArcadePowerUpTemplateAdaptor * ArcadePowerUpTemplateAdaptor::StaticNew(void)

{
  ArcadePowerUpTemplateAdaptor *this;
  
  this = ::operator_new(0x138);
  ArcadePowerUpTemplateAdaptor(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePowerUpTemplateAdaptor::StaticClassInit() */

void ArcadePowerUpTemplateAdaptor::StaticClassInit(void)

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
    std::string::string(asStack_10,"ArcadePowerUpTemplateAdaptor");
    (*pcVar2)(plVar1,asStack_10,FUN_0365fecc,0x138,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArcadePowerUpTemplateAdaptor::StaticGetClass() */

long * ArcadePowerUpTemplateAdaptor::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ArcadePowerUpTemplateAdaptor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArcadePowerUpTemplateAdaptor::GetClass() const */

long * ArcadePowerUpTemplateAdaptor::GetClass(void)

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
  (*pcVar3)(plVar1,"ArcadePowerUpTemplateAdaptor",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ArcadePowerUpTemplateAdaptor::Configure(Sexy::WidgetContainer*, std::string const&, std::string
   const&) */

void __thiscall
ArcadePowerUpTemplateAdaptor::Configure
          (ArcadePowerUpTemplateAdaptor *this,WidgetContainer *param_1,string *param_2,
          string *param_3)

{
  *(WidgetContainer **)(this + 0x130) = param_1;
  thunk_FUN_05475e00(this + 0x120,param_2);
  thunk_FUN_05475e00(this + 0x128,param_3);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePowerUpTemplateAdaptor::getUIFileName() */

void __thiscall ArcadePowerUpTemplateAdaptor::getUIFileName(ArcadePowerUpTemplateAdaptor *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"ArcadePowerUpTemplate");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* ArcadePowerUpTemplateAdaptor::IsConfiguredForPowerUp(std::string const&, std::string const&)
   const */

void __thiscall
ArcadePowerUpTemplateAdaptor::IsConfiguredForPowerUp
          (ArcadePowerUpTemplateAdaptor *this,string *param_1,string *param_2)

{
  char cVar1;
  
  cVar1 = std::operator==((string *)(this + 0x120),param_1);
  if (cVar1 != '\0') {
    std::operator==((string *)(this + 0x128),param_2);
    return;
  }
  return;
}


/* ArcadePowerUpTemplateAdaptor::GetPowerUpUIButton() const */

undefined8 __thiscall
ArcadePowerUpTemplateAdaptor::GetPowerUpUIButton(ArcadePowerUpTemplateAdaptor *this)

{
  bool bVar1;
  HotUIFile *this_00;
  RtClass *pRVar2;
  RtObject *this_01;
  HotUIPowerUpButton *pHVar3;
  undefined8 uVar4;
  
  this_00 = (HotUIFile *)FUN_0365fcfc(*(undefined8 *)(this + 0xf8));
  pRVar2 = (RtClass *)HotUIPowerUpButton::StaticGetClass();
  this_01 = (RtObject *)HotUIFile::GetWidgetByType(this_00,pRVar2);
  if ((this_01 != (RtObject *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<HotUIPowerUpButton>(this_01), bVar1)) {
    pHVar3 = Sexy::RtObject::Cast<HotUIPowerUpButton>(this_01);
    uVar4 = FUN_0365fd08(*(undefined8 *)(pHVar3 + 0x218));
    return uVar4;
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePowerUpTemplateAdaptor::GetLockAnimation() const */

void __thiscall ArcadePowerUpTemplateAdaptor::GetLockAnimation(ArcadePowerUpTemplateAdaptor *this)

{
  HotUIFile *this_00;
  HotUISeedPacketList *pHVar1;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (HotUIFile *)FUN_0365fcfc(*(undefined8 *)(this + 0xf8));
  std::string::string(asStack_10,"LockAnim");
  pHVar1 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_10);
  std::string::~string(asStack_10);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pHVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePowerUpTemplateAdaptor::getProgressTowardPowerUp(int&, int&) const */

void __thiscall
ArcadePowerUpTemplateAdaptor::getProgressTowardPowerUp
          (ArcadePowerUpTemplateAdaptor *this,int *param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  string *psVar4;
  hash_node *phVar5;
  int *piVar6;
  long lVar7;
  undefined8 local_40;
  undefined8 local_38;
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ahStack_30 [16];
  vector<ArcadePropertySheetHelpers::UnlockSource,std::allocator<ArcadePropertySheetHelpers::UnlockSource>>
  avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  *param_2 = 0;
  *param_1 = 0;
  psVar4 = (string *)ArcadePropertySheet::Get();
  phVar5 = (hash_node *)ProfileUtils::Profile();
  eastl::
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ::hashtable_iterator_base(ahStack_30,phVar5,(hash_node **)psVar4);
  ArcadePropertySheet::GetUnlockSourcesForPowerUp(psVar4,(string *)(this + 0x128));
  cVar1 = std::
          vector<ArcadePropertySheetHelpers::UnlockSource,std::allocator<ArcadePropertySheetHelpers::UnlockSource>>
          ::empty(avStack_20);
  if (cVar1 == '\0') {
    piVar6 = (int *)std::vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                    ::front((vector<Sexy::PIInterpolatorPoint,std::allocator<Sexy::PIInterpolatorPoint>>
                             *)avStack_20);
    iVar3 = *piVar6;
    *param_2 = piVar6[4];
    if (iVar3 == 0) {
      lVar7 = ArcadePropertySheet::GetLevelPackByID
                        ((ArcadePropertySheet *)psVar4,(string *)(piVar6 + 2));
      local_40 = FUN_03660200(*(undefined8 *)(lVar7 + 0x40));
      local_38 = FUN_03660250(*(undefined8 *)(lVar7 + 0x48));
      while (bVar2 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38),
            bVar2) {
        psVar4 = (string *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
        cVar1 = ArcadeProgressDatabase::IsLevelComplete((ArcadeProgressDatabase *)ahStack_30,psVar4)
        ;
        if (cVar1 != '\0') {
          *param_1 = *param_1 + 1;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
      }
    }
    else if (iVar3 == 1) {
      iVar3 = ArcadeProgressDatabase::GetHighestCompletedEndlessWave
                        ((ArcadeProgressDatabase *)ahStack_30,(string *)(piVar6 + 2));
      *param_1 = iVar3;
    }
  }
  std::
  vector<ArcadePropertySheetHelpers::UnlockSource,std::allocator<ArcadePropertySheetHelpers::UnlockSource>>
  ::~vector(avStack_20);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePowerUpTemplateAdaptor::getProgressText() const */

void ArcadePowerUpTemplateAdaptor::getProgressText(void)

{
  ArcadePowerUpTemplateAdaptor *in_x0;
  string *in_x8;
  uint local_10;
  uint local_c;
  long local_8;
  
  local_10 = 0;
  local_c = 0;
  local_8 = ___stack_chk_guard;
  getProgressTowardPowerUp(in_x0,(int *)&local_10,(int *)&local_c);
  if ((int)local_c < (int)local_10) {
    local_10 = local_c;
  }
  if ((int)local_c < 1) {
    std::string::string(in_x8,"");
    nop();
  }
  else {
    Sexy::StrFormat("%d / %d",(ulong)local_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePowerUpTemplateAdaptor::RefreshUnlockStatus() */

void __thiscall
ArcadePowerUpTemplateAdaptor::RefreshUnlockStatus(ArcadePowerUpTemplateAdaptor *this)

{
  char cVar1;
  hash_node *phVar2;
  hash_node **pphVar3;
  HotUIFile *this_00;
  HotUIAnim *pHVar4;
  HotUISeedPacketList *pHVar5;
  PowerUpUIButton *this_01;
  char *__s;
  string *extraout_x1;
  code *pcVar6;
  Sexy aSStack_58 [8];
  string asStack_50 [8];
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ahStack_48 [16];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  phVar2 = (hash_node *)ProfileUtils::Profile();
  pphVar3 = (hash_node **)ArcadePropertySheet::Get();
  eastl::
  hashtable_iterator_base<eastl::pair<EA::Text::GlyphCache::GlyphInfo_const,EA::Text::GlyphTextureInfo>,false>
  ::hashtable_iterator_base(ahStack_48,phVar2,pphVar3);
  cVar1 = ArcadeProgressDatabase::IsPowerUpUnlocked
                    ((ArcadeProgressDatabase *)ahStack_48,(string *)(this + 0x128),
                     (string *)(this + 0x120));
  this_00 = (HotUIFile *)FUN_0365fcfc(*(undefined8 *)(this + 0xf8));
  pHVar4 = (HotUIAnim *)GetLockAnimation(this);
  if (cVar1 == '\0') {
    __s = "locked";
  }
  else {
    __s = "unlocked";
  }
  std::string::string(asStack_50,__s);
  Sexy::Delegate1<std::string_const&>::Delegate1(aDStack_38);
  HotUIAnim::PlayAndStop(pHVar4,asStack_50,0,aDStack_38);
  std::string::~string(asStack_50);
  nop();
  std::string::string(asStack_50,"ProgressLabel");
  pHVar5 = HotUIFile::GetWidgetByName<HotUISeedPacketList>(this_00,asStack_50);
  std::string::~string(asStack_50);
  nop();
  pcVar6 = *(code **)(*(long *)pHVar5 + 0x360);
  getProgressText();
  Sexy::UTF8StringToWString(aSStack_58,extraout_x1);
  (*pcVar6)(pHVar5,asStack_50);
  FUN_05476c50(asStack_50);
  std::string::~string((string *)aSStack_58);
  this_01 = (PowerUpUIButton *)GetPowerUpUIButton(this);
  if (this_01 != (PowerUpUIButton *)0x0) {
    PowerUpUIButton::RefreshUnlockState(this_01);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ArcadePowerUpTemplateAdaptor::onLinkToUIViewCreated() */

void __thiscall
ArcadePowerUpTemplateAdaptor::onLinkToUIViewCreated(ArcadePowerUpTemplateAdaptor *this)

{
  PowerUpUIButton *this_00;
  
  this_00 = (PowerUpUIButton *)GetPowerUpUIButton(this);
  if (this_00 != (PowerUpUIButton *)0x0) {
    PowerUpUIButton::SetType(this_00,(string *)(this + 0x120),(string *)(this + 0x128));
  }
  RefreshUnlockStatus(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ArcadePowerUpTemplateAdaptor::onLoadUIView() */

void __thiscall ArcadePowerUpTemplateAdaptor::onLoadUIView(ArcadePowerUpTemplateAdaptor *this)

{
  string *psVar1;
  HotUIFile *pHVar2;
  string asStack_40 [8];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_38);
  psVar1 = (string *)Sexy::LazySingleton<HotUIManager>::GetInstance();
  getUIFileName(this);
  pHVar2 = (HotUIFile *)
           HotUIManager::LoadUIPrefab(psVar1,(map *)asStack_40,(WidgetContainer *)amStack_38);
  std::string::~string(asStack_40);
  HotUIAdaptor::addLinkToUIFile((HotUIAdaptor *)this,pHVar2);
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

