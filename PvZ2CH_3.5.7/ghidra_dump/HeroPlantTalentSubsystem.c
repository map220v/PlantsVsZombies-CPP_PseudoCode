// Class: HeroPlantTalentSubsystem


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantTalentSubsystem::StaticClassInit() */

void HeroPlantTalentSubsystem::StaticClassInit(void)

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
    std::string::string(asStack_10,"HeroPlantTalentSubsystem");
    (*pcVar2)(plVar1,asStack_10,FUN_042b53c0,0x78,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeroPlantTalentSubsystem::StaticGetClass() */

long * HeroPlantTalentSubsystem::StaticGetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"HeroPlantTalentSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeroPlantTalentSubsystem::GetClass() const */

long * HeroPlantTalentSubsystem::GetClass(void)

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
  uVar2 = GameSubSystem::StaticGetClass();
  (*pcVar3)(plVar1,"HeroPlantTalentSubsystem",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HeroPlantTalentSubsystem::IsSystemActive() */

bool __thiscall HeroPlantTalentSubsystem::IsSystemActive(HeroPlantTalentSubsystem *this)

{
  return *(int *)(this + 0x28) == 1;
}


/* HeroPlantTalentSubsystem::GetHeroPlantTalentButton(int) */

void __thiscall
HeroPlantTalentSubsystem::GetHeroPlantTalentButton(HeroPlantTalentSubsystem *this,int param_1)

{
  FUN_042b2344(*(undefined8 *)(this + 0x30),(long)param_1);
  return;
}


/* HeroPlantTalentSubsystem::Update() */

void __thiscall HeroPlantTalentSubsystem::Update(HeroPlantTalentSubsystem *this)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  cVar1 = IsSystemActive(this);
  if ((cVar1 != '\0') && (*(int *)(this + 0x28) == 1)) {
    uVar3 = 0;
    while( true ) {
      uVar4 = *(undefined8 *)(this + 0x30);
      uVar2 = FUN_042b2324(uVar4,*(undefined8 *)(this + 0x38));
      if (uVar2 <= uVar3) break;
      FUN_042b2344(uVar4,uVar3);
      uVar3 = uVar3 + 1;
      nop();
    }
    return;
  }
  return;
}


/* HeroPlantTalentSubsystem::clearTouch() */

void __thiscall HeroPlantTalentSubsystem::clearTouch(HeroPlantTalentSubsystem *this)

{
  HeroPlantTalentButton *this_00;
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  while( true ) {
    uVar3 = *(undefined8 *)(this + 0x30);
    uVar1 = FUN_042b2324(uVar3,*(undefined8 *)(this + 0x38));
    if (uVar1 <= uVar2) break;
    this_00 = (HeroPlantTalentButton *)FUN_042b2344(uVar3,uVar2);
    HeroPlantTalentButton::clearTouch(this_00);
    uVar2 = uVar2 + 1;
  }
  return;
}


/* HeroPlantTalentSubsystem::cancelTouch() */

void __thiscall HeroPlantTalentSubsystem::cancelTouch(HeroPlantTalentSubsystem *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  clearTouch(this);
  return;
}


/* HeroPlantTalentSubsystem::SelectTalentButton(int) */

void __thiscall
HeroPlantTalentSubsystem::SelectTalentButton(HeroPlantTalentSubsystem *this,int param_1)

{
  HeroPlantTalentButton *this_00;
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  while( true ) {
    uVar3 = *(undefined8 *)(this + 0x30);
    uVar1 = FUN_042b2324(uVar3,*(undefined8 *)(this + 0x38));
    if (uVar1 <= uVar2) break;
    this_00 = (HeroPlantTalentButton *)FUN_042b2344(uVar3,uVar2);
    HeroPlantTalentButton::OnSelect(this_00,*(int *)(this_00 + 0x48) == param_1);
    uVar2 = uVar2 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantTalentSubsystem::AddToRenderQueue(RenderQueue*) */

void __thiscall
HeroPlantTalentSubsystem::AddToRenderQueue(HeroPlantTalentSubsystem *this,RenderQueue *param_1)

{
  CBMemberTranslatorX aCStack_50 [24];
  Delegate1<Sexy::Graphics*> aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x28) == 1) {
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,drawHeroPlantTalentButtons);
    Sexy::Delegate1<Sexy::Graphics*>::
    Delegate1<HeroPlantTalentSubsystem,void(HeroPlantTalentSubsystem::*)(Sexy::Graphics*)>
              (aDStack_38,aCStack_50);
    RenderQueue::Add(param_1,0xaae61,aDStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeroPlantTalentSubsystem::HeroPlantTalentSubsystem() */

void __thiscall HeroPlantTalentSubsystem::HeroPlantTalentSubsystem(HeroPlantTalentSubsystem *this)

{
  GameSubSystem::GameSubSystem((GameSubSystem *)this);
  *(undefined ***)this = &PTR_GetClass_0682bd10;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x18));
  Sexy::Point::Point((Point *)(this + 0x20));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  HeroPlantSaveInfo::HeroPlantSaveInfo((HeroPlantSaveInfo *)(this + 0x50));
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return;
}


/* HeroPlantTalentSubsystem::StaticNew() */

HeroPlantTalentSubsystem * HeroPlantTalentSubsystem::StaticNew(void)

{
  HeroPlantTalentSubsystem *this;
  
  this = ::operator_new(0x78);
  HeroPlantTalentSubsystem(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantTalentSubsystem::registerForEvents() */

void __thiscall HeroPlantTalentSubsystem::registerForEvents(HeroPlantTalentSubsystem *this)

{
  Board *pBVar1;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_a0 [8];
  CBMemberTranslatorX aCStack_98 [24];
  CBMemberTranslatorX aCStack_80 [24];
  Delegate1wRet<bool,Sexy::Touch_const&> aDStack_68 [48];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pBVar1 = *(Board **)(gLawnApp + 0x9f0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,handleTouch);
  Sexy::Delegate1wRet<bool,Sexy::Touch_const&>::
  Delegate1wRet<HeroPlantTalentSubsystem,bool(HeroPlantTalentSubsystem::*)(Sexy::Touch_const&)>
            (aDStack_68,aCStack_98);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_a0);
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,cancelTouch);
  Sexy::Delegate0::Delegate0<HeroPlantTalentSubsystem,void(HeroPlantTalentSubsystem::*)()>
            (aDStack_38,aCStack_80);
  Board::RegisterTouchGameplayObject(pBVar1,aDStack_68,0xb,a_Stack_a0,aDStack_38);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_a0);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeroPlantTalentSubsystem::~HeroPlantTalentSubsystem() */

void __thiscall HeroPlantTalentSubsystem::~HeroPlantTalentSubsystem(HeroPlantTalentSubsystem *this)

{
  *(undefined ***)this = &PTR_GetClass_0682bd10;
  HeroPlantSaveInfo::~HeroPlantSaveInfo((HeroPlantSaveInfo *)(this + 0x50));
  std::vector<HeroPlantTalentButton,std::allocator<HeroPlantTalentButton>>::~vector
            ((vector<HeroPlantTalentButton,std::allocator<HeroPlantTalentButton>> *)(this + 0x30));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x18));
  GameSubSystem::~GameSubSystem((GameSubSystem *)this);
  return;
}


/* HeroPlantTalentSubsystem::~HeroPlantTalentSubsystem() */

void __thiscall HeroPlantTalentSubsystem::~HeroPlantTalentSubsystem(HeroPlantTalentSubsystem *this)

{
  ~HeroPlantTalentSubsystem(this);
  AK::FreeHook(this);
  return;
}


/* HeroPlantTalentSubsystem::setState(HeroPlantTalentSubsystemState) */

void __thiscall HeroPlantTalentSubsystem::setState(HeroPlantTalentSubsystem *this,int param_2)

{
  *(int *)(this + 0x28) = param_2;
  if (param_2 == 2) {
    *(undefined8 *)(this + 0x10) = 0;
    std::vector<HeroPlantTalentButton,std::allocator<HeroPlantTalentButton>>::clear
              ((vector<HeroPlantTalentButton,std::allocator<HeroPlantTalentButton>> *)(this + 0x30))
    ;
    return;
  }
  return;
}


/* HeroPlantTalentSubsystem::onDestroy() */

void __thiscall HeroPlantTalentSubsystem::onDestroy(HeroPlantTalentSubsystem *this)

{
  setState(this,2);
  return;
}


/* HeroPlantTalentSubsystem::CloseHeroPlantTalentPannel() */

void __thiscall HeroPlantTalentSubsystem::CloseHeroPlantTalentPannel(HeroPlantTalentSubsystem *this)

{
  setState(this,0);
  std::vector<HeroPlantTalentButton,std::allocator<HeroPlantTalentButton>>::clear
            ((vector<HeroPlantTalentButton,std::allocator<HeroPlantTalentButton>> *)(this + 0x30));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantTalentSubsystem::drawHeroPlantTalentButtons(Sexy::Graphics*) */

void __thiscall
HeroPlantTalentSubsystem::drawHeroPlantTalentButtons
          (HeroPlantTalentSubsystem *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  int iVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  HeroPlantFramework *pHVar10;
  ulong uVar11;
  HeroPlantTalentButton *this_01;
  Image *pIVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = IsSystemActive(this);
  if (cVar3 != '\0') {
    this_00 = (RtWeakPtr *)(this + 0x18);
    bVar4 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
    if ((bVar4) &&
       (lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00),
       *(long *)(lVar9 + 0xa8) != 0)) {
      lVar9 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
      pHVar10 = Sexy::RtObject::Cast<HeroPlantFramework>(*(RtObject **)(lVar9 + 0xa8));
      if (pHVar10 != (HeroPlantFramework *)0x0) {
        iVar5 = FUN_042b2760(100);
        iVar1 = *(int *)(this + 0x20);
        iVar6 = FUN_042b2760(0x46);
        iVar2 = *(int *)(this + 0x24);
        iVar7 = FUN_042b2760(0xa0);
        Sexy::Insets::Insets((Insets *)&local_38,iVar5 + iVar1,iVar2 - iVar6,iVar7,iVar5);
        uVar14 = *(undefined8 *)(this + 0x30);
        for (uVar13 = 0; uVar11 = FUN_042b2324(uVar14,*(undefined8 *)(this + 0x38)), uVar13 < uVar11
            ; uVar13 = uVar13 + 1) {
          this_01 = (HeroPlantTalentButton *)FUN_042b2344(uVar14,uVar13);
          HeroPlantTalentButton::Draw(this_01,param_1);
          uVar14 = *(undefined8 *)(this + 0x30);
          lVar9 = FUN_042b2344(uVar14,uVar13);
          if ((*(char *)(lVar9 + 0x34) != '\0') && (*(int *)(lVar9 + 0x5c) < *(int *)(lVar9 + 0x60))
             ) {
            pIVar12 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06af5d88);
            Sexy::Graphics::DrawImage(param_1,pIVar12,local_38,local_34,local_30,local_2c);
            lVar9 = FUN_042b2344(*(undefined8 *)(this + 0x30),uVar13);
            HeroPlantFramework::GetTalentName((int)pHVar10,*(int *)(lVar9 + 0x48));
            iVar2 = local_38;
            iVar6 = FUN_042b2760(5);
            iVar5 = local_30;
            iVar1 = iVar6 + local_34;
            iVar7 = FUN_042b2760(10);
            iVar8 = FUN_042b2760(0x1e);
            Sexy::Insets::Insets(aIStack_28,iVar2 + iVar6,iVar1,iVar5 - iVar7,iVar8);
            uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16);
            Sexy::Color::Color(aCStack_18,1);
            WriteWordInRect(param_1,auStack_40,aIStack_28,uVar14,aCStack_18,3,1);
            FUN_05476c50(auStack_40);
            lVar9 = FUN_042b2344(*(undefined8 *)(this + 0x30),uVar13);
            HeroPlantFramework::GetTalentDescription
                      ((int)pHVar10,*(int *)(lVar9 + 0x48),SUB41(*(undefined4 *)(lVar9 + 0x5c),0));
            iVar1 = local_38;
            iVar6 = FUN_042b2760(5);
            iVar2 = local_34;
            iVar7 = FUN_042b2760(0x1e);
            iVar5 = local_30;
            iVar8 = FUN_042b2760(10);
            Sexy::Insets::Insets
                      (aIStack_28,iVar1 + iVar6,iVar2 + iVar7,iVar5 - iVar8,local_2c - iVar7);
            uVar14 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_12);
            Sexy::Color::Color(aCStack_18,1);
            WriteWordInRect(param_1,auStack_40,aIStack_28,uVar14,aCStack_18,0,1);
            FUN_05476c50(auStack_40);
            uVar14 = *(undefined8 *)(this + 0x30);
          }
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HeroPlantTalentSubsystem::RefreshButtons() */

void __thiscall HeroPlantTalentSubsystem::RefreshButtons(HeroPlantTalentSubsystem *this)

{
  HeroPlantTalentButton *this_00;
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  while( true ) {
    uVar3 = *(undefined8 *)(this + 0x30);
    uVar1 = FUN_042b2324(uVar3,*(undefined8 *)(this + 0x38));
    if (uVar1 <= uVar2) break;
    this_00 = (HeroPlantTalentButton *)FUN_042b2344(uVar3,uVar2);
    HeroPlantTalentButton::RefreshInfo(this_00);
    uVar2 = uVar2 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantTalentSubsystem::handleTouch(Sexy::Touch const&) */

void __thiscall HeroPlantTalentSubsystem::handleTouch(HeroPlantTalentSubsystem *this,Touch *param_1)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  long lVar5;
  HeroPlantTalentButton *this_00;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  Touch aTStack_40 [48];
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = IsSystemActive(this);
  if (cVar3 != '\0') {
    cVar3 = Board::IsPlaying(*(Board **)(gLawnApp + 0x9f0));
    if (cVar3 != '\0') {
      uVar7 = 0;
      bVar2 = false;
      Sexy::Touch::Touch(aTStack_40,param_1);
      uVar8 = *(undefined8 *)(this + 0x30);
      lVar5 = FUN_042b2324(uVar8,*(undefined8 *)(this + 0x38));
      if (lVar5 != 0) {
        do {
          this_00 = (HeroPlantTalentButton *)FUN_042b2344(uVar8,uVar7);
          cVar4 = HeroPlantTalentButton::onTouchEvent(this_00,aTStack_40);
          if (cVar4 != '\0') {
            local_10 = 4;
            bVar2 = true;
          }
          uVar8 = *(undefined8 *)(this + 0x30);
          uVar7 = uVar7 + 1;
          uVar6 = FUN_042b2324(uVar8,*(undefined8 *)(this + 0x38));
        } while (uVar7 < uVar6);
      }
      lVar5 = *(long *)(this + 0x10);
      iVar1 = *(int *)(param_1 + 0x30);
      if ((lVar5 == 0) && (iVar1 == 0)) {
        if (bVar2) {
          *(long *)(this + 0x10) = (long)*(int *)param_1;
          goto LAB_042b64d8;
        }
      }
      else if (iVar1 == 3) {
        if (bVar2) {
          *(undefined8 *)(this + 0x10) = 0;
          goto LAB_042b64d8;
        }
        iVar1 = *(int *)param_1;
        *(undefined8 *)(this + 0x10) = 0;
        if (lVar5 != iVar1) {
          clearTouch(this);
          setState(this,2);
          cVar3 = '\0';
          goto LAB_042b64d8;
        }
      }
      else if (iVar1 == 4) {
        cVar3 = '\0';
        setState(this,2);
        goto LAB_042b64d8;
      }
    }
  }
  cVar3 = '\0';
LAB_042b64d8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HeroPlantTalentSubsystem::ShowHeroPlantTalentPannel(Sexy::RtWeakPtr<Plant>) */

void __thiscall
HeroPlantTalentSubsystem::ShowHeroPlantTalentPannel
          (HeroPlantTalentSubsystem *this,RtWeakPtr *param_2)

{
  RtWeakPtr<PowerPropertySheet> *this_00;
  vector<HeroPlantTalentButton,std::allocator<HeroPlantTalentButton>> *this_01;
  int iVar1;
  long lVar2;
  HeroPlantFramework *pHVar3;
  float fVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_148 [8];
  HeroPlantTalentButton aHStack_140 [104];
  HeroPlantTalentButton aHStack_d8 [104];
  RtWeakPtr<Sexy::SoundResource> aRStack_70 [104];
  long local_8;
  
  this_00 = (RtWeakPtr<PowerPropertySheet> *)(this + 0x18);
  local_8 = ___stack_chk_guard;
  this_01 = (vector<HeroPlantTalentButton,std::allocator<HeroPlantTalentButton>> *)(this + 0x30);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=(this_00,param_2);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  fVar4 = (float)FUN_042b2454(*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),
                              *(undefined4 *)(lVar2 + 0x20));
  fVar4 = (float)FUN_042b2740(fVar4 + 15.0);
  *(int *)(this + 0x20) = (int)fVar4;
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  fVar4 = *(float *)(lVar2 + 0x1c);
  FUN_042b2454(*(undefined4 *)(lVar2 + 0x18),fVar4,*(undefined4 *)(lVar2 + 0x20));
  fVar4 = (float)FUN_042b2740(fVar4 - 25.0);
  *(int *)(this + 0x24) = (int)fVar4;
  std::vector<HeroPlantTalentButton,std::allocator<HeroPlantTalentButton>>::clear(this_01);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  if (*(long *)(lVar2 + 0xa8) != 0) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    pHVar3 = Sexy::RtObject::Cast<HeroPlantFramework>(*(RtObject **)(lVar2 + 0xa8));
    if (pHVar3 != (HeroPlantFramework *)0x0) {
      lVar2 = FUN_042b22a4(*(undefined8 *)(pHVar3 + 0x38),*(undefined8 *)(pHVar3 + 0x40));
      if (lVar2 == 3) {
        iVar1 = FUN_042b2760(0x2d);
        HeroPlantTalentButton::HeroPlantTalentButton(aHStack_140);
        HeroPlantTalentButton::Resize
                  (aHStack_140,*(int *)(this + 0x20) - iVar1,*(int *)(this + 0x24) - iVar1,iVar1,
                   iVar1);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_70,(RtWeakPtrBase *)param_2);
        HeroPlantTalentButton::InitButton(aHStack_140,0,aRStack_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70)
        ;
        std::vector<HeroPlantTalentButton,std::allocator<HeroPlantTalentButton>>::push_back
                  (this_01,aHStack_140);
        HeroPlantTalentButton::HeroPlantTalentButton(aHStack_d8);
        HeroPlantTalentButton::Resize
                  (aHStack_d8,*(int *)(this + 0x20),
                   (int)((float)*(int *)(this + 0x24) - (float)iVar1 * 1.7),iVar1,iVar1);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_70,(RtWeakPtrBase *)param_2);
        HeroPlantTalentButton::InitButton(aHStack_d8,1,aRStack_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70)
        ;
        std::vector<HeroPlantTalentButton,std::allocator<HeroPlantTalentButton>>::push_back
                  (this_01,aHStack_d8);
        HeroPlantTalentButton::HeroPlantTalentButton((HeroPlantTalentButton *)aRStack_70);
        HeroPlantTalentButton::Resize
                  ((HeroPlantTalentButton *)aRStack_70,iVar1 + *(int *)(this + 0x20),
                   *(int *)(this + 0x24) - iVar1,iVar1,iVar1);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_148,(RtWeakPtrBase *)param_2);
        HeroPlantTalentButton::InitButton((HeroPlantTalentButton *)aRStack_70,2,aRStack_148);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                  ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_148);
        std::vector<HeroPlantTalentButton,std::allocator<HeroPlantTalentButton>>::push_back
                  (this_01,(HeroPlantTalentButton *)aRStack_70);
        HeroPlantTalentButton::~HeroPlantTalentButton((HeroPlantTalentButton *)aRStack_70);
        HeroPlantTalentButton::~HeroPlantTalentButton(aHStack_d8);
        HeroPlantTalentButton::~HeroPlantTalentButton(aHStack_140);
      }
      setState(this,1);
      goto LAB_042b74f8;
    }
  }
  CloseHeroPlantTalentPannel(this);
LAB_042b74f8:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

