// Class: UIPlayerSurvey


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayerSurvey::GetLayoutName() */

void __thiscall UIPlayerSurvey::GetLayoutName(UIPlayerSurvey *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPlayerSurveyNew");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIPlayerSurvey::FillAnswer(int, int) */

void __thiscall UIPlayerSurvey::FillAnswer(UIPlayerSurvey *this,int param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  int *piVar3;
  
  uVar1 = m_surveyAnswers;
  iVar2 = FUN_039be7e0(m_surveyAnswers,DAT_06ac0590);
  if ((param_1 < iVar2) && (-1 < param_1)) {
    piVar3 = (int *)FUN_039be834(uVar1,(long)param_1);
    *piVar3 = param_2 + 1;
  }
  return;
}


/* UIPlayerSurvey::CheckValid(int) */

bool __thiscall UIPlayerSurvey::CheckValid(UIPlayerSurvey *this,int param_1)

{
  if (-1 < param_1) {
    return param_1 < *(int *)(this + 0x178);
  }
  return false;
}


/* UIPlayerSurvey::Inc_Index() */

void __thiscall UIPlayerSurvey::Inc_Index(UIPlayerSurvey *this)

{
  ClampInt(*(int *)(this + 0x158) + 1,0,*(int *)(this + 0x178) + -1);
  return;
}


/* UIPlayerSurvey::Dec_Index() */

void __thiscall UIPlayerSurvey::Dec_Index(UIPlayerSurvey *this)

{
  ClampInt(*(int *)(this + 0x158) + -1,0,*(int *)(this + 0x178) + -1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayerSurvey::InitBtns() */

void __thiscall UIPlayerSurvey::InitBtns(UIPlayerSurvey *this)

{
  PVZ2UIButton *pPVar1;
  long *plVar2;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_10,"UIButton_GoPrev");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  *(PVZ2UIButton **)(this + 0x160) = pPVar1;
  std::string::~string(asStack_10);
  nop();
  plVar2 = *(long **)(this + 0x160);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,1);
    (**(code **)(**(long **)(this + 0x160) + 0x188))(*(long **)(this + 0x160),1);
  }
  std::string::string(asStack_10,"UIButton_GoNext");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  *(PVZ2UIButton **)(this + 0x168) = pPVar1;
  std::string::~string(asStack_10);
  nop();
  plVar2 = *(long **)(this + 0x168);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,1);
    (**(code **)(**(long **)(this + 0x168) + 0x188))(*(long **)(this + 0x168),0);
  }
  std::string::string(asStack_10,"UIButton_Commit");
  pPVar1 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  *(PVZ2UIButton **)(this + 0x170) = pPVar1;
  std::string::~string(asStack_10);
  nop();
  plVar2 = *(long **)(this + 0x170);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,0);
    (**(code **)(**(long **)(this + 0x170) + 0x188))(*(long **)(this + 0x170),0);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPlayerSurvey::UIPlayerSurvey() */

void __thiscall UIPlayerSurvey::UIPlayerSurvey(UIPlayerSurvey *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UIPlayerSurvey>::UISingletonDialog((UISingletonDialog<UIPlayerSurvey> *)this);
  *(undefined ***)this = &PTR_GetClass_066eb300;
  *(undefined **)(this + 0xd8) = &DAT_066eb650;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x138));
  FUN_05476574(this + 0x150);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x180));
  FUN_054772c4(this + 0x150,&DAT_056f11a8);
  *(undefined4 *)(this + 0x158) = 0xffffffff;
  std::vector<PlayerSurveySelectBox*,std::allocator<PlayerSurveySelectBox*>>::clear
            ((vector<PlayerSurveySelectBox*,std::allocator<PlayerSurveySelectBox*>> *)(this + 0x138)
            );
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifySelectBoxSelected);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<UIPlayerSurvey,void(UIPlayerSurvey::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifySelectBoxSelected,&local_40);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayerSurvey::IsAnswersValid() */

void UIPlayerSurvey::IsAnswersValid(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)&m_surveyAnswers);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 *)&m_surveyAnswers);
  local_10 = (ulong)local_10._4_4_ << 0x20;
  local_18 = std::find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
                       (uVar2,uVar3,(__normal_iterator *)&local_10);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&m_surveyAnswers);
  bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar1);
}


/* UIPlayerSurvey::UpdateBtns() */

void __thiscall UIPlayerSurvey::UpdateBtns(UIPlayerSurvey *this)

{
  byte bVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (*(int *)(this + 0x158) < 1) {
    uVar3 = 1;
    bVar1 = 0;
    uVar5 = 0;
    uVar4 = 0;
  }
  else if (*(int *)(this + 0x158) < *(int *)(this + 0x178) + -1) {
    bVar1 = 0;
    uVar3 = 1;
    uVar5 = 0;
    uVar4 = 1;
  }
  else {
    uVar5 = 1;
    bVar1 = IsAnswersValid();
    uVar3 = 0;
    uVar4 = 1;
  }
  plVar2 = *(long **)(this + 0x160);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,1);
    (**(code **)(**(long **)(this + 0x160) + 0x188))(*(long **)(this + 0x160),uVar4 ^ 1);
  }
  plVar2 = *(long **)(this + 0x168);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,uVar3);
    (**(code **)(**(long **)(this + 0x168) + 0x188))(*(long **)(this + 0x168),uVar3 ^ 1);
  }
  plVar2 = *(long **)(this + 0x170);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x158))(plVar2,uVar5);
    (**(code **)(**(long **)(this + 0x170) + 0x188))(*(long **)(this + 0x170),bVar1 ^ 1);
  }
  return;
}


/* UIPlayerSurvey::onNotifySelectBoxSelected(int) */

void __thiscall UIPlayerSurvey::onNotifySelectBoxSelected(UIPlayerSurvey *this,int param_1)

{
  long lVar1;
  
  FillAnswer(this,*(int *)(this + 0x158),param_1);
  lVar1 = FUN_039be7e0(m_surveyAnswers,DAT_06ac0590);
  if ((ulong)(long)*(int *)(this + 0x158) < lVar1 - 1U) {
    return;
  }
  UpdateBtns(this);
  return;
}


/* UIPlayerSurvey::~UIPlayerSurvey() */

void __thiscall UIPlayerSurvey::~UIPlayerSurvey(UIPlayerSurvey *this)

{
  *(undefined ***)this = &PTR_GetClass_066eb300;
  *(undefined **)(this + 0xd8) = &DAT_066eb650;
  std::vector<PlayerSurveySelectBox*,std::allocator<PlayerSurveySelectBox*>>::clear
            ((vector<PlayerSurveySelectBox*,std::allocator<PlayerSurveySelectBox*>> *)(this + 0x138)
            );
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<PlayerSurveyStringData,std::allocator<PlayerSurveyStringData>>::~vector
            ((vector<PlayerSurveyStringData,std::allocator<PlayerSurveyStringData>> *)(this + 0x180)
            );
  FUN_05476c50(this + 0x150);
  std::vector<PlayerSurveySelectBox*,std::allocator<PlayerSurveySelectBox*>>::~vector
            ((vector<PlayerSurveySelectBox*,std::allocator<PlayerSurveySelectBox*>> *)(this + 0x138)
            );
  UISingletonDialog<UIPlayerSurvey>::~UISingletonDialog((UISingletonDialog<UIPlayerSurvey> *)this);
  return;
}


/* UIPlayerSurvey::~UIPlayerSurvey() */

void __thiscall UIPlayerSurvey::~UIPlayerSurvey(UIPlayerSurvey *this)

{
  ~UIPlayerSurvey(this);
  AK::FreeHook(this);
  return;
}


/* UIPlayerSurvey::SetQuestionStrList(std::vector<PlayerSurveyStringData,
   std::allocator<PlayerSurveyStringData> >) */

void __thiscall
UIPlayerSurvey::SetQuestionStrList
          (UIPlayerSurvey *this,
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(param_2);
  uVar2 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(param_2);
  std::vector<PlayerSurveyStringData,std::allocator<PlayerSurveyStringData>>::
  assign<__gnu_cxx::__normal_iterator<PlayerSurveyStringData*,std::vector<PlayerSurveyStringData,std::allocator<PlayerSurveyStringData>>>,void>
            ((vector<PlayerSurveyStringData,std::allocator<PlayerSurveyStringData>> *)(this + 0x180)
             ,uVar1,uVar2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayerSurvey::CreateQuestion(int) */

void __thiscall UIPlayerSurvey::CreateQuestion(UIPlayerSurvey *this,int param_1)

{
  vector<PlayerSurveySelectBox*,std::allocator<PlayerSurveySelectBox*>> *this_00;
  wstring *pwVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long *plVar10;
  UIWidgetText *pUVar11;
  ulong uVar12;
  ulong uVar13;
  LogCacheInfo *pLVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  undefined4 *puVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  PlayerSurveySelectBox *pPVar22;
  string *extraout_x1;
  string *extraout_x1_00;
  uint uVar23;
  int iVar24;
  undefined8 uVar25;
  wstring *pwVar26;
  int iVar27;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  PlayerSurveySelectBox *local_48;
  undefined8 local_40;
  string asStack_38 [8];
  Sexy aSStack_30 [8];
  wstring awStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar3 = CheckValid(this,param_1);
  if ((cVar3 != '\0') && (*(int *)(this + 0x158) != param_1)) {
    std::string::string(asStack_38,"Background_0");
    plVar10 = (long *)UI::Dialog::GetWidget((Dialog *)this,asStack_38);
    std::string::~string(asStack_38);
    nop();
    std::string::string(asStack_38,"UIText_Question");
    pUVar11 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_38);
    std::string::~string(asStack_38);
    nop();
    if (-1 < param_1) {
      uVar12 = (ulong)param_1;
      uVar25 = *(undefined8 *)(this + 0x180);
      uVar13 = FUN_039be7f0(uVar25,*(undefined8 *)(this + 0x188));
      if (uVar12 < uVar13) {
        pLVar14 = (LogCacheInfo *)FUN_039be818(uVar25,uVar12);
        LogCacheInfo::LogCacheInfo((LogCacheInfo *)asStack_38,pLVar14);
        Sexy::UTF8StringToWString((Sexy *)asStack_38,extraout_x1);
        FUN_054766c8(this + 0x150,(__normal_iterator *)&local_40);
        FUN_05476c50((__normal_iterator *)&local_40);
        PuzzleTip::SetTip(pUVar11,this + 0x150);
        Sexy::UTF8StringToWString(aSStack_30,extraout_x1_00);
        uVar25 = *(undefined8 *)(this + 0x138);
        for (uVar13 = 0; uVar15 = FUN_039be820(uVar25,*(undefined8 *)(this + 0x140)),
            uVar13 < uVar15; uVar13 = uVar13 + 1) {
          puVar16 = (undefined8 *)FUN_039be82c(uVar25,uVar13);
          (**(code **)(*plVar10 + 0x68))(plVar10,*puVar16);
          uVar25 = *(undefined8 *)(this + 0x138);
          plVar17 = (long *)FUN_039be82c(uVar25,uVar13);
          if ((long *)*plVar17 != (long *)0x0) {
            (**(code **)(*(long *)*plVar17 + 0x18))();
            puVar16 = (undefined8 *)FUN_039be82c(*(undefined8 *)(this + 0x138),uVar13);
            *puVar16 = 0;
            uVar25 = *(undefined8 *)(this + 0x138);
          }
        }
        this_00 = (vector<PlayerSurveySelectBox*,std::allocator<PlayerSurveySelectBox*>> *)
                  (this + 0x138);
        std::vector<PlayerSurveySelectBox*,std::allocator<PlayerSurveySelectBox*>>::clear(this_00);
        pwVar26 = awStack_28;
        do {
          pwVar1 = pwVar26 + 8;
          FUN_05476574(pwVar26);
          pwVar26 = pwVar1;
        } while (pwVar1 != (wstring *)&local_8);
        iVar24 = 0;
        pwVar26 = awStack_28;
        lVar21 = 0;
        do {
          lVar20 = FUN_054767dc(auStack_58,&DAT_0570f650,lVar21);
          if (lVar20 == -1) {
            lVar20 = FUN_054765c4(auStack_58);
            FUN_05477da4((__normal_iterator *)&local_40,auStack_58,lVar21,lVar20 - lVar21);
            FUN_054766c8(awStack_28 + (long)iVar24 * 8,(__normal_iterator *)&local_40);
            FUN_05476c50((__normal_iterator *)&local_40);
            break;
          }
          iVar24 = iVar24 + 1;
          FUN_05477da4((__normal_iterator *)&local_40,auStack_58,lVar21,lVar20 - lVar21);
          FUN_054766c8(pwVar26,(__normal_iterator *)&local_40);
          FUN_05476c50((__normal_iterator *)&local_40);
          pwVar26 = pwVar26 + 8;
          lVar21 = lVar20 + 1;
        } while (iVar24 != 4);
        uVar23 = 0;
        iVar5 = FUN_039bef7c(0x108);
        iVar6 = FUN_039bef7c(0x46);
        iVar7 = FUN_039bef7c(0x28);
        iVar24 = ((iVar5 * -2 - iVar7) + (int)plVar10[10]) / 2;
        iVar8 = FUN_039bef7c(0xbe);
        iVar9 = FUN_039bef7c(10);
        pwVar26 = awStack_28;
        do {
          bVar4 = std::operator==(pwVar26,L" ");
          if (!bVar4) {
            lVar21 = FUN_054767dc(pwVar26,&DAT_0570f660,0);
            if (lVar21 != -1) {
              uVar25 = FUN_054765c4(pwVar26);
              FUN_05477da4((__normal_iterator *)&local_40,pwVar26,3,uVar25);
              FUN_054766c8(pwVar26,(__normal_iterator *)&local_40);
              FUN_05476c50((__normal_iterator *)&local_40);
            }
            FUN_05476574(auStack_50);
            FUN_054779f4(auStack_50,uVar23 + 0x41);
            FUN_05477888(auStack_50,&DAT_0570f670);
            thunk_FUN_05477668(auStack_50,pwVar26);
            iVar27 = iVar24;
            if ((uVar23 & 1) != 0) {
              iVar27 = iVar24 + (uVar23 & 1) * (iVar7 + iVar5);
            }
            pPVar22 = ::operator_new(0xf8);
            PlayerSurveySelectBox::PlayerSurveySelectBox(pPVar22);
            local_48 = pPVar22;
            (**(code **)(*(long *)pPVar22 + 0x198))
                      (pPVar22,iVar27,iVar8 + ((int)uVar23 >> 1) * (iVar9 + iVar6),iVar5,iVar6);
            pPVar22 = local_48;
            FUN_05477b24((__normal_iterator *)&local_40,auStack_50);
            PlayerSurveySelectBox::InitView(pPVar22,(__normal_iterator *)&local_40);
            FUN_05476c50((__normal_iterator *)&local_40);
            FUN_039be79c(local_48 + 0xe0,uVar23);
            (**(code **)(*plVar10 + 0x60))(plVar10,local_48);
            std::vector<PlayerSurveySelectBox*,std::allocator<PlayerSurveySelectBox*>>::push_back
                      (this_00,&local_48);
            FUN_05476c50(auStack_50);
          }
          uVar23 = uVar23 + 1;
          pwVar26 = pwVar26 + 8;
        } while (uVar23 != 4);
        puVar18 = (undefined4 *)FUN_039be834(m_surveyAnswers,uVar12);
        uVar2 = *puVar18;
        uVar25 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this_00);
        uVar19 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)this_00);
        local_48 = (PlayerSurveySelectBox *)FUN_039c0124(uVar25,uVar19,uVar2);
        local_40 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)this_00);
        bVar4 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40)
        ;
        if (bVar4) {
          plVar10 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
          FUN_039bec50(*plVar10 + 0xe4);
        }
        *(int *)(this + 0x158) = param_1;
        UpdateBtns(this);
        FUN_05476c50(auStack_10);
        FUN_05476c50(auStack_18);
        FUN_05476c50(auStack_20);
        FUN_05476c50(awStack_28);
        FUN_05476c50(auStack_58);
        Sexy::PACommand::~PACommand((PACommand *)asStack_38);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayerSurvey::InitView() */

void __thiscall UIPlayerSurvey::InitView(UIPlayerSurvey *this)

{
  char cVar1;
  Widget *pWVar2;
  char *__s;
  TGALogMgr *pTVar3;
  size_t __n;
  int iVar4;
  TGAPlayerSurveyData aTStack_58 [8];
  vector<std::string,std::allocator<std::string>> avStack_50 [32];
  undefined4 local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)local_30,"Background_1");
  pWVar2 = (Widget *)UI::Dialog::GetWidget((Dialog *)this,(string *)local_30);
  std::string::~string((string *)local_30);
  nop();
  UI::Dialog::SetCenter((Dialog *)this,pWVar2,true);
  InitBtns(this);
  cVar1 = std::vector<int,std::allocator<int>>::empty
                    ((vector<int,std::allocator<int>> *)&m_surveyAnswers);
  if (cVar1 != '\0') {
    local_30[0] = 0;
    std::vector<int,std::allocator<int>>::assign
              ((vector<int,std::allocator<int>> *)&m_surveyAnswers,(long)*(int *)(this + 0x178),
               (int *)local_30);
  }
  __n = 0xffffffff;
  *(undefined4 *)(this + 0x158) = 0xffffffff;
  iVar4 = 0x1e;
  CreateQuestion(this,0);
  TGAPlayerSurveyData::TGAPlayerSurveyData(aTStack_58);
  DString::DString((DString *)local_30,1);
  __s = (char *)DString::c_str((DString *)local_30);
  std::string::append((string *)aTStack_58,__s,__n);
  DString::~DString((DString *)local_30);
  do {
    std::string::string((string *)local_30,"");
    std::vector<std::string,std::allocator<std::string>>::push_back(avStack_50,(string *)local_30);
    std::string::~string((string *)local_30);
    nop();
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  pTVar3 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAPlayerSurveyData::TGAPlayerSurveyData((TGAPlayerSurveyData *)local_30,aTStack_58);
  TGALogMgr::LogPlayerSurvey(pTVar3,(string *)local_30);
  TGAPlayerSurveyData::~TGAPlayerSurveyData((TGAPlayerSurveyData *)local_30);
  TGAPlayerSurveyData::~TGAPlayerSurveyData(aTStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayerSurvey::LogTGAResult() */

void UIPlayerSurvey::LogTGAResult(void)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  int *piVar4;
  TGALogMgr *pTVar5;
  size_t in_x2;
  int iVar6;
  undefined8 local_70;
  undefined8 local_68;
  int local_60 [2];
  TGAPlayerSurveyData aTStack_58 [8];
  vector<std::string,std::allocator<std::string>> avStack_50 [32];
  uint local_30 [10];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TGAPlayerSurveyData::TGAPlayerSurveyData(aTStack_58);
  DString::DString((DString *)local_30,2);
  pcVar3 = (char *)DString::c_str((DString *)local_30);
  std::string::append((string *)aTStack_58,pcVar3,in_x2);
  DString::~DString((DString *)local_30);
  local_70 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)&m_surveyAnswers);
  local_68 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)&m_surveyAnswers);
  while( true ) {
    bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_70,(__normal_iterator *)&local_68);
    if (!bVar2) break;
    piVar4 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_70);
    DString::DString((DString *)local_30,*piVar4);
    pcVar3 = (char *)DString::c_str((DString *)local_30);
    std::string::string((string *)local_60,pcVar3);
    std::vector<std::string,std::allocator<std::string>>::push_back(avStack_50,(string *)local_60);
    std::string::~string((string *)local_60);
    nop();
    DString::~DString((DString *)local_30);
    eastl::generic_iterator<EA::Text::GlyphInfo_const*,void>::operator++
              ((generic_iterator<EA::Text::GlyphInfo_const*,void> *)&local_70);
  }
  local_60[0] = FUN_039be7e0(m_surveyAnswers,DAT_06ac0590);
  local_30[0] = (uint)bVar2;
  local_60[0] = 0x1e - local_60[0];
  piVar4 = eastl::max_alt<int>(local_60,(int *)local_30);
  iVar1 = *piVar4;
  iVar6 = 0;
  if (0 < iVar1) {
    do {
      iVar6 = iVar6 + 1;
      std::string::string((string *)local_30,"");
      std::vector<std::string,std::allocator<std::string>>::push_back(avStack_50,(string *)local_30)
      ;
      std::string::~string((string *)local_30);
      nop();
    } while (iVar6 != iVar1);
  }
  pTVar5 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGAPlayerSurveyData::TGAPlayerSurveyData((TGAPlayerSurveyData *)local_30,aTStack_58);
  TGALogMgr::LogPlayerSurvey(pTVar5,(DString *)local_30);
  TGAPlayerSurveyData::~TGAPlayerSurveyData((TGAPlayerSurveyData *)local_30);
  TGAPlayerSurveyData::~TGAPlayerSurveyData(aTStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPlayerSurvey::CommitResult() */

void __thiscall UIPlayerSurvey::CommitResult(UIPlayerSurvey *this)

{
  DNetwork *this_00;
  ActivityCollectionPlayerSurvey *this_01;
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  _PacketId a_Stack_ce8 [2152];
  string asStack_480 [1144];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  LogTGAResult();
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  this_00 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId(a_Stack_ce8);
  FUN_039bef20(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_00,asStack_480,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId(a_Stack_ce8);
  UISingletonDialog<UIPlayerSurvey>::CloseDialog();
  this_01 = (ActivityCollectionPlayerSurvey *)
            UISingletonDialog<ActivityCollectionPlayerSurvey>::GetSingletonPtr();
  if (this_01 != (ActivityCollectionPlayerSurvey *)0x0) {
    ActivityCollectionPlayerSurvey::SetButtonDisable(this_01,true);
  }
  std::
  map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
  ::~map((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
          *)amStack_d18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPlayerSurvey::ButtonDepress(int) */

void __thiscall UIPlayerSurvey::ButtonDepress(UIPlayerSurvey *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0x42) {
    iVar1 = Inc_Index(this);
    CreateQuestion(this,iVar1);
    return;
  }
  if (param_1 < 0x43) {
    if (param_1 == 0x41) {
      iVar1 = Dec_Index(this);
      CreateQuestion(this,iVar1);
      return;
    }
  }
  else {
    if (param_1 == 0x43) {
      CommitResult(this);
      return;
    }
    if (param_1 == 1000) {
      UISingletonDialog<UIPlayerSurvey>::CloseDialog();
      return;
    }
  }
  return;
}


/* non-virtual thunk to UIPlayerSurvey::ButtonDepress(int) */

void __thiscall UIPlayerSurvey::ButtonDepress(UIPlayerSurvey *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}

