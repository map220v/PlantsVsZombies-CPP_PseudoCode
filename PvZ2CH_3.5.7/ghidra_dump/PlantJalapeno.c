// Class: PlantJalapeno


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJalapeno::StaticClassInit() */

void PlantJalapeno::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantJalapeno");
    (*pcVar2)(plVar1,asStack_10,FUN_040396a8,0x60,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantJalapeno::StaticGetClass() */

long * PlantJalapeno::StaticGetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantJalapeno",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantJalapeno::GetClass() const */

long * PlantJalapeno::GetClass(void)

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
  uVar2 = PlantFramework::StaticGetClass();
  (*pcVar3)(plVar1,"PlantJalapeno",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantJalapeno::CanAttackInColumn() */

bool __thiscall PlantJalapeno::CanAttackInColumn(PlantJalapeno *this)

{
  int iVar1;
  
  iVar1 = FUN_04039538(*(undefined8 *)(this + 0x10));
  return 1 < iVar1;
}


/* PlantJalapeno::HasShadow() */

bool __thiscall PlantJalapeno::HasShadow(PlantJalapeno *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  return fVar1 < *(float *)(this + 0x28);
}


/* PlantJalapeno::Draw(Sexy::Graphics*) */

void PlantJalapeno::Draw(Graphics *param_1)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  if (*(float *)(param_1 + 0x28) <= fVar1) {
    return;
  }
  PlantFramework::Draw(param_1);
  return;
}


/* PlantJalapeno::stopSpecialEffect() */

void __thiscall PlantJalapeno::stopSpecialEffect(PlantJalapeno *this)

{
  undefined8 *puVar1;
  PopAnimRig *this_00;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar3 = 0;
  while( true ) {
    uVar4 = *(undefined8 *)(this + 0x48);
    uVar2 = FUN_0403955c(uVar4,*(undefined8 *)(this + 0x50));
    if (uVar2 <= uVar3) break;
    puVar1 = (undefined8 *)FUN_04039568(uVar4,uVar3);
    this_00 = (PopAnimRig *)UIWidget::GetAtlasImage((UIWidget *)*puVar1);
    PopAnimRig::SetDisabled(this_00,true);
    uVar3 = uVar3 + 1;
  }
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::clear
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0x48));
  return;
}


/* PlantJalapeno::PlantJalapeno() */

void __thiscall PlantJalapeno::PlantJalapeno(PlantJalapeno *this)

{
  undefined4 uVar1;
  
  PlantFramework::PlantFramework((PlantFramework *)this);
  *(undefined ***)this = &PTR_GetClass_067bbe40;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = uVar1;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x30));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x48));
  return;
}


/* PlantJalapeno::StaticNew() */

PlantJalapeno * PlantJalapeno::StaticNew(void)

{
  PlantJalapeno *this;
  
  this = ::operator_new(0x60);
  PlantJalapeno(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJalapeno::Initialize() */

void __thiscall PlantJalapeno::Initialize(PlantJalapeno *this)

{
  char cVar1;
  long *plVar2;
  RealObject *this_00;
  code *pcVar3;
  undefined4 uVar4;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  PlantFramework::Initialize((PlantFramework *)this);
  cVar1 = Plant::IsOnBoard(*(Plant **)(this + 0x10));
  if (cVar1 == '\0') {
    uVar4 = PVZ_EOT();
  }
  else {
    plVar2 = (long *)UIEasyButtonWidget::GetImageNormal(*(UIEasyButtonWidget **)(this + 0x10));
    pcVar3 = *(code **)(*plVar2 + 0x130);
    ToolPacketData::GetProps();
    Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
    std::string::string(asStack_58,"onAnimStoppedCallback");
    RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
              ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
               asStack_58);
    (*pcVar3)(plVar2,aRStack_50);
    RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
    ::~RtReflectionDelegate(aRStack_50);
    std::string::~string(asStack_58);
    nop();
    Sexy::RtId::~RtId(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
    this_00 = *(RealObject **)(this + 0x10);
    std::string::string(asStack_58,"Play_Plant_Jalepeno_Attack");
    RealObject::PlayPositionalSound(this_00,asStack_58,0.0);
    std::string::~string(asStack_58);
    nop();
    uVar4 = PVZ_EOT();
    *(undefined4 *)(*(long *)(this + 0x10) + 0x124) = uVar4;
  }
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = uVar4;
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantJalapeno::~PlantJalapeno() */

void __thiscall PlantJalapeno::~PlantJalapeno(PlantJalapeno *this)

{
  *(undefined ***)this = &PTR_GetClass_067bbe40;
  std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::~vector
            ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0x48));
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x30));
  PlantFramework::~PlantFramework((PlantFramework *)this);
  return;
}


/* PlantJalapeno::~PlantJalapeno() */

void __thiscall PlantJalapeno::~PlantJalapeno(PlantJalapeno *this)

{
  ~PlantJalapeno(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJalapeno::Explode() */

void __thiscall PlantJalapeno::Explode(PlantJalapeno *this)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  Effect_PopAnim *pEVar5;
  ResourceInfo *pRVar6;
  RtClass *pRVar7;
  EffectAnimRig_JackOLanternFireSquare *this_00;
  Board *pBVar8;
  EffectAnimRig_JackOLanternFireSquare *this_01;
  int iVar9;
  float fVar10;
  RtWeakPtr aRStack_30 [8];
  int local_28;
  int local_24;
  Effect_PopAnim *local_20;
  string asStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"POPANIM_EFFECTS_JALAPENO_FIRE");
  GetPAMByName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8)) {
    iVar9 = 0;
    do {
      Sexy::Point::Point((Point *)asStack_18,iVar9,*(int *)(*(long *)(this + 0x10) + 0x110));
      BoardTransforms::GridToBoardSpace((Point *)asStack_18);
      pBVar8 = *(Board **)(gLawnApp + 0x9f0);
      if (pBVar8[0x119] != (Board)0x0) {
        fVar10 = (float)Board::calculateRoofOffsetZ((float)local_28);
        pBVar8 = *(Board **)(gLawnApp + 0x9f0);
        local_24 = (int)((float)local_24 - fVar10);
      }
      pEVar5 = Board::AddEffect<Effect_PopAnim>(pBVar8);
      local_20 = pEVar5;
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
      pRVar7 = (RtClass *)EffectAnimRig_JalapenoFireSquare::StaticGetClass();
      Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar6,pRVar7);
      pEVar5 = local_20;
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,(float)local_28,(float)(local_24 + -0x1e),0.0);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar5,(SexyVector3 *)asStack_18,-1)
      ;
      Effect_PopAnim::SetCentered(local_20,true);
      pEVar5 = local_20;
      uVar4 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(this + 0x10) + 0x110),1);
      FUN_0403952c(pEVar5 + 0x1c,uVar4);
      UIWidget::GetAtlasImage((UIWidget *)local_20);
      nop();
      uVar1 = iVar9 - *(int *)(*(long *)(this + 0x10) + 0x114);
      iVar9 = iVar9 + 1;
      uVar2 = (int)uVar1 >> 0x1f;
      EffectAnimRig_JackOLanternFireSquare::SetFireDelay
                (this_00,(float)(int)((uVar1 ^ uVar2) - uVar2) * 0.075);
      EffectAnimRig_JackOLanternFireSquare::SetOwningEffect(this_00,local_20);
      std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
                ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0x48),&local_20)
      ;
    } while (iVar9 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8));
  }
  cVar3 = CanAttackInColumn(this);
  if ((cVar3 != '\0') && (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc))) {
    iVar9 = 0;
    do {
      Sexy::Point::Point((Point *)asStack_18,*(int *)(*(long *)(this + 0x10) + 0x114),iVar9);
      BoardTransforms::GridToBoardSpace((Point *)asStack_18);
      pBVar8 = *(Board **)(gLawnApp + 0x9f0);
      if (pBVar8[0x119] != (Board)0x0) {
        fVar10 = (float)Board::calculateRoofOffsetZ((float)local_28);
        pBVar8 = *(Board **)(gLawnApp + 0x9f0);
        local_24 = (int)((float)local_24 - fVar10);
      }
      pEVar5 = Board::AddEffect<Effect_PopAnim>(pBVar8);
      local_20 = pEVar5;
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
      pRVar7 = (RtClass *)EffectAnimRig_JalapenoFireSquare::StaticGetClass();
      Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar6,pRVar7);
      pEVar5 = local_20;
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,(float)local_28,(float)(local_24 + -0x1e),0.0);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar5,(SexyVector3 *)asStack_18,-1)
      ;
      Effect_PopAnim::SetCentered(local_20,true);
      pEVar5 = local_20;
      uVar4 = Board::MakeRenderOrder(0x65130,iVar9,1);
      FUN_0403952c(pEVar5 + 0x1c,uVar4);
      UIWidget::GetAtlasImage((UIWidget *)local_20);
      nop();
      uVar1 = iVar9 - *(int *)(*(long *)(this + 0x10) + 0x110);
      iVar9 = iVar9 + 1;
      uVar2 = (int)uVar1 >> 0x1f;
      EffectAnimRig_JackOLanternFireSquare::SetFireDelay
                (this_01,(float)(int)((uVar1 ^ uVar2) - uVar2) * 0.075);
      EffectAnimRig_JackOLanternFireSquare::SetOwningEffect(this_01,local_20);
      std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
                ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(this + 0x48),&local_20)
      ;
    } while (iVar9 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  }
  uVar4 = PVZ_T();
  *(undefined4 *)(this + 0x2c) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = uVar4;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x30));
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::RowMissWalrus,
             *(int *)(*(long *)(this + 0x10) + 0x110));
  cVar3 = CanAttackInColumn(this);
  if (cVar3 != '\0') {
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::ColMissWalrus,
               *(int *)(*(long *)(this + 0x10) + 0x114));
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJalapeno::onAnimStoppedCallback(std::string const&) */

void PlantJalapeno::onAnimStoppedCallback(string *param_1)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  Effect_PopAnim *pEVar5;
  ResourceInfo *pRVar6;
  RtClass *pRVar7;
  EffectAnimRig_JackOLanternFireSquare *this;
  Board *pBVar8;
  EffectAnimRig_JackOLanternFireSquare *this_00;
  int iVar9;
  float fVar10;
  RtWeakPtr aRStack_30 [8];
  int iStack_28;
  int iStack_24;
  Effect_PopAnim *pEStack_20;
  string asStack_18 [16];
  long lStack_8;
  
  lStack_8 = ___stack_chk_guard;
  std::string::string(asStack_18,"POPANIM_EFFECTS_JALAPENO_FIRE");
  GetPAMByName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  if (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8)) {
    iVar9 = 0;
    do {
      Sexy::Point::Point((Point *)asStack_18,iVar9,*(int *)(*(long *)(param_1 + 0x10) + 0x110));
      BoardTransforms::GridToBoardSpace((Point *)asStack_18);
      pBVar8 = *(Board **)(gLawnApp + 0x9f0);
      if (pBVar8[0x119] != (Board)0x0) {
        fVar10 = (float)Board::calculateRoofOffsetZ((float)iStack_28);
        pBVar8 = *(Board **)(gLawnApp + 0x9f0);
        iStack_24 = (int)((float)iStack_24 - fVar10);
      }
      pEVar5 = Board::AddEffect<Effect_PopAnim>(pBVar8);
      pEStack_20 = pEVar5;
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
      pRVar7 = (RtClass *)EffectAnimRig_JalapenoFireSquare::StaticGetClass();
      Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar6,pRVar7);
      pEVar5 = pEStack_20;
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,(float)iStack_28,(float)(iStack_24 + -0x1e),0.0);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar5,(SexyVector3 *)asStack_18,-1)
      ;
      Effect_PopAnim::SetCentered(pEStack_20,true);
      pEVar5 = pEStack_20;
      uVar4 = Board::MakeRenderOrder(0x65130,*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x110),1);
      FUN_0403952c(pEVar5 + 0x1c,uVar4);
      UIWidget::GetAtlasImage((UIWidget *)pEStack_20);
      nop();
      uVar1 = iVar9 - *(int *)(*(long *)(param_1 + 0x10) + 0x114);
      iVar9 = iVar9 + 1;
      uVar2 = (int)uVar1 >> 0x1f;
      EffectAnimRig_JackOLanternFireSquare::SetFireDelay
                (this,(float)(int)((uVar1 ^ uVar2) - uVar2) * 0.075);
      EffectAnimRig_JackOLanternFireSquare::SetOwningEffect(this,pEStack_20);
      std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
                ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(param_1 + 0x48),
                 &pEStack_20);
    } while (iVar9 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8));
  }
  cVar3 = CanAttackInColumn((PlantJalapeno *)param_1);
  if ((cVar3 != '\0') && (0 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc))) {
    iVar9 = 0;
    do {
      Sexy::Point::Point((Point *)asStack_18,*(int *)(*(long *)(param_1 + 0x10) + 0x114),iVar9);
      BoardTransforms::GridToBoardSpace((Point *)asStack_18);
      pBVar8 = *(Board **)(gLawnApp + 0x9f0);
      if (pBVar8[0x119] != (Board)0x0) {
        fVar10 = (float)Board::calculateRoofOffsetZ((float)iStack_28);
        pBVar8 = *(Board **)(gLawnApp + 0x9f0);
        iStack_24 = (int)((float)iStack_24 - fVar10);
      }
      pEVar5 = Board::AddEffect<Effect_PopAnim>(pBVar8);
      pEStack_20 = pEVar5;
      pRVar6 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_30);
      pRVar7 = (RtClass *)EffectAnimRig_JalapenoFireSquare::StaticGetClass();
      Effect_PopAnim::CreatePopAnimRig(pEVar5,(PopAnim *)pRVar6,pRVar7);
      pEVar5 = pEStack_20;
      EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,(float)iStack_28,(float)(iStack_24 + -0x1e),0.0);
      StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)pEVar5,(SexyVector3 *)asStack_18,-1)
      ;
      Effect_PopAnim::SetCentered(pEStack_20,true);
      pEVar5 = pEStack_20;
      uVar4 = Board::MakeRenderOrder(0x65130,iVar9,1);
      FUN_0403952c(pEVar5 + 0x1c,uVar4);
      UIWidget::GetAtlasImage((UIWidget *)pEStack_20);
      nop();
      uVar1 = iVar9 - *(int *)(*(long *)(param_1 + 0x10) + 0x110);
      iVar9 = iVar9 + 1;
      uVar2 = (int)uVar1 >> 0x1f;
      EffectAnimRig_JackOLanternFireSquare::SetFireDelay
                (this_00,(float)(int)((uVar1 ^ uVar2) - uVar2) * 0.075);
      EffectAnimRig_JackOLanternFireSquare::SetOwningEffect(this_00,pEStack_20);
      std::vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>>::push_back
                ((vector<Effect_PopAnim*,std::allocator<Effect_PopAnim*>> *)(param_1 + 0x48),
                 &pEStack_20);
    } while (iVar9 < *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc));
  }
  uVar4 = PVZ_T();
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::clear
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(param_1 + 0x30));
  MessageRouter::Post<int,int>
            ((MessageRouter *)gMessageRouter,Message::RowMissWalrus,
             *(int *)(*(long *)(param_1 + 0x10) + 0x110));
  cVar3 = CanAttackInColumn((PlantJalapeno *)param_1);
  if (cVar3 != '\0') {
    MessageRouter::Post<int,int>
              ((MessageRouter *)gMessageRouter,Message::ColMissWalrus,
               *(int *)(*(long *)(param_1 + 0x10) + 0x114));
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_30);
  if (lStack_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantJalapeno::UpdateActions() */

void __thiscall PlantJalapeno::UpdateActions(PlantJalapeno *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  Plant *pPVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  Zombie *this_00;
  BoardEntity **ppBVar17;
  GridItem *this_01;
  undefined8 uVar18;
  code *pcVar19;
  RtObject *this_02;
  int iVar20;
  ulong uVar21;
  undefined8 uVar22;
  float fVar23;
  int local_a0;
  int local_9c [3];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_68 [4];
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar23 = (float)PVZ_T();
  if (*(float *)(this + 0x28) <= fVar23) {
    local_a0 = -1;
    local_9c[1] = 0xffffffff;
    local_9c[0] = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xf8) + 1;
    local_9c[2] = *(int *)(*(long *)(gLawnApp + 0x9f0) + 0xfc) + 1;
    fVar23 = (float)PVZ_T();
    iVar9 = *(int *)(this + 0x2c);
    iVar20 = (int)((fVar23 - *(float *)(this + 0x28)) * 13.333333);
    if (iVar9 < iVar20) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80);
      while (*(int *)(this + 0x2c) < iVar20) {
        lVar12 = *(long *)(this + 0x10);
        iVar9 = *(int *)(this + 0x2c) + 1;
        *(int *)(this + 0x2c) = iVar9;
        iVar1 = *(int *)(lVar12 + 0x110);
        local_68[0] = iVar1 - iVar9;
        piVar11 = eastl::max_alt<int>(local_68,local_9c + 1);
        iVar2 = *(int *)(lVar12 + 0x114);
        iVar3 = *piVar11;
        local_68[0] = iVar2 - iVar9;
        piVar11 = eastl::max_alt<int>(local_68,&local_a0);
        iVar4 = *piVar11;
        local_68[0] = iVar9 + iVar2;
        piVar11 = eastl::min_alt<int>(local_68,local_9c);
        iVar2 = *piVar11;
        local_68[0] = iVar9 + iVar1;
        piVar11 = eastl::min_alt<int>(local_68,local_9c + 2);
        iVar9 = *piVar11;
        uVar8 = operator|(2,4);
        Sexy::Insets::Insets((Insets *)local_68,iVar4,iVar1,iVar2 - iVar4,1);
        EntityFinder::GetEntitiesInGridSquares
                  ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,uVar8,
                   (Insets *)local_68);
        puVar5 = gMessageRouter;
        Sexy::Insets::Insets
                  ((Insets *)local_68,iVar4,*(int *)(*(long *)(this + 0x10) + 0x110),iVar2 - iVar4,1
                  );
        MessageRouter::Post<Sexy::TRect<int>&,Sexy::TRect<int>>
                  ((MessageRouter *)puVar5,Message::BreakIceBallInGridRect,(Insets *)local_68);
        cVar6 = CanAttackInColumn(this);
        if (cVar6 != '\0') {
          Sexy::Insets::Insets
                    ((Insets *)local_68,*(int *)(*(long *)(this + 0x10) + 0x114),iVar3,1,
                     iVar9 - iVar3);
          EntityFinder::GetEntitiesInGridSquares
                    ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_80,
                     uVar8,(Insets *)local_68);
          puVar5 = gMessageRouter;
          Sexy::Insets::Insets
                    ((Insets *)local_68,*(int *)(*(long *)(this + 0x10) + 0x114),iVar3,1,
                     iVar9 - iVar3);
          MessageRouter::Post<Sexy::TRect<int>&,Sexy::TRect<int>>
                    ((MessageRouter *)puVar5,Message::BreakIceBallInGridRect,(Insets *)local_68);
        }
      }
      Plant::GetProps();
      lVar12 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
      FUN_04039570(*(undefined8 *)(lVar12 + 0x70));
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)local_68);
      Plant::calcDamageInfoFromPlantAction(*(PlantAction **)(this + 0x10));
      SetFlag<DamageTypeFlags>(auStack_58,0x200,1);
      uVar22 = local_80;
      uVar13 = FUN_04039548(local_80,local_78);
      for (uVar21 = 0; uVar21 < uVar13; uVar21 = uVar21 + 1) {
        uVar18 = *(undefined8 *)(this + 0x30);
        lVar14 = FUN_04039548(uVar18,*(undefined8 *)(this + 0x38));
        puVar15 = (undefined8 *)FUN_04039554(uVar22,uVar21);
        this_02 = (RtObject *)*puVar15;
        lVar12 = 0;
        do {
          if (lVar12 == lVar14) {
            this_00 = Sexy::RtObject::Cast<Zombie>(this_02);
            if (this_00 == (Zombie *)0x0) {
              puVar15 = (undefined8 *)FUN_04039554(local_80,uVar21);
              this_01 = Sexy::RtObject::Cast<GridItem>((RtObject *)*puVar15);
              if (((this_01 != (GridItem *)0x0) &&
                  (cVar6 = (**(code **)(*(long *)this_01 + 0x200))(), cVar6 != '\0')) &&
                 (bVar7 = Sexy::RtObject::IsA<GridItemFlame>((RtObject *)this_01), !bVar7)) {
                puVar15 = (undefined8 *)FUN_04039554(local_80,uVar21);
                (**(code **)(*(long *)*puVar15 + 0x110))((long *)*puVar15,(Insets *)local_68);
              }
            }
            else {
              pcVar19 = *(code **)(*(long *)this_00 + 0x3d0);
              Plant::GetType();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                        ((RtWeakPtr<Sexy::SoundResource> *)&local_88,(RtWeakPtrBase *)aRStack_90);
              cVar6 = (*pcVar19)(this_00,(RtWeakPtr<Sexy::SoundResource> *)&local_88,1);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_88);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_90);
              if (cVar6 != '\0') {
                iVar9 = BoardEntity::CalcColumnPosition((BoardEntity *)this_00);
                Sexy::Point::Point((Point *)&local_88,iVar9,*(int *)(*(long *)(this + 0x10) + 0x110)
                                  );
                local_50 = local_88;
                (**(code **)(*(long *)this_00 + 0x110))(this_00,(Insets *)local_68);
              }
            }
            ppBVar17 = (BoardEntity **)FUN_04039554(local_80,uVar21);
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x30),ppBVar17);
            uVar22 = local_80;
            uVar13 = FUN_04039548(local_80,local_78);
            break;
          }
          plVar16 = (long *)FUN_04039554(uVar18,lVar12);
          lVar12 = lVar12 + 1;
        } while ((RtObject *)*plVar16 != this_02);
      }
      DamageInfo::~DamageInfo((DamageInfo *)local_68);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_80);
      iVar9 = *(int *)(this + 0x2c);
    }
    pPVar10 = *(Plant **)(this + 0x10);
    if (((*(int *)(pPVar10 + 0x114) - iVar9 < -1) &&
        (local_9c[0] < *(int *)(pPVar10 + 0x114) + iVar9)) &&
       ((*(int *)(pPVar10 + 0x110) - iVar9 < -1 && (local_9c[2] < *(int *)(pPVar10 + 0x110) + iVar9)
        ))) {
      Plant::KillPlant(pPVar10,1,0,0x8000000000);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

