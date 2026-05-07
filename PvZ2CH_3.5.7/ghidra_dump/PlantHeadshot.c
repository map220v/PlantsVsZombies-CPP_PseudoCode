// Class: PlantHeadshot


/* PlantHeadshot::Resize(Sexy::TRect<int> const&) */

void __thiscall PlantHeadshot::Resize(PlantHeadshot *this,TRect *param_1)

{
  (**(code **)(*(long *)this + 0x198))
            (this,*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
             *(undefined4 *)(param_1 + 0xc));
  return;
}


/* PlantHeadshot::SetNeedLock(bool) */

void __thiscall PlantHeadshot::SetNeedLock(PlantHeadshot *this,bool param_1)

{
  this[0xd1] = (PlantHeadshot)param_1;
  return;
}


/* PlantHeadshot::~PlantHeadshot() */

void __thiscall PlantHeadshot::~PlantHeadshot(PlantHeadshot *this)

{
  *(undefined ***)this = &PTR_GetClass_068562f0;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x130));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x128));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x120));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x118));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* PlantHeadshot::~PlantHeadshot() */

void __thiscall PlantHeadshot::~PlantHeadshot(PlantHeadshot *this)

{
  ~PlantHeadshot(this);
  AK::FreeHook(this);
  return;
}


/* PlantHeadshot::Draw(Sexy::Graphics*) */

void __thiscall PlantHeadshot::Draw(PlantHeadshot *this,Graphics *param_1)

{
  PlantHeadshot PVar1;
  bool bVar2;
  ResourceInfo *pRVar3;
  
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x120));
  if (bVar2) {
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x120));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar3,*(int *)(this + 0xe4),*(int *)(this + 0xe8),
               *(int *)(this + 0xec),*(int *)(this + 0xf0));
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x118));
    if (!bVar2) goto LAB_044ecb3c;
LAB_044ecba0:
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x118));
    Sexy::Graphics::DrawImage
              (param_1,(Image *)pRVar3,*(int *)(this + 0xd4),*(int *)(this + 0xd8),
               *(int *)(this + 0xdc),*(int *)(this + 0xe0));
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x128));
    if (bVar2) {
LAB_044ecbd8:
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x128));
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar3,*(int *)(this + 0xf4),*(int *)(this + 0xf8),
                 *(int *)(this + 0xfc),*(int *)(this + 0x100));
      PVar1 = this[0xd1];
      goto joined_r0x044ecc00;
    }
  }
  else {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x118));
    if (bVar2) goto LAB_044ecba0;
LAB_044ecb3c:
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x128));
    if (bVar2) goto LAB_044ecbd8;
  }
  PVar1 = this[0xd1];
joined_r0x044ecc00:
  if (PVar1 != (PlantHeadshot)0x0) {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x130));
    if (bVar2) {
      pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(this + 0x130));
      Sexy::Graphics::DrawImage
                (param_1,(Image *)pRVar3,*(int *)(this + 0x104),*(int *)(this + 0x108),
                 *(int *)(this + 0x10c),*(int *)(this + 0x110));
      return;
    }
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeadshot::Resize(int, int, int, int) */

void __thiscall
PlantHeadshot::Resize(PlantHeadshot *this,int param_1,int param_2,int param_3,int param_4)

{
  RtWeakPtr *pRVar1;
  RtWeakPtr *pRVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  LotteryResultProgressBar *pLVar6;
  SalesProgressBar *pSVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  pRVar1 = (RtWeakPtr *)(this + 0x120);
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
  if (bVar3) {
    pRVar2 = (RtWeakPtr *)(this + 0x118);
    pLVar6 = (LotteryResultProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    fVar11 = (float)param_3 / (float)iVar4;
    pSVar7 = (SalesProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    iVar4 = SalesProgressBar::GetCurrentLevel(pSVar7);
    fVar10 = (float)param_4 / (float)iVar4;
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar2);
    fVar12 = _FUN_044ed014;
    if (bVar3) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar2);
      Sexy::BaseResource::GetRtId();
      GetImageOffset(&local_20,(RtId *)&local_18);
      Sexy::RtId::~RtId((RtId *)&local_18);
      fVar12 = _FUN_044ed014;
      UIWidget::ConvertPSDImageOffsetToUISpace(&local_20,&local_1c,_FUN_044ed014);
      fVar9 = (float)local_20;
      fVar8 = (float)local_1c;
      pLVar6 = (LotteryResultProgressBar *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar2);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
      pSVar7 = (SalesProgressBar *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar2);
      iVar5 = SalesProgressBar::GetCurrentLevel(pSVar7);
      Sexy::Insets::Insets
                ((Insets *)&local_18,(int)(fVar11 * fVar9),(int)(fVar10 * fVar8),
                 (int)((float)iVar4 * fVar11),(int)((float)iVar5 * fVar10));
      *(undefined8 *)(this + 0xd4) = local_18;
      *(undefined8 *)(this + 0xdc) = uStack_10;
    }
    pRVar2 = (RtWeakPtr *)(this + 0x128);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    Sexy::BaseResource::GetRtId();
    GetImageOffset(&local_28,(RtId *)&local_18);
    Sexy::RtId::~RtId((RtId *)&local_18);
    UIWidget::ConvertPSDImageOffsetToUISpace(&local_28,&local_24,fVar12);
    pLVar6 = (LotteryResultProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
    pSVar7 = (SalesProgressBar *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
    iVar5 = SalesProgressBar::GetCurrentLevel(pSVar7);
    Sexy::Insets::Insets
              ((Insets *)&local_18,(int)(fVar11 * (float)local_28),(int)(fVar10 * (float)local_24),
               (int)((float)iVar4 * fVar11),(int)((float)iVar5 * fVar10));
    *(undefined8 *)(this + 0xe4) = local_18;
    *(undefined8 *)(this + 0xec) = uStack_10;
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar2);
    if (bVar3) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar2);
      Sexy::BaseResource::GetRtId();
      GetImageOffset(&local_20,(RtId *)&local_18);
      Sexy::RtId::~RtId((RtId *)&local_18);
      UIWidget::ConvertPSDImageOffsetToUISpace(&local_20,&local_1c,fVar12);
      fVar9 = (float)local_20;
      fVar8 = (float)local_1c;
      pLVar6 = (LotteryResultProgressBar *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar2);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
      pSVar7 = (SalesProgressBar *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar2);
      iVar5 = SalesProgressBar::GetCurrentLevel(pSVar7);
      Sexy::Insets::Insets
                ((Insets *)&local_18,(int)(fVar11 * fVar9),(int)(fVar10 * fVar8),
                 (int)((float)iVar4 * fVar11),(int)((float)iVar5 * fVar10));
      *(undefined8 *)(this + 0xf4) = local_18;
      *(undefined8 *)(this + 0xfc) = uStack_10;
    }
    pRVar1 = (RtWeakPtr *)(this + 0x130);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool(pRVar1);
    if (bVar3) {
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      Sexy::BaseResource::GetRtId();
      GetImageOffset(&local_20,(RtId *)&local_18);
      Sexy::RtId::~RtId((RtId *)&local_18);
      UIWidget::ConvertPSDImageOffsetToUISpace(&local_20,&local_1c,fVar12);
      pLVar6 = (LotteryResultProgressBar *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      iVar4 = LotteryResultProgressBar::GetCurrentLevel(pLVar6);
      pSVar7 = (SalesProgressBar *)
               Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)pRVar1);
      iVar5 = SalesProgressBar::GetCurrentLevel(pSVar7);
      Sexy::Insets::Insets
                ((Insets *)&local_18,(int)(fVar11 * (float)local_20),(int)(fVar10 * (float)local_1c)
                 ,(int)((float)iVar4 * fVar11),(int)((float)iVar5 * fVar10));
      *(undefined8 *)(this + 0x104) = local_18;
      *(undefined8 *)(this + 0x10c) = uStack_10;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantHeadshot::PlantHeadshot(std::string) */

void __thiscall PlantHeadshot::PlantHeadshot(PlantHeadshot *this,undefined8 param_2)

{
  string *psVar1;
  long lVar2;
  char *__s;
  undefined8 uVar3;
  string *extraout_x1;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_28 [8];
  string asStack_20 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_068562f0;
  Sexy::Insets::Insets((Insets *)(this + 0xd4));
  Sexy::Insets::Insets((Insets *)(this + 0xe4));
  Sexy::Insets::Insets((Insets *)(this + 0xf4));
  Sexy::Insets::Insets((Insets *)(this + 0x104));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x118));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x120));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x128));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x130));
  this[0xd1] = (PlantHeadshot)0x0;
  this[0x59] = (PlantHeadshot)0x1;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  Sexy::StrFormat("IMAGE_UI_HEADSHOT_PLANT_RARE_%d",asStack_10,(ulong)*(uint *)(lVar2 + 0xd0));
  GetImageByNameWithUIFallback(asStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x120),(RtWeakPtr *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_10);
  lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
  if (3 < *(int *)(lVar2 + 0xd0)) {
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_28);
    Sexy::StrFormat("IMAGE_UI_HEADSHOT_PLANT_RARE_%d_FRAME",asStack_10,
                    (ulong)*(uint *)(lVar2 + 0xd0));
    GetImageByNameWithUIFallback(asStack_10);
    Sexy::RtWeakPtr<PowerPropertySheet>::operator=
              ((RtWeakPtr<PowerPropertySheet> *)(this + 0x128),(RtWeakPtr *)aRStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
    std::string::~string(asStack_10);
  }
  std::string::string(asStack_10,"IMAGE_UI_HEADSHOT_PLANT_PLANTS_CARDS_BLUE");
  GetImageByNameWithUIFallback(asStack_10);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x130),(RtWeakPtr *)aRStack_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  std::string::~string(asStack_10);
  nop();
  __s = (char *)FUN_0547429c(param_2);
  std::string::string(asStack_10,__s);
  Sexy::Upper((Sexy *)asStack_10,extraout_x1);
  std::string::~string(asStack_10);
  nop();
  uVar3 = FUN_0547429c(asStack_20);
  Sexy::StrFormat("IMAGE_UI_HEADSHOT_PLANT_%s",aRStack_18,uVar3);
  GetImageByNameWithUIFallback((string *)aRStack_18);
  Sexy::RtWeakPtr<PowerPropertySheet>::operator=
            ((RtWeakPtr<PowerPropertySheet> *)(this + 0x118),(RtWeakPtr *)asStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_10);
  fVar4 = (float)FUN_044eca68();
  Resize(this,*(int *)(this + 0x48),*(int *)(this + 0x4c),(int)fVar4,(int)fVar4);
  std::string::~string((string *)aRStack_18);
  std::string::~string(asStack_20);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_28);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

