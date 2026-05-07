// Class: TrainingInfoDlg


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingInfoDlg::GetLayoutName() */

void __thiscall TrainingInfoDlg::GetLayoutName(TrainingInfoDlg *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"TrainingInfo");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingInfoDlg::OnCreate() */

void __thiscall TrainingInfoDlg::OnCreate(TrainingInfoDlg *this)

{
  char cVar1;
  undefined8 uVar2;
  long *plVar3;
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = UI::Dialog::OnCreate((Dialog *)this);
  if (cVar1 != '\0') {
    std::string::string(asStack_10,"Background_0");
    uVar2 = UI::Dialog::GetWidget((Dialog *)this,asStack_10);
    *(undefined8 *)(this + 0x140) = uVar2;
    std::string::~string(asStack_10);
    nop();
    plVar3 = *(long **)(this + 0x140);
    (**(code **)(*plVar3 + 0x1a8))
              (plVar3,(*(int *)(gLawnApp + 0xd4) - (int)plVar3[10]) / 2,
               (*(int *)(gLawnApp + 0xd8) - *(int *)((long)plVar3 + 0x54)) / 2);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar1);
}


/* TrainingInfoDlg::~TrainingInfoDlg() */

void __thiscall TrainingInfoDlg::~TrainingInfoDlg(TrainingInfoDlg *this)

{
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_0694ad40;
  *(undefined **)(this + 0xd8) = &DAT_0694b090;
  UISingletonDialog<TrainingInfoDlg>::~UISingletonDialog((UISingletonDialog<TrainingInfoDlg> *)this)
  ;
  return;
}


/* TrainingInfoDlg::~TrainingInfoDlg() */

void __thiscall TrainingInfoDlg::~TrainingInfoDlg(TrainingInfoDlg *this)

{
  ~TrainingInfoDlg(this);
  AK::FreeHook(this);
  return;
}


/* TrainingInfoDlg::TrainingInfoDlg() */

void __thiscall TrainingInfoDlg::TrainingInfoDlg(TrainingInfoDlg *this)

{
  UISingletonDialog<TrainingInfoDlg>::UISingletonDialog((UISingletonDialog<TrainingInfoDlg> *)this);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR_GetClass_0694ad40;
  *(undefined **)(this + 0xd8) = &DAT_0694b090;
  return;
}


/* TrainingInfoDlg::ButtonDepress(int) */

void __thiscall TrainingInfoDlg::ButtonDepress(TrainingInfoDlg *this,int param_1)

{
  if (param_1 != 0) {
    return;
  }
  UISingletonDialog<TrainingInfoDlg>::CloseDialog();
  return;
}


/* non-virtual thunk to TrainingInfoDlg::ButtonDepress(int) */

void __thiscall TrainingInfoDlg::ButtonDepress(TrainingInfoDlg *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TrainingInfoDlg::SetType(Sexy::RtWeakPtr<ObjectTypeDescriptor const>) */

void __thiscall TrainingInfoDlg::SetType(TrainingInfoDlg *this,RtMixedPtrBase *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  AlmanacPage *pAVar6;
  long *plVar7;
  string *psVar8;
  UIWidgetText *pUVar9;
  long lVar10;
  RtObject *this_00;
  undefined1 auVar11 [12];
  RtMixedPtrBase aRStack_28 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x138) != 0) {
    (**(code **)(*(long *)this + 0x68))();
    if (*(long **)(this + 0x138) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x138) + 0x18))();
      *(undefined8 *)(this + 0x138) = 0;
    }
  }
  cVar1 = Sexy::RtMixedPtrBase::IsValid(param_2);
  if (cVar1 != '\0') {
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)param_2);
    iVar3 = FUN_04adf380(10);
    iVar4 = FUN_04adf380(0x2e4);
    iVar5 = FUN_04adf380(0x154);
    Sexy::Insets::Insets(aIStack_18,iVar3,iVar3,iVar4,iVar5);
    pAVar6 = ::operator_new(0x108);
    AlmanacPage::AlmanacPage(pAVar6,0,aRStack_20,aIStack_18,0);
    *(AlmanacPage **)(this + 0x138) = pAVar6;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    std::string::string((string *)aIStack_18,"Widget_0");
    plVar7 = (long *)UI::Dialog::GetWidget((Dialog *)this,(string *)aIStack_18);
    std::string::~string((string *)aIStack_18);
    nop();
    (**(code **)(*plVar7 + 0x60))(plVar7,*(undefined8 *)(this + 0x138));
    psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<TrainingType>>::GetInstancePtr();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2);
    ObjectTypeDirectory<TrainingType>::GetTypeFromTypeName(psVar8);
    cVar1 = Sexy::RtMixedPtrBase::IsValid(aRStack_28);
    if (cVar1 != '\0') {
      std::string::string((string *)aIStack_18,"NeedSpace_Value");
      pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)aIStack_18);
      std::string::~string((string *)aIStack_18);
      nop();
      if (pUVar9 != (UIWidgetText *)0x0) {
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
        Sexy::StrFormat(L"%d",aIStack_18,(ulong)*(uint *)(lVar10 + 0x18));
        PuzzleTip::SetTip(pUVar9,aIStack_18);
        FUN_05476c50(aIStack_18);
      }
      std::string::string((string *)aIStack_18,"NeedCoin_Value");
      pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)aIStack_18);
      std::string::~string((string *)aIStack_18);
      nop();
      if (pUVar9 != (UIWidgetText *)0x0) {
        lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                           ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
        Sexy::StrFormat(L"%d",aIStack_18,(ulong)*(uint *)(lVar10 + 0x14));
        PuzzleTip::SetTip(pUVar9,aIStack_18);
        FUN_05476c50(aIStack_18);
      }
      std::string::string((string *)aIStack_18,"NeedTime_Value");
      pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)aIStack_18);
      std::string::~string((string *)aIStack_18);
      nop();
      if (pUVar9 != (UIWidgetText *)0x0) {
        auVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
        StringHelper::ToTimeString
                  ((StringHelper *)0x1,*(float *)(auVar11._0_8_ + 0x1c),auVar11._8_4_);
        PuzzleTip::SetTip(pUVar9,aIStack_18);
        FUN_05476c50(aIStack_18);
      }
      std::string::string((string *)aIStack_18,"Zombie_Desc");
      pUVar9 = UI::Dialog::GetWidget<UIWidgetText>((Dialog *)this,(string *)aIStack_18);
      std::string::~string((string *)aIStack_18);
      nop();
      if ((pUVar9 != (UIWidgetText *)0x0) &&
         (bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)param_2), bVar2)) {
        this_00 = (RtObject *)
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)param_2)
        ;
        bVar2 = Sexy::RtObject::IsA<ZombieType>(this_00);
        if (bVar2) {
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)param_2);
          Zombie::GetFormattedDescriptionHeader((Zombie *)aIStack_18,aRStack_20);
          PuzzleTip::SetTip(pUVar9,aIStack_18);
          FUN_05476c50(aIStack_18);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
        }
      }
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_28);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

