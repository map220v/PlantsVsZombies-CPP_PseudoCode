// Class: SeedPacket_Tool


/* SeedPacket_Tool::GetPacketCoolDown() */

undefined1  [16] SeedPacket_Tool::GetPacketCoolDown(void)

{
  return ZEXT816(0);
}


/* SeedPacket_Tool::~SeedPacket_Tool() */

void __thiscall SeedPacket_Tool::~SeedPacket_Tool(SeedPacket_Tool *this)

{
  *(undefined ***)this = &PTR_GetClass_0684a3d0;
  *(undefined ***)(this + 0x10) = &PTR__SeedPacket_Tool_0684a628;
  SeedPacket::~SeedPacket((SeedPacket *)this);
  return;
}


/* non-virtual thunk to SeedPacket_Tool::~SeedPacket_Tool() */

void __thiscall SeedPacket_Tool::~SeedPacket_Tool(SeedPacket_Tool *this)

{
  ~SeedPacket_Tool(this + -0x10);
  return;
}


/* SeedPacket_Tool::~SeedPacket_Tool() */

void __thiscall SeedPacket_Tool::~SeedPacket_Tool(SeedPacket_Tool *this)

{
  ~SeedPacket_Tool(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SeedPacket_Tool::~SeedPacket_Tool() */

void __thiscall SeedPacket_Tool::~SeedPacket_Tool(SeedPacket_Tool *this)

{
  ~SeedPacket_Tool(this + -0x10);
  return;
}


/* SeedPacket_Tool::SeedPacket_Tool() */

void __thiscall SeedPacket_Tool::SeedPacket_Tool(SeedPacket_Tool *this)

{
  SeedPacket::SeedPacket((SeedPacket *)this);
  *(undefined ***)this = &PTR_GetClass_0684a3d0;
  *(undefined ***)(this + 0x10) = &PTR__SeedPacket_Tool_0684a628;
  return;
}


/* SeedPacket_Tool::StaticNew() */

SeedPacket_Tool * SeedPacket_Tool::StaticNew(void)

{
  SeedPacket_Tool *this;
  
  this = ::operator_new(0x200);
  SeedPacket_Tool(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_Tool::StaticClassInit() */

void SeedPacket_Tool::StaticClassInit(void)

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
    std::string::string(asStack_10,"SeedPacket_Tool");
    (*pcVar2)(plVar1,asStack_10,FUN_0443e77c,0x200,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SeedPacket_Tool::StaticGetClass() */

long * SeedPacket_Tool::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"SeedPacket_Tool",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SeedPacket_Tool::GetClass() const */

long * SeedPacket_Tool::GetClass(void)

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
  (*pcVar3)(plVar1,"SeedPacket_Tool",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_Tool::OnTouch(Sexy::Touch const&) */

void __thiscall SeedPacket_Tool::OnTouch(SeedPacket_Tool *this,Touch *param_1)

{
  char cVar1;
  undefined8 uVar2;
  BaseCursor *pBVar3;
  Board *this_00;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_50 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_48 [8];
  Touch aTStack_40 [16];
  Point aPStack_30 [8];
  Point aPStack_28 [32];
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  if (*(int *)(param_1 + 0x30) == 0) {
    Sexy::Touch::Touch(aTStack_40,param_1);
    Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_30);
    Board::TranslateScreenPositionToBoardPosition(*(Board **)(gLawnApp + 0x9f0),aPStack_28);
    this_00 = *(Board **)(gLawnApp + 0x9f0);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_48,(RtWeakPtrBase *)aRStack_50);
    pBVar3 = ::operator_new(0x60);
    ToolPacketCursor::ToolPacketCursor((ToolPacketCursor *)pBVar3,aTStack_40,aRStack_48);
    cVar1 = Board::TryToAddCursor(this_00,pBVar3,true);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_48);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_50);
    if (cVar1 == '\0') {
      uVar2 = 1;
    }
    else {
      (**(code **)(*(long *)this + 0xe8))(this,4);
      uVar2 = 1;
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_Tool::SetToolType(std::string const&) */

void __thiscall SeedPacket_Tool::SetToolType(SeedPacket_Tool *this,string *param_1)

{
  SeedPacketUtils *this_00;
  long lVar1;
  ResourceInfo *pRVar2;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  SeedPacket::SetContentsTypeName((string *)this);
  MessageRouter::Broadcast<SeedPacket*,SeedPacket_Tool*>
            ((MessageRouter *)gMessageRouter,Message::SeedPacketTypeChanged,this);
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  lVar1 = SeedPacketUtils::GetToolPacketRenderData(this_00,param_1);
  pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)(lVar1 + 0x170));
  Sexy::Insets::Insets(aIStack_18,0,0,1,1);
  UIWidget::SetAtlasImageData((UIWidget *)this,pRVar2,aIStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SeedPacket_Tool::Draw(Sexy::Graphics*) */

void __thiscall SeedPacket_Tool::Draw(SeedPacket_Tool *this,Graphics *param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  Image *pIVar11;
  SeedPacketUtils *this_00;
  long lVar12;
  undefined8 uVar13;
  CachedUIResourcePtr<Sexy::Image> *this_01;
  float fVar14;
  float fVar15;
  GraphicsAutoState aGStack_30 [8];
  Color local_28 [16];
  float local_18 [3];
  int local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  UIWidget::Draw((Graphics *)this);
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_30,param_1);
  UIWidget::translateToWidgetPosition((UIWidget *)this,param_1);
  cVar1 = (**(code **)(*(long *)this + 0x240))(this);
  if (cVar1 != '\0') {
    iVar7 = FUN_0443e5d0(0xfffffff9);
    iVar8 = FUN_0443e5d0(0xfffffffc);
    Sexy::Graphics::Translate(param_1,iVar7,iVar8);
  }
  Sexy::Color::Color(local_28,1);
  if (*(code **)(*(long *)this + 0x1c0) == SeedPacket::IsAffordable) {
    bVar2 = SeedPacket::IsAffordable((SeedPacket *)this);
  }
  else {
    bVar2 = (**(code **)(*(long *)this + 0x1c0))();
  }
  bVar3 = FUN_0443eb20(*(undefined4 *)(this + 400));
  cVar1 = UIWidget::isInState((UIWidget *)this,3);
  uVar6 = *(undefined4 *)(this + 400);
  bVar4 = 0;
  if (cVar1 != '\0') {
    bVar4 = FUN_0443eb28(uVar6);
    bVar4 = (bVar4 | bVar3) ^ 1;
  }
  cVar1 = FUN_0443eb68(uVar6);
  if (((cVar1 != '\0') || (bVar3 != 0)) || (bVar3 = FUN_0443eb70(uVar6), bVar3 < (bVar2 <= bVar4)))
  {
    Sexy::Insets::Insets((Insets *)local_18,0x80,0x80,0x80,0xff);
    Sexy::Graphics::SetColorizeImages(param_1,true);
  }
  Sexy::Graphics::SetColor(param_1,local_28);
  pIVar11 = (Image *)UIWidget::GetAtlasImage((UIWidget *)this);
  this_00 = (SeedPacketUtils *)Sexy::LazySingleton<SeedPacketUtils>::GetInstance();
  lVar12 = SeedPacketUtils::GetToolPacketRenderData(this_00,(string *)(this + 0x188));
  Sexy::Graphics::DrawImage
            (param_1,pIVar11,*(int *)(lVar12 + 0x30),*(int *)(lVar12 + 0x34),
             (TRect *)(lVar12 + 0x20));
  cVar5 = UIWidget::isInState((UIWidget *)this,4);
  if (cVar5 == '\0') {
    Sexy::Graphics::DrawImage
              (param_1,pIVar11,*(int *)(lVar12 + 0x60),*(int *)(lVar12 + 100),
               (TRect *)(lVar12 + 0x50));
  }
  else {
    Sexy::Graphics::DrawImage
              (param_1,pIVar11,*(int *)(lVar12 + 0x78),*(int *)(lVar12 + 0x7c),
               (TRect *)(lVar12 + 0x68));
  }
  Sexy::Graphics::DrawImage
            (param_1,pIVar11,*(int *)(lVar12 + 0x18),*(int *)(lVar12 + 0x1c),(TRect *)(lVar12 + 8));
  iVar7 = *(int *)(lVar12 + 0x138) + *(int *)(lVar12 + 0x130);
  uVar6 = FUN_0443e47c(*(undefined4 *)(this + 0x1cc));
  switch(uVar6) {
  case 1:
    iVar8 = FUN_0443e5d0(0x28);
    iVar9 = FUN_0443e5d0(5);
    iVar10 = FUN_0443e5d0(0x1e);
    Sexy::Insets::Insets((Insets *)local_18,iVar7 - iVar8,iVar9,iVar10,iVar10);
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b08d00;
    break;
  case 2:
    iVar8 = FUN_0443e5d0(0x28);
    iVar9 = FUN_0443e5d0(5);
    iVar10 = FUN_0443e5d0(0x1e);
    Sexy::Insets::Insets((Insets *)local_18,iVar7 - iVar8,iVar9,iVar10,iVar10);
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b08d28;
    break;
  case 3:
    iVar8 = FUN_0443e5d0(0x28);
    iVar9 = FUN_0443e5d0(5);
    iVar10 = FUN_0443e5d0(0x1e);
    Sexy::Insets::Insets((Insets *)local_18,iVar7 - iVar8,iVar9,iVar10,iVar10);
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b08d68;
    break;
  case 4:
    iVar8 = FUN_0443e5d0(0x28);
    iVar9 = FUN_0443e5d0(5);
    iVar10 = FUN_0443e5d0(0x1e);
    Sexy::Insets::Insets((Insets *)local_18,iVar7 - iVar8,iVar9,iVar10,iVar10);
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b08db0;
    break;
  case 5:
    iVar8 = FUN_0443e5d0(0x28);
    iVar9 = FUN_0443e5d0(5);
    iVar10 = FUN_0443e5d0(0x1e);
    Sexy::Insets::Insets((Insets *)local_18,iVar7 - iVar8,iVar9,iVar10,iVar10);
    this_01 = (CachedUIResourcePtr<Sexy::Image> *)&DAT_06b08e00;
    break;
  default:
    goto switchD_0443fea4_default;
  }
  uVar13 = CachedUIResourcePtr<Sexy::Image>::operator->(this_01);
  DrawAdaptiveImage(param_1,local_18,uVar13);
switchD_0443fea4_default:
  if (bVar4 != 0) {
    fVar14 = (float)FUN_0443e478(*(undefined4 *)(this + 0x6c));
    if (*(code **)(*(long *)this + 0x238) == GetPacketCoolDown) {
      fVar15 = (float)GetPacketCoolDown();
    }
    else {
      fVar15 = (float)(**(code **)(*(long *)this + 0x238))(this);
    }
    uVar6 = PVZ_T();
    local_18[0] = (float)*(int *)(lVar12 + 0xa4);
    fVar14 = CurveLerp<float>(fVar14,fVar15 + fVar14,uVar6,(Insets *)local_18,&DAT_06a88718,1);
    Sexy::Insets::Insets((Insets *)local_18,0,0,0,0x80);
    Sexy::Graphics::SetColor(param_1,(Color *)local_18);
    Sexy::Insets::Insets((Insets *)local_18,(Insets *)(lVar12 + 0x98));
    local_c = (int)fVar14;
    Sexy::Graphics::DrawImage
              (param_1,pIVar11,*(int *)(lVar12 + 0xa8),*(int *)(lVar12 + 0xac),(TRect *)local_18);
  }
  if (cVar1 != '\0') {
    Sexy::Color::Color((Color *)local_18,1);
    Sexy::Graphics::SetColor(param_1,(Color *)local_18);
    Sexy::Graphics::DrawImage
              (param_1,pIVar11,*(int *)(lVar12 + 0x90),*(int *)(lVar12 + 0x94),
               (TRect *)(lVar12 + 0x80));
  }
  (**(code **)(*(long *)this + 0x220))(this,param_1);
  cVar1 = UIWidget::isInState((UIWidget *)this,4);
  if ((cVar1 != '\0') || (cVar1 = FUN_0443eb78(*(undefined4 *)(this + 400)), cVar1 != '\0')) {
    Sexy::Graphics::DrawImage
              (param_1,pIVar11,*(int *)(lVar12 + 0x138),*(int *)(lVar12 + 0x13c),
               (TRect *)(lVar12 + 0x128));
  }
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* non-virtual thunk to SeedPacket_Tool::Draw(Sexy::Graphics*) */

void __thiscall SeedPacket_Tool::Draw(SeedPacket_Tool *this,Graphics *param_1)

{
  Draw(this + -0x10,param_1);
  return;
}

