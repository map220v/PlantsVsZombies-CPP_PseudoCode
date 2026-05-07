// Class: ChallengeUI


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeUI::StaticClassInit() */

void ChallengeUI::StaticClassInit(void)

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
    std::string::string(asStack_10,"ChallengeUI");
    (*pcVar2)(plVar1,asStack_10,FUN_03bbf7e0,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeUI::StaticGetClass() */

long * ChallengeUI::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ChallengeUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChallengeUI::GetClass() const */

long * ChallengeUI::GetClass(void)

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
  (*pcVar3)(plVar1,"ChallengeUI",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ChallengeUI::~ChallengeUI() */

void __thiscall ChallengeUI::~ChallengeUI(ChallengeUI *this)

{
  *(undefined ***)this = &PTR_GetClass_06738dd0;
  *(undefined ***)(this + 0x10) = &PTR__ChallengeUI_06738f80;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
  UIWidget::~UIWidget((UIWidget *)this);
  return;
}


/* non-virtual thunk to ChallengeUI::~ChallengeUI() */

void __thiscall ChallengeUI::~ChallengeUI(ChallengeUI *this)

{
  ~ChallengeUI(this + -0x10);
  return;
}


/* ChallengeUI::~ChallengeUI() */

void __thiscall ChallengeUI::~ChallengeUI(ChallengeUI *this)

{
  ~ChallengeUI(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ChallengeUI::~ChallengeUI() */

void __thiscall ChallengeUI::~ChallengeUI(ChallengeUI *this)

{
  ~ChallengeUI(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeUI::ChallengeUI() */

void __thiscall ChallengeUI::ChallengeUI(ChallengeUI *this)

{
  long lVar1;
  _func_void *extraout_x1;
  undefined4 uVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::UIWidget((UIWidget *)this);
  *(undefined ***)this = &PTR_GetClass_06738dd0;
  *(undefined ***)(this + 0x10) = &PTR__ChallengeUI_06738f80;
  Sexy::Point::Point((Point *)(this + 0x164));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x178));
  Sexy::Color::Color((Color *)(this + 0x184));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198));
  Sexy::Point::Point((Point *)&local_18);
  *(undefined8 *)(this + 0x164) = local_18;
  this[0x1a4] = (ChallengeUI)0x1;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  Sexy::Color::Color((Color *)&local_18,1);
  *(undefined8 *)(this + 0x184) = local_18;
  *(undefined8 *)(this + 0x18c) = uStack_10;
  std::__exception_ptr::exception_ptr::exception_ptr((exception_ptr *)&local_18,extraout_x1);
  Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
            ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x198),(RtId *)&local_18);
  Sexy::RtId::~RtId((RtId *)&local_18);
  uVar2 = PVZ_EOT();
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x1a0) = uVar2;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeUI::StaticNew() */

ChallengeUI * ChallengeUI::StaticNew(void)

{
  ChallengeUI *this;
  
  this = ::operator_new(0x1a8);
  ChallengeUI(this);
  return this;
}


/* ChallengeUI::FadeWithoutFailing() */

void __thiscall ChallengeUI::FadeWithoutFailing(ChallengeUI *this)

{
  undefined4 uVar1;
  
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0x1a0) = uVar1;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeUI::SetSuccess(Tribool) */

void __thiscall ChallengeUI::SetSuccess(ChallengeUI *this,int param_2)

{
  undefined4 uVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((*(int *)(this + 0x180) != param_2) && (*(int *)(this + 0x180) != 1)) {
    *(int *)(this + 0x180) = param_2;
    if (param_2 == 1) {
      Sexy::Color::Color((Color *)&local_18,2);
      *(undefined8 *)(this + 0x184) = local_18;
      *(undefined8 *)(this + 0x18c) = uStack_10;
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06acdf88);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x198),(RtWeakPtr *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
      uVar1 = PVZ_T();
      *(undefined4 *)(this + 0x1a0) = uVar1;
    }
    else if (param_2 == 2) {
      Sexy::Color::Color((Color *)&local_18,5);
      *(undefined8 *)(this + 0x184) = local_18;
      *(undefined8 *)(this + 0x18c) = uStack_10;
      CachedUIResourcePtr::operator_cast_to_RtWeakPtr((CachedUIResourcePtr *)&DAT_06acdfb0);
      Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                ((RtWeakPtr<PowerPropertySheet> *)(this + 0x198),(RtWeakPtr *)&local_18);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    }
    else if (param_2 == 0) {
      Sexy::Color::Color((Color *)&local_18,1);
      *(undefined8 *)(this + 0x184) = local_18;
      *(undefined8 *)(this + 0x18c) = uStack_10;
      std::__exception_ptr::exception_ptr::exception_ptr
                ((exception_ptr *)&local_18,(_func_void *)(this + 0x184));
      Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
                ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x198),(RtId *)&local_18);
      Sexy::RtId::~RtId((RtId *)&local_18);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ChallengeUI::SetFailTime(float) */

void __thiscall ChallengeUI::SetFailTime(ChallengeUI *this,float param_1)

{
  float fVar1;
  
  SetSuccess(this,1);
  fVar1 = (float)PVZ_EOT();
  if (*(float *)(this + 0x1a0) < fVar1) {
    *(float *)(this + 0x1a0) = param_1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ChallengeUI::Draw(Sexy::Graphics*) */

void __thiscall ChallengeUI::Draw(ChallengeUI *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  long lVar7;
  ResourceInfo *pRVar8;
  Image *pIVar9;
  LotteryResultProgressBar *this_01;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float local_4c;
  GraphicsAutoState aGStack_48 [8];
  undefined1 auStack_40 [8];
  Color aCStack_38 [16];
  undefined4 local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_48,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  fVar12 = *(float *)(this + 0x1a0);
  fVar11 = (float)PVZ_T();
  local_4c = (fVar12 - fVar11) * 0.2 + 1.0;
  local_28[0] = 0;
  pfVar6 = eastl::max_alt<float>(&local_4c,(float *)local_28);
  local_18[0] = 0x3f800000;
  pfVar6 = eastl::min_alt<float>(pfVar6,(float *)local_18);
  local_4c = *pfVar6;
  fVar11 = local_4c * 255.0;
  Sexy::Color::Color(aCStack_38,0xffffff,(int)fVar11);
  Sexy::Graphics::SetColor(param_1,aCStack_38);
  Sexy::Graphics::SetColorizeImages(param_1,true);
  if (this[0x1a4] != (ChallengeUI)0x0) {
    iVar5 = FUN_03bbf2c0(*(undefined4 *)(this + 0x38));
    iVar2 = FUN_03bbf2c4(*(undefined4 *)(this + 0x3c));
    Sexy::Insets::Insets((Insets *)local_18,0,0,iVar5,iVar2);
    pIVar9 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06acdf50);
    Sexy::Graphics::DrawImageBox(param_1,(TRect *)local_18,pIVar9);
  }
  this_00 = (RtWeakPtr *)(this + 0x178);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    iVar5 = FUN_03bbf348(*(undefined4 *)(this + 0x164));
    iVar2 = FUN_03bbf348(*(undefined4 *)(this + 0x168));
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar8,iVar5,iVar2);
  }
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x198));
  if (bVar1) {
    pRVar8 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x198));
    iVar5 = FUN_03bbf348(0xfffffffb);
    iVar2 = FUN_03bbf348(0xf);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar8,iVar5,iVar2);
  }
  if (0 < (int)fVar11) {
    (**(code **)(*(long *)this + 400))(auStack_40,this);
    lVar7 = FUN_054765c4(auStack_40);
    if (lVar7 != 0) {
      iVar5 = 0;
      bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
      if (bVar1) {
        this_01 = (LotteryResultProgressBar *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00)
        ;
        iVar5 = LotteryResultProgressBar::GetCurrentLevel(this_01);
      }
      iVar2 = FUN_03bbf348(*(int *)(this + 0x164) + *(int *)(this + 0x16c));
      iVar3 = FUN_03bbf2c0(*(undefined4 *)(this + 0x38));
      iVar4 = FUN_03bbf2c4(*(undefined4 *)(this + 0x3c));
      Sexy::Insets::Insets((Insets *)local_28,iVar2 + iVar5,0,iVar3 - (iVar2 + iVar5),iVar4);
      uVar10 = *(undefined8 *)(this + 0x170);
      Sexy::Color::operator*((Color *)(this + 0x184),aCStack_38);
      WriteWordInRect(param_1,auStack_40,(Insets *)local_28,uVar10,(Insets *)local_18,3,1);
    }
    FUN_05476c50(auStack_40);
  }
  (**(code **)(*(long *)this + 0x198))(this,param_1);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_48);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to ChallengeUI::Draw(Sexy::Graphics*) */

void __thiscall ChallengeUI::Draw(ChallengeUI *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* ChallengeUI::SetIconOffset(Sexy::Point const&) */

void __thiscall ChallengeUI::SetIconOffset(ChallengeUI *this,Point *param_1)

{
  *(undefined8 *)(this + 0x164) = *(undefined8 *)param_1;
  return;
}

