// Class: UIPennyClassroomSurvey


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomSurvey::GetLayoutName() */

void __thiscall UIPennyClassroomSurvey::GetLayoutName(UIPennyClassroomSurvey *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UIPennyClassroomSurvey");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UIPennyClassroomSurvey::SyncPennyClassroomIndex() */

void __thiscall UIPennyClassroomSurvey::SyncPennyClassroomIndex(UIPennyClassroomSurvey *this)

{
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  PlayerInfo::SetPennyClassroomTestIndex(this_01,*(int *)(this + 0x138));
  return;
}


/* UIPennyClassroomSurvey::UIPennyClassroomSurvey() */

void __thiscall UIPennyClassroomSurvey::UIPennyClassroomSurvey(UIPennyClassroomSurvey *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  UISingletonDialog<UIPennyClassroomSurvey>::UISingletonDialog
            ((UISingletonDialog<UIPennyClassroomSurvey> *)this);
  *(undefined ***)this = &PTR_GetClass_069cda30;
  *(undefined **)(this + 0xd8) = &DAT_069cdd80;
  Set8BytesTo0(this + 0x140);
  NetworkPennyClassroomData::NetworkPennyClassroomData((NetworkPennyClassroomData *)(this + 0x148));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x250));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x268));
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x240) = 0;
  std::
  vector<PennyClassroomPlayerSurveySelectBox*,std::allocator<PennyClassroomPlayerSurveySelectBox*>>
  ::clear((vector<PennyClassroomPlayerSurveySelectBox*,std::allocator<PennyClassroomPlayerSurveySelectBox*>>
           *)(this + 0x268));
  this[0x248] = (UIPennyClassroomSurvey)0x0;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,NotifySelectBoxCorrect);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,Sexy::CBMemberTranslatorX<UIPennyClassroomSurvey,void(UIPennyClassroomSurvey::*)(bool)>>
            ((MessageRouter *)puVar1,Message::NotifySelectBoxIsCorrect,&local_40);
  return;
}


/* UIPennyClassroomSurvey::~UIPennyClassroomSurvey() */

void __thiscall UIPennyClassroomSurvey::~UIPennyClassroomSurvey(UIPennyClassroomSurvey *this)

{
  *(undefined ***)this = &PTR_GetClass_069cda30;
  *(undefined **)(this + 0xd8) = &DAT_069cdd80;
  std::
  vector<PennyClassroomPlayerSurveySelectBox*,std::allocator<PennyClassroomPlayerSurveySelectBox*>>
  ::clear((vector<PennyClassroomPlayerSurveySelectBox*,std::allocator<PennyClassroomPlayerSurveySelectBox*>>
           *)(this + 0x268));
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::
  vector<PennyClassroomPlayerSurveySelectBox*,std::allocator<PennyClassroomPlayerSurveySelectBox*>>
  ::~vector((vector<PennyClassroomPlayerSurveySelectBox*,std::allocator<PennyClassroomPlayerSurveySelectBox*>>
             *)(this + 0x268));
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::~vector((vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
             *)(this + 0x250));
  NetworkPennyClassroomData::~NetworkPennyClassroomData((NetworkPennyClassroomData *)(this + 0x148))
  ;
  std::string::~string((string *)(this + 0x140));
  UISingletonDialog<UIPennyClassroomSurvey>::~UISingletonDialog
            ((UISingletonDialog<UIPennyClassroomSurvey> *)this);
  return;
}


/* UIPennyClassroomSurvey::~UIPennyClassroomSurvey() */

void __thiscall UIPennyClassroomSurvey::~UIPennyClassroomSurvey(UIPennyClassroomSurvey *this)

{
  ~UIPennyClassroomSurvey(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomSurvey::GetCorrectAnswerID(int) */

void __thiscall UIPennyClassroomSurvey::GetCorrectAnswerID(UIPennyClassroomSurvey *this,int param_1)

{
  undefined4 uVar1;
  vector *pvVar2;
  undefined4 *puVar3;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pvVar2 = (vector *)FUN_04de7f80(*(undefined8 *)(this + 0x250),(long)*(int *)(this + 0x134));
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)local_20,pvVar2);
  puVar3 = (undefined4 *)FUN_04de7f28(local_20[0],(long)param_1);
  uVar1 = *puVar3;
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomSurvey::InitBonus() */

void __thiscall UIPennyClassroomSurvey::InitBonus(UIPennyClassroomSurvey *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  vector *pvVar7;
  undefined8 uVar8;
  int *piVar9;
  long *plVar10;
  ulong uVar11;
  int iVar12;
  undefined8 local_38 [3];
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string((string *)&local_20,"BonusContainer");
  plVar6 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)&local_20);
  std::string::~string((string *)&local_20);
  nop();
  lVar3 = plVar6[10];
  iVar1 = *(int *)((long)plVar6 + 0x54);
  pvVar7 = (vector *)FUN_04de7eb4(*(undefined8 *)(this + 0x1b0),0);
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
            *)local_38,pvVar7);
  pvVar7 = (vector *)FUN_04de7ec0(local_38[0],(long)*(int *)(this + 0x134));
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_20,pvVar7);
  uVar8 = local_20;
  iVar4 = FUN_04de7ecc(local_20,local_18);
  if (iVar4 != 0) {
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = (int)lVar3 / iVar4;
    }
    iVar5 = FUN_04de8b64(3);
    iVar5 = iVar2 - iVar5;
    if (0 < iVar4) {
      uVar11 = 0;
      iVar12 = 0;
      while( true ) {
        piVar9 = (int *)FUN_04de7ee0(uVar8,uVar11);
        plVar10 = (long *)UIRewardFrame::CreateUIRewardFrame(*piVar9,piVar9[1],false);
        (**(code **)(*plVar10 + 0x198))(plVar10,iVar12,(iVar1 - iVar5) / 2,iVar5,iVar5);
        (**(code **)(*plVar6 + 0x60))(plVar6,plVar10);
        if (uVar11 == iVar4 - 1) break;
        uVar11 = uVar11 + 1;
        uVar8 = local_20;
        iVar12 = iVar12 + iVar2;
      }
    }
  }
  std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>::~vector
            ((vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>> *)&local_20);
  std::
  vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
  ::~vector((vector<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>,std::allocator<std::vector<S2C_BonusInfo,std::allocator<S2C_BonusInfo>>>>
             *)local_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomSurvey::InitHeadshotPopanim(std::string) */

void UIPennyClassroomSurvey::InitHeadshotPopanim(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  string *psVar3;
  PopAnimRig *pPVar4;
  UIWidgetAnim *this;
  RtWeakPtr<Sexy::SoundResource> aRStack_18 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_18,(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
            ((RtWeakPtr<Sexy::SoundResource> *)aRStack_10,(RtWeakPtrBase *)aRStack_18);
  pPVar4 = (PopAnimRig *)CreateStandalonePlantAnimRig(aRStack_10,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  this = ::operator_new(0x118);
  UIWidgetAnim::UIWidgetAnim(this);
  uVar1 = FUN_04de8b64(0);
  uVar2 = FUN_04de8b64(0x32);
  (**(code **)(*(long *)this + 0x198))
            (this,uVar1,uVar2,*(undefined4 *)(*(long *)(param_1 + 0x240) + 0x50),
             *(undefined4 *)(*(long *)(param_1 + 0x240) + 0x54));
  this[0x59] = (UIWidgetAnim)0x0;
  UIWidgetAnim::SetAnimRig(this,pPVar4);
  std::string::string((string *)aRStack_10,"idle");
  UIWidgetAnim::SetLabel((string *)this);
  std::string::~string((string *)aRStack_10);
  nop();
  (**(code **)(**(long **)(param_1 + 0x240) + 0x60))(*(long **)(param_1 + 0x240),this);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomSurvey::CreateQuestion(int) */

void __thiscall UIPennyClassroomSurvey::CreateQuestion(UIPennyClassroomSurvey *this,int param_1)

{
  vector<PennyClassroomPlayerSurveySelectBox*,std::allocator<PennyClassroomPlayerSurveySelectBox*>>
  *this_00;
  wstring *pwVar1;
  PlayerSurveySelectBox *pPVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  PennyClassroomPlayerSurveySelectBox *this_01;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  wstring *pwVar18;
  undefined8 uVar19;
  int iVar20;
  long *plVar21;
  undefined1 auStack_70 [8];
  string asStack_68 [8];
  undefined1 auStack_60 [8];
  string asStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  PlayerSurveySelectBox *local_38;
  undefined8 local_30;
  wstring awStack_28 [8];
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((uint)param_1 < 10) {
    uVar17 = 0;
    (**(code **)(**(long **)(this + 0x228) + 0x158))(*(long **)(this + 0x228),0);
    (**(code **)(**(long **)(this + 0x230) + 0x158))(*(long **)(this + 0x230),0);
    FUN_05478178((wstring *)&local_30,L"[PENNY_CLASSROOM_SURVEY_NUM_TITLE]",(string *)&local_38);
    TodReplaceNumberString((wstring *)&local_30,L"{NUMS}",param_1 + 1);
    FUN_05476c50((wstring *)&local_30);
    nop();
    PuzzleTip::SetTip(*(undefined8 *)(this + 0x210),auStack_70);
    uVar19 = *(undefined8 *)(this + 0x220);
    std::string::string((string *)&local_38,"[PENNY_CLASSROOM_SURVEY_HINT]");
    StringHelper::ToStringValue((string *)&local_38);
    PuzzleTip::SetTip(uVar19,(wstring *)&local_30);
    FUN_05476c50((wstring *)&local_30);
    std::string::~string((string *)&local_38);
    nop();
    std::string::string((string *)&local_30,"Background_0");
    UI::Dialog::GetWidget((Dialog *)this,(string *)&local_30);
    std::string::~string((string *)&local_30);
    nop();
    std::string::string((string *)&local_30,"UIText_Question");
    UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)&local_30);
    std::string::~string((string *)&local_30);
    nop();
    Sexy::StrFormat("[PENNY_CLASSROOM_SURVEY_QUESTION_%d_",asStack_68,(ulong)*(uint *)(this + 0x138)
                   );
    thunk_FUN_054757c0(asStack_68,this + 0x140);
    FUN_05475ad8(asStack_68,&DAT_05593350);
    StringHelper::ToStringValue(asStack_68);
    PuzzleTip::SetTip(*(undefined8 *)(this + 0x218),auStack_60);
    Sexy::StrFormat("[PENNY_CLASSROOM_SURVEY_ANSWER_%d_",asStack_58,(ulong)*(uint *)(this + 0x138));
    thunk_FUN_054757c0(asStack_58,this + 0x140);
    FUN_05475ad8(asStack_58,&DAT_05593350);
    StringHelper::ToStringValue(asStack_58);
    FUN_05477b24(auStack_48,auStack_50);
    uVar19 = *(undefined8 *)(this + 0x268);
    lVar10 = FUN_04de7f6c(uVar19,*(undefined8 *)(this + 0x270));
    if (lVar10 != 0) {
      do {
        plVar21 = *(long **)(this + 0x238);
        puVar11 = (undefined8 *)FUN_04de7f78(uVar19,uVar17);
        (**(code **)(*plVar21 + 0x68))(plVar21,*puVar11);
        uVar19 = *(undefined8 *)(this + 0x268);
        plVar21 = (long *)FUN_04de7f78(uVar19,uVar17);
        if ((long *)*plVar21 != (long *)0x0) {
          (**(code **)(*(long *)*plVar21 + 0x18))();
          puVar11 = (undefined8 *)FUN_04de7f78(*(undefined8 *)(this + 0x268),uVar17);
          *puVar11 = 0;
          uVar19 = *(undefined8 *)(this + 0x268);
        }
        uVar17 = uVar17 + 1;
        uVar12 = FUN_04de7f6c(uVar19,*(undefined8 *)(this + 0x270));
      } while (uVar17 < uVar12);
    }
    this_00 = (vector<PennyClassroomPlayerSurveySelectBox*,std::allocator<PennyClassroomPlayerSurveySelectBox*>>
               *)(this + 0x268);
    std::
    vector<PennyClassroomPlayerSurveySelectBox*,std::allocator<PennyClassroomPlayerSurveySelectBox*>>
    ::clear(this_00);
    pwVar18 = awStack_28;
    do {
      pwVar1 = pwVar18 + 8;
      FUN_05476574(pwVar18);
      pwVar18 = pwVar1;
    } while (pwVar1 != (wstring *)&local_8);
    iVar15 = 0;
    pwVar18 = awStack_28;
    lVar10 = 0;
    do {
      lVar13 = FUN_054767dc(auStack_48,&DAT_0570f650,lVar10);
      if (lVar13 == -1) {
        lVar13 = FUN_054765c4(auStack_48);
        FUN_05477da4((wstring *)&local_30,auStack_48,lVar10,lVar13 - lVar10);
        FUN_054766c8(awStack_28 + (long)iVar15 * 8,(wstring *)&local_30);
        FUN_05476c50((wstring *)&local_30);
        break;
      }
      iVar15 = iVar15 + 1;
      FUN_05477da4((wstring *)&local_30,auStack_48,lVar10,lVar13 - lVar10);
      FUN_054766c8(pwVar18,(wstring *)&local_30);
      FUN_05476c50((wstring *)&local_30);
      pwVar18 = pwVar18 + 8;
      lVar10 = lVar13 + 1;
    } while (iVar15 != 4);
    uVar16 = 0;
    iVar4 = FUN_04de8b64(0xcc);
    iVar5 = FUN_04de8b64(0x46);
    iVar6 = FUN_04de8b64(0x14);
    iVar15 = ((iVar4 * -2 - iVar6) + *(int *)(*(long *)(this + 0x238) + 0x50)) / 2;
    iVar7 = FUN_04de8b64(0x5a);
    iVar8 = FUN_04de8b64(10);
    pwVar18 = awStack_28;
    do {
      bVar3 = std::operator==(pwVar18,L" ");
      if (!bVar3) {
        lVar10 = FUN_054767dc(pwVar18,&DAT_0570f660,0);
        if (lVar10 != -1) {
          uVar19 = FUN_054765c4(pwVar18);
          FUN_05477da4((wstring *)&local_30,pwVar18,3,uVar19);
          FUN_054766c8(pwVar18,(wstring *)&local_30);
          FUN_05476c50((wstring *)&local_30);
        }
        FUN_05476574(auStack_40);
        FUN_054779f4(auStack_40,uVar16 + 0x41);
        FUN_05477888(auStack_40,&DAT_0570f670);
        thunk_FUN_05477668(auStack_40,pwVar18);
        iVar20 = iVar15;
        if ((uVar16 & 1) != 0) {
          iVar20 = iVar15 + (uVar16 & 1) * (iVar6 + iVar4);
        }
        this_01 = ::operator_new(0x100);
        PennyClassroomPlayerSurveySelectBox::PennyClassroomPlayerSurveySelectBox(this_01);
        local_38 = (PlayerSurveySelectBox *)this_01;
        (**(code **)(*(long *)this_01 + 0x198))
                  (this_01,iVar20,iVar7 + ((int)uVar16 >> 1) * (iVar8 + iVar5),iVar4,iVar5);
        pPVar2 = local_38;
        FUN_05477b24((wstring *)&local_30,auStack_40);
        PlayerSurveySelectBox::InitView(pPVar2,(wstring *)&local_30);
        FUN_05476c50((wstring *)&local_30);
        FUN_04de78f4(local_38 + 0xe0,uVar16);
        (**(code **)(**(long **)(this + 0x238) + 0x60))(*(long **)(this + 0x238),local_38);
        std::
        vector<PennyClassroomPlayerSurveySelectBox*,std::allocator<PennyClassroomPlayerSurveySelectBox*>>
        ::push_back(this_00,(PennyClassroomPlayerSurveySelectBox **)&local_38);
        FUN_05476c50(auStack_40);
      }
      uVar16 = uVar16 + 1;
      pwVar18 = pwVar18 + 8;
    } while (uVar16 != 4);
    uVar9 = GetCorrectAnswerID(this,*(int *)(this + 0x138));
    uVar19 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
    uVar14 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)this_00);
    local_38 = (PlayerSurveySelectBox *)FUN_04dec848(uVar19,uVar14,uVar9);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)this_00);
    bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_30);
    if (bVar3) {
      plVar21 = (long *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      FUN_04de8410(*plVar21 + 0xf8);
    }
    this[0x248] = (UIPennyClassroomSurvey)0x0;
    FUN_05476c50(auStack_10);
    FUN_05476c50(auStack_18);
    FUN_05476c50(auStack_20);
    FUN_05476c50(awStack_28);
    FUN_05476c50(auStack_48);
    FUN_05476c50(auStack_50);
    std::string::~string(asStack_58);
    FUN_05476c50(auStack_60);
    std::string::~string(asStack_68);
    FUN_05476c50(auStack_70);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* UIPennyClassroomSurvey::ButtonDepress(int) */

void __thiscall UIPennyClassroomSurvey::ButtonDepress(UIPennyClassroomSurvey *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0x3e9) {
    iVar1 = *(int *)(this + 0x138) + 1;
    if (9 < iVar1) {
      iVar1 = 9;
    }
    *(int *)(this + 0x138) = iVar1;
    SyncPennyClassroomIndex(this);
    CreateQuestion(this,*(int *)(this + 0x138));
    return;
  }
  if (param_1 != 0x3ea) {
    if (param_1 != 1000) {
      return;
    }
    UISingletonDialog<UIPennyClassroomSurvey>::CloseDialog();
    return;
  }
  CreateQuestion(this,*(int *)(this + 0x138));
  return;
}


/* non-virtual thunk to UIPennyClassroomSurvey::ButtonDepress(int) */

void __thiscall UIPennyClassroomSurvey::ButtonDepress(UIPennyClassroomSurvey *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* UIPennyClassroomSurvey::FillCorrectAnswerList() */

void __thiscall UIPennyClassroomSurvey::FillCorrectAnswerList(UIPennyClassroomSurvey *this)

{
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  *this_00;
  vector *pvVar1;
  
  this_00 = (vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
             *)(this + 0x250);
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::clear(this_00);
  pvVar1 = (vector *)FUN_04de7f80(*(undefined8 *)(this + 0x1e0),0);
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::push_back(this_00,pvVar1);
  pvVar1 = (vector *)FUN_04de7f80(*(undefined8 *)(this + 0x1e0),1);
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::push_back(this_00,pvVar1);
  pvVar1 = (vector *)FUN_04de7f80(*(undefined8 *)(this + 0x1e0),2);
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::push_back(this_00,pvVar1);
  pvVar1 = (vector *)FUN_04de7f80(*(undefined8 *)(this + 0x1e0),3);
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::push_back(this_00,pvVar1);
  pvVar1 = (vector *)FUN_04de7f80(*(undefined8 *)(this + 0x1e0),4);
  std::
  vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>
  ::push_back(this_00,pvVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomSurvey::InitView(int, NetworkPennyClassroomData) */

void __thiscall
UIPennyClassroomSurvey::InitView
          (UIPennyClassroomSurvey *this,int param_1,NetworkPennyClassroomData *param_3)

{
  undefined4 uVar1;
  int iVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  UIWidgetText *pUVar3;
  PVZ2UIButton *pPVar4;
  undefined8 uVar5;
  string *extraout_x1;
  Sexy aSStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  *(int *)(this + 0x134) = param_1;
  local_8 = ___stack_chk_guard;
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar1 = PlayerInfo::GetPennyClassroomTestIndex(this_01);
  *(undefined4 *)(this + 0x138) = uVar1;
  NetworkPennyClassroomData::operator=((NetworkPennyClassroomData *)(this + 0x148),param_3);
  FUN_04de7f60(*(undefined8 *)(this + 0x168),(long)param_1);
  iVar2 = PlantNameMapperServerID::GetInstance();
  NameMapperBase::GetNameForId(iVar2);
  Sexy::StringToUpper(aSStack_18,extraout_x1);
  FUN_05474278(this + 0x140,asStack_10);
  std::string::~string(asStack_10);
  std::string::string(asStack_10,"QuestionTitle");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  *(UIWidgetText **)(this + 0x210) = pUVar3;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Question");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  *(UIWidgetText **)(this + 0x218) = pUVar3;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"Dialog");
  pUVar3 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,asStack_10);
  *(UIWidgetText **)(this + 0x220) = pUVar3;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"NextBtn");
  pPVar4 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  *(PVZ2UIButton **)(this + 0x228) = pPVar4;
  std::string::~string(asStack_10);
  nop();
  (**(code **)(**(long **)(this + 0x228) + 0x158))(*(long **)(this + 0x228),0);
  std::string::string(asStack_10,"RedoBtn");
  pPVar4 = UI::Dialog::GetWidget<PVZ2UIButton>((Dialog *)this,asStack_10);
  *(PVZ2UIButton **)(this + 0x230) = pPVar4;
  std::string::~string(asStack_10);
  nop();
  (**(code **)(**(long **)(this + 0x230) + 0x158))(*(long **)(this + 0x230),0);
  std::string::string(asStack_10,"MainContainer");
  uVar5 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  *(undefined8 *)(this + 0x238) = uVar5;
  std::string::~string(asStack_10);
  nop();
  std::string::string(asStack_10,"PlantBg");
  uVar5 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
  *(undefined8 *)(this + 0x240) = uVar5;
  std::string::~string(asStack_10);
  nop();
  InitBonus(this);
  FillCorrectAnswerList(this);
  FUN_05475d88(asStack_10,aSStack_18);
  InitHeadshotPopanim(this,asStack_10);
  std::string::~string(asStack_10);
  CreateQuestion(this,*(int *)(this + 0x138));
  std::string::~string((string *)aSStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomSurvey::RequestResult(int) */

void __thiscall UIPennyClassroomSurvey::RequestResult(UIPennyClassroomSurvey *this,int param_1)

{
  string *this_00;
  string *psVar1;
  char *__s;
  DNetwork *this_01;
  undefined1 *__n;
  undefined1 auStack_d48 [8];
  string asStack_d40 [8];
  function<bool(Sexy::Touch_const&)> afStack_d38 [32];
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  amStack_d18 [48];
  string asStack_ce8 [2552];
  string asStack_2f0 [744];
  long local_8;
  
  __n = auStack_d48;
  local_8 = ___stack_chk_guard;
  std::
  map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
  ::map(amStack_d18);
  psVar1 = asStack_d40;
  std::string::string(asStack_ce8,"s");
  this_00 = (string *)
            std::
            map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
            ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                          *)amStack_d18,asStack_ce8);
  std::string::append(this_00,"0",(size_t)psVar1);
  std::string::~string(asStack_ce8);
  nop();
  std::string::string(asStack_d40,"i");
  psVar1 = (string *)
           std::
           map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
           ::operator[]((map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string_const,std::string>>>
                         *)amStack_d18,asStack_d40);
  DString::DString((DString *)asStack_ce8,param_1);
  __s = (char *)DString::c_str((DString *)asStack_ce8);
  std::string::append(psVar1,__s,(size_t)__n);
  DString::~DString((DString *)asStack_ce8);
  std::string::~string(asStack_d40);
  nop();
  this_01 = (DNetwork *)DSingleton<DNetwork>::getInstance();
  _PacketId::_PacketId((_PacketId *)asStack_ce8);
  FUN_04de8b08(afStack_d38,this);
  std::string::string(asStack_d40,"[NET_CONNECTING]");
  DNetwork::requestMsg
            (this_01,asStack_2f0,(map *)amStack_d18,30.0,(function *)afStack_d38,true,true,
             asStack_d40,0);
  std::string::~string(asStack_d40);
  nop();
  std::function<bool(Sexy::Touch_const&)>::~function(afStack_d38);
  _PacketId::~_PacketId((_PacketId *)asStack_ce8);
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


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomSurvey::TgaLogNormalResult(bool) */

void __thiscall
UIPennyClassroomSurvey::TgaLogNormalResult(UIPennyClassroomSurvey *this,bool param_1)

{
  int iVar1;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  char *pcVar2;
  char *__s;
  TGALogMgr *this_02;
  size_t in_x2;
  size_t __n;
  DString aDStack_48 [16];
  TGASecretStore aTStack_38 [8];
  string asStack_30 [8];
  string asStack_28 [8];
  undefined1 auStack_20 [16];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  TGASecretStore::TGASecretStore(aTStack_38);
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  iVar1 = PlayerInfo::GetMaterialNum(this_01,0x5b6d);
  DString::DString(aDStack_48,2);
  pcVar2 = (char *)DString::c_str(aDStack_48);
  std::string::append((string *)aTStack_38,pcVar2,in_x2);
  DString::~DString(aDStack_48);
  DString::DString(aDStack_48,iVar1);
  pcVar2 = "0";
  __s = (char *)DString::c_str(aDStack_48);
  std::string::append(asStack_30,__s,in_x2);
  DString::~DString(aDStack_48);
  std::string::append(asStack_28,"0",in_x2);
  __n = (size_t)*(uint *)(this + 0x138);
  Sexy::StrFormat("0_%d_%d",aDStack_48,(ulong)*(uint *)(this + 0x134));
  FUN_05474278(auStack_20,aDStack_48);
  std::string::~string((string *)aDStack_48);
  if (param_1) {
    pcVar2 = "1";
  }
  std::string::append(asStack_10,pcVar2,__n);
  this_02 = (TGALogMgr *)Sexy::LazySingleton<TGALogMgr>::GetInstance();
  TGALogMgr::LogPennyClassroom(this_02,(TGAPennyClassroomData *)aTStack_38);
  DropGroupNode::~DropGroupNode((DropGroupNode *)aTStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UIPennyClassroomSurvey::NotifySelectBoxCorrect(bool) */

void __thiscall
UIPennyClassroomSurvey::NotifySelectBoxCorrect(UIPennyClassroomSurvey *this,bool param_1)

{
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  if (param_1) {
    Sexy::StrFormat("[PENNY_CLASSROOM_SURVEY_CORRECT_%d_",asStack_10,(ulong)*(uint *)(this + 0x138))
    ;
    FUN_05474278(asStack_18,asStack_10);
    std::string::~string(asStack_10);
    thunk_FUN_054757c0(asStack_18,this + 0x140);
    FUN_05475ad8(asStack_18,&DAT_05593350);
    StringHelper::ToStringValue(asStack_18);
    PuzzleTip::SetTip(*(undefined8 *)(this + 0x220),asStack_10);
    if (*(int *)(this + 0x138) < 9) {
      (**(code **)(**(long **)(this + 0x228) + 0x158))(*(long **)(this + 0x228),1);
      (**(code **)(**(long **)(this + 0x230) + 0x158))(*(long **)(this + 0x230),0);
      TgaLogNormalResult(this,true);
    }
    else {
      (**(code **)(**(long **)(this + 0x228) + 0x158))(*(long **)(this + 0x228),0);
      (**(code **)(**(long **)(this + 0x230) + 0x158))(*(long **)(this + 0x230),0);
      RequestResult(this,*(int *)(this + 0x134));
    }
  }
  else {
    Sexy::StrFormat("[PENNY_CLASSROOM_SURVEY_WRONG_%d_",asStack_10,(ulong)*(uint *)(this + 0x138));
    FUN_05474278(asStack_18,asStack_10);
    std::string::~string(asStack_10);
    thunk_FUN_054757c0(asStack_18,this + 0x140);
    FUN_05475ad8(asStack_18,&DAT_05593350);
    StringHelper::ToStringValue(asStack_18);
    PuzzleTip::SetTip(*(undefined8 *)(this + 0x220),asStack_10);
    (**(code **)(**(long **)(this + 0x228) + 0x158))(*(long **)(this + 0x228),0);
    (**(code **)(**(long **)(this + 0x230) + 0x158))(*(long **)(this + 0x230),1);
    this[0x248] = (UIPennyClassroomSurvey)0x1;
    TgaLogNormalResult(this,false);
  }
  FUN_05476c50(asStack_10);
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

