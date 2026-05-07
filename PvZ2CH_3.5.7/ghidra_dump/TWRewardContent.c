// Class: TWRewardContent


/* TWRewardContent::Update() */

void __thiscall TWRewardContent::Update(TWRewardContent *this)

{
  UIFutureGiftShop::Update((UIFutureGiftShop *)this);
  if (*(StandaloneEffect **)(this + 0xf8) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0xf8));
  }
  if (*(StandaloneEffect **)(this + 0xf0) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Update(*(StandaloneEffect **)(this + 0xf0));
    return;
  }
  return;
}


/* TWRewardContent::Resize(int, int, int, int) */

void __thiscall
TWRewardContent::Resize(TWRewardContent *this,int param_1,int param_2,int param_3,int param_4)

{
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  *(undefined4 *)(this + 0x118) = *(undefined4 *)(this + 0x50);
  return;
}


/* TWRewardContent::~TWRewardContent() */

void __thiscall TWRewardContent::~TWRewardContent(TWRewardContent *this)

{
  *(undefined ***)this = &PTR_GetClass_069337f0;
  if (*(long **)(this + 0xf0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf0) + 0x18))();
    *(undefined8 *)(this + 0xf0) = 0;
  }
  if (*(long **)(this + 0xf8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0xf8) + 0x18))();
    *(undefined8 *)(this + 0xf8) = 0;
  }
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  std::string::~string((string *)(this + 0x128));
  FUN_05476c50(this + 0x108);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x100));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* TWRewardContent::~TWRewardContent() */

void __thiscall TWRewardContent::~TWRewardContent(TWRewardContent *this)

{
  ~TWRewardContent(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TWRewardContent::TWRewardContent(bool) */

void __thiscall TWRewardContent::TWRewardContent(TWRewardContent *this,bool param_1)

{
  long lVar1;
  exception_ptr aeStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined ***)this = &PTR_GetClass_069337f0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x100));
  FUN_05476574(this + 0x108);
  this[0x11c] = (TWRewardContent)param_1;
  Set8BytesTo0(this + 0x128);
  *(undefined8 *)(this + 0xf0) = 0;
  this[0x114] = (TWRewardContent)0x1;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  std::__exception_ptr::exception_ptr::exception_ptr(aeStack_10,(_func_void *)0x1);
  Sexy::RtWeakPtr<CthulhuPropertySheet>::operator=
            ((RtWeakPtr<CthulhuPropertySheet> *)(this + 0x100),(RtId *)aeStack_10);
  Sexy::RtId::~RtId((RtId *)aeStack_10);
  lVar1 = ___stack_chk_guard;
  *(undefined4 *)(this + 0x118) = *(undefined4 *)(this + 0x50);
  *(undefined4 *)(this + 0x120) = 0x3f800000;
  if (local_8 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TWRewardContent::Draw(Sexy::Graphics*) */

void __thiscall TWRewardContent::Draw(TWRewardContent *this,Graphics *param_1)

{
  TWRewardContent TVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  LotteryResultProgressBar *pLVar11;
  SeedPacketUtils *this_00;
  RtWeakPtr *pRVar12;
  SalesProgressBar *pSVar13;
  ResourceInfo *pRVar14;
  long lVar15;
  undefined8 uVar16;
  Image *pIVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_30 [8];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  if (this[0x11c] != (TWRewardContent)0x0) {
    if (*(StandaloneEffect **)(this + 0xf8) == (StandaloneEffect *)0x0) {
      iVar4 = FUN_04a45288(10);
      pSVar13 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b7f0);
      iVar5 = SalesProgressBar::GetCurrentLevel(pSVar13);
      pSVar13 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b770);
      iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
      pIVar17 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b7f0);
      Sexy::Graphics::DrawImage(param_1,pIVar17,0,iVar4 - (iVar5 - iVar6) / 2);
    }
    else {
      StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0xf8),param_1);
    }
  }
  if (*(long *)(this + 0xe0) != 0) {
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b7f0);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xe0));
    iVar6 = FUN_04a45288(10);
    Sexy::Graphics::DrawImage(param_1,*(Image **)(this + 0xe0),(iVar4 - iVar5) / 2,iVar6);
  }
  cVar2 = FUN_0547419c((string *)(this + 0x128));
  if (cVar2 == '\0') {
    if (*(long *)(this + 0xd8) != 0) {
      this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      pRVar12 = (RtWeakPtr *)
                SeedPacketUtils::GetPlantPiecePacketRenderData(this_00,(string *)(this + 0x128));
      iVar4 = *(int *)(this + 0x118);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xd8))
      ;
      fVar18 = *(float *)(this + 0x120);
      pSVar13 = (SalesProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b770);
      iVar7 = SalesProgressBar::GetCurrentLevel(pSVar13);
      fVar19 = (float)(int)(((float)iVar4 - fVar18 * (float)iVar5) * 0.5);
      iVar8 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xd8));
      fVar20 = *(float *)(this + 0x120);
      iVar9 = FUN_04a45288(0x19);
      iVar4 = *(int *)(pRVar12 + 0x28);
      iVar5 = *(int *)(pRVar12 + 0x2c);
      iVar6 = *(int *)(pRVar12 + 0x10);
      iVar10 = *(int *)(pRVar12 + 0x14);
      pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar12 + 0x170);
      fVar18 = (float)(int)(((float)iVar7 - fVar20 * (float)iVar8) - (float)iVar9);
      Sexy::Insets::Insets
                (aIStack_18,
                 (int)(fVar19 + *(float *)(this + 0x120) * (float)*(int *)(pRVar12 + 0x30)),
                 (int)(fVar18 + *(float *)(this + 0x120) * (float)*(int *)(pRVar12 + 0x34)),
                 (int)((float)iVar4 * fVar20),(int)((float)iVar5 * fVar20));
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar14,(TRect *)aIStack_18,(TRect *)(pRVar12 + 0x20));
      bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar12);
      if (bVar3) {
        lVar15 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar12);
        pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar15 + 0x48));
        Sexy::Insets::Insets
                  (aIStack_18,
                   (int)(fVar19 + *(float *)(this + 0x120) * (float)*(int *)(pRVar12 + 0x18)),
                   (int)(fVar18 + *(float *)(this + 0x120) * (float)*(int *)(pRVar12 + 0x1c)),
                   (int)((float)iVar6 * fVar20),(int)((float)iVar10 * fVar20));
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)pRVar14,(TRect *)aIStack_18,(TRect *)(pRVar12 + 8));
        TVar1 = this[0x114];
        goto joined_r0x04a46104;
      }
    }
  }
  else if (*(LotteryResultProgressBar **)(this + 0xd8) != (LotteryResultProgressBar *)0x0) {
    iVar4 = *(int *)(this + 0x118);
    iVar5 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xd8));
    fVar18 = *(float *)(this + 0x120);
    pSVar13 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b770);
    iVar6 = SalesProgressBar::GetCurrentLevel(pSVar13);
    iVar10 = SalesProgressBar::GetCurrentLevel(*(SalesProgressBar **)(this + 0xd8));
    fVar20 = *(float *)(this + 0x120);
    iVar7 = LotteryResultProgressBar::GetCurrentLevel(*(LotteryResultProgressBar **)(this + 0xd8));
    pSVar13 = *(SalesProgressBar **)(this + 0xd8);
    fVar19 = *(float *)(this + 0x120);
    iVar8 = SalesProgressBar::GetCurrentLevel(pSVar13);
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pSVar13,(int)(((float)iVar4 - fVar18 * (float)iVar5) * 0.5),
               (int)((float)iVar6 - fVar20 * (float)iVar10),(int)((float)iVar7 * fVar19),
               (int)((float)iVar8 * *(float *)(this + 0x120)));
  }
  TVar1 = this[0x114];
joined_r0x04a46104:
  if (TVar1 == (TWRewardContent)0x0) {
    iVar4 = FUN_04a45288();
    iVar5 = FUN_04a45288(0x66);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b7f0);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    iVar10 = FUN_04a45288(0x30);
    Sexy::Insets::Insets(aIStack_28,iVar4,iVar5,iVar6,iVar10);
    Sexy::StrFormat(L"x %d",auStack_30,(ulong)*(uint *)(this + 0x110));
    uVar16 = PrimeText_PotentialTypeface::Typeface
                       (PrimeText_Game::Typeface_CafeteriaBlack_26_HardShadow);
    Sexy::Color::Color((Color *)aIStack_18,0xff,0xff,0xff);
    WriteWordInRect(param_1,auStack_30,aIStack_28,uVar16,(Color *)aIStack_18,5,1);
    FUN_05476c50(auStack_30);
  }
  else {
    pRVar12 = (RtWeakPtr *)(this + 0x100);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar12);
    if (bVar3) {
      pLVar11 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b7f0);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      pLVar11 = (LotteryResultProgressBar *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar12);
      iVar5 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      pRVar14 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(pRVar12);
      iVar6 = FUN_04a45288(0x66);
      Sexy::Graphics::DrawImage(param_1,(Image *)pRVar14,(iVar4 - iVar5) / 2,iVar6);
    }
  }
  if ((this[0x11c] != (TWRewardContent)0x0) && (*(long *)(this + 0xf0) == 0)) {
    iVar5 = FUN_04a45288(0x2b);
    pIVar17 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b720);
    iVar4 = *(int *)(this + 0x118);
    pLVar11 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b720);
    iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
    Sexy::Graphics::DrawImage(param_1,pIVar17,(iVar4 - iVar6) / 2,iVar5);
  }
  uVar16 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_24_ThickOutline);
  iVar5 = FUN_04a45288(0xe);
  iVar4 = *(int *)(this + 0x50);
  FUN_05477b24(aIStack_28,this + 0x108);
  Sexy::Color::Color((Color *)aIStack_18,1);
  Sexy::PrimeTypeface::DrawString_Line
            ((PrimeTypeface *)0x0,(float)iVar5,(float)iVar4,uVar16,param_1,aIStack_28,1,
             (Color *)aIStack_18,0);
  FUN_05476c50(aIStack_28);
  if (*(StandaloneEffect **)(this + 0xf0) != (StandaloneEffect *)0x0) {
    StandaloneEffect::Draw(*(StandaloneEffect **)(this + 0xf0),param_1);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TWRewardContent::setGetReward() */

void __thiscall TWRewardContent::setGetReward(TWRewardContent *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  Effect_PopAnim *pEVar4;
  ResourceInfo *pRVar5;
  long *plVar6;
  StandaloneEffect *pSVar7;
  RtWeakPtr aRStack_20 [8];
  RtWeakPtr aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x11c] == (TWRewardContent)0x0) {
    this[0x11c] = (TWRewardContent)0x1;
    pEVar4 = GameObject::CreateOutsideTable<Effect_PopAnim>();
    *(Effect_PopAnim **)(this + 0xf0) = pEVar4;
    std::string::string(asStack_10,"POPANIM_EFFECTS_SIGNREWARD_GET");
    GetPAMByName(asStack_10);
    std::string::~string(asStack_10);
    nop();
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
    Effect_PopAnim::CreatePopAnimRig
              (*(Effect_PopAnim **)(this + 0xf0),(PopAnim *)pRVar5,(RtClass *)0x0);
    pSVar7 = *(StandaloneEffect **)(this + 0xf0);
    iVar2 = FUN_04a45288(0x73);
    iVar3 = FUN_04a45288(0xdc);
    Sexy::FastCurve::SetOutRange((FastCurve *)asStack_10,(float)iVar2,(float)iVar3);
    StandaloneEffect::SetScreenSpaceOrigin(pSVar7,(SexyVector2 *)asStack_10,900000);
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0xf0),true);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0xf0),true);
    pEVar4 = *(Effect_PopAnim **)(this + 0xf0);
    std::string::string(asStack_10,"animation");
    Effect_PopAnim::PlaySingleAnimation(pEVar4,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    pEVar4 = GameObject::CreateOutsideTable<Effect_PopAnim>();
    *(Effect_PopAnim **)(this + 0xf8) = pEVar4;
    std::string::string(asStack_10,"POPANIM_EFFECTS_DAILYREWARDBG");
    GetPAMByName(asStack_10);
    std::string::~string(asStack_10);
    nop();
    pRVar5 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_18);
    Effect_PopAnim::CreatePopAnimRig
              (*(Effect_PopAnim **)(this + 0xf8),(PopAnim *)pRVar5,(RtClass *)0x0);
    pSVar7 = *(StandaloneEffect **)(this + 0xf8);
    iVar2 = FUN_04a45288(0x58);
    iVar3 = FUN_04a45288(0x44);
    Sexy::FastCurve::SetOutRange((FastCurve *)asStack_10,(float)iVar2,(float)iVar3);
    StandaloneEffect::SetScreenSpaceOrigin(pSVar7,(SexyVector2 *)asStack_10,900000);
    Effect_PopAnim::SetCentered(*(Effect_PopAnim **)(this + 0xf8),true);
    StandaloneEffect::SetVisibility(*(StandaloneEffect **)(this + 0xf8),true);
    cVar1 = LawnApp::IsPlatformHD(gLawnApp);
    plVar6 = *(long **)(this + 0xf8);
    if (cVar1 == '\0') {
      (**(code **)(*plVar6 + 0x80))(0x3f333333,plVar6);
    }
    else {
      (**(code **)(*plVar6 + 0x80))(0x3f51eb85,plVar6);
    }
    pEVar4 = *(Effect_PopAnim **)(this + 0xf8);
    std::string::string(asStack_10,"anim");
    PVZ_EOT();
    Effect_PopAnim::PlayLoopingAnimation(pEVar4,asStack_10,0);
    std::string::~string(asStack_10);
    nop();
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TWRewardContent::InitView(TWRewardData, bool) */

void TWRewardContent::InitView(long param_1,long param_2)

{
  char cVar1;
  ResourceInfo *pRVar2;
  undefined8 uVar3;
  NameMapperBase *pNVar4;
  string *psVar5;
  long lVar6;
  string asStack_48 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_40 [8];
  int local_38 [10];
  undefined1 auStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GetGameItemInfo(*(int *)(param_2 + 8),0x7fffffff,0);
  if (local_38[0] == 0) goto LAB_04a478b4;
  Sexy::StrFormat("IMAGE_UI_SIGNREWARD_NUM_%d",asStack_48,(ulong)*(uint *)(param_2 + 0xc));
  LawnApp::GetUIImageFromStringId(gLawnApp);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(param_1 + 0x100),(RtWeakPtr *)aRStack_40);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
  *(undefined4 *)(param_1 + 0x120) = 0x3f800000;
  if (local_38[0] == 0xbc0) {
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b8e8);
    *(undefined8 *)(param_1 + 0xd8) = uVar3;
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b470);
    *(undefined8 *)(param_1 + 0xe0) = uVar3;
  }
  else if (local_38[0] == 0xfad) {
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b5a8);
    *(undefined8 *)(param_1 + 0xd8) = uVar3;
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b770);
    *(undefined8 *)(param_1 + 0xe0) = uVar3;
  }
  else {
    LawnApp::GetUIImageFromStringId(gLawnApp);
    pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_40);
    *(ResourceInfo **)(param_1 + 0xd8) = pRVar2;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06b7b470);
    *(undefined8 *)(param_1 + 0xe0) = uVar3;
    pNVar4 = (NameMapperBase *)PlantChipNameMapperServerID::GetInstance();
    cVar1 = NameMapperBase::ContainsId(pNVar4,local_38[0]);
    if (cVar1 == '\0') {
      pNVar4 = (NameMapperBase *)PlantAccessoryPieceMapper::GetInstance();
      cVar1 = NameMapperBase::ContainsId(pNVar4,local_38[0]);
      if (cVar1 == '\0') {
        pNVar4 = (NameMapperBase *)PlantAccessoryInfoMapper::GetInstance();
        cVar1 = NameMapperBase::ContainsId(pNVar4,local_38[0]);
        if (cVar1 == '\0') {
          pNVar4 = (NameMapperBase *)AvatarChipNameMapperServerID::GetInstance();
          cVar1 = NameMapperBase::ContainsId(pNVar4,local_38[0]);
          if (cVar1 != '\0') goto LAB_04a479bc;
        }
        else {
          *(undefined4 *)(param_1 + 0x120) = 0x3f4ccccd;
        }
      }
      else {
LAB_04a479bc:
        *(undefined4 *)(param_1 + 0x120) = 0x3f19999a;
      }
    }
    else {
      psVar5 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar5);
      cVar1 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_40);
      if (cVar1 != '\0') {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_40);
        thunk_FUN_05475e00(param_1 + 0x128,lVar6 + 8);
      }
      *(undefined4 *)(param_1 + 0x120) = 0x3f19999a;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_40);
    }
  }
  thunk_FUN_05477b9c(param_1 + 0x108,auStack_10);
  std::string::~string(asStack_48);
LAB_04a478b4:
  GAME_ITEM_INFO::~GAME_ITEM_INFO((GAME_ITEM_INFO *)local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

