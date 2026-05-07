// Class: UINewPlantView_PlantDetails


/* UINewPlantView_PlantDetails::UINewPlantView_PlantDetails() */

void __thiscall
UINewPlantView_PlantDetails::UINewPlantView_PlantDetails(UINewPlantView_PlantDetails *this)

{
  UISingletonDialog<UINewPlantView_PlantDetails>::UISingletonDialog
            ((UISingletonDialog<UINewPlantView_PlantDetails> *)this);
  Sexy::ScrollWidgetListener::ScrollWidgetListener((ScrollWidgetListener *)(this + 0x138));
  *(undefined ***)this = &PTR_GetClass_066a3ff0;
  *(undefined **)(this + 0xd8) = &DAT_066a4350;
  *(undefined ***)(this + 0x138) = &PTR__UINewPlantView_PlantDetails_066a4398;
  return;
}


/* UINewPlantView_PlantDetails::ScrollTargetReached(Sexy::ScrollWidget*) */

void UINewPlantView_PlantDetails::ScrollTargetReached(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewPlantView_PlantDetails::ScrollTargetReached(Sexy::ScrollWidget*) */

void __thiscall
UINewPlantView_PlantDetails::ScrollTargetReached
          (UINewPlantView_PlantDetails *this,ScrollWidget *param_1)

{
  ScrollTargetReached((ScrollWidget *)(this + -0x138));
  return;
}


/* UINewPlantView_PlantDetails::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void UINewPlantView_PlantDetails::ScrollTargetInterrupted(ScrollWidget *param_1)

{
  return;
}


/* non-virtual thunk to UINewPlantView_PlantDetails::ScrollTargetInterrupted(Sexy::ScrollWidget*) */

void __thiscall
UINewPlantView_PlantDetails::ScrollTargetInterrupted
          (UINewPlantView_PlantDetails *this,ScrollWidget *param_1)

{
  ScrollTargetInterrupted((ScrollWidget *)(this + -0x138));
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_PlantDetails::GetLayoutName() */

void __thiscall UINewPlantView_PlantDetails::GetLayoutName(UINewPlantView_PlantDetails *this)

{
  long lVar1;
  string *in_x8;
  
  lVar1 = ___stack_chk_guard;
  std::string::string(in_x8,"UINewPlantView_PlantDetails");
  nop();
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(in_x8);
}


/* UINewPlantView_PlantDetails::~UINewPlantView_PlantDetails() */

void __thiscall
UINewPlantView_PlantDetails::~UINewPlantView_PlantDetails(UINewPlantView_PlantDetails *this)

{
  *(undefined ***)this = &PTR_GetClass_066a3ff0;
  *(undefined **)(this + 0xd8) = &DAT_066a4350;
  *(undefined ***)(this + 0x138) = &PTR__UINewPlantView_PlantDetails_066a4398;
  UISingletonDialog<UINewPlantView_PlantDetails>::~UISingletonDialog
            ((UISingletonDialog<UINewPlantView_PlantDetails> *)this);
  return;
}


/* non-virtual thunk to UINewPlantView_PlantDetails::~UINewPlantView_PlantDetails() */

void __thiscall
UINewPlantView_PlantDetails::~UINewPlantView_PlantDetails(UINewPlantView_PlantDetails *this)

{
  ~UINewPlantView_PlantDetails(this + -0x138);
  return;
}


/* UINewPlantView_PlantDetails::~UINewPlantView_PlantDetails() */

void __thiscall
UINewPlantView_PlantDetails::~UINewPlantView_PlantDetails(UINewPlantView_PlantDetails *this)

{
  ~UINewPlantView_PlantDetails(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to UINewPlantView_PlantDetails::~UINewPlantView_PlantDetails() */

void __thiscall
UINewPlantView_PlantDetails::~UINewPlantView_PlantDetails(UINewPlantView_PlantDetails *this)

{
  ~UINewPlantView_PlantDetails(this + -0x138);
  return;
}


/* UINewPlantView_PlantDetails::ButtonDepress(int) */

void __thiscall
UINewPlantView_PlantDetails::ButtonDepress(UINewPlantView_PlantDetails *this,int param_1)

{
  if (param_1 != 0x58) {
    return;
  }
  UISingletonDialog<UINewPlantView_PlantDetails>::CloseDialog();
  return;
}


/* non-virtual thunk to UINewPlantView_PlantDetails::ButtonDepress(int) */

void __thiscall
UINewPlantView_PlantDetails::ButtonDepress(UINewPlantView_PlantDetails *this,int param_1)

{
  ButtonDepress(this + -0xd8,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UINewPlantView_PlantDetails::InitView(std::string const&) */

void __thiscall
UINewPlantView_PlantDetails::InitView(UINewPlantView_PlantDetails *this,string *param_1)

{
  undefined4 uVar1;
  int iVar2;
  NameMapperBase *this_00;
  string *psVar3;
  ProfileMgr *this_01;
  PlayerInfo *this_02;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  UIWidgetImage *pUVar8;
  PVZ2UIScrollingWidget *this_03;
  Widget *this_04;
  tuple *ptVar9;
  undefined4 *puVar10;
  CachedUIResourcePtr<Sexy::Image> *this_05;
  UtilEasyDisplayWidget *this_06;
  PlantType *pPVar11;
  long *plVar12;
  uint *puVar13;
  float *pfVar14;
  code *pcVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  int local_c0;
  int local_bc;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b8 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_b0 [8];
  int local_a8 [2];
  string asStack_a0 [16];
  undefined8 local_90;
  undefined8 local_88;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [24];
  function<bool(Sexy::Touch_const&)> afStack_60 [32];
  UINewPlantView_PlantDetails *local_40;
  undefined8 local_38;
  undefined1 auStack_30 [8];
  tuple<PlantDetailsType,std::wstring,std::wstring> atStack_28 [24];
  ulong local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (NameMapperBase *)PlantNameMapper::GetInstance();
  uVar1 = NameMapperBase::GetIdForName(this_00,param_1);
  psVar3 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar3);
  this_01 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_02 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_01);
  iVar2 = PlayerInfo::GetPlantStarLevel(this_02,param_1,false);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b8);
  PlantImitater::GetImitatedPlant();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
  if (iVar2 < *(int *)(lVar4 + 0x28)) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b8);
    PlantImitater::GetImitatedPlant();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    iVar2 = *(int *)(lVar4 + 0x28);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b8);
  PlantImitater::GetImitatedPlant();
  lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_78);
  if (*(int *)(lVar4 + 0x2c) < iVar2) {
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b8);
    PlantImitater::GetImitatedPlant();
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
    iVar2 = *(int *)(lVar4 + 0x2c);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
  }
  uVar16 = 0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_90);
  uVar5 = (ulong)(iVar2 + -1);
  do {
    while( true ) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b8);
      PlantImitater::GetImitatedPlant();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      uVar6 = FUN_03813bc0(*(undefined8 *)(lVar4 + 0xe8),*(undefined8 *)(lVar4 + 0xf0));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      if (uVar6 <= uVar16) {
        std::string::string((string *)&local_40,"UIImage_ContentBG");
        pUVar8 = UI::Dialog::GetWidget<UIWidgetImage>((Dialog *)this,(string *)&local_40);
        std::string::~string((string *)&local_40);
        nop();
        this_03 = ::operator_new(0x248);
        PVZ2UIScrollingWidget::PVZ2UIScrollingWidget(this_03,(ScrollWidgetListener *)(this + 0x138))
        ;
        iVar2 = FUN_03814ff8(10);
        iVar17 = FUN_03814ff8(0x14);
        Sexy::Insets::Insets
                  ((Insets *)asStack_a0,iVar2,iVar2,*(int *)(pUVar8 + 0x50) - iVar17,
                   *(int *)(pUVar8 + 0x54) - iVar17);
        (**(code **)(*(long *)this_03 + 0x1a0))(this_03,asStack_a0);
        Sexy::ScrollWidget::SetScrollMode((ScrollWidget *)this_03,2);
        this_04 = ::operator_new(0xd8);
        Sexy::Widget::Widget(this_04);
        (**(code **)(*(long *)this_04 + 0x198))
                  (this_04,0,0,*(undefined4 *)(this_03 + 0x50),*(undefined4 *)(this_03 + 0x54));
        for (uVar16 = 0; uVar20 = local_90, uVar5 = FUN_03813bf0(local_90,local_88), uVar16 < uVar5;
            uVar16 = uVar16 + 1) {
          ptVar9 = (tuple *)FUN_03813c04(uVar20,uVar16);
          std::tuple<PlantDetailsType,std::wstring,std::wstring>::tuple
                    ((tuple<PlantDetailsType,std::wstring,std::wstring> *)aRStack_78,ptVar9);
          ptVar9 = (tuple *)FUN_03813c04(local_90,uVar16);
          puVar10 = (undefined4 *)
                    std::
                    get<0ul,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
                              (ptVar9);
          this_05 = (CachedUIResourcePtr<Sexy::Image> *)FUN_03813118(*puVar10);
          uVar20 = CachedUIResourcePtr<Sexy::Image>::operator->(this_05);
          ptVar9 = (tuple *)FUN_03813c04(local_90,uVar16);
          puVar10 = (undefined4 *)
                    std::
                    get<0ul,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<1>)>,std::_Bind<std::_Mem_fn<int_PlantNewAvatarPiecesInfo::*>(std::_Placeholder<2>)>>
                              (ptVar9);
          FUN_038137e8((RtWeakPtr<Sexy::ResourceInfo> *)&local_40,*puVar10);
          TodStringTranslate((wstring *)&local_40);
          FUN_05476c50((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          this_06 = ::operator_new(0x118);
          UtilEasyDisplayWidget::UtilEasyDisplayWidget(this_06);
          iVar2 = FUN_03814ff8(0x3c);
          uVar1 = FUN_03814ff8(0x212);
          (**(code **)(*(long *)this_06 + 0x198))(this_06,0,iVar2 * (int)uVar16,uVar1);
          local_40 = this;
          local_38 = uVar20;
          FUN_05477b24(auStack_30,local_a8);
          std::tuple<PlantDetailsType,std::wstring,std::wstring>::tuple
                    (atStack_28,(tuple *)aRStack_78);
          local_10 = uVar16;
          FUN_038158c4(afStack_60,(RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          UtilEasyDisplayWidget::SetDrawFunction(this_06,afStack_60);
          std::function<bool(Sexy::Touch_const&)>::~function(afStack_60);
          FUN_03815550((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
          (**(code **)(*(long *)this_04 + 0x60))(this_04,this_06);
          FUN_05476c50(local_a8);
          std::tuple<PlantDetailsType,std::wstring,std::wstring>::~tuple
                    ((tuple<PlantDetailsType,std::wstring,std::wstring> *)aRStack_78);
        }
        iVar2 = FUN_03814ff8(0x3c);
        pcVar15 = *(code **)(*(long *)this_03 + 0x60);
        *(int *)(this_04 + 0x54) = iVar2 * (int)uVar5;
        (*pcVar15)(this_03,this_04);
        (**(code **)(*(long *)pUVar8 + 0x60))(pUVar8,this_03);
        std::
        vector<std::tuple<PlantDetailsType,std::wstring,std::wstring>,std::allocator<std::tuple<PlantDetailsType,std::wstring,std::wstring>>>
        ::~vector((vector<std::tuple<PlantDetailsType,std::wstring,std::wstring>,std::allocator<std::tuple<PlantDetailsType,std::wstring,std::wstring>>>
                   *)&local_90);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b8);
        if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b8);
      PlantImitater::GetImitatedPlant();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      piVar7 = (int *)FUN_03813bcc(*(undefined8 *)(lVar4 + 0xe8),uVar16);
      local_c0 = *piVar7;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b8);
      PlantImitater::GetImitatedPlant();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b8);
      PlantImitater::GetImitatedPlant();
      FUN_05476574(asStack_a0);
      FUN_05476574(aRStack_78);
      std::tuple<PlantDetailsType,std::wstring,std::wstring>::
      tuple<PlantDetailsType&,std::wstring,std::wstring,void>
                ((tuple<PlantDetailsType,std::wstring,std::wstring> *)&local_40,
                 (PlantDetailsType *)&local_c0,(wstring *)asStack_a0,(wstring *)aRStack_78);
      FUN_05476c50(aRStack_78);
      FUN_05476c50(asStack_a0);
      if (local_c0 != 0) break;
      plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b8);
      local_bc = (**(code **)(*plVar12 + 0x60))(plVar12,iVar2);
      uVar20 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
      fVar21 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar20,uVar1,9,0);
      local_a8[0] = (int)fVar21 + local_bc;
      uVar20 = std::get<0ul,SeedPacketPlantWidget*,int>((tuple *)&local_40);
      std::to_string<ActivityTypeID>((ActivityTypeID *)local_a8);
      Sexy::ToWString(asStack_a0);
      FUN_054766c8(uVar20,aRStack_78);
      FUN_05476c50(aRStack_78);
      std::string::~string(asStack_a0);
      uVar20 = std::
               get<1ul,Sexy::RtDbTable::IteratorStorage*,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
                         ((tuple *)&local_40);
      std::to_string<ActivityTypeID>((ActivityTypeID *)&local_bc);
LAB_03822e28:
      Sexy::ToWString(asStack_a0);
LAB_03822e38:
      uVar16 = uVar16 + 1;
      FUN_054766c8(uVar20,aRStack_78);
      FUN_05476c50(aRStack_78);
      std::string::~string(asStack_a0);
      std::
      vector<std::tuple<PlantDetailsType,std::wstring,std::wstring>,std::allocator<std::tuple<PlantDetailsType,std::wstring,std::wstring>>>
      ::push_back((vector<std::tuple<PlantDetailsType,std::wstring,std::wstring>,std::allocator<std::tuple<PlantDetailsType,std::wstring,std::wstring>>>
                   *)&local_90,(tuple *)&local_40);
      std::tuple<PlantDetailsType,std::wstring,std::wstring>::~tuple
                ((tuple<PlantDetailsType,std::wstring,std::wstring> *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
    }
    if (local_c0 == 1) {
      pPVar11 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b8);
      fVar21 = (float)PlantType::GetPacketCoolDown(pPVar11,0xfffffffe);
      uVar20 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
      fVar22 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar20,uVar1,10,0);
      fVar22 = fVar21 / (fVar22 + 1.0);
      uVar20 = std::get<0ul,SeedPacketPlantWidget*,int>((tuple *)&local_40);
      dVar23 = (double)fVar21;
LAB_03822edc:
      Sexy::StrFormat("%0.2f",asStack_a0,dVar23);
      Sexy::ToWString(asStack_a0);
      FUN_054766c8(uVar20,aRStack_78);
      FUN_05476c50(aRStack_78);
      std::string::~string(asStack_a0);
      uVar20 = std::
               get<1ul,Sexy::RtDbTable::IteratorStorage*,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
                         ((tuple *)&local_40);
LAB_03822f20:
      Sexy::StrFormat("%0.2f",asStack_a0,(double)fVar22);
      goto LAB_03822e28;
    }
    if (local_c0 == 2) {
      plVar12 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b8);
      fVar21 = (float)(**(code **)(*plVar12 + 0x50))();
      uVar20 = *(undefined8 *)(lVar4 + 0x130);
      uVar6 = FUN_03813b00(uVar20,*(undefined8 *)(lVar4 + 0x138));
      if (uVar5 < uVar6) {
        piVar7 = (int *)FUN_03813b0c(uVar20,uVar5);
        iVar17 = *piVar7;
      }
      else {
        iVar17 = (int)fVar21;
      }
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_b0);
      lVar4 = FUN_03813b2c(*(undefined8 *)(lVar4 + 0x208),uVar5);
      uVar18 = (uint)((float)iVar17 * *(float *)(lVar4 + 4));
      uVar20 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
      fVar21 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar20,uVar1,5,0);
      uVar20 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
      fVar22 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar20,uVar1,4,0);
      uVar20 = std::get<0ul,SeedPacketPlantWidget*,int>((tuple *)&local_40);
      Sexy::StrFormat("%d",asStack_a0,(ulong)uVar18);
      Sexy::ToWString(asStack_a0);
      FUN_054766c8(uVar20,aRStack_78);
      FUN_05476c50(aRStack_78);
      std::string::~string(asStack_a0);
      uVar20 = std::
               get<1ul,Sexy::RtDbTable::IteratorStorage*,std::default_delete<Sexy::RtDbTable::IteratorStorage>>
                         ((tuple *)&local_40);
      fVar21 = (float)(int)((int)fVar21 + uVar18);
      Sexy::StrFormat("%d",asStack_a0,(ulong)(uint)(int)(fVar22 * fVar21 + fVar21));
      Sexy::ToWString(asStack_a0);
      goto LAB_03822e38;
    }
    if (local_c0 == 3) {
      uVar20 = *(undefined8 *)(lVar4 + 0x148);
      uVar6 = FUN_03813b14(uVar20,*(undefined8 *)(lVar4 + 0x150));
      if (uVar6 < (ulong)(long)iVar2) {
        dVar23 = -1.0;
        fVar22 = -1.0;
      }
      else {
        pfVar14 = (float *)FUN_03813bd4(uVar20,uVar5);
        fVar22 = *pfVar14;
        dVar23 = (double)fVar22;
      }
      uVar20 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
      fVar21 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar20,uVar1,6,0);
      fVar22 = fVar21 * fVar22 + fVar22;
LAB_03822ec4:
      uVar20 = std::get<0ul,SeedPacketPlantWidget*,int>((tuple *)&local_40);
      goto LAB_03822edc;
    }
    if (local_c0 == 4) {
      uVar20 = *(undefined8 *)(lVar4 + 0x160);
      uVar6 = FUN_03813b14(uVar20,*(undefined8 *)(lVar4 + 0x168));
      if (uVar6 < (ulong)(long)iVar2) {
        dVar23 = -1.0;
        fVar22 = -1.0;
      }
      else {
        pfVar14 = (float *)FUN_03813bd4(uVar20,uVar5);
        fVar22 = *pfVar14;
        dVar23 = (double)fVar22;
      }
      uVar20 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
      fVar21 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar20,uVar1,0xb,0);
      fVar22 = fVar22 / (fVar21 + 1.0);
      goto LAB_03822ec4;
    }
    if (local_c0 == 5) {
      uVar20 = *(undefined8 *)(lVar4 + 0x178);
      uVar6 = FUN_03813bdc(uVar20,*(undefined8 *)(lVar4 + 0x180));
      if ((ulong)(long)iVar2 <= uVar6) goto LAB_03823488;
LAB_038233e4:
      std::string::string((string *)local_a8,"N");
      nop();
LAB_03823404:
      uVar16 = uVar16 + 1;
      uVar20 = std::get<0ul,SeedPacketPlantWidget*,int>((tuple *)&local_40);
      Sexy::ToWString((string *)local_a8);
      TodStringTranslate((wstring *)asStack_a0);
      FUN_054766c8(uVar20,aRStack_78);
      FUN_05476c50(aRStack_78);
      FUN_05476c50(asStack_a0);
      std::string::~string((string *)local_a8);
      std::
      vector<std::tuple<PlantDetailsType,std::wstring,std::wstring>,std::allocator<std::tuple<PlantDetailsType,std::wstring,std::wstring>>>
      ::push_back((vector<std::tuple<PlantDetailsType,std::wstring,std::wstring>,std::allocator<std::tuple<PlantDetailsType,std::wstring,std::wstring>>>
                   *)&local_90,(tuple *)&local_40);
      std::tuple<PlantDetailsType,std::wstring,std::wstring>::~tuple
                ((tuple<PlantDetailsType,std::wstring,std::wstring> *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
    }
    else {
      if (local_c0 == 6) {
        uVar20 = *(undefined8 *)(lVar4 + 400);
        uVar6 = FUN_03813bdc(uVar20,*(undefined8 *)(lVar4 + 0x198));
        if (uVar6 < (ulong)(long)iVar2) goto LAB_038233e4;
LAB_03823488:
        uVar20 = FUN_03813be8(uVar20,uVar5);
        FUN_05475d88(local_a8,uVar20);
        goto LAB_03823404;
      }
      if (local_c0 == 7) {
        uVar19 = *(undefined8 *)(lVar4 + 0x1c0);
        uVar20 = *(undefined8 *)(lVar4 + 0x1c8);
LAB_038234dc:
        dVar23 = -1.0;
        uVar6 = FUN_03813b14(uVar19,uVar20);
        if ((ulong)(long)iVar2 <= uVar6) {
          pfVar14 = (float *)FUN_03813bd4(uVar19,uVar5);
          dVar23 = (double)*pfVar14;
        }
        uVar20 = std::get<0ul,SeedPacketPlantWidget*,int>((tuple *)&local_40);
        Sexy::StrFormat("%0.2f",asStack_a0,dVar23);
        goto LAB_03822e28;
      }
      if (local_c0 == 8) {
        uVar19 = *(undefined8 *)(lVar4 + 0x1a8);
        uVar20 = *(undefined8 *)(lVar4 + 0x1b0);
        goto LAB_038234dc;
      }
      if (local_c0 == 9) {
        uVar20 = *(undefined8 *)(lVar4 + 0x1d8);
        uVar18 = 0xffffffff;
        uVar6 = FUN_03813b00(uVar20,*(undefined8 *)(lVar4 + 0x1e0));
        if ((ulong)(long)iVar2 <= uVar6) {
          puVar13 = (uint *)FUN_03813b0c(uVar20,uVar5);
          uVar18 = *puVar13;
        }
        uVar20 = std::get<0ul,SeedPacketPlantWidget*,int>((tuple *)&local_40);
        Sexy::StrFormat("%d",asStack_a0,(ulong)uVar18);
        goto LAB_03822e28;
      }
      if (local_c0 == 10) {
        uVar20 = *(undefined8 *)(lVar4 + 0x1f0);
        fVar22 = -1.0;
        uVar6 = FUN_03813b14(uVar20,*(undefined8 *)(lVar4 + 0x1f8));
        if ((ulong)(long)iVar2 <= uVar6) {
          pfVar14 = (float *)FUN_03813bd4(uVar20,uVar5);
          fVar22 = *pfVar14;
        }
        uVar20 = Sexy::LazySingleton<PlantBoostMgr>::GetInstance();
        fVar21 = (float)PlantBoostMgr::GetPlantBoostValue((PlantBoostMgr *)0x0,uVar20,uVar1,0xb,0);
        fVar22 = fVar22 / (fVar21 + 1.0);
        uVar20 = std::get<0ul,SeedPacketPlantWidget*,int>((tuple *)&local_40);
        goto LAB_03822f20;
      }
      uVar16 = uVar16 + 1;
      std::
      vector<std::tuple<PlantDetailsType,std::wstring,std::wstring>,std::allocator<std::tuple<PlantDetailsType,std::wstring,std::wstring>>>
      ::push_back((vector<std::tuple<PlantDetailsType,std::wstring,std::wstring>,std::allocator<std::tuple<PlantDetailsType,std::wstring,std::wstring>>>
                   *)&local_90,(tuple *)&local_40);
      std::tuple<PlantDetailsType,std::wstring,std::wstring>::~tuple
                ((tuple<PlantDetailsType,std::wstring,std::wstring> *)&local_40);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_b0);
    }
  } while( true );
}

