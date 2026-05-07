// Class: UniverseUnlockGate


/* UniverseUnlockGate::SetIsSelected(bool) */

void __thiscall UniverseUnlockGate::SetIsSelected(UniverseUnlockGate *this,bool param_1)

{
  this[0x110] = (UniverseUnlockGate)param_1;
  return;
}


/* UniverseUnlockGate::Draw(Sexy::Graphics*) */

void __thiscall UniverseUnlockGate::Draw(UniverseUnlockGate *this,Graphics *param_1)

{
  if (*(StandaloneEffect **)(this + 0x108) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0x108),param_1);
    return;
  }
  return;
}


/* UniverseUnlockGate::Update() */

void __thiscall UniverseUnlockGate::Update(UniverseUnlockGate *this)

{
  if (*(StandaloneEffect **)(this + 0x108) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0x108));
    return;
  }
  return;
}


/* UniverseUnlockGate::OnCloseDialog() */

void UniverseUnlockGate::OnCloseDialog(void)

{
  LawnApp::KillPVZ2Dialog(gLawnApp);
  return;
}


/* UniverseUnlockGate::IsSelected() */

UniverseUnlockGate __thiscall UniverseUnlockGate::IsSelected(UniverseUnlockGate *this)

{
  return this[0x110];
}


/* UniverseUnlockGate::GetWorldNum(bool) */

void __thiscall UniverseUnlockGate::GetWorldNum(UniverseUnlockGate *this,bool param_1)

{
  if (!param_1) {
    FUN_044ed2d8(*(undefined8 *)(this + 0xf0),*(undefined8 *)(this + 0xf8));
    return;
  }
  FUN_044ed2d8(*(undefined8 *)(this + 0xd8),*(undefined8 *)(this + 0xe0));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseUnlockGate::SetGateStatus(GateStatus) */

void __thiscall UniverseUnlockGate::SetGateStatus(UniverseUnlockGate *this,int param_2)

{
  char cVar1;
  int iVar2;
  string *psVar3;
  ulong uVar4;
  undefined1 *__n;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  __n = auStack_18;
  local_8 = ___stack_chk_guard;
  *(int *)(this + 0x118) = param_2;
  std::string::string(asStack_10,"");
  nop();
  iVar2 = GetWorldNum(this,true);
  if (iVar2 == 0) {
    if (param_2 == 0) {
LAB_044ed414:
      std::string::append(asStack_10,"idle_1",(size_t)__n);
    }
    else if (param_2 == 1) {
LAB_044ed590:
      std::string::append(asStack_10,"light_1",(size_t)__n);
    }
    else {
LAB_044ed4cc:
      std::string::append(asStack_10,"idle_1_2",(size_t)__n);
LAB_044ed4a4:
      if (param_2 == 2) {
        PVZ_EOT();
        Effect_PopAnim::PlayLoopingAnimation(*(Effect_PopAnim **)(this + 0x108),asStack_10,0);
        goto LAB_044ed454;
      }
    }
  }
  else if (param_2 == 0) {
    if (iVar2 == 1) goto LAB_044ed414;
    if (iVar2 == 2) {
      std::string::append(asStack_10,"idle_2",(size_t)__n);
    }
    else if (iVar2 == 3) {
      std::string::append(asStack_10,"idle_3",(size_t)__n);
    }
  }
  else {
    if (param_2 != 1) {
      if (iVar2 == 1) goto LAB_044ed4cc;
      if (iVar2 == 2) {
        std::string::append(asStack_10,"idle_2_2",(size_t)__n);
      }
      else if (iVar2 == 3) {
        std::string::append(asStack_10,"idle_3_2",(size_t)__n);
      }
      goto LAB_044ed4a4;
    }
    if (iVar2 == 1) goto LAB_044ed590;
    if (iVar2 == 2) {
      std::string::append(asStack_10,"light_2_1",(size_t)__n);
    }
    else if (iVar2 == 3) {
      iVar2 = 0;
      std::string::append(asStack_10,"light_3_1",(size_t)__n);
      uVar5 = 0;
      while( true ) {
        uVar6 = *(undefined8 *)(this + 0xd8);
        uVar4 = FUN_044ed2d8(uVar6,*(undefined8 *)(this + 0xe0));
        if (uVar4 <= uVar5) break;
        uVar4 = uVar5 + 1;
        psVar3 = (string *)FUN_044ed2e4(uVar6,uVar5);
        cVar1 = UniverseMap::HasFinishedTargetWorld(psVar3);
        uVar5 = uVar4;
        if (cVar1 != '\0') {
          iVar2 = iVar2 + 1;
        }
      }
      if (1 < iVar2) {
        std::string::append(asStack_10,"light_3_2",(size_t)__n);
      }
    }
  }
  Effect_PopAnim::PlaySingleAnimation(*(Effect_PopAnim **)(this + 0x108),asStack_10,0);
LAB_044ed454:
  std::string::~string(asStack_10);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* UniverseUnlockGate::HasTargetWorld(bool, std::string const&) */

char __thiscall
UniverseUnlockGate::HasTargetWorld(UniverseUnlockGate *this,bool param_1,string *param_2)

{
  char cVar1;
  long lVar2;
  string *psVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_1) {
    uVar5 = *(undefined8 *)(this + 0xd8);
    lVar2 = FUN_044ed2d8(uVar5,*(undefined8 *)(this + 0xe0));
    lVar4 = 0;
    do {
      if (lVar4 == lVar2) {
        return '\0';
      }
      psVar3 = (string *)FUN_044ed2e4(uVar5,lVar4);
      cVar1 = std::operator==(param_2,psVar3);
      lVar4 = lVar4 + 1;
    } while (cVar1 == '\0');
  }
  else {
    uVar5 = *(undefined8 *)(this + 0xf0);
    lVar2 = FUN_044ed2d8(uVar5,*(undefined8 *)(this + 0xf8));
    lVar4 = 0;
    do {
      if (lVar4 == lVar2) {
        return '\0';
      }
      psVar3 = (string *)FUN_044ed2e4(uVar5,lVar4);
      cVar1 = std::operator==(param_2,psVar3);
      lVar4 = lVar4 + 1;
    } while (cVar1 == '\0');
  }
  return cVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseUnlockGate::MouseUp(int, int, int) */

void UniverseUnlockGate::MouseUp(int param_1,int param_2,int param_3)

{
  LawnApp *this;
  char cVar1;
  TextureInfo *this_00;
  PVZ2UIDialog *pPVar2;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  wstring awStack_58 [8];
  wstring awStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  this_00 = (TextureInfo *)(ulong)(uint)param_1;
  local_8 = ___stack_chk_guard;
  cVar1 = EA::Text::GlyphCache_Memory::EndUpdate(this_00);
  if ((cVar1 != '\0') &&
     (SetIsSelected((UniverseUnlockGate *)this_00,true), this = gLawnApp,
     *(int *)(this_00 + 0x118) < 2)) {
    FUN_05478178(awStack_58,L"[GATE_NOT_ACTIVATED]",auStack_68);
    FUN_05478178(awStack_50,L"[GATE_NOT_ACTIVATED_TEXT]",auStack_60);
    pPVar2 = (PVZ2UIDialog *)LawnApp::ShowPVZ2Dialog(this,awStack_58,awStack_50);
    FUN_05476c50(awStack_50);
    nop();
    FUN_05476c50(awStack_58);
    nop();
    FUN_05478178(awStack_58,L"[BUTTON_OK]",auStack_60);
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this_00,OnCloseDialog);
    Sexy::Delegate0::Delegate0<UniverseUnlockGate,void(UniverseUnlockGate::*)()>
              (aDStack_38,awStack_50);
    PVZ2UIDialog::AddButton(pPVar2,awStack_58,aDStack_38,1);
    FUN_05476c50(awStack_58);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniverseUnlockGate::UniverseUnlockGate(GateLevel, int, int) */

void __thiscall
UniverseUnlockGate::UniverseUnlockGate
          (UniverseUnlockGate *this,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  Effect_PopAnim *this_00;
  ResourceInfo *pRVar3;
  long *plVar4;
  StandaloneEffect *this_01;
  RtWeakPtr aRStack_20 [8];
  string asStack_18 [8];
  int local_10;
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06856610;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  this[0x110] = (UniverseUnlockGate)0x0;
  *(undefined4 *)(this + 0x114) = param_2;
  this_00 = GameObject::CreateOutsideTable<Effect_PopAnim>();
  *(Effect_PopAnim **)(this + 0x108) = this_00;
  std::string::string(asStack_18,"POPANIM_EFFECTS_UNIVERSE_GATE");
  GetPAMByName(asStack_18);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this_00,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  std::string::~string(asStack_18);
  nop();
  if (*(Effect_PopAnim **)(this + 0x108) != (Effect_PopAnim *)0x0) {
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0x108),true);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0x108),true);
    Sexy::Insets::Insets((Insets *)asStack_18);
    plVar4 = (long *)UIWidget::GetAtlasImage(*(UIWidget **)(this + 0x108));
    (**(code **)(*plVar4 + 0x90))(plVar4,asStack_18);
    iVar1 = FUN_044ed354(0x24);
    iVar2 = FUN_044ed354(0x50);
    Sexy::Widget::Resize((Widget *)this,param_3,param_4,local_10 + iVar1,local_c + iVar2);
    this_01 = *(StandaloneEffect **)(this + 0x108);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)aRStack_20,(float)(*(int *)(this + 0x50) / 2),
               (float)(*(int *)(this + 0x54) / 2));
    StandaloneEffect::SetScreenSpaceOrigin(this_01,(SexyVector2 *)aRStack_20,900000);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UniverseUnlockGate::~UniverseUnlockGate() */

void __thiscall UniverseUnlockGate::~UniverseUnlockGate(UniverseUnlockGate *this)

{
  *(undefined ***)this = &PTR_GetClass_06856610;
  if (*(long **)(this + 0x108) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x108) + 0x18))();
    *(undefined8 *)(this + 0x108) = 0;
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xf0));
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* UniverseUnlockGate::~UniverseUnlockGate() */

void __thiscall UniverseUnlockGate::~UniverseUnlockGate(UniverseUnlockGate *this)

{
  ~UniverseUnlockGate(this);
  AK::FreeHook(this);
  return;
}


/* UniverseUnlockGate::AddRequiredWorld(std::string const&) */

void __thiscall UniverseUnlockGate::AddRequiredWorld(UniverseUnlockGate *this,string *param_1)

{
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xd8),param_1);
  return;
}


/* UniverseUnlockGate::AddUnlockedWorld(std::string const&) */

void __thiscall UniverseUnlockGate::AddUnlockedWorld(UniverseUnlockGate *this,string *param_1)

{
  std::vector<std::string,std::allocator<std::string>>::push_back
            ((vector<std::string,std::allocator<std::string>> *)(this + 0xf0),param_1);
  return;
}

