// Class: PurchaseItemWidget


/* PurchaseItemWidget::SupportsProduct(MagentoProductProps const*) */

undefined1 PurchaseItemWidget::SupportsProduct(MagentoProductProps *param_1)

{
  string *psVar1;
  bool bVar2;
  undefined1 uVar3;
  
  psVar1 = (string *)(param_1 + 0x78);
  bVar2 = std::operator==(psVar1,"plant");
  if ((((bVar2) || (bVar2 = std::operator==(psVar1,"bundle"), bVar2)) ||
      (bVar2 = std::operator==(psVar1,"gameupgrade"), bVar2)) ||
     ((bVar2 = std::operator==(psVar1,"coin"), bVar2 ||
      (bVar2 = std::operator==(psVar1,"stamina"), uVar3 = 0, bVar2)))) {
    uVar3 = 1;
  }
  return uVar3;
}


/* PurchaseItemWidget::HasGemSpecialOffer(std::string const&) */

bool __thiscall PurchaseItemWidget::HasGemSpecialOffer(PurchaseItemWidget *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"com.popcap.ios.chs.PVZ2.diamonds1500");
  return bVar1;
}


/* PurchaseItemWidget::Update() */

void __thiscall PurchaseItemWidget::Update(PurchaseItemWidget *this)

{
  undefined8 *puVar1;
  PopAnimRig *this_00;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0xd8);
    uVar2 = FUN_04365d24(uVar4,*(undefined8 *)(this + 0xe0));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_04365d30(uVar4,uVar3);
    this_00 = (PopAnimRig *)*puVar1;
    fVar5 = (float)PVZ_T();
    fVar6 = (float)PVZ_Dt();
    PopAnimRig::UpdateAnim(this_00,fVar5,fVar6);
    uVar3 = uVar3 + 1;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseItemWidget::getGiftImage(std::string const&) */

void __thiscall PurchaseItemWidget::getGiftImage(PurchaseItemWidget *this,string *param_1)

{
  char cVar1;
  long lVar2;
  StoreGiftConfig *this_00;
  ResourceInfo *pRVar3;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  lVar2 = LawnApp::GetStoreGiftConfig();
  if (lVar2 != 0) {
    this_00 = (StoreGiftConfig *)LawnApp::GetStoreGiftConfig();
    cVar1 = StoreGiftConfig::GetGiftImage(this_00,param_1,asStack_18);
    if (cVar1 != '\0') {
      lVar2 = LawnApp::GetUIImageInfoFromStringId(gLawnApp,asStack_18);
      pRVar3 = (ResourceInfo *)0x0;
      if (lVar2 != 0) {
        Sexy::ResourceInfoTypes::FontRes::GetFont();
        pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
      goto LAB_04365f24;
    }
  }
  pRVar3 = (ResourceInfo *)0x0;
LAB_04365f24:
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar3);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseItemWidget::getPlantGiftImage(std::string const&) */

void __thiscall PurchaseItemWidget::getPlantGiftImage(PurchaseItemWidget *this,string *param_1)

{
  char cVar1;
  long lVar2;
  ActivityConfig *this_00;
  ResourceInfo *pRVar3;
  string asStack_18 [8];
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Set8BytesTo0(asStack_18);
  lVar2 = LawnApp::GetActivityConfig();
  if (lVar2 != 0) {
    this_00 = (ActivityConfig *)LawnApp::GetActivityConfig();
    cVar1 = ActivityConfig::GetStorePlantGiftImageBySku(this_00,param_1,asStack_18);
    if (cVar1 != '\0') {
      lVar2 = LawnApp::GetUIImageInfoFromStringId(gLawnApp,asStack_18);
      pRVar3 = (ResourceInfo *)0x0;
      if (lVar2 != 0) {
        Sexy::ResourceInfoTypes::FontRes::GetFont();
        pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
      goto LAB_04365ff4;
    }
  }
  pRVar3 = (ResourceInfo *)0x0;
LAB_04365ff4:
  std::string::~string(asStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pRVar3);
}


/* PurchaseItemWidget::getCoinsImage(int) */

void __thiscall PurchaseItemWidget::getCoinsImage(PurchaseItemWidget *this,int param_1)

{
  if (param_1 < 0x1389) {
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcb58);
    return;
  }
  if (param_1 < 0x2711) {
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc570);
    return;
  }
  if (param_1 < 0x4e21) {
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcc28);
    return;
  }
  if (40000 < param_1) {
    if (param_1 < 0x186a1) {
      CachedUIResourcePtr<Sexy::Image>::operator->
                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcd20);
      return;
    }
    if (150000 < param_1) {
      CachedUIResourcePtr<Sexy::Image>::operator->
                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcfc0);
      return;
    }
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc758);
    return;
  }
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc688);
  return;
}


/* PurchaseItemWidget::drawCoins(Sexy::Graphics*, Sexy::TRect<int>, std::string const&) */

void PurchaseItemWidget::drawCoins(PurchaseItemWidget *param_1,Graphics *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LotteryResultProgressBar *this;
  
  this = (LotteryResultProgressBar *)
         getCoinsImage(param_1,*(int *)(*(long *)(param_1 + 0x108) + 0x90));
  iVar1 = param_3[2];
  iVar2 = *param_3;
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(this);
  iVar3 = param_3[3];
  iVar4 = param_3[1];
  iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this);
  Sexy::Graphics::DrawImage
            (param_2,(Image *)this,iVar2 + (iVar1 - iVar5) / 2,iVar4 + (iVar3 - iVar6) / 2);
  return;
}


/* PurchaseItemWidget::GetPvpCoinsImage(int) */

void __thiscall PurchaseItemWidget::GetPvpCoinsImage(PurchaseItemWidget *this,int param_1)

{
  if (1000 < param_1) {
    if (param_1 < 0x1389) {
      CachedUIResourcePtr<Sexy::Image>::operator->
                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc610);
      return;
    }
    if (param_1 < 0x2711) {
      CachedUIResourcePtr<Sexy::Image>::operator->
                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afccc8);
      return;
    }
    if (param_1 < 0x186a1) {
      CachedUIResourcePtr<Sexy::Image>::operator->
                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc700);
      return;
    }
  }
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcbb0);
  return;
}


/* PurchaseItemWidget::getStaminaImage(int) */

undefined8 __thiscall PurchaseItemWidget::getStaminaImage(PurchaseItemWidget *this,int param_1)

{
  undefined8 uVar1;
  
  if (param_1 < 0xb) {
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc548);
    return uVar1;
  }
  if (param_1 < 0x17) {
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcc00);
    return uVar1;
  }
  if (param_1 < 0x38) {
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc660);
    return uVar1;
  }
  if (param_1 < 0x6f) {
    uVar1 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afccf8);
    return uVar1;
  }
  return 0;
}


/* PurchaseItemWidget::getGemsRetImage(int) */

void __thiscall PurchaseItemWidget::getGemsRetImage(PurchaseItemWidget *this,int param_1)

{
  if (param_1 < 2) {
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcae0);
    return;
  }
  if (3 < param_1) {
    if (5 < param_1) {
      CachedUIResourcePtr<Sexy::Image>::operator->
                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcaa8);
      return;
    }
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afca30);
    return;
  }
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc470);
  return;
}


/* PurchaseItemWidget::getGemsImage(int) */

void __thiscall PurchaseItemWidget::getGemsImage(PurchaseItemWidget *this,int param_1)

{
  if (param_1 == 800) {
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcbd8);
    return;
  }
  if (param_1 < 0x321) {
    if (param_1 == 0x69) {
      CachedUIResourcePtr<Sexy::Image>::operator->
                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc498);
      return;
    }
    if (param_1 < 0x6a) {
      if (param_1 == 0x14) {
        CachedUIResourcePtr<Sexy::Image>::operator->
                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afca80);
        return;
      }
    }
    else {
      if (param_1 == 0xd7) {
        CachedUIResourcePtr<Sexy::Image>::operator->
                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcb08);
        return;
      }
      if (param_1 == 0x14a) {
        CachedUIResourcePtr<Sexy::Image>::operator->
                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc520);
        return;
      }
    }
  }
  else {
    if (param_1 == 0xd7a) {
      CachedUIResourcePtr<Sexy::Image>::operator->
                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcdf8);
      return;
    }
    if (0xd7a < param_1) {
      if (param_1 == 7000) {
        CachedUIResourcePtr<Sexy::Image>::operator->
                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afce48);
        return;
      }
      if (param_1 == 9000) {
        CachedUIResourcePtr<Sexy::Image>::operator->
                  ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcd98);
        return;
      }
    }
  }
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcc50);
  return;
}


/* PurchaseItemWidget::getSunsImage(int) */

void __thiscall PurchaseItemWidget::getSunsImage(PurchaseItemWidget *this,int param_1)

{
  if (param_1 < 0x1f5) {
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcf18);
    return;
  }
  if (1000 < param_1) {
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcf90);
    return;
  }
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc9b8);
  return;
}


/* PurchaseItemWidget::getFuelImage(int) */

void __thiscall PurchaseItemWidget::getFuelImage(PurchaseItemWidget *this,int param_1)

{
  if (param_1 < 6) {
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc4d0);
    return;
  }
  if (0xf < param_1) {
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc5e8);
    return;
  }
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcb88);
  return;
}


/* PurchaseItemWidget::getTimeEnergyImage(int) */

void __thiscall PurchaseItemWidget::getTimeEnergyImage(PurchaseItemWidget *this,int param_1)

{
  if (param_1 < 4) {
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcf40);
    return;
  }
  if (7 < param_1) {
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afce70);
    return;
  }
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc7f8);
  return;
}


/* PurchaseItemWidget::getMysteryCrystalImage(int) */

void __thiscall PurchaseItemWidget::getMysteryCrystalImage(PurchaseItemWidget *this,int param_1)

{
  if (param_1 < 0x1771) {
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcca0);
    return;
  }
  if (36000 < param_1) {
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcc78);
    return;
  }
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc6d8);
  return;
}


/* PurchaseItemWidget::getZTicketImage(int) */

void __thiscall PurchaseItemWidget::getZTicketImage(PurchaseItemWidget *this,int param_1)

{
  if (param_1 - 2U < 9) {
    CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afca58);
    return;
  }
  CachedUIResourcePtr<Sexy::Image>::operator->((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcf68);
  return;
}


/* PurchaseItemWidget::getAvatarTicketImage(std::string const&) */

undefined8 __thiscall
PurchaseItemWidget::getAvatarTicketImage(PurchaseItemWidget *this,string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = std::operator==(param_1,"com.popcap.ios.chs.PVZ2.DressShopAD");
  if (bVar1) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc968);
    return uVar2;
  }
  bVar1 = std::operator==(param_1,"com.popcap.ios.chs.PVZ2.DressShop6");
  if (bVar1) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc5c0);
    return uVar2;
  }
  bVar1 = std::operator==(param_1,"com.popcap.ios.chs.PVZ2.DressShop30");
  if (bVar1) {
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc780);
    return uVar2;
  }
  bVar1 = std::operator==(param_1,"com.popcap.ios.chs.PVZ2.DressShop68");
  if (!bVar1) {
    bVar1 = std::operator==(param_1,"com.popcap.ios.chs.PVZ2.DressShop128");
    if (bVar1) {
      uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc878);
      return uVar2;
    }
    bVar1 = std::operator==(param_1,"com.popcap.ios.chs.PVZ2.DressShop328");
    if (!bVar1) {
      bVar1 = std::operator==(param_1,"com.popcap.ios.chs.PVZ2.DressShop648");
      if (bVar1) {
        uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                          ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afce20);
        return uVar2;
      }
      return 0;
    }
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc4f8);
    return uVar2;
  }
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc7d0);
  return uVar2;
}


/* PurchaseItemWidget::getGachaImage(std::string const&) */

undefined8 __thiscall PurchaseItemWidget::getGachaImage(PurchaseItemWidget *this,string *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = std::operator==(param_1,"gacha_diamond");
  if (!bVar1) {
    bVar1 = std::operator==(param_1,"gacha_diamond10");
    if ((!bVar1) && (bVar1 = std::operator==(param_1,"gacha_gold"), !bVar1)) {
      bVar1 = std::operator==(param_1,"entrance");
      if (bVar1) goto LAB_04366604;
      bVar1 = std::operator==(param_1,"leafentrance");
      if (!bVar1) {
        return 0;
      }
    }
    uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcef0);
    return uVar2;
  }
LAB_04366604:
  uVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                    ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc6b0);
  return uVar2;
}


/* PurchaseItemWidget::drawGacha(Sexy::Graphics*, Sexy::TRect<int>, std::string const&) */

void PurchaseItemWidget::drawGacha(PurchaseItemWidget *param_1,Graphics *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  LotteryResultProgressBar *this;
  
  this = (LotteryResultProgressBar *)
         getGachaImage(param_1,(string *)(*(long *)(param_1 + 0x108) + 0x80));
  iVar1 = param_3[2];
  iVar2 = *param_3;
  iVar5 = LotteryResultProgressBar::GetCurrentLevel(this);
  iVar3 = param_3[3];
  iVar4 = param_3[1];
  iVar6 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this);
  Sexy::Graphics::DrawImage
            (param_2,(Image *)this,iVar2 + (iVar1 - iVar5) / 2,iVar4 + (iVar3 - iVar6) / 2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseItemWidget::getRedPackImage(std::string const&) */

void __thiscall PurchaseItemWidget::getRedPackImage(PurchaseItemWidget *this,string *param_1)

{
  bool bVar1;
  RedPacketRewardInfo *pRVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  CachedUIResourcePtr<Sexy::Image> aCStack_58 [40];
  CachedUIResourcePtr<Sexy::Image> aCStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pRVar2 = (RedPacketRewardInfo *)LawnApp::GetRedPacketRewardInfo(gLawnApp);
  lVar3 = RedPacketRewardInfo::GetCurrentDisplayConfig(pRVar2);
  pcVar4 = (char *)FUN_0547429c(lVar3 + 0x28);
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr(aCStack_58,pcVar4);
  pRVar2 = (RedPacketRewardInfo *)LawnApp::GetRedPacketRewardInfo(gLawnApp);
  lVar3 = RedPacketRewardInfo::GetCurrentDisplayConfig(pRVar2);
  pcVar4 = (char *)FUN_0547429c(lVar3 + 0x30);
  CachedUIResourcePtr<Sexy::Image>::CachedUIResourcePtr(aCStack_30,pcVar4);
  bVar1 = std::operator==(param_1,"redpack_1");
  if ((bVar1) || (bVar1 = std::operator==(param_1,"zongzi_1"), bVar1)) {
    uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->(aCStack_58);
  }
  else {
    bVar1 = std::operator==(param_1,"redpack_10");
    if ((bVar1) || (bVar1 = std::operator==(param_1,"zongzi_10"), bVar1)) {
      uVar5 = CachedUIResourcePtr<Sexy::Image>::operator->(aCStack_30);
    }
    else {
      uVar5 = 0;
    }
  }
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_30);
  CachedUIResourcePtr<Sexy::Image>::~CachedUIResourcePtr(aCStack_58);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* PurchaseItemWidget::GetGachaFlagImage(std::string const&) */

undefined8 __thiscall
PurchaseItemWidget::GetGachaFlagImage(PurchaseItemWidget *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  ProfileMgr *this_00;
  PlayerInfo *this_01;
  undefined8 uVar3;
  
  this_00 = (ProfileMgr *)Sexy::LazySingleton<ProfileMgr>::GetInstance();
  this_01 = (PlayerInfo *)ProfileMgr::GetCurrentProfile(this_00);
  if (this_01 != (PlayerInfo *)0x0) {
    bVar1 = std::operator==(param_1,"gacha_diamond");
    if ((bVar1) && (cVar2 = PlayerInfo::GetDayFirstPayFlag(this_01,1), cVar2 == '\0')) {
      uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc8f0);
      return uVar3;
    }
    bVar1 = std::operator==(param_1,"gacha_diamond10");
    if ((bVar1) && (cVar2 = PlayerInfo::GetDayFirstPayFlag(this_01,2), cVar2 == '\0')) {
      uVar3 = CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc940);
      return uVar3;
    }
  }
  return 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseItemWidget::drawGameUpgrade(Sexy::Graphics*, Sexy::TRect<int>, std::string const&) */

void __thiscall
PurchaseItemWidget::drawGameUpgrade
          (undefined8 param_1_00,Graphics *param_1,int *param_3,string *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  GameFeatureType *this;
  char *pcVar9;
  long lVar10;
  ResourceInfo *this_00;
  int extraout_w1;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  RtId aRStack_30 [8];
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar8 = Sexy::LazySingleton<PVZDB>::GetInstance();
  PVZDB::GetObjectIteratorForTable(aIStack_28,uVar8,0x16);
  do {
    bVar5 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28);
    if (!bVar5) {
LAB_04366948:
      Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Sexy::RtDbTable::Iterator::operator*(aIStack_28);
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)aRStack_30);
    Sexy::RtId::~RtId(aRStack_30);
    this = (GameFeatureType *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    pcVar9 = (char *)GameFeatureType::ToString(this);
    bVar5 = std::operator==(pcVar9,param_4);
    if (bVar5) {
      lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
      ;
      GetImageByName((string *)(lVar10 + 0x20));
      this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
      if (this_00 != (ResourceInfo *)0x0) {
        iVar1 = param_3[2];
        iVar2 = *param_3;
        iVar6 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)this_00);
        iVar3 = param_3[3];
        iVar4 = param_3[1];
        iVar7 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)this_00);
        Sexy::Graphics::DrawImage
                  (param_1,(Image *)this_00,iVar2 + (iVar1 - iVar6) / 2,iVar4 + (iVar3 - iVar7) / 2)
        ;
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
      goto LAB_04366948;
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
    Sexy::RtDbTable::Iterator::operator++(aIStack_28,extraout_w1);
  } while( true );
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseItemWidget::~PurchaseItemWidget() */

void __thiscall PurchaseItemWidget::~PurchaseItemWidget(PurchaseItemWidget *this)

{
  LawnApp *pLVar1;
  bool bVar2;
  char cVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar7;
  string *psVar8;
  ulong uVar9;
  undefined8 uVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  uVar9 = 0;
  uVar10 = *(undefined8 *)(this + 0xd8);
  local_8 = ___stack_chk_guard;
  *(undefined ***)this = &PTR_GetClass_06835440;
  uVar4 = FUN_04365d24(uVar10,*(undefined8 *)(this + 0xe0));
  if (uVar4 != 0) {
    do {
      plVar5 = (long *)FUN_04365d30(uVar10,uVar9);
      if ((long *)*plVar5 != (long *)0x0) {
        (**(code **)(*(long *)*plVar5 + 0x18))();
        uVar10 = *(undefined8 *)(this + 0xd8);
        uVar4 = FUN_04365d24(uVar10,*(undefined8 *)(this + 0xe0));
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar4);
  }
  if (*(long *)(this + 0x108) != 0) {
    bVar2 = std::operator==((string *)(*(long *)(this + 0x108) + 0x78),"plant");
    pLVar1 = gLawnApp;
    if (bVar2) {
      psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
      ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
      lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
      LawnApp::DeleteGroup(pLVar1,(string *)(lVar6 + 0x10));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    }
    uVar9 = 0;
    uVar10 = *(undefined8 *)(*(long *)(this + 0x108) + 0x98);
    lVar6 = FUN_04365d10(uVar10,*(undefined8 *)(*(long *)(this + 0x108) + 0xa0));
    if (lVar6 != 0) {
      do {
        pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04365d1c(uVar10,uVar9);
        lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
        bVar2 = std::operator==((string *)(lVar6 + 0x78),"plant");
        pLVar1 = gLawnApp;
        if (bVar2) {
          psVar8 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
          pRVar7 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   FUN_04365d1c(*(undefined8 *)(*(long *)(this + 0x108) + 0x98),uVar9);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar7);
          ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar8);
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
          LawnApp::DeleteGroup(pLVar1,(string *)(lVar6 + 0x10));
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
        }
        uVar9 = uVar9 + 1;
        uVar10 = *(undefined8 *)(*(long *)(this + 0x108) + 0x98);
        uVar4 = FUN_04365d10(uVar10,*(undefined8 *)(*(long *)(this + 0x108) + 0xa0));
      } while (uVar9 < uVar4);
    }
  }
  Sexy::WidgetContainer::RemoveAllWidgets((WidgetContainer *)this,true,true);
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"UI_Store");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"GameUpgrades");
  LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  pLVar1 = gLawnApp;
  std::string::string((string *)aRStack_10,"LUA_UI_Anniversary");
  cVar3 = LawnApp::CanLoadGroup(pLVar1,(string *)aRStack_10);
  std::string::~string((string *)aRStack_10);
  nop();
  pLVar1 = gLawnApp;
  if (cVar3 != '\0') {
    std::string::string((string *)aRStack_10,"LUA_UI_Anniversary");
    LawnApp::DeleteGroup(pLVar1,(string *)aRStack_10);
    std::string::~string((string *)aRStack_10);
    nop();
  }
  std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::~vector
            ((vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> *)(this + 0xf0));
  std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::~vector
            ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)(this + 0xd8));
  Sexy::Widget::~Widget((Widget *)this);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* PurchaseItemWidget::~PurchaseItemWidget() */

void __thiscall PurchaseItemWidget::~PurchaseItemWidget(PurchaseItemWidget *this)

{
  ~PurchaseItemWidget(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseItemWidget::drawPlant(Sexy::Graphics*, Sexy::TRect<int>, std::string const&, int&) */

void __thiscall
PurchaseItemWidget::drawPlant
          (PurchaseItemWidget *this,Graphics *param_1,int *param_3,undefined8 param_4,int *param_5)

{
  string *psVar1;
  int *piVar2;
  PlantType *this_00;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  piVar2 = (int *)FUN_04365d38(*(undefined8 *)(this + 0xf0),(long)*param_5);
  FUN_04365cf4((float)((*param_3 - *piVar2) + (param_3[2] - piVar2[2]) / 2),
               (float)param_3[1] + (float)param_3[3] * 0.75,auStack_28,auStack_1c);
  this_00 = (PlantType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
  lVar3 = PlantType::GetProps(this_00);
  fVar5 = (float)FUN_04365d40(*(undefined4 *)(lVar3 + 0xa0));
  FUN_04365cf4(0,-fVar5,auStack_28,auStack_1c);
  puVar4 = (undefined8 *)
           std::
           vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
           ::back((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)(this + 0xd8));
  PopAnimRig::Draw((PopAnimRig *)*puVar4,param_1,aSStack_30);
  *param_5 = *param_5 + 1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseItemWidget::Draw(Sexy::Graphics*) */

void __thiscall PurchaseItemWidget::Draw(PurchaseItemWidget *this,Graphics *param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined4 local_7c;
  Insets aIStack_78 [16];
  Insets aIStack_68 [16];
  undefined4 local_58 [4];
  Insets aIStack_48 [16];
  Insets aIStack_38 [16];
  Insets aIStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==((string *)(*(long *)(this + 0x108) + 0x78),"plant");
  if (bVar1) {
    local_58[0] = 0;
    iVar2 = FUN_04365d50(0x28);
    Sexy::Insets::Insets(aIStack_48,0,iVar2,*(int *)(this + 0x50),*(int *)(this + 0x54) - iVar2);
    drawPlant(this,param_1,aIStack_48,*(long *)(this + 0x108) + 0x80,local_58);
  }
  else {
    bVar1 = std::operator==((string *)(*(long *)(this + 0x108) + 0x78),"bundle");
    if (bVar1) {
      iVar2 = FUN_04365d50(0x32);
      Sexy::Insets::Insets
                (aIStack_78,0,iVar2,*(int *)(this + 0x50) / 2,*(int *)(this + 0x54) - iVar2);
      iVar2 = FUN_04365d50(0x1e);
      Sexy::Insets::Insets
                (aIStack_68,*(int *)(this + 0x50) / 2,iVar2,*(int *)(this + 0x50) / 2,
                 *(int *)(this + 0x54) - iVar2);
      iVar2 = FUN_04365d50(0x1e);
      Sexy::Insets::Insets
                ((Insets *)local_58,0,iVar2,*(int *)(this + 0x50),*(int *)(this + 0x54) - iVar2);
      Sexy::Insets::Insets(aIStack_38,aIStack_78);
      Sexy::Insets::Insets(aIStack_28,aIStack_68);
      Sexy::Insets::Insets(aIStack_18,(Insets *)local_58);
      uVar6 = 0;
      local_7c = 0;
      while( true ) {
        uVar7 = *(undefined8 *)(*(long *)(this + 0x108) + 0x98);
        uVar3 = FUN_04365d10(uVar7,*(undefined8 *)(*(long *)(this + 0x108) + 0xa0));
        if (uVar3 <= uVar6) break;
        pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04365d1c(uVar7,uVar6);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
        bVar1 = std::operator==((string *)(lVar5 + 0x78),"coin");
        if (bVar1) {
LAB_04367044:
          Sexy::Insets::Insets(aIStack_48,aIStack_38 + (uVar6 % 0x30 & 0xfffffffffffffff0));
          pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   FUN_04365d1c(*(undefined8 *)(*(long *)(this + 0x108) + 0x98),uVar6);
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
          drawCoins(this,param_1,aIStack_48,lVar5 + 0x80);
LAB_04367074:
          uVar6 = uVar6 + 1;
        }
        else {
          pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   FUN_04365d1c(*(undefined8 *)(*(long *)(this + 0x108) + 0x98),uVar6);
          lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
          bVar1 = std::operator==((string *)(lVar5 + 0x78),"plant");
          if (bVar1) {
            Sexy::Insets::Insets(aIStack_48,aIStack_38 + (uVar6 % 0x30 & 0xfffffffffffffff0));
            pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_04365d1c(*(undefined8 *)(*(long *)(this + 0x108) + 0x98),uVar6);
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
            drawPlant(this,param_1,aIStack_48,lVar5 + 0x80,&local_7c);
            uVar6 = uVar6 + 1;
          }
          else {
            pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_04365d1c(*(undefined8 *)(*(long *)(this + 0x108) + 0x98),uVar6);
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
            bVar1 = std::operator==((string *)(lVar5 + 0x78),"gameupgrade");
            if (!bVar1) {
              pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
                       FUN_04365d1c(*(undefined8 *)(*(long *)(this + 0x108) + 0x98),uVar6);
              lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
              bVar1 = std::operator==((string *)(lVar5 + 0x78),"stamina");
              if (bVar1) goto LAB_04367044;
              goto LAB_04367074;
            }
            Sexy::Insets::Insets(aIStack_48,aIStack_38 + (uVar6 % 0x30 & 0xfffffffffffffff0));
            pRVar4 = (RtWeakPtr<Sexy::ResourceInfo> *)
                     FUN_04365d1c(*(undefined8 *)(*(long *)(this + 0x108) + 0x98),uVar6);
            lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar4);
            drawGameUpgrade(this,param_1,aIStack_48,lVar5 + 0x80);
            uVar6 = uVar6 + 1;
          }
        }
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
/* PurchaseItemWidget::createPlantRig(std::string const&) */

void PurchaseItemWidget::createPlantRig(string *param_1)

{
  string *psVar1;
  long *plVar2;
  long *local_18 [2];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  psVar1 = (string *)Sexy::LazySingleton<ObjectTypeDirectory<PlantType>>::GetInstancePtr();
  ObjectTypeDirectory<PlantType>::GetTypeFromTypeName(psVar1);
  plVar2 = (long *)CreateStandalonePlantAnimRig((RtWeakPtr<Sexy::ResourceInfo> *)local_18,1);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  (**(code **)(*plVar2 + 0x118))(plVar2);
  local_18[0] = plVar2;
  std::vector<PopAnimRig*,std::allocator<PopAnimRig*>>::push_back
            ((vector<PopAnimRig*,std::allocator<PopAnimRig*>> *)(param_1 + 0xd8),
             (PopAnimRig **)local_18);
  Sexy::Insets::Insets((Insets *)local_18);
  (**(code **)(*plVar2 + 0x90))(plVar2,(RtWeakPtr<Sexy::ResourceInfo> *)local_18);
  std::vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>>::push_back
            ((vector<Sexy::TRect<int>,std::allocator<Sexy::TRect<int>>> *)(param_1 + 0xf0),
             (TRect *)local_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PurchaseItemWidget::Resize(int, int, int, int) */

void __thiscall
PurchaseItemWidget::Resize(PurchaseItemWidget *this,int param_1,int param_2,int param_3,int param_4)

{
  long *plVar1;
  
  Sexy::Widget::Resize((Widget *)this,param_1,param_2,param_3,param_4);
  plVar1 = *(long **)(this + 0x110);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x198))(plVar1,0,0,param_3,param_4);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseItemWidget::getGemsBackgroundImage(std::string const&) */

void __thiscall PurchaseItemWidget::getGemsBackgroundImage(PurchaseItemWidget *this,string *param_1)

{
  char cVar1;
  long lVar2;
  string asStack_28 [8];
  string asStack_20 [8];
  string asStack_18 [8];
  string asStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_28,"");
  nop();
  FUN_031f5e7c(asStack_20,"PurchaseItem/background_image/",param_1);
  FUN_05475d88(asStack_18,asStack_28);
  GetLuaSharedData<std::string>(asStack_10,asStack_20,asStack_18);
  FUN_05474278(asStack_28,asStack_10);
  std::string::~string(asStack_10);
  std::string::~string(asStack_18);
  cVar1 = FUN_0547419c(asStack_28);
  if ((cVar1 != '\0') || (lVar2 = StringHelper::ToImage(asStack_28,false), lVar2 == 0)) {
    lVar2 = CachedUIResourcePtr<Sexy::Image>::operator->
                      ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcb30);
  }
  std::string::~string(asStack_20);
  std::string::~string(asStack_28);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PurchaseItemWidget::PurchaseItemWidget(MagentoProductProps const*) */

void __thiscall
PurchaseItemWidget::PurchaseItemWidget(PurchaseItemWidget *this,MagentoProductProps *param_1)

{
  LawnApp *pLVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar6;
  ulong uVar7;
  GameFeatureType *this_00;
  char *pcVar8;
  PVZ2UIGameObjectCard *pPVar9;
  long lVar10;
  TravelLogTask *pTVar11;
  int extraout_w1;
  ulong uVar12;
  TravelLogBonusUI *pTVar13;
  undefined8 uVar14;
  _Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> a_Stack_40 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  RtId aRStack_30 [8];
  string asStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::Widget::Widget((Widget *)this);
  *(undefined ***)this = &PTR_GetClass_06835440;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xd8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0xf0));
  *(undefined8 *)(this + 0x110) = 0;
  pLVar1 = gLawnApp;
  std::string::string(asStack_28,"UI_Store");
  LawnApp::LoadGroup(pLVar1,asStack_28);
  std::string::~string(asStack_28);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_28,"GameUpgrades");
  LawnApp::LoadGroup(pLVar1,asStack_28);
  std::string::~string(asStack_28);
  nop();
  pLVar1 = gLawnApp;
  std::string::string(asStack_28,"LUA_UI_Anniversary");
  cVar2 = LawnApp::CanLoadGroup(pLVar1,asStack_28);
  std::string::~string(asStack_28);
  nop();
  pLVar1 = gLawnApp;
  if (cVar2 != '\0') {
    std::string::string(asStack_28,"LUA_UI_Anniversary");
    LawnApp::LoadGroup(pLVar1,asStack_28);
    std::string::~string(asStack_28);
    nop();
  }
  *(MagentoProductProps **)(this + 0x108) = param_1;
  bVar3 = std::operator==((string *)(param_1 + 0x78),"plant");
  if (bVar3) {
    createPlantRig((string *)this);
    goto LAB_0436760c;
  }
  uVar12 = 0;
  bVar3 = std::operator==((string *)(*(long *)(this + 0x108) + 0x78),"bundle");
  if (bVar3) {
    uVar14 = *(undefined8 *)(*(long *)(this + 0x108) + 0x98);
    lVar5 = FUN_04365d10(uVar14,*(undefined8 *)(*(long *)(this + 0x108) + 0xa0));
    if (lVar5 != 0) {
      do {
        pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)FUN_04365d1c(uVar14,uVar12);
        lVar5 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
        bVar3 = std::operator==((string *)(lVar5 + 0x78),"plant");
        if (bVar3) {
          pRVar6 = (RtWeakPtr<Sexy::ResourceInfo> *)
                   FUN_04365d1c(*(undefined8 *)(*(long *)(this + 0x108) + 0x98),uVar12);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar6);
          createPlantRig((string *)this);
        }
        uVar12 = uVar12 + 1;
        uVar14 = *(undefined8 *)(*(long *)(this + 0x108) + 0x98);
        uVar7 = FUN_04365d10(uVar14,*(undefined8 *)(*(long *)(this + 0x108) + 0xa0));
      } while (uVar12 < uVar7);
    }
    goto LAB_0436760c;
  }
  bVar3 = std::operator==((string *)(*(long *)(this + 0x108) + 0x78),"gameupgrade");
  if (bVar3) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              (a_Stack_40);
    uVar14 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(asStack_28,uVar14,0x16);
    while (bVar3 = Sexy::RtDbTable::Iterator::operator_cast_to_bool((Iterator *)asStack_28), bVar3)
    {
      Sexy::RtDbTable::Iterator::operator*((Iterator *)asStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)aRStack_38,(RtWeakPtrBase *)aRStack_30);
      Sexy::RtId::~RtId(aRStack_30);
      this_00 = (GameFeatureType *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      pcVar8 = (char *)GameFeatureType::ToString(this_00);
      bVar3 = std::operator==(pcVar8,(string *)(*(long *)(this + 0x108) + 0x80));
      if (bVar3) {
        Sexy::RtWeakPtr<PowerPropertySheet>::operator=
                  ((RtWeakPtr<PowerPropertySheet> *)a_Stack_40,(RtWeakPtr *)aRStack_38);
      }
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      Sexy::RtDbTable::Iterator::operator++((Iterator *)asStack_28,extraout_w1);
    }
    Sexy::RtDbTable::Iterator::~Iterator((Iterator *)asStack_28);
    bVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)a_Stack_40);
    if (bVar3) {
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)asStack_28,(RtWeakPtrBase *)a_Stack_40);
      pPVar9 = ::operator_new(0x160);
      PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar9,asStack_28,0,0xfffffffe,0,1);
      *(PVZ2UIGameObjectCard **)(this + 0x110) = pPVar9;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
      PVZ2UIGameObjectCard::SetShowLock(*(PVZ2UIGameObjectCard **)(this + 0x110),false);
      NewYearGoodsSelectItem::SelectItem(*(NewYearGoodsSelectItem **)(this + 0x110),false);
      Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x110));
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)a_Stack_40);
    goto LAB_0436760c;
  }
  bVar3 = std::operator==((string *)(*(long *)(this + 0x108) + 0x78),"coin");
  if (bVar3) {
    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
              ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_28);
    pPVar9 = ::operator_new(0x160);
    PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar9,asStack_28,0,0xfffffffe,0,1);
    *(PVZ2UIGameObjectCard **)(this + 0x110) = pPVar9;
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
    pPVar9 = *(PVZ2UIGameObjectCard **)(this + 0x110);
    uVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcb30);
    Sexy::Insets::Insets((Insets *)asStack_28,0,0x2c,0x4d,0xff);
    PVZ2UIGameObjectCard::SetSpecificBackground(pPVar9,uVar14,asStack_28);
    pTVar13 = *(TravelLogBonusUI **)(this + 0x110);
    pTVar11 = (TravelLogTask *)getCoinsImage(this,*(int *)(*(long *)(this + 0x108) + 0x90));
  }
  else {
    bVar3 = std::operator==((string *)(*(long *)(this + 0x108) + 0x78),"pvpCoin");
    if (bVar3) {
      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_28);
      pPVar9 = ::operator_new(0x160);
      PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar9,asStack_28,0,0xfffffffe,0,1);
      *(PVZ2UIGameObjectCard **)(this + 0x110) = pPVar9;
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
      pPVar9 = *(PVZ2UIGameObjectCard **)(this + 0x110);
      uVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcb30);
      Sexy::Insets::Insets((Insets *)asStack_28,0,0x2c,0x4d,0xff);
      PVZ2UIGameObjectCard::SetSpecificBackground(pPVar9,uVar14,asStack_28);
      pTVar13 = *(TravelLogBonusUI **)(this + 0x110);
      pTVar11 = (TravelLogTask *)GetPvpCoinsImage(this,*(int *)(*(long *)(this + 0x108) + 0x90));
    }
    else {
      bVar3 = std::operator==((string *)(*(long *)(this + 0x108) + 0x78),"gem");
      if (bVar3) {
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_28);
        pPVar9 = ::operator_new(0x160);
        PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar9,asStack_28,0,0xfffffffe,0,1);
        *(PVZ2UIGameObjectCard **)(this + 0x110) = pPVar9;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28)
        ;
        lVar5 = getGemsBackgroundImage(this,(string *)(*(long *)(this + 0x108) + 0x10));
        pPVar9 = *(PVZ2UIGameObjectCard **)(this + 0x110);
        Sexy::Insets::Insets((Insets *)asStack_28,0,0x2c,0x4d,0xff);
        PVZ2UIGameObjectCard::SetSpecificBackground(pPVar9,lVar5,asStack_28);
        lVar10 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcb30);
        if (lVar5 == lVar10) {
          pTVar13 = *(TravelLogBonusUI **)(this + 0x110);
          pTVar11 = (TravelLogTask *)getGemsImage(this,*(int *)(*(long *)(this + 0x108) + 0x90));
          TravelLogBonusUI::SetTask(pTVar13,pTVar11);
        }
        Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x110));
        goto LAB_0436760c;
      }
      bVar3 = std::operator==((string *)(*(long *)(this + 0x108) + 0x78),"sun");
      if (bVar3) {
        std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                  ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_28);
        pPVar9 = ::operator_new(0x160);
        PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar9,asStack_28,0,0xfffffffe,0,1);
        *(PVZ2UIGameObjectCard **)(this + 0x110) = pPVar9;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28)
        ;
        pPVar9 = *(PVZ2UIGameObjectCard **)(this + 0x110);
        uVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                           ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcb30);
        Sexy::Insets::Insets((Insets *)asStack_28,0,0x2c,0x4d,0xff);
        PVZ2UIGameObjectCard::SetSpecificBackground(pPVar9,uVar14,asStack_28);
        pTVar13 = *(TravelLogBonusUI **)(this + 0x110);
        pTVar11 = (TravelLogTask *)getSunsImage(this,*(int *)(*(long *)(this + 0x108) + 0x90));
      }
      else {
        bVar3 = std::operator==((string *)(*(long *)(this + 0x108) + 0x78),"fuel");
        if (bVar3) {
          std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
                    ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_28);
          pPVar9 = ::operator_new(0x160);
          PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar9,asStack_28,0,0xfffffffe,0,1);
          *(PVZ2UIGameObjectCard **)(this + 0x110) = pPVar9;
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
          pPVar9 = *(PVZ2UIGameObjectCard **)(this + 0x110);
          uVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                             ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcb30);
          Sexy::Insets::Insets((Insets *)asStack_28,0,0x2c,0x4d,0xff);
          PVZ2UIGameObjectCard::SetSpecificBackground(pPVar9,uVar14,asStack_28);
          pTVar13 = *(TravelLogBonusUI **)(this + 0x110);
          pTVar11 = (TravelLogTask *)getFuelImage(this,*(int *)(*(long *)(this + 0x108) + 0x90));
        }
        else {
          bVar3 = std::operator==((string *)(*(long *)(this + 0x108) + 0x78),"pvz1mode_time_energy")
          ;
          if (bVar3) {
            std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
            _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)asStack_28)
            ;
            pPVar9 = ::operator_new(0x160);
            PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar9,asStack_28,0,0xfffffffe,0,1);
            *(PVZ2UIGameObjectCard **)(this + 0x110) = pPVar9;
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
            pPVar9 = *(PVZ2UIGameObjectCard **)(this + 0x110);
            uVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcb30);
            Sexy::Insets::Insets((Insets *)asStack_28,0,0x2c,0x4d,0xff);
            PVZ2UIGameObjectCard::SetSpecificBackground(pPVar9,uVar14,asStack_28);
            pTVar13 = *(TravelLogBonusUI **)(this + 0x110);
            pTVar11 = (TravelLogTask *)
                      getTimeEnergyImage(this,*(int *)(*(long *)(this + 0x108) + 0x90));
          }
          else {
            bVar3 = std::operator==((string *)(*(long *)(this + 0x108) + 0x78),"mystery_crystal");
            if (bVar3) {
              std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
              _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                         asStack_28);
              pPVar9 = ::operator_new(0x160);
              PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar9,asStack_28,0,0xfffffffe,0,1);
              *(PVZ2UIGameObjectCard **)(this + 0x110) = pPVar9;
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
              pPVar9 = *(PVZ2UIGameObjectCard **)(this + 0x110);
              uVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcb30);
              Sexy::Insets::Insets((Insets *)asStack_28,0,0x2c,0x4d,0xff);
              PVZ2UIGameObjectCard::SetSpecificBackground(pPVar9,uVar14,asStack_28);
              pTVar13 = *(TravelLogBonusUI **)(this + 0x110);
              pTVar11 = (TravelLogTask *)
                        getMysteryCrystalImage(this,*(int *)(*(long *)(this + 0x108) + 0x90));
            }
            else {
              bVar3 = std::operator==((string *)(*(long *)(this + 0x108) + 0x78),"battlezTicket");
              if (bVar3) {
                std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
                _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                           asStack_28);
                pPVar9 = ::operator_new(0x160);
                PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar9,asStack_28,0,0xfffffffe,0,1);
                *(PVZ2UIGameObjectCard **)(this + 0x110) = pPVar9;
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                          ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
                pPVar9 = *(PVZ2UIGameObjectCard **)(this + 0x110);
                uVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                                   ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcb30);
                Sexy::Insets::Insets((Insets *)asStack_28,0,0x2c,0x4d,0xff);
                PVZ2UIGameObjectCard::SetSpecificBackground(pPVar9,uVar14,asStack_28);
                pTVar13 = *(TravelLogBonusUI **)(this + 0x110);
                pTVar11 = (TravelLogTask *)
                          getZTicketImage(this,*(int *)(*(long *)(this + 0x108) + 0x90));
              }
              else {
                bVar4 = std::operator==((string *)(*(long *)(this + 0x108) + 0x78),"gift");
                if (bVar4) {
                  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
                  _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                             asStack_28);
                  pPVar9 = ::operator_new(0x160);
                  PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar9,asStack_28,0,0xfffffffe,bVar3,1)
                  ;
                  *(PVZ2UIGameObjectCard **)(this + 0x110) = pPVar9;
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
                  pPVar9 = *(PVZ2UIGameObjectCard **)(this + 0x110);
                  uVar14 = getGiftImage(this,(string *)(*(long *)(this + 0x108) + 0x10));
LAB_04367f50:
                  Sexy::Insets::Insets((Insets *)asStack_28,(uint)bVar3,0x2c,0x4d,0xff);
LAB_04367b5c:
                  PVZ2UIGameObjectCard::SetSpecificBackground(pPVar9,uVar14,asStack_28);
                  Sexy::WidgetContainer::AddWidget
                            ((WidgetContainer *)this,*(Widget **)(this + 0x110));
                  goto LAB_0436760c;
                }
                bVar3 = std::operator==((string *)(*(long *)(this + 0x108) + 0x78),"gacha");
                if (bVar3) {
                  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
                  _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                             asStack_28);
                  pPVar9 = ::operator_new(0x160);
                  PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar9,asStack_28,0,0xfffffffe,0,1);
                  *(PVZ2UIGameObjectCard **)(this + 0x110) = pPVar9;
                  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                            ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
                  pPVar9 = *(PVZ2UIGameObjectCard **)(this + 0x110);
                  uVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afc990);
                  Sexy::Insets::Insets((Insets *)asStack_28,0,0x2c,0x4d,0xff);
                  PVZ2UIGameObjectCard::SetSpecificBackground(pPVar9,uVar14,asStack_28);
                  pTVar13 = *(TravelLogBonusUI **)(this + 0x110);
                  pTVar11 = (TravelLogTask *)
                            getGachaImage(this,(string *)(*(long *)(this + 0x108) + 0x80));
                }
                else {
                  bVar3 = std::operator==((string *)(*(long *)(this + 0x108) + 0x78),"redpack");
                  if ((bVar3) ||
                     (bVar3 = std::operator==((string *)(*(long *)(this + 0x108) + 0x78),"zongzi"),
                     bVar3)) {
                    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
                    _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                               asStack_28);
                    pPVar9 = ::operator_new(0x160);
                    PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar9,asStack_28,0,0xfffffffe,0,1);
                    *(PVZ2UIGameObjectCard **)(this + 0x110) = pPVar9;
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
                    pPVar9 = *(PVZ2UIGameObjectCard **)(this + 0x110);
                    uVar14 = getRedPackImage(this,(string *)(*(long *)(this + 0x108) + 0x80));
                    Sexy::Insets::Insets((Insets *)asStack_28,0,0x2c,0x4d,0xff);
                    goto LAB_04367b5c;
                  }
                  bVar3 = std::operator==((string *)(*(long *)(this + 0x108) + 0x78),"stamina");
                  if (bVar3) {
                    std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::
                    _Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)
                               asStack_28);
                    pPVar9 = ::operator_new(0x160);
                    PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar9,asStack_28,0,0xfffffffe,0,1);
                    *(PVZ2UIGameObjectCard **)(this + 0x110) = pPVar9;
                    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                              ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
                    pPVar9 = *(PVZ2UIGameObjectCard **)(this + 0x110);
                    uVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcb30);
                    Sexy::Insets::Insets((Insets *)asStack_28,0,0x2c,0x4d,0xff);
                    PVZ2UIGameObjectCard::SetSpecificBackground(pPVar9,uVar14,asStack_28);
                    pTVar13 = *(TravelLogBonusUI **)(this + 0x110);
                    pTVar11 = (TravelLogTask *)
                              getStaminaImage(this,*(int *)(*(long *)(this + 0x108) + 0x90));
                  }
                  else {
                    bVar3 = std::operator==((string *)(*(long *)(this + 0x108) + 0x78),"plant_gift")
                    ;
                    if (bVar3) {
                      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>
                      ::_Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *
                                   )asStack_28);
                      pPVar9 = ::operator_new(0x160);
                      PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar9,asStack_28,0,0xfffffffe,0,1)
                      ;
                      *(PVZ2UIGameObjectCard **)(this + 0x110) = pPVar9;
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
                      pPVar9 = *(PVZ2UIGameObjectCard **)(this + 0x110);
                      uVar14 = getPlantGiftImage(this,(string *)(*(long *)(this + 0x108) + 0x10));
                      bVar3 = false;
                      goto LAB_04367f50;
                    }
                    bVar3 = std::operator==((string *)(*(long *)(this + 0x108) + 0x78),"gemreturn");
                    if (bVar3) {
                      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>
                      ::_Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *
                                   )asStack_28);
                      pPVar9 = ::operator_new(0x160);
                      PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar9,asStack_28,0,0xfffffffe,0,1)
                      ;
                      *(PVZ2UIGameObjectCard **)(this + 0x110) = pPVar9;
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
                      pPVar9 = *(PVZ2UIGameObjectCard **)(this + 0x110);
                      uVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcb30);
                      Sexy::Insets::Insets((Insets *)asStack_28,0,0x2c,0x4d,0xff);
                      PVZ2UIGameObjectCard::SetSpecificBackground(pPVar9,uVar14,asStack_28);
                      pTVar13 = *(TravelLogBonusUI **)(this + 0x110);
                      pTVar11 = (TravelLogTask *)
                                getGemsRetImage(this,*(int *)(*(long *)(this + 0x108) + 0x90));
                    }
                    else {
                      bVar3 = std::operator==((string *)(*(long *)(this + 0x108) + 0x78),
                                              "avatar_ticket");
                      if (!bVar3) goto LAB_0436760c;
                      std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>
                      ::_Hash_node((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *
                                   )asStack_28);
                      pPVar9 = ::operator_new(0x160);
                      PVZ2UIGameObjectCard::PVZ2UIGameObjectCard(pPVar9,asStack_28,0,0xfffffffe,0,1)
                      ;
                      *(PVZ2UIGameObjectCard **)(this + 0x110) = pPVar9;
                      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                                ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_28);
                      pPVar9 = *(PVZ2UIGameObjectCard **)(this + 0x110);
                      uVar14 = CachedUIResourcePtr<Sexy::Image>::operator->
                                         ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06afcb30);
                      Sexy::Insets::Insets((Insets *)asStack_28,0,0x2c,0x4d,0xff);
                      PVZ2UIGameObjectCard::SetSpecificBackground(pPVar9,uVar14,asStack_28);
                      pTVar13 = *(TravelLogBonusUI **)(this + 0x110);
                      pTVar11 = (TravelLogTask *)
                                getAvatarTicketImage
                                          (this,(string *)(*(long *)(this + 0x108) + 0x10));
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
  TravelLogBonusUI::SetTask(pTVar13,pTVar11);
  Sexy::WidgetContainer::AddWidget((WidgetContainer *)this,*(Widget **)(this + 0x110));
LAB_0436760c:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

