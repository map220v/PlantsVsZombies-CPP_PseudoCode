// Class: HotUIWidgetTrainingPacket


/* HotUIWidgetTrainingPacket::GetInfo() */

HotUIWidgetTrainingPacket * __thiscall
HotUIWidgetTrainingPacket::GetInfo(HotUIWidgetTrainingPacket *this)

{
  return this + 0x214;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetTrainingPacket::StaticClassInit() */

void HotUIWidgetTrainingPacket::StaticClassInit(void)

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
    std::string::string(asStack_10,"HotUIWidgetTrainingPacket");
    (*pcVar2)(plVar1,asStack_10,FUN_034bd1c4,0x260,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* HotUIWidgetTrainingPacket::StaticGetClass() */

long * HotUIWidgetTrainingPacket::StaticGetClass(void)

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
  uVar2 = HotUIWidget::StaticGetClass();
  (*pcVar3)(plVar1,"HotUIWidgetTrainingPacket",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* HotUIWidgetTrainingPacket::SetSelected(bool) */

void __thiscall HotUIWidgetTrainingPacket::SetSelected(HotUIWidgetTrainingPacket *this,bool param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x230);
  this[0x211] = (HotUIWidgetTrainingPacket)param_1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    *(undefined8 *)(this + 0x230) = 0;
  }
  return;
}


/* HotUIWidgetTrainingPacket::onNotifyTraingingPacketSelected(bool, int, bool) */

void HotUIWidgetTrainingPacket::onNotifyTraingingPacketSelected
               (bool param_1,int param_2,bool param_3)

{
  char cVar1;
  HotUIWidgetTrainingPacket *this;
  
  this = (HotUIWidgetTrainingPacket *)(ulong)param_1;
  cVar1 = (**(code **)(*(long *)this + 0x360))();
  if ((cVar1 != '\0') && (*(uint *)(this + 0x214) != (uint)param_3)) {
    if ((param_2 & 0xffU) == 0) {
      if (*(int *)(this + 600) != 1) {
        return;
      }
    }
    else if (*(int *)(this + 600) != 0) {
      return;
    }
    cVar1 = FUN_034ad854(this[0x211]);
    if (cVar1 != '\0') {
      SetSelected(this,false);
      return;
    }
  }
  return;
}


/* HotUIWidgetTrainingPacket::SetInfo(NewPVPTrainingPacketInfo const&) */

void __thiscall
HotUIWidgetTrainingPacket::SetInfo
          (HotUIWidgetTrainingPacket *this,NewPVPTrainingPacketInfo *param_1)

{
  undefined8 uVar1;
  char cVar2;
  NameMapperBase *this_00;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x214) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x21c) = uVar1;
  *(undefined8 *)(this + 0x224) = *(undefined8 *)(param_1 + 0x10);
  this_00 = (NameMapperBase *)ZombieAlmanac::GetInstance();
  cVar2 = NameMapperBase::ContainsId(this_00,*(int *)(this + 0x214));
  if (cVar2 != '\0') {
    *(undefined4 *)(this + 0x22c) = 1;
  }
  (**(code **)(*(long *)this + 0x368))(this);
  return;
}


/* HotUIWidgetTrainingPacket::HotUIWidgetTrainingPacket() */

void __thiscall
HotUIWidgetTrainingPacket::HotUIWidgetTrainingPacket(HotUIWidgetTrainingPacket *this)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  HotUIWidget::HotUIWidget((HotUIWidget *)this);
  this[0x210] = (HotUIWidgetTrainingPacket)0x0;
  this[0x211] = (HotUIWidgetTrainingPacket)0x0;
  *(undefined ***)this = &PTR_GetWidgetClass_06649110;
  NewPVPTrainingPacketInfo::NewPVPTrainingPacketInfo((NewPVPTrainingPacketInfo *)(this + 0x214));
  *(undefined8 *)(this + 0x230) = 0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x238));
  FUN_05476574(this + 0x250);
  *(undefined4 *)(this + 0x25c) = 0x3f800000;
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyTraingingPacketSelected);
  local_30 = local_8;
  local_40 = local_18;
  uStack_38 = uStack_10;
  MessageRouter::
  Subscribe<bool,int,bool,Sexy::CBMemberTranslatorX<HotUIWidgetTrainingPacket,void(HotUIWidgetTrainingPacket::*)(bool,int,bool)>>
            ((MessageRouter *)puVar1,Message::NotifyTraingingPacketSelected,&local_40);
  return;
}


/* HotUIWidgetTrainingPacket::StaticNew() */

HotUIWidgetTrainingPacket * HotUIWidgetTrainingPacket::StaticNew(void)

{
  HotUIWidgetTrainingPacket *this;
  
  this = ::operator_new(0x260);
  HotUIWidgetTrainingPacket(this);
  return this;
}


/* HotUIWidgetTrainingPacket::~HotUIWidgetTrainingPacket() */

void __thiscall
HotUIWidgetTrainingPacket::~HotUIWidgetTrainingPacket(HotUIWidgetTrainingPacket *this)

{
  *(undefined ***)this = &PTR_GetWidgetClass_06649110;
  if (*(long **)(this + 0x230) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x230) + 0x18))();
    *(undefined8 *)(this + 0x230) = 0;
  }
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  FUN_05476c50(this + 0x250);
  std::vector<Sexy::Image*,std::allocator<Sexy::Image*>>::~vector
            ((vector<Sexy::Image*,std::allocator<Sexy::Image*>> *)(this + 0x238));
  HotUIWidget::~HotUIWidget((HotUIWidget *)this);
  return;
}


/* HotUIWidgetTrainingPacket::~HotUIWidgetTrainingPacket() */

void __thiscall
HotUIWidgetTrainingPacket::~HotUIWidgetTrainingPacket(HotUIWidgetTrainingPacket *this)

{
  ~HotUIWidgetTrainingPacket(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetTrainingPacket::init() */

void __thiscall HotUIWidgetTrainingPacket::init(HotUIWidgetTrainingPacket *this)

{
  int iVar1;
  vector<Sexy::Image*,std::allocator<Sexy::Image*>> *this_00;
  string asStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = *(int *)(this + 0x220) + 1;
  if (0 < iVar1) {
    this_00 = (vector<Sexy::Image*,std::allocator<Sexy::Image*>> *)(this + 0x238);
    std::vector<Sexy::Image*,std::allocator<Sexy::Image*>>::clear(this_00);
    std::string::string(asStack_18,"");
    nop();
    Sexy::StrFormat("IMAGE_UI_NEW_PVP_NUMBER_%d",(string *)&local_10,(ulong)(uint)(iVar1 % 10));
    FUN_05474278(asStack_18,(string *)&local_10);
    std::string::~string((string *)&local_10);
    local_10 = StringHelper::ToImage(asStack_18,false);
    std::vector<Sexy::Image*,std::allocator<Sexy::Image*>>::push_back(this_00,(Image **)&local_10);
    if (iVar1 / 10 != 0) {
      Sexy::StrFormat("IMAGE_UI_NEW_PVP_NUMBER_%d",(string *)&local_10,(ulong)(uint)(iVar1 / 10));
      FUN_05474278(asStack_18,(string *)&local_10);
      std::string::~string((string *)&local_10);
      local_10 = StringHelper::ToImage(asStack_18,false);
      std::vector<Sexy::Image*,std::allocator<Sexy::Image*>>::push_back(this_00,(Image **)&local_10)
      ;
    }
    std::string::~string(asStack_18);
  }
  TodStringTranslate(L"[NEW_PVP_TRAINING_PACKET_LEVEL_STR]");
  TodReplaceNumberString((wstring *)asStack_18,L"{NUMBER}",*(int *)(this + 0x21c));
  FUN_054766c8(this + 0x250,&local_10);
  FUN_05476c50(&local_10);
  FUN_05476c50((wstring *)asStack_18);
  if (*(long **)(this + 0x230) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x230) + 0x18))();
    *(undefined8 *)(this + 0x230) = 0;
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetTrainingPacket::drawPacket(Sexy::Graphics*) */

void __thiscall
HotUIWidgetTrainingPacket::drawPacket(HotUIWidgetTrainingPacket *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *pLVar5;
  SalesProgressBar *pSVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  SeedPacketUtils *this_00;
  PacketRenderData *pPVar10;
  DeviceImage *pDVar11;
  int iVar12;
  Image *pIVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  Insets aIStack_38 [8];
  int local_30;
  int local_2c;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x214) == -1) goto LAB_0350c2cc;
  cVar1 = FUN_034ad858(this[0x224]);
  if (cVar1 == '\0') {
    pIVar13 = *(Image **)(this + 0x230);
    if (pIVar13 != (Image *)0x0) goto LAB_0350c1c4;
LAB_0350c55c:
    if (*(int *)(this + 0x22c) != 0) {
      this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      ServerZombieID::ServerZombieID((ServerZombieID *)aCStack_18,*(int *)(this + 0x214));
      ServerZombieID::ToString();
      std::string::string((string *)aIStack_28,"IMAGE_UI_PACKETS_ZOMBIE_NEW_PVP_");
      pPVar10 = (PacketRenderData *)
                SeedPacketUtils::GetZombiePacketRenderData
                          (this_00,(string *)aIStack_38,(string *)aIStack_28,*(int *)(this + 0x218))
      ;
      std::string::~string((string *)aIStack_28);
      nop();
      std::string::~string((string *)aIStack_38);
      pDVar11 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_00,pPVar10,0,0);
      *(DeviceImage **)(this + 0x230) = pDVar11;
      SeedPacketUtils::DrawPacketToDeviceImage
                (this_00,pDVar11,pPVar10,(bool)this[0x211],-1,false,false);
      pIVar13 = *(Image **)(this + 0x230);
      if (pIVar13 != (Image *)0x0) goto LAB_0350c1c4;
    }
  }
  else {
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Insets::Insets((Insets *)aCStack_18,0x80,0x80,0x80,0xff);
    Sexy::Graphics::SetColor(param_1,aCStack_18);
    pIVar13 = *(Image **)(this + 0x230);
    if (pIVar13 == (Image *)0x0) goto LAB_0350c55c;
LAB_0350c1c4:
    Sexy::Graphics::DrawImage(param_1,pIVar13,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4020);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  iVar12 = (int)(*(float *)(this + 0x25c) * 0.9 * (float)iVar2);
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4020);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar6);
  iVar14 = (int)(*(float *)(this + 0x25c) * 0.9 * (float)iVar2);
  Sexy::Insets::Insets(aIStack_38,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  iVar3 = FUN_034b7438(7);
  iVar2 = local_2c - iVar14;
  iVar4 = FUN_034b7438(0xfffffffb);
  iVar2 = iVar2 + iVar4;
  pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4020);
  Sexy::Graphics::DrawImage(param_1,pIVar13,iVar3,iVar2,iVar12,iVar14);
  if ((*(int *)(this + 0x220) < 0) ||
     (cVar1 = std::vector<Sexy::Image*,std::allocator<Sexy::Image*>>::empty
                        ((vector<Sexy::Image*,std::allocator<Sexy::Image*>> *)(this + 0x238)),
     cVar1 != '\0')) {
    cVar1 = FUN_034ad858(this[0x224]);
  }
  else {
    puVar7 = (undefined8 *)FUN_034b04fc(*(undefined8 *)(this + 0x238),0);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)*puVar7);
    iVar14 = (int)(*(float *)(this + 0x25c) * 0.3 * (float)iVar4);
    puVar7 = (undefined8 *)FUN_034b04fc(*(undefined8 *)(this + 0x238),0);
    iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)*puVar7);
    iVar15 = (int)(*(float *)(this + 0x25c) * 0.3 * (float)iVar4);
    iVar4 = FUN_034b7438(1);
    iVar4 = iVar3 + iVar12 + iVar4;
    iVar3 = FUN_034b7438(0);
    uVar9 = *(undefined8 *)(this + 0x238);
    iVar3 = iVar3 + iVar2;
    uVar8 = FUN_034b0504(uVar9,*(undefined8 *)(this + 0x240));
    if (uVar8 < 2) {
      puVar7 = (undefined8 *)FUN_034b04fc(uVar9,0);
      pIVar13 = (Image *)*puVar7;
    }
    else {
      puVar7 = (undefined8 *)FUN_034b04fc(uVar9,1);
      Sexy::Graphics::DrawImage(param_1,(Image *)*puVar7,iVar4,iVar3,iVar14,iVar15);
      puVar7 = (undefined8 *)FUN_034b04fc(*(undefined8 *)(this + 0x238),0);
      pIVar13 = (Image *)*puVar7;
      iVar4 = iVar4 + iVar14;
    }
    Sexy::Graphics::DrawImage(param_1,pIVar13,iVar4,iVar3,iVar14,iVar15);
    cVar1 = FUN_034ad858(this[0x224]);
  }
  if (cVar1 == '\0') {
    iVar3 = FUN_034b7438(0xfffffff8);
    fVar16 = *(float *)(this + 0x25c);
    iVar4 = FUN_034b7438(0xb);
    iVar2 = local_30;
    iVar12 = FUN_034b7438(0x3c);
    Sexy::Insets::Insets
              (aIStack_28,(int)((float)iVar3 * fVar16),(int)((float)iVar4 * fVar16),iVar2,iVar12);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x250,aIStack_28,uVar9,aCStack_18,1,1);
  }
  Sexy::Graphics::SetColorizeImages(param_1,false);
  cVar1 = FUN_034ad858(this[0x224]);
  if (cVar1 != '\0') {
    pLVar5 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa3e38);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
    iVar3 = (int)(*(float *)(this + 0x25c) * 0.8 * (float)iVar2);
    pSVar6 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa3e38);
    iVar2 = SalesProgressBar::GetCurrentLevel(pSVar6);
    iVar2 = (int)(*(float *)(this + 0x25c) * 0.8 * (float)iVar2);
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa3e38);
    Sexy::Graphics::DrawImage(param_1,pIVar13,local_30 - iVar3,local_2c - iVar2,iVar3,iVar2);
  }
LAB_0350c2cc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HotUIWidgetTrainingPacket::onDraw(Sexy::Graphics*) */

void __thiscall HotUIWidgetTrainingPacket::onDraw(HotUIWidgetTrainingPacket *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  LotteryResultProgressBar *pLVar5;
  SalesProgressBar *pSVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  SeedPacketUtils *this_00;
  PacketRenderData *pPVar10;
  DeviceImage *pDVar11;
  int iVar12;
  Image *pIVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  Insets aIStack_38 [8];
  int iStack_30;
  int iStack_2c;
  Insets aIStack_28 [16];
  Color aCStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x214) == -1) goto LAB_0350c2cc;
  cVar1 = FUN_034ad858(this[0x224]);
  if (cVar1 == '\0') {
    pIVar13 = *(Image **)(this + 0x230);
    if (pIVar13 != (Image *)0x0) goto LAB_0350c1c4;
LAB_0350c55c:
    if (*(int *)(this + 0x22c) != 0) {
      this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
      ServerZombieID::ServerZombieID((ServerZombieID *)aCStack_18,*(int *)(this + 0x214));
      ServerZombieID::ToString();
      std::string::string((string *)aIStack_28,"IMAGE_UI_PACKETS_ZOMBIE_NEW_PVP_");
      pPVar10 = (PacketRenderData *)
                SeedPacketUtils::GetZombiePacketRenderData
                          (this_00,(string *)aIStack_38,(string *)aIStack_28,*(int *)(this + 0x218))
      ;
      std::string::~string((string *)aIStack_28);
      nop();
      std::string::~string((string *)aIStack_38);
      pDVar11 = (DeviceImage *)SeedPacketUtils::CreateDeviceImageForSeedPacket(this_00,pPVar10,0,0);
      *(DeviceImage **)(this + 0x230) = pDVar11;
      SeedPacketUtils::DrawPacketToDeviceImage
                (this_00,pDVar11,pPVar10,(bool)this[0x211],-1,false,false);
      pIVar13 = *(Image **)(this + 0x230);
      if (pIVar13 != (Image *)0x0) goto LAB_0350c1c4;
    }
  }
  else {
    Sexy::Graphics::SetColorizeImages(param_1,true);
    Sexy::Insets::Insets((Insets *)aCStack_18,0x80,0x80,0x80,0xff);
    Sexy::Graphics::SetColor(param_1,aCStack_18);
    pIVar13 = *(Image **)(this + 0x230);
    if (pIVar13 == (Image *)0x0) goto LAB_0350c55c;
LAB_0350c1c4:
    Sexy::Graphics::DrawImage(param_1,pIVar13,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  }
  pLVar5 = (LotteryResultProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4020);
  iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
  iVar12 = (int)(*(float *)(this + 0x25c) * 0.9 * (float)iVar2);
  pSVar6 = (SalesProgressBar *)
           CachedUIResourcePtr<Sexy::Image>::operator->
                     ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4020);
  iVar2 = SalesProgressBar::GetCurrentLevel(pSVar6);
  iVar14 = (int)(*(float *)(this + 0x25c) * 0.9 * (float)iVar2);
  Sexy::Insets::Insets(aIStack_38,0,0,*(int *)(this + 0x50),*(int *)(this + 0x54));
  iVar3 = FUN_034b7438(7);
  iVar2 = iStack_2c - iVar14;
  iVar4 = FUN_034b7438(0xfffffffb);
  iVar2 = iVar2 + iVar4;
  pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                               ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4020);
  Sexy::Graphics::DrawImage(param_1,pIVar13,iVar3,iVar2,iVar12,iVar14);
  if ((*(int *)(this + 0x220) < 0) ||
     (cVar1 = std::vector<Sexy::Image*,std::allocator<Sexy::Image*>>::empty
                        ((vector<Sexy::Image*,std::allocator<Sexy::Image*>> *)(this + 0x238)),
     cVar1 != '\0')) {
    cVar1 = FUN_034ad858(this[0x224]);
  }
  else {
    puVar7 = (undefined8 *)FUN_034b04fc(*(undefined8 *)(this + 0x238),0);
    iVar4 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)*puVar7);
    iVar14 = (int)(*(float *)(this + 0x25c) * 0.3 * (float)iVar4);
    puVar7 = (undefined8 *)FUN_034b04fc(*(undefined8 *)(this + 0x238),0);
    iVar4 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)*puVar7);
    iVar15 = (int)(*(float *)(this + 0x25c) * 0.3 * (float)iVar4);
    iVar4 = FUN_034b7438(1);
    iVar4 = iVar3 + iVar12 + iVar4;
    iVar3 = FUN_034b7438(0);
    uVar9 = *(undefined8 *)(this + 0x238);
    iVar3 = iVar3 + iVar2;
    uVar8 = FUN_034b0504(uVar9,*(undefined8 *)(this + 0x240));
    if (uVar8 < 2) {
      puVar7 = (undefined8 *)FUN_034b04fc(uVar9,0);
      pIVar13 = (Image *)*puVar7;
    }
    else {
      puVar7 = (undefined8 *)FUN_034b04fc(uVar9,1);
      Sexy::Graphics::DrawImage(param_1,(Image *)*puVar7,iVar4,iVar3,iVar14,iVar15);
      puVar7 = (undefined8 *)FUN_034b04fc(*(undefined8 *)(this + 0x238),0);
      pIVar13 = (Image *)*puVar7;
      iVar4 = iVar4 + iVar14;
    }
    Sexy::Graphics::DrawImage(param_1,pIVar13,iVar4,iVar3,iVar14,iVar15);
    cVar1 = FUN_034ad858(this[0x224]);
  }
  if (cVar1 == '\0') {
    iVar3 = FUN_034b7438(0xfffffff8);
    fVar16 = *(float *)(this + 0x25c);
    iVar4 = FUN_034b7438(0xb);
    iVar2 = iStack_30;
    iVar12 = FUN_034b7438(0x3c);
    Sexy::Insets::Insets
              (aIStack_28,(int)((float)iVar3 * fVar16),(int)((float)iVar4 * fVar16),iVar2,iVar12);
    uVar9 = PrimeText_PotentialTypeface::Typeface(PrimeText_Game::Typeface_FZCuYuan_16_ThickOutline)
    ;
    Sexy::Color::Color(aCStack_18,1);
    WriteWordInRect(param_1,this + 0x250,aIStack_28,uVar9,aCStack_18,1,1);
  }
  Sexy::Graphics::SetColorizeImages(param_1,false);
  cVar1 = FUN_034ad858(this[0x224]);
  if (cVar1 != '\0') {
    pLVar5 = (LotteryResultProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa3e38);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(pLVar5);
    iVar3 = (int)(*(float *)(this + 0x25c) * 0.8 * (float)iVar2);
    pSVar6 = (SalesProgressBar *)
             CachedUIResourcePtr<Sexy::Image>::operator->
                       ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa3e38);
    iVar2 = SalesProgressBar::GetCurrentLevel(pSVar6);
    iVar2 = (int)(*(float *)(this + 0x25c) * 0.8 * (float)iVar2);
    pIVar13 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                 ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa3e38);
    Sexy::Graphics::DrawImage(param_1,pIVar13,iStack_30 - iVar3,iStack_2c - iVar2,iVar3,iVar2);
  }
LAB_0350c2cc:
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

