// Class: RechargeProgress


/* RechargeProgress::ResetProgress() */

void __thiscall RechargeProgress::ResetProgress(RechargeProgress *this)

{
  unkuint9 Var1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  ulong uVar4;
  undefined4 *puVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 uVar10;
  float fVar11;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  iVar9 = 0;
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar8 = *(undefined8 *)(this + 0xd8);
  uVar4 = FUN_033954d4(uVar8,*(undefined8 *)(this + 0xe0));
  Var1 = (unkuint9)uVar4;
  *(undefined4 *)(this + 0xf0) = 0;
  uVar7 = 0;
  do {
    if (uVar4 <= uVar7) {
      fVar11 = *(float *)(this + 0xf0);
LAB_033977cc:
      uVar10 = NEON_fminnm(fVar11,0x3f800000);
      *(undefined4 *)(this + 0xf0) = uVar10;
      return;
    }
    puVar5 = (undefined4 *)FUN_033954e0(uVar8,uVar7);
    cVar2 = PlayerInfo::IsUnlockRechargeNode(this_01,*puVar5);
    if (cVar2 == '\0') {
      iVar3 = PlayerInfo::GetNumTotalRechargeCurrency(this_01);
      piVar6 = (int *)FUN_033954e0(*(undefined8 *)(this + 0xd8),uVar7);
      fVar11 = ((float)(iVar3 - iVar9) * (1.0 / (float)(unkint9)Var1)) / (float)(*piVar6 - iVar9) +
               *(float *)(this + 0xf0);
      goto LAB_033977cc;
    }
    uVar8 = *(undefined8 *)(this + 0xd8);
    piVar6 = (int *)FUN_033954e0(uVar8,uVar7);
    iVar9 = *piVar6;
    *(float *)(this + 0xf0) = *(float *)(this + 0xf0) + 1.0 / (float)(unkint9)Var1;
    uVar4 = FUN_033954d4(uVar8,*(undefined8 *)(this + 0xe0));
    uVar7 = uVar7 + 1;
  } while( true );
}


/* RechargeProgress::GetRechargeNodeItemImage(RechargeNode) */

undefined8 __thiscall
RechargeProgress::GetRechargeNodeItemImage(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  ProfileMgr *this;
  PlayerInfo *pPVar2;
  undefined8 uVar3;
  
  this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar2 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
  cVar1 = PlayerInfo::IsUnlockRechargeNode(pPVar2,param_2);
  switch(param_2) {
  case 2:
    break;
  default:
    return 0;
  case 6:
    if (cVar1 != '\0') {
      uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bf38);
      return uVar3;
    }
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9b7b8);
    return uVar3;
  case 10:
    if (cVar1 == '\0') {
      uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c988);
      return uVar3;
    }
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9b8b0);
    return uVar3;
  case 0x14:
    if (cVar1 != '\0') {
      uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c880);
      return uVar3;
    }
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bbe8);
    return uVar3;
  case 0x1e:
    if (cVar1 != '\0') {
      uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9be88);
      return uVar3;
    }
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9b9c8);
    return uVar3;
  }
  if (cVar1 != '\0') {
    uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bcc8);
    return uVar3;
  }
  uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9ba20);
  return uVar3;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeProgress::Draw(Sexy::Graphics*) */

void __thiscall RechargeProgress::Draw(RechargeProgress *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  LotteryResultProgressBar *pLVar11;
  SalesProgressBar *pSVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  Image *pIVar16;
  undefined4 *puVar17;
  LotteryResultProgressBar *pLVar18;
  ProfileMgr *pPVar19;
  PlayerInfo *pPVar20;
  ulong uVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  int local_30;
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  nop();
  iVar2 = FUN_033961ec(0xf);
  iVar10 = *(int *)(this + 0x48);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9b810);
  iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  iVar4 = FUN_033961ec(0x28);
  iVar9 = *(int *)(this + 0x4c);
  iVar5 = FUN_033961ec(0x1e);
  iVar8 = *(int *)(this + 0x50);
  pLVar11 = (LotteryResultProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9b810);
  iVar6 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
  pSVar12 = (SalesProgressBar *)
            CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c428);
  iVar7 = SalesProgressBar::GetCurrentLevel(pSVar12);
  Sexy::Insets::Insets
            ((Insets *)&local_38,iVar2 + iVar10 + iVar3,iVar4 + iVar9,(iVar8 - iVar5) - iVar6,iVar7)
  ;
  Sexy::Insets::Insets(aIStack_18,(Insets *)&local_38);
  uVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c428);
  Draw9SliceImage(param_1,aIStack_18,uVar13);
  iVar9 = local_34;
  iVar10 = local_38;
  fVar23 = *(float *)(this + 0xf0);
  if (0.0 < fVar23) {
    iVar8 = FUN_033961ec(7);
    fVar22 = (float)local_30;
    pSVar12 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bcf0);
    iVar2 = SalesProgressBar::GetCurrentLevel(pSVar12);
    Sexy::Insets::Insets(aIStack_28,iVar10,iVar9 + iVar8,(int)(fVar22 * fVar23),iVar2);
    Sexy::Insets::Insets(aIStack_18,aIStack_28);
    uVar13 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9bcf0);
    Draw9SliceImage(param_1,aIStack_18,uVar13);
  }
  uVar21 = 0;
  uVar14 = FUN_033954d4(*(undefined8 *)(this + 0xd8),*(undefined8 *)(this + 0xe0));
  if (uVar14 != 0) {
    do {
      iVar10 = 0;
      if (uVar14 != 0) {
        iVar10 = (int)((ulong)(long)(local_30 + local_30 * (int)uVar21) / uVar14);
      }
      iVar10 = local_38 + iVar10;
      pLVar11 = (LotteryResultProgressBar *)
                CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9b860);
      iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
      uVar13 = *(undefined8 *)(this + 0xd8);
      iVar10 = iVar10 - iVar9;
      lVar15 = FUN_033954d4(uVar13,*(undefined8 *)(this + 0xe0));
      if (uVar21 != lVar15 - 1U) {
        pIVar16 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9b860);
        Sexy::Graphics::DrawImage(param_1,pIVar16,iVar10,local_34);
        uVar13 = *(undefined8 *)(this + 0xd8);
      }
      puVar17 = (undefined4 *)FUN_033954e0(uVar13,uVar21);
      pLVar11 = (LotteryResultProgressBar *)GetRechargeNodeItemImage(this,*puVar17);
      if (pLVar11 != (LotteryResultProgressBar *)0x0) {
        iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
        pLVar18 = (LotteryResultProgressBar *)
                  CachedUIResourcePtr<Sexy::Image>::operator->
                            ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9b860);
        iVar9 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
        iVar8 = local_34;
        iVar9 = (iVar10 - iVar2) + iVar9;
        iVar10 = FUN_033961ec(0xf);
        Sexy::Graphics::DrawImage(param_1,(Image *)pLVar11,iVar9,iVar8 + iVar10);
        pPVar19 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
        pPVar20 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar19);
        puVar17 = (undefined4 *)FUN_033954e0(*(undefined8 *)(this + 0xd8),uVar21);
        cVar1 = PlayerInfo::IsUnlockRechargeNode(pPVar20,*puVar17);
        if (cVar1 != '\0') {
          pIVar16 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c030);
          iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar11);
          pLVar18 = (LotteryResultProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c030);
          iVar3 = LotteryResultProgressBar::GetCurrentLevel(pLVar18);
          iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)pLVar11);
          pSVar12 = (SalesProgressBar *)
                    CachedUIResourcePtr<Sexy::Image>::operator->
                              ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9c030);
          iVar5 = SalesProgressBar::GetCurrentLevel(pSVar12);
          Sexy::Graphics::DrawImage
                    (param_1,pIVar16,iVar9 + (iVar2 - iVar3) / 2,
                     iVar8 + iVar10 + (iVar4 - iVar5) / 2);
        }
      }
      uVar21 = uVar21 + 1;
      uVar14 = FUN_033954d4(*(undefined8 *)(this + 0xd8),*(undefined8 *)(this + 0xe0));
    } while (uVar21 < uVar14);
  }
  pIVar16 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06a9b810);
  iVar10 = FUN_033961ec(0x14);
  Sexy::Graphics::DrawImage(param_1,pIVar16,iVar10 + *(int *)(this + 0x48),*(int *)(this + 0x4c));
  iVar8 = FUN_033961ec(0x46);
  iVar10 = *(int *)(this + 0x48);
  iVar2 = FUN_033961ec(0x57);
  iVar9 = *(int *)(this + 0x4c);
  iVar3 = FUN_033961ec(0x28);
  iVar4 = FUN_033961ec(0x16);
  Sexy::Insets::Insets(aIStack_28,iVar8 + iVar10,iVar2 + iVar9,iVar3,iVar4);
  pPVar19 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  pPVar20 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(pPVar19);
  uVar14 = PlayerInfo::GetNumTotalRechargeCurrency(pPVar20);
  Sexy::StrFormat(L"%d",auStack_40,uVar14 & 0xffffffff);
  uVar13 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_20);
  Sexy::Color::Color((Color *)aIStack_18,1);
  WriteWordInRect(param_1,auStack_40,aIStack_28,uVar13,aIStack_18,5,1);
  FUN_05476c50(auStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeProgress::RechargeProgress() */

void __thiscall RechargeProgress::RechargeProgress(RechargeProgress *this)

{
  undefined *puVar1;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06613750;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  *(undefined4 *)(this + 0xf0) = 0;
  std::vector<RechargeNode,std::allocator<RechargeNode>>::clear
            ((vector<RechargeNode,std::allocator<RechargeNode>> *)(this + 0xd8));
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRechargeCurrencyChanged);
  Sexy::Delegate0::Delegate0<RechargeProgress,void(RechargeProgress::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::RechargeCurrencyChanged,aDStack_38);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onRechargeCurrencyChanged);
  Sexy::Delegate0::Delegate0<RechargeProgress,void(RechargeProgress::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)puVar1,Message::ShowNextRechargeNode,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RechargeProgress::~RechargeProgress() */

void __thiscall RechargeProgress::~RechargeProgress(RechargeProgress *this)

{
  *(undefined ***)this = &PTR_GetClass_06613750;
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  std::vector<RechargeNode,std::allocator<RechargeNode>>::~vector
            ((vector<RechargeNode,std::allocator<RechargeNode>> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  return;
}


/* RechargeProgress::~RechargeProgress() */

void __thiscall RechargeProgress::~RechargeProgress(RechargeProgress *this)

{
  ~RechargeProgress(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeProgress::UnlockRandomPlant() */

void RechargeProgress::UnlockRandomPlant(void)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ProfileMgr *this;
  PlayerInfo *this_00;
  ulong uVar8;
  RtWeakPtrBase *pRVar9;
  ResourceInfo *pRVar10;
  MagentoProductProps *this_01;
  undefined8 uVar11;
  undefined2 *puVar12;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *p_Var13;
  uint uVar14;
  float fVar15;
  RtWeakPtr aRStack_60 [8];
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined2 local_18;
  RtWeakPtr<PowerPropertySheet> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_50);
  std::string::string((string *)&local_38,"iOS PvZ2 Coins Plants");
  p_Var13 = a_Stack_58;
  std::string::string((string *)&local_20,"Plants");
  Magento::GetStoreCategory((Magento *)&local_38,(string *)&local_20,(string *)p_Var13);
  std::string::~string((string *)&local_20);
  nop();
  std::string::~string((string *)&local_38);
  nop();
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool(aRStack_60);
  if (bVar2) {
    this = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
    this_00 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this);
    std::vector<PlantBagItemData,std::allocator<PlantBagItemData>>::clear
              ((vector<PlantBagItemData,std::allocator<PlantBagItemData>> *)&local_50);
    if (((DAT_06a9c878 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_06a9c878), iVar4 != 0)) {
      std::
      map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
      ::map((map<std::wstring,Sexy::DataElement*,std::less<std::wstring>,std::allocator<std::pair<std::wstring_const,Sexy::DataElement*>>>
             *)&DAT_06a9b7e0);
      __cxa_guard_release(&DAT_06a9c878);
      __cxa_atexit(std::
                   map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                   ::~map,&DAT_06a9b7e0,&DAT_06a88000);
    }
    lVar6 = std::
            map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
            ::size((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                    *)&DAT_06a9b7e0);
    if (lVar6 == 0) {
      std::string::string((string *)&local_20,"chilibean");
      puVar12 = (undefined2 *)
                std::
                map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                              *)&DAT_06a9b7e0,(string *)&local_20);
      *puVar12 = 0;
      std::string::~string((string *)&local_20);
      nop();
      std::string::string((string *)&local_20,"imitater");
      puVar12 = (undefined2 *)
                std::
                map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                              *)&DAT_06a9b7e0,(string *)&local_20);
      *puVar12 = 200;
      std::string::~string((string *)&local_20);
      nop();
      std::string::string((string *)&local_20,"torchwood");
      puVar12 = (undefined2 *)
                std::
                map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                              *)&DAT_06a9b7e0,(string *)&local_20);
      *puVar12 = 800;
      std::string::~string((string *)&local_20);
      nop();
      std::string::string((string *)&local_20,"twinsunflower");
      puVar12 = (undefined2 *)
                std::
                map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                              *)&DAT_06a9b7e0,(string *)&local_20);
      *puVar12 = 0;
      std::string::~string((string *)&local_20);
      nop();
      std::string::string((string *)&local_20,"coconutcannon");
      puVar12 = (undefined2 *)
                std::
                map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                              *)&DAT_06a9b7e0,(string *)&local_20);
      *puVar12 = 200;
      std::string::~string((string *)&local_20);
      nop();
      std::string::string((string *)&local_20,"lightningreed");
      puVar12 = (undefined2 *)
                std::
                map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                              *)&DAT_06a9b7e0,(string *)&local_20);
      *puVar12 = 800;
      std::string::~string((string *)&local_20);
      nop();
      std::string::string((string *)&local_20,"melonpult");
      puVar12 = (undefined2 *)
                std::
                map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                              *)&DAT_06a9b7e0,(string *)&local_20);
      *puVar12 = 0x578;
      std::string::~string((string *)&local_20);
      nop();
      std::string::string((string *)&local_20,"peapod");
      puVar12 = (undefined2 *)
                std::
                map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                              *)&DAT_06a9b7e0,(string *)&local_20);
      *puVar12 = 200;
      std::string::~string((string *)&local_20);
      nop();
      std::string::string((string *)&local_20,"gravebuster");
      puVar12 = (undefined2 *)
                std::
                map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                              *)&DAT_06a9b7e0,(string *)&local_20);
      *puVar12 = 0;
      std::string::~string((string *)&local_20);
      nop();
      std::string::string((string *)&local_20,"kernelpult");
      puVar12 = (undefined2 *)
                std::
                map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                              *)&DAT_06a9b7e0,(string *)&local_20);
      *puVar12 = 0x578;
      std::string::~string((string *)&local_20);
      nop();
      std::string::string((string *)&local_20,"snowpea");
      puVar12 = (undefined2 *)
                std::
                map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                              *)&DAT_06a9b7e0,(string *)&local_20);
      *puVar12 = 0x578;
      std::string::~string((string *)&local_20);
      nop();
      std::string::string((string *)&local_20,"repeater");
      puVar12 = (undefined2 *)
                std::
                map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                              *)&DAT_06a9b7e0,(string *)&local_20);
      *puVar12 = 0x578;
      std::string::~string((string *)&local_20);
      nop();
      std::string::string((string *)&local_20,"spikerock");
      puVar12 = (undefined2 *)
                std::
                map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                              *)&DAT_06a9b7e0,(string *)&local_20);
      *puVar12 = 800;
      std::string::~string((string *)&local_20);
      nop();
      std::string::string((string *)&local_20,"tallnut");
      puVar12 = (undefined2 *)
                std::
                map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                              *)&DAT_06a9b7e0,(string *)&local_20);
      *puVar12 = 800;
      std::string::~string((string *)&local_20);
      nop();
      std::string::string((string *)&local_20,"threepeater");
      puVar12 = (undefined2 *)
                std::
                map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                              *)&DAT_06a9b7e0,(string *)&local_20);
      *puVar12 = 400;
      std::string::~string((string *)&local_20);
      nop();
      std::string::string((string *)&local_20,"wintermelon");
      puVar12 = (undefined2 *)
                std::
                map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                              *)&DAT_06a9b7e0,(string *)&local_20);
      *puVar12 = 200;
      std::string::~string((string *)&local_20);
      nop();
      std::string::string((string *)&local_20,"peach");
      puVar12 = (undefined2 *)
                std::
                map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                              *)&DAT_06a9b7e0,(string *)&local_20);
      *puVar12 = 200;
      std::string::~string((string *)&local_20);
      nop();
      std::string::string((string *)&local_20,"firegourd");
      puVar12 = (undefined2 *)
                std::
                map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                              *)&DAT_06a9b7e0,(string *)&local_20);
      *puVar12 = 200;
      std::string::~string((string *)&local_20);
      nop();
    }
    uVar7 = 0;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
    while( true ) {
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      uVar8 = FUN_0339543c(*(undefined8 *)(lVar6 + 0x60),*(undefined8 *)(lVar6 + 0x68));
      uVar11 = local_38;
      if (uVar8 <= uVar7) break;
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
      pRVar9 = (RtWeakPtrBase *)FUN_03395448(*(undefined8 *)(lVar6 + 0x60),uVar7);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_20,pRVar9);
      pRVar10 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_20);
      cVar3 = PlayerInfo::OwnsItemContainedInProps(this_00,(MagentoProductProps *)pRVar10);
      if (cVar3 == '\0') {
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_20)
        ;
        bVar2 = std::operator==((string *)(lVar6 + 0x78),"plant");
        if (bVar2) {
          this_01 = (MagentoProductProps *)
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
          fVar15 = (float)MagentoProductProps::GetPriceInUSD(this_01,false);
          if (fVar15 < 0.0) {
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
            iVar4 = *(int *)(lVar6 + 0x90);
            lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                              ((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
            iVar5 = PlayerInfo::GetPlantPieceCount(this_00,(string *)(lVar6 + 0x80),false);
            if (iVar5 < iVar4) goto LAB_033a1b40;
          }
        }
        std::
        vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
        ::push_back((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
                     *)&local_38,(RtWeakPtr *)&local_20);
      }
LAB_033a1b40:
      uVar7 = uVar7 + 1;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_20);
    }
    iVar4 = FUN_0339543c(local_38,local_30);
    if (0 < iVar4) {
      lVar6 = 0;
      do {
        lVar1 = lVar6 + 1;
        pRVar9 = (RtWeakPtrBase *)FUN_03395448(uVar11,lVar6);
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)a_Stack_58,pRVar9);
        PlantBagItemData::PlantBagItemData((PlantBagItemData *)&local_20);
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_10,(RtWeakPtr *)a_Stack_58);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
        thunk_FUN_05475e00((string *)&local_20,lVar6 + 0x80);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
        puVar12 = (undefined2 *)
                  std::
                  map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                  ::operator[]((map<std::string,unsigned_short,std::less<std::string>,std::allocator<std::pair<std::string_const,unsigned_short>>>
                                *)&DAT_06a9b7e0,(string *)(lVar6 + 0x80));
        local_18 = *puVar12;
        std::vector<PlantBagItemData,std::allocator<PlantBagItemData>>::push_back
                  ((vector<PlantBagItemData,std::allocator<PlantBagItemData>> *)&local_50,
                   (PlantBagItemData *)&local_20);
        GridItemZombieMirrorQueenMirror::CopyZombieParams::~CopyZombieParams
                  ((CopyZombieParams *)&local_20);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58)
        ;
        uVar11 = local_38;
        lVar6 = lVar1;
      } while ((int)lVar1 < iVar4);
    }
    std::
    vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
    ::~vector((vector<Sexy::RtWeakPtr<MagentoProductProps>,std::allocator<Sexy::RtWeakPtr<MagentoProductProps>>>
               *)&local_38);
  }
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            (a_Stack_58);
  ProfileUtils::Profile();
  lVar6 = FUN_03395464(local_50,local_48);
  bVar2 = true;
  if (lVar6 != 0) {
    iVar4 = 0;
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_50);
    while( true ) {
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_50);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_20);
      uVar14 = (uint)bVar2;
      if (!bVar2) break;
      lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      iVar4 = iVar4 + (uint)*(ushort *)(lVar6 + 8);
      FUN_03397f70((string *)&local_38);
    }
    uVar7 = time((time_t *)0x0);
    Sexy::SRand(uVar7);
    iVar4 = Sexy::Rand(iVar4);
    local_38 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_50);
    while( true ) {
      local_20 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)&local_50);
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_38,(__normal_iterator *)&local_20);
      if (!bVar2) break;
      lVar6 = std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_38);
      uVar14 = uVar14 + *(ushort *)(lVar6 + 8);
      if (iVar4 < (int)uVar14) {
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_58,(RtWeakPtr *)(lVar6 + 0x10));
        bVar2 = false;
        goto LAB_033a19b4;
      }
      FUN_03397f70((string *)&local_38);
    }
    bVar2 = false;
  }
LAB_033a19b4:
  LawnApp::ShowGetPlantBagUI(gLawnApp,(RtWeakPtr *)a_Stack_58,bVar2);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  std::vector<PlantBagItemData,std::allocator<PlantBagItemData>>::~vector
            ((vector<PlantBagItemData,std::allocator<PlantBagItemData>> *)&local_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* RechargeProgress::UnlockNextRechargeNode() */

void __thiscall RechargeProgress::UnlockNextRechargeNode(RechargeProgress *this)

{
  LawnApp *pLVar1;
  char cVar2;
  int iVar3;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined4 *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  ActivityConfig *pAVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  uVar5 = 0;
  do {
    uVar9 = uVar5;
    uVar10 = *(undefined8 *)(this + 0xd8);
    uVar5 = FUN_033954d4(uVar10,*(undefined8 *)(this + 0xe0));
    if (uVar5 <= uVar9) goto LAB_033a2178;
    puVar4 = (undefined4 *)FUN_033954e0(uVar10,uVar9);
    cVar2 = PlayerInfo::IsUnlockRechargeNode(this_01,*puVar4);
    uVar5 = uVar9 + 1;
  } while (cVar2 != '\0');
  iVar3 = PlayerInfo::GetNumTotalRechargeCurrency(this_01);
  piVar6 = (int *)FUN_033954e0(*(undefined8 *)(this + 0xd8),uVar9);
  if (*piVar6 <= iVar3) {
    PlayerInfo::UnlockRechargeNode(this_01);
    pLVar1 = gLawnApp;
    puVar4 = (undefined4 *)FUN_033954e0(*(undefined8 *)(this + 0xd8),uVar9);
    LawnApp::ShowRechargeRewardDisplayer(pLVar1,*puVar4);
    piVar6 = (int *)FUN_033954e0(*(undefined8 *)(this + 0xd8),uVar9);
    if (*piVar6 == 10) {
      UnlockRandomPlant();
    }
  }
LAB_033a2178:
  iVar3 = FUN_03395410(*(undefined4 *)(this_01 + 0xeb0));
  if ((0x1d < iVar3) && (cVar2 = FUN_03395414(this_01[0x338]), cVar2 == '\0')) {
    lVar7 = LawnApp::GetActivityConfig();
    if (lVar7 != 0) {
      pAVar8 = (ActivityConfig *)LawnApp::GetActivityConfig();
      cVar2 = ActivityConfig::IsActivityDays(pAVar8);
      if (cVar2 != '\0') {
        pAVar8 = (ActivityConfig *)LawnApp::GetActivityConfig();
        cVar2 = ActivityConfig::IsRechargePlantPieceValid(pAVar8);
        if (cVar2 != '\0') {
          pAVar8 = (ActivityConfig *)LawnApp::GetActivityConfig();
          cVar2 = ActivityConfig::IsFirstRechargeAward(pAVar8);
          if (cVar2 != '\0') {
            LawnApp::ShowRechargeRewardDisplayer(gLawnApp,true,0x1e);
            return;
          }
        }
      }
    }
  }
  return;
}


/* RechargeProgress::onRechargeCurrencyChanged() */

void __thiscall RechargeProgress::onRechargeCurrencyChanged(RechargeProgress *this)

{
  UnlockNextRechargeNode(this);
  ResetProgress(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RechargeProgress::AddRechargeNode(RechargeNode) */

void __thiscall RechargeProgress::AddRechargeNode(RechargeProgress *this,int param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  int *piVar2;
  int local_24 [3];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  local_24[0] = param_2;
  local_18 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin(this_00);
  do {
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (!bVar1) {
      std::vector<RechargeNode,std::allocator<RechargeNode>>::push_back
                ((vector<RechargeNode,std::allocator<RechargeNode>> *)this_00,
                 (RechargeNode *)local_24);
LAB_033a81f8:
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    piVar2 = (int *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_18);
    if (*piVar2 == local_24[0]) goto LAB_033a81f8;
    if (local_24[0] <= *piVar2) {
      __gnu_cxx::
      __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
      ::__normal_iterator<Sexy::RenderStateManager::Context**>
                ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                  *)&local_10,(__normal_iterator *)&local_18);
      std::vector<RechargeNode,std::allocator<RechargeNode>>::insert
                ((vector<RechargeNode,std::allocator<RechargeNode>> *)this_00,local_10,local_24);
      goto LAB_033a81f8;
    }
    FUN_03398624((exception_ptr *)&local_18);
  } while( true );
}

