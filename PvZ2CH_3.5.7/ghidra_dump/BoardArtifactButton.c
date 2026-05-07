// Class: BoardArtifactButton


/* BoardArtifactButton::CalcPlusButtonRect() */

void __thiscall BoardArtifactButton::CalcPlusButtonRect(BoardArtifactButton *this)

{
  UIWidget::GetDrawRect();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactButton::StaticClassInit() */

void BoardArtifactButton::StaticClassInit(void)

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
    std::string::string(asStack_10,"BoardArtifactButton");
    (*pcVar2)(plVar1,asStack_10,FUN_04dcd16c,0x1e8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardArtifactButton::StaticGetClass() */

long * BoardArtifactButton::StaticGetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"BoardArtifactButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardArtifactButton::GetClass() const */

long * BoardArtifactButton::GetClass(void)

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
  uVar2 = UIEasyButtonWidget::StaticGetClass();
  (*pcVar3)(plVar1,"BoardArtifactButton",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BoardArtifactButton::~BoardArtifactButton() */

void __thiscall BoardArtifactButton::~BoardArtifactButton(BoardArtifactButton *this)

{
  *(undefined ***)this = &PTR_GetClass_069c3e50;
  *(undefined ***)(this + 0x10) = &PTR__BoardArtifactButton_069c4010;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1e0));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1d8));
  UIEasyButtonWidget::~UIEasyButtonWidget((UIEasyButtonWidget *)this);
  return;
}


/* non-virtual thunk to BoardArtifactButton::~BoardArtifactButton() */

void __thiscall BoardArtifactButton::~BoardArtifactButton(BoardArtifactButton *this)

{
  ~BoardArtifactButton(this + -0x10);
  return;
}


/* BoardArtifactButton::~BoardArtifactButton() */

void __thiscall BoardArtifactButton::~BoardArtifactButton(BoardArtifactButton *this)

{
  ~BoardArtifactButton(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BoardArtifactButton::~BoardArtifactButton() */

void __thiscall BoardArtifactButton::~BoardArtifactButton(BoardArtifactButton *this)

{
  ~BoardArtifactButton(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactButton::InitParam(int) */

void __thiscall BoardArtifactButton::InitParam(BoardArtifactButton *this,int param_1)

{
  int iVar1;
  undefined8 uVar2;
  string *extraout_x1;
  Sexy aSStack_30 [8];
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x1d0) = param_1;
  local_8 = ___stack_chk_guard;
  iVar1 = ArtifactMapper::GetInstance();
  NameMapperBase::GetNameForId(iVar1);
  Sexy::StringToUpper(aSStack_30,extraout_x1);
  uVar2 = FUN_0547429c(asStack_28);
  Sexy::StrFormat("IMAGE_UI_HUD_INGAME_%s",asStack_20,uVar2);
  uVar2 = FUN_0547429c(asStack_28);
  Sexy::StrFormat("IMAGE_UI_HUD_INGAME_%s_DOWN",asStack_18,uVar2);
  LawnApp::GetUIImageFromStringId(gLawnApp);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1d8),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  LawnApp::GetUIImageFromStringId(gLawnApp);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1e0),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  std::string::string((string *)aRStack_10,"IMAGE_UI_HUD_INGAME_POWERUP_CUKE_FRAME");
  UIEasyButtonWidget::SetImageNormal((UIEasyButtonWidget *)this,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  std::string::string((string *)aRStack_10,"Play_UI_Map_Select_Universe_Press");
  DEditorNode::setRootName((string *)this);
  std::string::~string((string *)aRStack_10);
  nop();
  std::string::string((string *)aRStack_10,"Play_UI_Map_Select_Universe_Release");
  UIEasyButtonWidget::SetSoundReleased((string *)this);
  std::string::~string((string *)aRStack_10);
  nop();
  std::string::~string(asStack_18);
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  std::string::~string((string *)aSStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactButton::BoardArtifactButton() */

void __thiscall BoardArtifactButton::BoardArtifactButton(BoardArtifactButton *this)

{
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::UIEasyButtonWidget((UIEasyButtonWidget *)this);
  this[0x1d4] = (BoardArtifactButton)0x0;
  *(undefined ***)this = &PTR_GetClass_069c3e50;
  *(undefined ***)(this + 0x10) = &PTR__BoardArtifactButton_069c4010;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1d8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1e0));
  *(undefined4 *)(this + 0x1d0) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1d8),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x1e0),(RtWeakPtr *)a_Stack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BoardArtifactButton::StaticNew() */

BoardArtifactButton * BoardArtifactButton::StaticNew(void)

{
  BoardArtifactButton *this;
  
  this = ::operator_new(0x1e8);
  BoardArtifactButton(this);
  return this;
}


/* BoardArtifactButton::OnClick() */

void BoardArtifactButton::OnClick(void)

{
  RtWeakPtr<Sexy::ResourceInfo> *this;
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ArtifactMgr *this_00;
  long lVar5;
  
  this_00 = (ArtifactMgr *)Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  if (this_00 != (ArtifactMgr *)0x0) {
    iVar3 = ArtifactMgr::GetActivatedArtifactUsedTime();
    iVar4 = ArtifactMgr::GetActivatedArtifactMaxUsedTime();
    cVar1 = ArtifactMgr::CanTriggerActivatedArtifact();
    if ((iVar3 < iVar4) && (cVar1 != '\0')) {
      this = (RtWeakPtr<Sexy::ResourceInfo> *)(this_00 + 8);
      lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
      bVar2 = std::operator!=((string *)(lVar5 + 0x10),"artifact_magicbeans");
      if (bVar2) {
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
        bVar2 = std::operator!=((string *)(lVar5 + 0x10),"artifact_blackhole");
        if (bVar2) {
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
          bVar2 = std::operator!=((string *)(lVar5 + 0x10),"artifact_meteor");
          if (bVar2) {
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
            bVar2 = std::operator!=((string *)(lVar5 + 0x10),"artifact_evolution");
            if (bVar2) {
              lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
              bVar2 = std::operator!=((string *)(lVar5 + 0x10),"artifact_acid");
              if (bVar2) {
                lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
                bVar2 = std::operator!=((string *)(lVar5 + 0x10),"artifact_silverkey");
                if (bVar2) {
                  lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
                  bVar2 = std::operator!=((string *)(lVar5 + 0x10),"artifact_gravity");
                  if (bVar2) {
                    lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this);
                    bVar2 = std::operator!=((string *)(lVar5 + 0x10),"artifact_hydraulic");
                    if (bVar2) {
                      ArtifactMgr::RequestTriggerArtifact(this_00);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactButton::OnTouch(Sexy::Touch const&) */

void __thiscall BoardArtifactButton::OnTouch(BoardArtifactButton *this,Touch *param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *pRVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  MagicBeansCursor *pMVar9;
  long lVar10;
  MeteorCursor *this_00;
  Board *this_01;
  int local_68;
  int local_64;
  RtWeakPtrBase aRStack_60 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_58 [8];
  TRect<int> aTStack_50 [16];
  Touch aTStack_40 [16];
  Point aPStack_30 [40];
  long local_8;
  
  cVar2 = '\0';
  local_8 = ___stack_chk_guard;
  Sexy::Point::Point((Point *)&local_68,(TPoint *)(param_1 + 0x10));
  local_68 = local_68 + *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x48);
  local_64 = local_64 + *(int *)(*(long *)(gLawnApp + 0x9f0) + 0x4c);
  if (*(int *)(param_1 + 0x30) != 0) goto LAB_04dc990c;
  CalcPlusButtonRect(this);
  cVar2 = Sexy::TRect<int>::Contains(aTStack_50,(TPoint *)&local_68);
  if (cVar2 == '\0') goto LAB_04dc990c;
  lVar8 = Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  iVar6 = ArtifactMgr::GetActivatedArtifactUsedTime();
  iVar7 = ArtifactMgr::GetActivatedArtifactMaxUsedTime();
  if (this[0x1d4] == (BoardArtifactButton)0x0) {
    if (lVar8 == 0) goto LAB_04dc990c;
    cVar3 = ArtifactMgr::CanTriggerActivatedArtifact();
    if ((cVar3 != '\0') && (iVar6 < iVar7)) {
      pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(lVar8 + 8);
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
      bVar4 = std::operator==((string *)(lVar10 + 0x10),"artifact_magicbeans");
      if (!bVar4) {
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        bVar4 = std::operator==((string *)(lVar10 + 0x10),"artifact_blackhole");
        if (!bVar4) {
          lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
          bVar4 = std::operator==((string *)(lVar10 + 0x10),"artifact_silverkey");
          if (!bVar4) {
            lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
            bVar4 = std::operator==((string *)(lVar10 + 0x10),"artifact_evolution");
            if (!bVar4) {
              lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
              bVar4 = std::operator==((string *)(lVar10 + 0x10),"artifact_gravity");
              if (!bVar4) {
                lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
                bVar4 = std::operator==((string *)(lVar10 + 0x10),"artifact_hydraulic");
                if (!bVar4) goto LAB_04dc998c;
              }
            }
          }
        }
      }
      this[0x1d4] = (BoardArtifactButton)0x1;
      MessageRouter::Post((_func_void *)gMessageRouter);
    }
  }
  else if (lVar8 == 0) goto LAB_04dc990c;
LAB_04dc998c:
  iVar6 = ArtifactMgr::GetActivatedArtifactUsedTime();
  iVar7 = ArtifactMgr::GetActivatedArtifactMaxUsedTime();
  cVar3 = ArtifactMgr::CanTriggerActivatedArtifact();
  if (cVar3 == '\0') goto LAB_04dc990c;
  pRVar1 = (RtWeakPtr<Sexy::ResourceInfo> *)(lVar8 + 8);
  if (iVar7 <= iVar6) {
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    bVar4 = std::operator==((string *)(lVar8 + 0x10),"artifact_acid");
    if (!bVar4) goto LAB_04dc990c;
  }
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
  bVar4 = std::operator==((string *)(lVar8 + 0x10),"artifact_magicbeans");
  if (!bVar4) {
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    bVar4 = std::operator==((string *)(lVar8 + 0x10),"artifact_blackhole");
    if (!bVar4) {
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
      bVar4 = std::operator==((string *)(lVar8 + 0x10),"artifact_meteor");
      if (!bVar4) {
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        bVar4 = std::operator==((string *)(lVar8 + 0x10),"artifact_evolution");
        if (!bVar4) {
          lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
          bVar4 = std::operator==((string *)(lVar8 + 0x10),"artifact_silverkey");
          if (!bVar4) {
            lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
            bVar4 = std::operator==((string *)(lVar8 + 0x10),"artifact_acid");
            if (!bVar4) {
              lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
              bVar4 = std::operator==((string *)(lVar8 + 0x10),"artifact_gravity");
              if (!bVar4) {
                lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
                bVar4 = std::operator==((string *)(lVar8 + 0x10),"artifact_hydraulic");
                if (!bVar4) goto LAB_04dc990c;
              }
            }
          }
        }
      }
    }
  }
  Sexy::Touch::Touch(aTStack_40,param_1);
  Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_30);
  lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
  bVar4 = std::operator==((string *)(lVar8 + 0x10),"artifact_magicbeans");
  if (bVar4) {
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,aRStack_60);
    pMVar9 = ::operator_new(0x60);
    MagicBeansCursor::MagicBeansCursor(pMVar9,aTStack_40,aRStack_58);
    bVar4 = false;
LAB_04dc9a8c:
    cVar3 = Board::TryToAddCursor(this_01,(BaseCursor *)pMVar9,bVar4);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  }
  else {
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    bVar5 = std::operator==((string *)(lVar8 + 0x10),"artifact_blackhole");
    if (bVar5) {
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,aRStack_60);
      pMVar9 = ::operator_new(0x50);
      ArtifactBlackholeCursor::ArtifactBlackholeCursor
                ((ArtifactBlackholeCursor *)pMVar9,aTStack_40,aRStack_58);
      goto LAB_04dc9a8c;
    }
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    bVar4 = std::operator==((string *)(lVar8 + 0x10),"artifact_evolution");
    if (bVar4) {
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,aRStack_60);
      pMVar9 = ::operator_new(0x50);
      ArtifactEvolutionCursor::ArtifactEvolutionCursor
                ((ArtifactEvolutionCursor *)pMVar9,aTStack_40,aRStack_58);
      bVar4 = false;
      goto LAB_04dc9a8c;
    }
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    bVar4 = std::operator==((string *)(lVar8 + 0x10),"artifact_gravity");
    if (bVar4) {
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,aRStack_60);
      pMVar9 = ::operator_new(0x50);
      ArtifactGravityCursor::ArtifactGravityCursor
                ((ArtifactGravityCursor *)pMVar9,aTStack_40,aRStack_58);
      bVar4 = false;
      goto LAB_04dc9a8c;
    }
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    bVar4 = std::operator==((string *)(lVar8 + 0x10),"artifact_hydraulic");
    if (bVar4) {
      this_01 = *(Board **)(gLawnApp + 0x9f0);
      ToolPacketData::GetProps();
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,aRStack_60);
      pMVar9 = ::operator_new(0x50);
      ArtifactHydraulicCursor::ArtifactHydraulicCursor
                ((ArtifactHydraulicCursor *)pMVar9,aTStack_40,aRStack_58);
      bVar4 = false;
      goto LAB_04dc9a8c;
    }
    lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
    bVar5 = std::operator==((string *)(lVar8 + 0x10),"artifact_meteor");
    if (!bVar5) {
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
      bVar4 = std::operator==((string *)(lVar8 + 0x10),"artifact_acid");
      if (bVar4) {
        this_01 = *(Board **)(gLawnApp + 0x9f0);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,aRStack_60);
        pMVar9 = ::operator_new(0x50);
        AcidCursor::AcidCursor((AcidCursor *)pMVar9,aTStack_40,aRStack_58);
        bVar4 = bVar5;
      }
      else {
        lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar1);
        bVar5 = std::operator==((string *)(lVar8 + 0x10),"artifact_silverkey");
        if (!bVar5) goto LAB_04dc990c;
        this_01 = *(Board **)(gLawnApp + 0x9f0);
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_58,aRStack_60);
        pMVar9 = ::operator_new(0x50);
        ArtifactSilverKeyCursor::ArtifactSilverKeyCursor
                  ((ArtifactSilverKeyCursor *)pMVar9,aTStack_40,aRStack_58);
      }
      goto LAB_04dc9a8c;
    }
    this_00 = ::operator_new(0x48);
    MeteorCursor::MeteorCursor(this_00,param_1);
    cVar3 = Board::TryToAddCursor(*(Board **)(gLawnApp + 0x9f0),(BaseCursor *)this_00,true);
  }
  if (cVar3 != '\0') {
    (**(code **)(*(long *)this + 0xe8))(this,4);
  }
LAB_04dc990c:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar2);
}


/* BoardArtifactButton::onCursorDestroyed(BaseCursor*) */

void __thiscall
BoardArtifactButton::onCursorDestroyed(BoardArtifactButton *this,BaseCursor *param_1)

{
  BoardArtifactButton BVar1;
  bool bVar2;
  
  if (param_1 != (BaseCursor *)0x0) {
    bVar2 = Sexy::RtObject::IsA<MagicBeansCursor>((RtObject *)param_1);
    if (bVar2) {
      BVar1 = this[0x1d4];
    }
    else {
      bVar2 = Sexy::RtObject::IsA<ArtifactBlackholeCursor>((RtObject *)param_1);
      if (!bVar2) {
        return;
      }
      BVar1 = this[0x1d4];
    }
    if (BVar1 != (BoardArtifactButton)0x0) {
      this[0x1d4] = (BoardArtifactButton)0x0;
    }
    (**(code **)(*(long *)this + 0xe8))(this,2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BoardArtifactButton::Draw(Sexy::Graphics*) */

void __thiscall BoardArtifactButton::Draw(BoardArtifactButton *this,Graphics *param_1)

{
  RtWeakPtr *this_00;
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  float *pfVar9;
  undefined8 uVar10;
  LotteryResultProgressBar *this_01;
  ResourceInfo *pRVar11;
  float fVar12;
  GraphicsAutoState aGStack_38 [8];
  float local_30 [2];
  float local_28 [4];
  undefined4 local_18 [4];
  long local_8;
  
  this_00 = (RtWeakPtr *)(this + 0x1d8);
  local_8 = ___stack_chk_guard;
  UIEasyButtonWidget::Draw((UIEasyButtonWidget *)this,param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool(this_00);
  if (bVar1) {
    iVar3 = FUN_04dc7adc(*(undefined4 *)(this + 0x38));
    this_01 = (LotteryResultProgressBar *)
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(this_01);
    iVar5 = FUN_04dc7e98(0xfffffffb);
    cVar2 = FUN_04dc7aec(this[0x160]);
    if (cVar2 != '\0') {
      this_00 = (RtWeakPtr *)(this + 0x1e0);
    }
    pRVar11 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(this_00);
    Sexy::Graphics::DrawImage(param_1,(Image *)pRVar11,(iVar3 - iVar6) / 2,iVar5);
  }
  lVar8 = Sexy::LazySingleton<ArtifactMgr>::GetInstancePtr();
  if (lVar8 != 0) {
    iVar3 = ArtifactMgr::GetActivatedArtifactUsedTime();
    uVar4 = ArtifactMgr::GetActivatedArtifactMaxUsedTime();
    if (iVar3 < (int)uVar4) {
      fVar12 = (float)ArtifactMgr::GetActivatedArtifactCooldown();
      local_28[0] = (float)ArtifactMgr::GetActivatedArtifactLeftTime();
      local_28[0] = local_28[0] / fVar12;
      local_18[0] = 0x3f800000;
      local_30[0] = 0.0;
      pfVar9 = eastl::max_alt<float>(local_30,local_28);
      pfVar9 = eastl::min_alt<float>((float *)local_18,pfVar9);
      fVar12 = 1.0 - *pfVar9;
      iVar5 = FUN_04dc7adc(*(undefined4 *)(this + 0x38));
      iVar5 = iVar5 / 2;
      iVar6 = FUN_04dc7ae0(*(undefined4 *)(this + 0x3c));
      iVar6 = iVar6 - (iVar6 >> 0x1f);
      iVar7 = FUN_04dc7e98(0x14);
      Sexy::Insets::Insets((Insets *)local_28,0,0,0,100);
      Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,0);
      iVar7 = iVar5 - iVar7;
    }
    else {
      lVar8 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(lVar8 + 8))
      ;
      bVar1 = std::operator==((string *)(lVar8 + 0x10),"artifact_acid");
      fVar12 = 0.0;
      if (bVar1) {
        fVar12 = 100.0;
      }
      iVar5 = FUN_04dc7adc(*(undefined4 *)(this + 0x38));
      iVar5 = iVar5 / 2;
      iVar6 = FUN_04dc7ae0(*(undefined4 *)(this + 0x3c));
      iVar6 = iVar6 - (iVar6 >> 0x1f);
      iVar7 = FUN_04dc7e98(0x14);
      Sexy::Insets::Insets((Insets *)local_28,0,0,0,100);
      Sexy::Insets::Insets((Insets *)local_18,0xff,0xff,0xff,0);
      iVar7 = iVar5 - iVar7;
    }
    DrawRadialCooldown(fVar12,(float)iVar5,(float)(iVar6 >> 1),(float)iVar7,param_1,
                       (Insets *)local_28,(Color *)local_18);
    iVar6 = FUN_04dc7ae0(*(undefined4 *)(this + 0x3c));
    iVar5 = FUN_04dc7e98(0x1e);
    iVar7 = FUN_04dc7adc(*(undefined4 *)(this + 0x38));
    Sexy::Insets::Insets((Insets *)local_28,0,iVar6 - iVar5,iVar7,iVar5);
    Sexy::StrFormat(L"%d  /  %d",local_30,(ulong)(uVar4 - iVar3),(ulong)uVar4);
    uVar10 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline);
    Sexy::Color::Color((Color *)local_18,1);
    WriteWordInRect(param_1,local_30,(Insets *)local_28,uVar10,(Color *)local_18,5,1);
    FUN_05476c50(local_30);
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to BoardArtifactButton::Draw(Sexy::Graphics*) */

void __thiscall BoardArtifactButton::Draw(BoardArtifactButton *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* BoardArtifactButton::registerForEvents() */

void __thiscall BoardArtifactButton::registerForEvents(BoardArtifactButton *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x1a8);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<BaseCursor*,Sexy::CBMemberTranslatorX<BoardArtifactButton,void(BoardArtifactButton::*)(BaseCursor*)>>
            ((MessageRouter *)puVar1,Message::CursorDestroyed,&local_40);
  return;
}


/* BoardArtifactButton::updateButtonStates(int, int, bool) */

void __thiscall
BoardArtifactButton::updateButtonStates
          (BoardArtifactButton *this,int param_1,int param_2,bool param_3)

{
  char cVar1;
  string *psVar2;
  
  cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2);
  if (cVar1 == '\0') {
    FUN_04dc7ae4(this + 0x160);
  }
  else {
    cVar1 = FUN_04dc7aec(this[0x160]);
    if (cVar1 == '\0') {
      psVar2 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(psVar2,this + 0x198);
      FUN_04dc7ae4(this + 0x160,param_3);
    }
  }
  if ((!param_3) &&
     (cVar1 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2), cVar1 != '\0')) {
    if (this[0x1a8] == (BoardArtifactButton)0x0) {
      psVar2 = (string *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
      AudioMgr::SendEvent(psVar2,this + 0x1a0);
    }
    (**(code **)(*(long *)this + 0x198))(this);
    return;
  }
  return;
}

