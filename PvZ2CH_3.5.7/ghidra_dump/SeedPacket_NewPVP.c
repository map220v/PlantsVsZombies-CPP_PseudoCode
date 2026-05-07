// Class: SeedPacket_NewPVP


/* SeedPacket_NewPVP::GetLockedDes() */

undefined8 SeedPacket_NewPVP::GetLockedDes(void)

{
  undefined8 in_x8;
  
  FUN_05477b24();
  return in_x8;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_NewPVP::StaticClassInit() */

void SeedPacket_NewPVP::StaticClassInit(void)

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
    std::string::string(asStack_10,"SeedPacket_NewPVP");
    (*pcVar2)(plVar1,asStack_10,FUN_0351e910,0x248,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedPacket_NewPVP::StaticGetClass() */

long * SeedPacket_NewPVP::StaticGetClass(void)

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
  uVar2 = SeedPacket::StaticGetClass();
  (*pcVar3)(plVar1,"SeedPacket_NewPVP",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedPacket_NewPVP::GetClass() const */

long * SeedPacket_NewPVP::GetClass(void)

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
  uVar2 = SeedPacket::StaticGetClass();
  (*pcVar3)(plVar1,"SeedPacket_NewPVP",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedPacket_NewPVP::IsReady() */

void __thiscall SeedPacket_NewPVP::IsReady(SeedPacket_NewPVP *this)

{
  UIWidget::isInState((UIWidget *)this,2);
  return;
}


/* SeedPacket_NewPVP::initialize() */

void __thiscall SeedPacket_NewPVP::initialize(SeedPacket_NewPVP *this)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_0351d4a8(*(undefined4 *)(this + 0x38));
  fVar2 = (float)FUN_0351d4c8(*(undefined4 *)(this + 0x1fc));
  FUN_0351d4ac(this + 0x38,(int)((float)iVar1 * fVar2));
  iVar1 = FUN_0351d4b4(*(undefined4 *)(this + 0x3c));
  fVar2 = (float)FUN_0351d4c8(*(undefined4 *)(this + 0x1fc));
  FUN_0351d4b8(this + 0x3c,(int)((float)iVar1 * fVar2));
  return;
}


/* SeedPacket_NewPVP::onEnterState_Initializing(WidgetState) */

void __thiscall SeedPacket_NewPVP::onEnterState_Initializing(SeedPacket_NewPVP *this)

{
  nop();
  initialize(this);
  return;
}


/* SeedPacket_NewPVP::SetLocked(bool, std::wstring const&) */

void __thiscall SeedPacket_NewPVP::SetLocked(SeedPacket_NewPVP *this,bool param_1,wstring *param_2)

{
  this[0x200] = (SeedPacket_NewPVP)param_1;
  SeedPacket::SetDisabled((SeedPacket *)this,param_1);
  thunk_FUN_05477b9c(this + 0x208,param_2);
  return;
}


/* SeedPacket_NewPVP::onSeedPacketPlanted(SeedPacket*) */

void __thiscall SeedPacket_NewPVP::onSeedPacketPlanted(SeedPacket_NewPVP *this,SeedPacket *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_035205d8(*(undefined4 *)(this + 400));
  if (cVar1 == '\0') {
    if (this == (SeedPacket_NewPVP *)param_1) {
      (**(code **)(*(long *)this + 0xe8))(this,3);
    }
    uVar2 = Board::GetSunCurrency(*(Board **)(gLawnApp + 0x9f0));
    (**(code **)(*(long *)this + 0x210))(this,uVar2);
  }
  return;
}


/* SeedPacket_NewPVP::updateAffordability(int) */

void __thiscall SeedPacket_NewPVP::updateAffordability(SeedPacket_NewPVP *this,int param_1)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x168));
  if (!bVar1) {
    return;
  }
  iVar2 = FUN_0351d4dc(*(undefined4 *)(this + 0x218));
  this[0x201] = (SeedPacket_NewPVP)(iVar2 <= param_1);
  SeedPacket::setAffordable((SeedPacket *)this,iVar2 <= param_1);
  return;
}


/* SeedPacket_NewPVP::OnMouseMove(int, int) */

void __thiscall SeedPacket_NewPVP::OnMouseMove(SeedPacket_NewPVP *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
  if (((bVar1) && (cVar2 = (**(code **)(*(long *)this + 0xa8))(this,param_1,param_2), cVar2 == '\0')
      ) && (cVar2 = SeedPacket::IsPressState((SeedPacket *)this), cVar2 != '\0')) {
    (**(code **)(*(long *)this + 0xe8))(this,2);
    return;
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_NewPVP::onCursorDestroyed(BaseCursor*) */

void __thiscall SeedPacket_NewPVP::onCursorDestroyed(SeedPacket_NewPVP *this,BaseCursor *param_1)

{
  bool bVar1;
  char cVar2;
  PlantCursor *pPVar3;
  ResourceInfo *this_00;
  RtWeakPtr aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BaseCursor *)0x0) {
    bVar1 = Sexy::RtObject::IsA<PlantCursor>((RtObject *)param_1);
    if ((bVar1) &&
       (pPVar3 = Sexy::RtObject::Cast<PlantCursor>((RtObject *)param_1),
       pPVar3 != (PlantCursor *)0x0)) {
      PlantTwinsHoneySuckle::GetAssistPerson();
      this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_10);
      if (this_00 == (ResourceInfo *)this) {
        cVar2 = UIWidget::isInState((UIWidget *)this_00,4);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
        if (cVar2 != '\0') {
          (**(code **)(*(long *)this_00 + 0xe8))(this_00,2);
        }
      }
      else {
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10)
        ;
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedPacket_NewPVP::GetZombieRenderData() */

void __thiscall SeedPacket_NewPVP::GetZombieRenderData(SeedPacket_NewPVP *this)

{
  SeedPacketUtils *this_00;
  
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  SeedPacketUtils::GetZombiePacketRenderData
            (this_00,(string *)(this + 0x188),(string *)(this + 0x1b0),*(int *)(this + 0x240));
  return;
}


/* SeedPacket_NewPVP::SeedPacket_NewPVP() */

void __thiscall SeedPacket_NewPVP::SeedPacket_NewPVP(SeedPacket_NewPVP *this)

{
  undefined **__n;
  
  SeedPacket::SeedPacket((SeedPacket *)this);
  this[0x200] = (SeedPacket_NewPVP)0x0;
  __n = &PTR_GetClass_0664e740;
  this[0x201] = (SeedPacket_NewPVP)0x0;
  *(undefined ***)this = &PTR_GetClass_0664e740;
  *(undefined ***)(this + 0x10) = &PTR__SeedPacket_NewPVP_0664e980;
  FUN_05476574(this + 0x208);
  *(undefined4 *)(this + 0x218) = 0;
  *(undefined4 *)(this + 0x210) = 1;
  *(undefined4 *)(this + 0x214) = 1;
  *(undefined4 *)(this + 0x21c) = 1;
  *(undefined4 *)(this + 0x220) = 0;
  *(undefined4 *)(this + 0x224) = 0xffffffff;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x228));
  *(undefined4 *)(this + 0x240) = 0xffffffff;
  std::string::append((string *)(this + 0x1b0),"IMAGE_UI_PACKETS_ZOMBIE_NEW_PVP_",(size_t)__n);
  return;
}


/* SeedPacket_NewPVP::StaticNew() */

SeedPacket_NewPVP * SeedPacket_NewPVP::StaticNew(void)

{
  SeedPacket_NewPVP *this;
  
  this = ::operator_new(0x248);
  SeedPacket_NewPVP(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_NewPVP::DrawText(Sexy::Graphics*) */

void __thiscall SeedPacket_NewPVP::DrawText(SeedPacket_NewPVP *this,Graphics *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  Image *pIVar5;
  undefined4 uVar6;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(long *)(this + 0x1a0) == 0) goto LAB_03523a10;
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
  if (bVar1) {
    pIVar5 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa4ca8);
    iVar3 = FUN_0351e4e8(0x28);
    Sexy::Graphics::DrawImage(param_1,pIVar5,0,0,iVar3,iVar3);
    iVar3 = FUN_0351e4e8(0xfffffff1);
    iVar4 = FUN_0351e4e8(5);
    Sexy::PrimeTextWidget::SetPosition(*(PrimeTextWidget **)(this + 0x1a0),iVar3,iVar4);
  }
  cVar2 = FUN_0351d504(this[0x200]);
  if ((cVar2 == '\0') && (-1 < *(int *)(this + 0x218))) {
    Sexy::Color::Color((Color *)&local_28,0xff,0xff,0xff);
    uVar6 = *(undefined4 *)(this + 400);
    cVar2 = FUN_03520694(uVar6);
    if (cVar2 == '\0') {
      cVar2 = (**(code **)(*(long *)this + 0x1c0))(this);
      if (cVar2 != '\0') {
        uVar6 = *(undefined4 *)(this + 400);
        goto LAB_03523a6c;
      }
      cVar2 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)(this + 0x168));
      if ((cVar2 != '\0') && (this[0x201] != (SeedPacket_NewPVP)0x0)) {
        iVar3 = 0xff;
        goto LAB_03523b74;
      }
      Sexy::Color::Color((Color *)&local_18,0xff,0,0);
      local_28 = local_18;
      uStack_20 = uStack_10;
    }
    else {
LAB_03523a6c:
      cVar2 = FUN_0352069c(uVar6);
      if (cVar2 != '\0') {
        iVar3 = 0x80;
LAB_03523b74:
        Sexy::Color::Color((Color *)&local_18,iVar3,iVar3,iVar3);
        local_28 = local_18;
        uStack_20 = uStack_10;
      }
    }
    Sexy::StrFormat(L"%d",(wstring *)&local_18,(ulong)*(uint *)(this + 0x218));
    Sexy::PrimeTextWidget::SetText(*(PrimeTextWidget **)(this + 0x1a0),(wstring *)&local_18);
    (**(code **)(**(long **)(this + 0x1a0) + 0x170))(*(long **)(this + 0x1a0),0,(Color *)&local_28);
    (**(code **)(**(long **)(this + 0x1a0) + 0x128))(*(long **)(this + 0x1a0),param_1);
    FUN_05476c50((wstring *)&local_18);
  }
  Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
LAB_03523a10:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* SeedPacket_NewPVP::~SeedPacket_NewPVP() */

void __thiscall SeedPacket_NewPVP::~SeedPacket_NewPVP(SeedPacket_NewPVP *this)

{
  *(undefined ***)this = &PTR_GetClass_0664e740;
  *(undefined ***)(this + 0x10) = &PTR__SeedPacket_NewPVP_0664e980;
  std::vector<Sexy::Image*,std::allocator<Sexy::Image*>>::~vector
            ((vector<Sexy::Image*,std::allocator<Sexy::Image*>> *)(this + 0x228));
  FUN_05476c50(this + 0x208);
  SeedPacket::~SeedPacket((SeedPacket *)this);
  return;
}


/* non-virtual thunk to SeedPacket_NewPVP::~SeedPacket_NewPVP() */

void __thiscall SeedPacket_NewPVP::~SeedPacket_NewPVP(SeedPacket_NewPVP *this)

{
  ~SeedPacket_NewPVP(this + -0x10);
  return;
}


/* SeedPacket_NewPVP::~SeedPacket_NewPVP() */

void __thiscall SeedPacket_NewPVP::~SeedPacket_NewPVP(SeedPacket_NewPVP *this)

{
  ~SeedPacket_NewPVP(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SeedPacket_NewPVP::~SeedPacket_NewPVP() */

void __thiscall SeedPacket_NewPVP::~SeedPacket_NewPVP(SeedPacket_NewPVP *this)

{
  ~SeedPacket_NewPVP(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_NewPVP::TryUse(PacketCursor*) */

void __thiscall SeedPacket_NewPVP::TryUse(SeedPacket_NewPVP *this,PacketCursor *param_1)

{
  int iVar1;
  ZombieCursor *pZVar2;
  SexyVector3 *pSVar3;
  undefined8 uVar4;
  long *plVar5;
  code *pcVar6;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (PacketCursor *)0x0) ||
     (pZVar2 = Sexy::RtObject::Cast<ZombieCursor>((RtObject *)param_1),
     pZVar2 == (ZombieCursor *)0x0)) {
    uVar4 = 0;
  }
  else {
    (**(code **)(*(long *)pZVar2 + 0x80))(&local_20);
    plVar5 = *(long **)(gLawnApp + 0x9f0);
    pcVar6 = *(code **)(*plVar5 + 0x318);
    PowerupUI::GetPowerupDownImage();
    pSVar3 = (SexyVector3 *)(*pcVar6)(plVar5,(RtWeakPtr<Sexy::ResourceInfo> *)&local_18,0,0);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
    EATextSquish::Vec3::Vec3((Vec3 *)&local_18,0.0,0.0,0.0);
    iVar1 = BoardTransforms::GridToBoardSpaceX(local_20);
    local_18 = (float)iVar1;
    iVar1 = BoardTransforms::GridToBoardSpaceY(local_1c);
    local_14 = (float)iVar1;
    BoardEntity::PlaceOnBoard(pSVar3);
    MessageRouter::Post<SeedPacket*,SeedPacket_NewPVP*>
              ((MessageRouter *)gMessageRouter,Message::SeedPacketPlanted,this);
    uVar4 = 1;
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_NewPVP::onTurnChanged(int) */

void __thiscall SeedPacket_NewPVP::onTurnChanged(SeedPacket_NewPVP *this,int param_1)

{
  vector<Sexy::Image*,std::allocator<Sexy::Image*>> *this_00;
  int iVar1;
  string asStack_18 [8];
  undefined8 local_10;
  long local_8;
  
  iVar1 = *(int *)(this + 0x224) - param_1;
  local_8 = ___stack_chk_guard;
  if (0 < iVar1) {
    this_00 = (vector<Sexy::Image*,std::allocator<Sexy::Image*>> *)(this + 0x228);
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
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_NewPVP::Draw(Sexy::Graphics*) */

void __thiscall SeedPacket_NewPVP::Draw(SeedPacket_NewPVP *this,Graphics *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  LotteryResultProgressBar *this_00;
  SalesProgressBar *this_01;
  Image *pIVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  float fVar12;
  GraphicsAutoState aGStack_20 [20];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SeedPacket::Draw((SeedPacket *)this,param_1);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_20,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar1 = FUN_0351d504(this[0x200]);
  if (cVar1 != '\0') {
    this_00 = (LotteryResultProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa5310);
    iVar2 = LotteryResultProgressBar::GetCurrentLevel(this_00);
    fVar12 = (float)FUN_0351d4c8(*(undefined4 *)(this + 0x1fc));
    iVar9 = (int)(fVar12 * 0.9 * (float)iVar2);
    this_01 = (SalesProgressBar *)
              CachedUIResourcePtr<Sexy::Image>::operator->
                        ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa5310);
    iVar2 = SalesProgressBar::GetCurrentLevel(this_01);
    fVar12 = (float)FUN_0351d4c8(*(undefined4 *)(this + 0x1fc));
    iVar7 = (int)(fVar12 * 0.9 * (float)iVar2);
    UIWidget::GetDrawRect();
    iVar2 = FUN_0351e4e8(0);
    iVar3 = FUN_0351e4e8(0xfffffffb);
    fVar12 = (float)FUN_0351d4c8(*(undefined4 *)(this + 0x1fc));
    iVar3 = (int)((float)(local_c - iVar7) + fVar12 * (float)iVar3);
    pIVar4 = (Image *)CachedUIResourcePtr<Sexy::Image>::operator->
                                ((CachedUIResourcePtr<Sexy::Image> *)&DAT_06aa5310);
    Sexy::Graphics::DrawImage(param_1,pIVar4,iVar2,iVar3,iVar9,iVar7);
    if (0 < *(int *)(this + 0x224)) {
      cVar1 = std::vector<Sexy::Image*,std::allocator<Sexy::Image*>>::empty
                        ((vector<Sexy::Image*,std::allocator<Sexy::Image*>> *)(this + 0x228));
      if (cVar1 == '\0') {
        puVar5 = (undefined8 *)FUN_0351d5c8(*(undefined8 *)(this + 0x228),0);
        iVar7 = LotteryResultProgressBar::GetCurrentLevel((LotteryResultProgressBar *)*puVar5);
        fVar12 = (float)FUN_0351d4c8(*(undefined4 *)(this + 0x1fc));
        iVar10 = (int)(fVar12 * 0.3 * (float)iVar7);
        puVar5 = (undefined8 *)FUN_0351d5c8(*(undefined8 *)(this + 0x228),0);
        iVar7 = SalesProgressBar::GetCurrentLevel((SalesProgressBar *)*puVar5);
        fVar12 = (float)FUN_0351d4c8(*(undefined4 *)(this + 0x1fc));
        iVar8 = (int)(fVar12 * 0.3 * (float)iVar7);
        iVar7 = FUN_0351e4e8(0xfffffffe);
        iVar2 = (int)((float)(iVar2 + iVar9) + fVar12 * (float)iVar7);
        iVar7 = FUN_0351e4e8(0);
        uVar11 = *(undefined8 *)(this + 0x228);
        iVar3 = (int)((float)iVar3 + fVar12 * (float)iVar7);
        uVar6 = FUN_0351d5d0(uVar11,*(undefined8 *)(this + 0x230));
        if (uVar6 < 2) {
          puVar5 = (undefined8 *)FUN_0351d5c8(uVar11,0);
          pIVar4 = (Image *)*puVar5;
        }
        else {
          puVar5 = (undefined8 *)FUN_0351d5c8(uVar11,1);
          Sexy::Graphics::DrawImage(param_1,(Image *)*puVar5,iVar2,iVar3,iVar10,iVar8);
          puVar5 = (undefined8 *)FUN_0351d5c8(*(undefined8 *)(this + 0x228),0);
          pIVar4 = (Image *)*puVar5;
          iVar2 = iVar2 + iVar10;
        }
        Sexy::Graphics::DrawImage(param_1,pIVar4,iVar2,iVar3,iVar10,iVar8);
      }
    }
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to SeedPacket_NewPVP::Draw(Sexy::Graphics*) */

void __thiscall SeedPacket_NewPVP::Draw(SeedPacket_NewPVP *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}


/* SeedPacket_NewPVP::registerForEvents() */

void __thiscall SeedPacket_NewPVP::registerForEvents(SeedPacket_NewPVP *this)

{
  undefined *puVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  undefined8 local_8;
  
  SeedPacket::registerForEvents((SeedPacket *)this);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onTurnChanged);
  local_50 = local_30;
  uStack_48 = uStack_28;
  local_40 = local_20;
  MessageRouter::
  Subscribe<int,Sexy::CBMemberTranslatorX<SeedPacket_NewPVP,void(SeedPacket_NewPVP::*)(int)>>
            ((MessageRouter *)puVar1,Message::NotifyTurnChanged,&local_50);
  puVar1 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,onNotifyTriggerUpgradeSkill);
  local_60 = local_8;
  local_70 = local_18;
  uStack_68 = uStack_10;
  MessageRouter::
  Subscribe<float,Sexy::CBMemberTranslatorX<SeedPacket_NewPVP,void(SeedPacket_NewPVP::*)(float)>>
            ((MessageRouter *)puVar1,Message::NotifyTriggerUpgradeSkill,&local_70);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_NewPVP::onNotifyTriggerUpgradeSkill(float) */

void __thiscall
SeedPacket_NewPVP::onNotifyTriggerUpgradeSkill(SeedPacket_NewPVP *this,float param_1)

{
  RtWeakPtr<Sexy::ResourceInfo> *this_00;
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  NewPVPMgr *pNVar7;
  ServerZombieID aSStack_38 [16];
  ServerZombieID aSStack_28 [16];
  ServerZombieID aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0351d51c(*(undefined4 *)(this + 0x220));
  if (cVar1 != '\0') {
    this_00 = (RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178);
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    ServerZombieID::ServerZombieID(aSStack_38,(string *)(lVar6 + 8));
    iVar2 = ImageLib::Image::GetWidth((Image *)aSStack_38);
    pNVar7 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    ServerZombieID::ServerZombieID(aSStack_28,(string *)(lVar6 + 8));
    iVar3 = ImageLib::Image::GetWidth((Image *)aSStack_28);
    iVar3 = NewPVPMgr::GetCurrentZombiePacketLevel(pNVar7,iVar3);
    pNVar7 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
    lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(this_00);
    ServerZombieID::ServerZombieID(aSStack_18,(string *)(lVar6 + 8));
    iVar4 = ImageLib::Image::GetWidth((Image *)aSStack_18);
    iVar5 = FUN_0351d4f4(*(undefined4 *)(this + 0x214));
    iVar4 = NewPVPMgr::GetZombieCost(pNVar7,iVar4,iVar5);
    iVar2 = NewPVPUtils::ApplyOverride_ZombieCost(iVar2,iVar3,iVar4);
    Effect_AngerFlame::SetFlameCol((Effect_AngerFlame *)this,(int)((float)iVar2 * param_1));
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_NewPVP::GetAffordState() */

void __thiscall SeedPacket_NewPVP::GetAffordState(SeedPacket_NewPVP *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  NewPVPMgr *this_00;
  ServerPlantID aSStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_035205d8(*(undefined4 *)(this + 400));
  uVar5 = 0;
  if (cVar1 == '\0') {
    cVar1 = FUN_0351d504(this[0x200]);
    uVar5 = 3;
    if (cVar1 == '\0') {
      bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x168));
      if (bVar2) {
        cVar1 = (**(code **)(*(long *)this + 400))(this);
        uVar5 = 2;
        if (cVar1 != '\0') {
          iVar3 = Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x168));
          ServerPlantID::ServerPlantID(aSStack_18,(string *)(lVar6 + 8));
          iVar4 = ImageLib::Image::GetWidth((Image *)aSStack_18);
          iVar3 = NewPVPMgr::GetPlantCost(iVar3,iVar4);
          Board::GetGameSubSystem<NewPVPGameSubsystem>(*(Board **)(gLawnApp + 0x9f0));
          iVar4 = NewPVPGameSubsystem::GetCurrentSun();
          uVar5 = (ulong)(iVar4 < iVar3);
        }
      }
      else {
        bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
        uVar5 = 0;
        if (bVar2) {
          this_00 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
          lVar6 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                            ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
          ServerZombieID::ServerZombieID((ServerZombieID *)aSStack_18,(string *)(lVar6 + 8));
          iVar3 = ImageLib::Image::GetWidth((Image *)aSStack_18);
          uVar5 = NewPVPMgr::CanAddZombie(this_00,iVar3,*(int *)(this + 0x214));
        }
      }
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


/* SeedPacket_NewPVP::IsAffordable() */

bool __thiscall SeedPacket_NewPVP::IsAffordable(SeedPacket_NewPVP *this)

{
  int iVar1;
  
  iVar1 = GetAffordState(this);
  return iVar1 == 0;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_NewPVP::OnTouch(Sexy::Touch const&) */

void __thiscall SeedPacket_NewPVP::OnTouch(SeedPacket_NewPVP *this,Touch *param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  NewPVPMgr *pNVar8;
  BaseCursor *pBVar9;
  long lVar10;
  Board *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_58 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_50 [16];
  Touch aTStack_40 [16];
  Point aPStack_30 [8];
  Point aPStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (*(int *)(this + 0x220) != 0) {
    iVar4 = *(int *)(param_1 + 0x30);
    if (iVar4 == 0) {
      iVar4 = FUN_0351d4cc(*(undefined4 *)(*(long *)(gLawnApp + 0x9f0) + 0x104));
      cVar2 = '\0';
      if (iVar4 != 3) {
        cVar2 = (**(code **)(*(long *)this + 0x1c0))(this);
        if (cVar2 == '\0') {
          FUN_05476574(aTStack_40);
          uVar5 = GetAffordState(this);
          switch(uVar5) {
          case 1:
            FUN_054772c4(aTStack_40,L"[ADVICE_NOT_ENOUGH_SUN]");
            MessageRouter::Post((_func_void *)gMessageRouter);
            break;
          case 2:
            FUN_054772c4(aTStack_40,L"[ADVICE_SEED_REFRESH]");
            break;
          case 3:
            FUN_054772c4(aTStack_40,L"[ADVICE_LOCKED]");
            break;
          case 4:
            FUN_054772c4(aTStack_40,L"[ADVICE_REACH_MAX_SIZE]");
          }
          cVar2 = '\x01';
          Board::DisplayAdvice(*(Board **)(gLawnApp + 0x9f0),aTStack_40,7,2);
          pcVar7 = (char *)Sexy::LazySingleton<AudioMgr>::GetInstancePtr();
          AudioMgr::SendEvent(pcVar7,"Play_Buzzer");
          FUN_05476c50(aTStack_40);
        }
        else {
          cVar3 = SeedPacket::IsPressState((SeedPacket *)this);
          if (cVar3 == '\0') {
            Sexy::Touch::Touch(aTStack_40,param_1);
            Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_30);
            Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_28);
            SeedPacket::CheckResourceLoaded((SeedPacket *)this);
            bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x168));
            if (bVar1) {
              this_00 = *(Board **)(gLawnApp + 0x9f0);
              pNVar8 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        (aRStack_50,(RtWeakPtrBase *)aRStack_58);
              pBVar9 = (BaseCursor *)NewPVPMgr::TryAddPlantCursor(pNVar8,aTStack_40,aRStack_50);
              cVar3 = Board::TryToAddCursor(this_00,pBVar9,true);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_50);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_58);
              if (cVar3 == '\0') goto LAB_0352a3b4;
            }
            else {
              cVar3 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
              if (!(bool)cVar3) goto LAB_0352a3b4;
              lVar10 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                 ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x178));
              ServerZombieID::ServerZombieID((ServerZombieID *)aRStack_50,(string *)(lVar10 + 8));
              iVar4 = ImageLib::Image::GetWidth((Image *)aRStack_50);
              pNVar8 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
              iVar6 = NewPVPMgr::CanAddZombie(pNVar8,iVar4,*(int *)(this + 0x214));
              if (iVar6 == 0) {
                pNVar8 = (NewPVPMgr *)Sexy::LazySingleton<NewPVPMgr>::GetInstancePtr();
                NewPVPMgr::TryAddZombie(pNVar8,iVar4,*(int *)(this + 0x214));
              }
            }
            cVar2 = cVar3;
            (**(code **)(*(long *)this + 0xe8))(this,4);
          }
        }
      }
      goto LAB_0352a3b4;
    }
    if ((((iVar4 == 3) || (iVar4 == 4)) &&
        (bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178)), bVar1)) &&
       (cVar2 = SeedPacket::IsPressState((SeedPacket *)this), cVar2 != '\0')) {
      cVar2 = '\0';
      (**(code **)(*(long *)this + 0xe8))(this,2);
      goto LAB_0352a3b4;
    }
  }
  cVar2 = '\0';
LAB_0352a3b4:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(cVar2);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_NewPVP::InitText() */

void __thiscall SeedPacket_NewPVP::InitText(SeedPacket_NewPVP *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  PrimeText_PotentialText *pPVar6;
  PrimeTextWidget *this_00;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  Color aCStack_28 [16];
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SeedPacket::InitText((SeedPacket *)this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x178));
  if (bVar1) {
    if (*(long **)(this + 0x1a0) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x1a0) + 0x18))();
      *(undefined8 *)(this + 0x1a0) = 0;
    }
    Sexy::Color::Color(aCStack_28,0xff,0xff,0xff);
    Sexy::StrFormat(L"%d",auStack_38,(ulong)*(uint *)(this + 0x218));
    uVar5 = PrimeText_PotentialTypeface::Typeface
                      (PrimeText_Game::Typeface_CafeteriaBlack_26_HardShadow);
    iVar2 = FUN_0351e4e8(0);
    iVar3 = FUN_0351e4e8(0x46);
    iVar4 = FUN_0351e4e8(0x28);
    FUN_05477b24(auStack_30,auStack_38);
    Sexy::Insets::Insets(aIStack_18,(Insets *)aCStack_28);
    pPVar6 = (PrimeText_PotentialText *)
             Sexy::BuildPotentialText_Paragraph
                       ((float)iVar2,(float)iVar2,(float)iVar3,(float)iVar4,uVar5,auStack_30,1,0,
                        aIStack_18);
    this_00 = ::operator_new(0xf8);
    Sexy::PrimeTextWidget::PrimeTextWidget(this_00,pPVar6);
    *(PrimeTextWidget **)(this + 0x1a0) = this_00;
    FUN_05476c50(auStack_30);
    FUN_05476c50(auStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_NewPVP::CopyFrom(SeedPacket*) */

void __thiscall SeedPacket_NewPVP::CopyFrom(SeedPacket_NewPVP *this,SeedPacket *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  SeedPacket_NewPVP *pSVar4;
  wstring awStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SeedPacket::CopyFrom((SeedPacket *)this,param_1);
  if ((param_1 != (SeedPacket *)0x0) &&
     (bVar1 = Sexy::RtObject::IsA<SeedPacket_NewPVP>((RtObject *)param_1), bVar1)) {
    pSVar4 = Sexy::RtObject::Cast<SeedPacket_NewPVP>((RtObject *)param_1);
    iVar2 = FUN_0351d4dc(*(undefined4 *)(pSVar4 + 0x218));
    Effect_AngerFlame::SetFlameCol((Effect_AngerFlame *)this,iVar2);
    uVar3 = FUN_0351d4f4(*(undefined4 *)(pSVar4 + 0x214));
    FUN_0351d4ec(this + 0x214,uVar3);
    uVar3 = FUN_0351d4e8(*(undefined4 *)(pSVar4 + 0x210));
    FUN_0351d4e0(this + 0x210,uVar3);
    uVar3 = FUN_0351d500(*(undefined4 *)(pSVar4 + 0x21c));
    FUN_0351d4f8(this + 0x21c,uVar3);
    bVar1 = (bool)FUN_0351d504(pSVar4[0x200]);
    GetLockedDes();
    SetLocked(this,bVar1,awStack_10);
    FUN_05476c50(awStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

