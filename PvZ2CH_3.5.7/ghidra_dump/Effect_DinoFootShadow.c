// Class: Effect_DinoFootShadow


/* Effect_DinoFootShadow::SetMoveEndPos(Sexy::SexyVector2) */

void Effect_DinoFootShadow::SetMoveEndPos(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(ulong *)(param_3 + 0xbc) = CONCAT44(param_2,param_1);
  return;
}


/* Effect_DinoFootShadow::StartMove() */

void __thiscall Effect_DinoFootShadow::StartMove(Effect_DinoFootShadow *this)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)StandaloneEffect::GetScreenSpaceOrigin((StandaloneEffect *)this);
  *(undefined8 *)(this + 0xb4) = *puVar1;
  this[0xd0] = (Effect_DinoFootShadow)0x1;
  return;
}


/* Effect_DinoFootShadow::onInitialized() */

void __thiscall Effect_DinoFootShadow::onInitialized(Effect_DinoFootShadow *this)

{
  float fVar1;
  
  fVar1 = (float)PVZ_T();
  *(float *)(this + 0xa0) = fVar1;
  *(float *)(this + 0xa4) = fVar1 + 2.5;
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoFootShadow::StaticClassInit() */

void Effect_DinoFootShadow::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_DinoFootShadow");
    (*pcVar2)(plVar1,asStack_10,FUN_03cdba00,0xd8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_DinoFootShadow::StaticGetClass() */

long * Effect_DinoFootShadow::StaticGetClass(void)

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
  uVar2 = StandaloneEffect::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_DinoFootShadow",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_DinoFootShadow::GetClass() const */

long * Effect_DinoFootShadow::GetClass(void)

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
  uVar2 = StandaloneEffect::StaticGetClass();
  (*pcVar3)(plVar1,"Effect_DinoFootShadow",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_DinoFootShadow::Effect_DinoFootShadow() */

void __thiscall Effect_DinoFootShadow::Effect_DinoFootShadow(Effect_DinoFootShadow *this)

{
  undefined4 uVar1;
  
  StandaloneEffect::StandaloneEffect((StandaloneEffect *)this);
  *(undefined ***)this = &PTR_GetClass_067603e0;
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xb4));
  ZombieResistenceConfig::ResistenceValueInfo::ResistenceValueInfo
            ((ResistenceValueInfo *)(this + 0xbc));
  Sexy::FastCurve::SetOutRange((FastCurve *)(this + 0xc4),2.0,2.0);
  this[0xd0] = (Effect_DinoFootShadow)0x0;
  this[0xd1] = (Effect_DinoFootShadow)0x0;
  *(undefined4 *)(this + 0xcc) = 0x3f800000;
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0xa8) = uVar1;
  *(undefined4 *)(this + 0xac) = uVar1;
  *(undefined4 *)(this + 0xb0) = uVar1;
  return;
}


/* Effect_DinoFootShadow::StaticNew() */

Effect_DinoFootShadow * Effect_DinoFootShadow::StaticNew(void)

{
  Effect_DinoFootShadow *this;
  
  this = ::operator_new(0xd8);
  Effect_DinoFootShadow(this);
  return this;
}


/* Effect_DinoFootShadow::~Effect_DinoFootShadow() */

void __thiscall Effect_DinoFootShadow::~Effect_DinoFootShadow(Effect_DinoFootShadow *this)

{
  *(undefined ***)this = &PTR_GetClass_067603e0;
  StandaloneEffect::~StandaloneEffect((StandaloneEffect *)this);
  return;
}


/* Effect_DinoFootShadow::~Effect_DinoFootShadow() */

void __thiscall Effect_DinoFootShadow::~Effect_DinoFootShadow(Effect_DinoFootShadow *this)

{
  ~Effect_DinoFootShadow(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoFootShadow::onDraw(Sexy::Graphics*) */

void __thiscall Effect_DinoFootShadow::onDraw(Effect_DinoFootShadow *this,Graphics *param_1)

{
  float *pfVar1;
  Image *pIVar2;
  float fVar3;
  GraphicsAutoState aGStack_40 [8];
  undefined4 local_38;
  undefined4 local_34;
  SexyTransform2D aSStack_30 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [20];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_40,param_1);
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyTransform2D::Scale
            (aSStack_30,*(float *)(this + 0xcc) * *(float *)(this + 0xc4),
             *(float *)(this + 0xcc) * *(float *)(this + 200));
  pfVar1 = (float *)StandaloneEffect::GetScreenSpaceOrigin((StandaloneEffect *)this);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_38,*pfVar1,pfVar1[1]);
  fVar3 = (float)FUN_03cdb7e4();
  Sexy::SexyVector2::operator*=((SexyVector2 *)&local_38,fVar3);
  FUN_03cdb760(local_38,local_34,auStack_28,auStack_1c);
  pIVar2 = (Image *)CachedResourcePtr<Sexy::Image>::operator->
                              ((CachedResourcePtr<Sexy::Image> *)&DAT_06ad4708);
  Sexy::Graphics::DrawImageMatrix(param_1,pIVar2,(SexyMatrix3 *)aSStack_30,0.0,0.0);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_40);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_DinoFootShadow::TryToFindBramble() */

void __thiscall Effect_DinoFootShadow::TryToFindBramble(Effect_DinoFootShadow *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  PlantBramble *this_00;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  BoardTransforms *local_8;
  
  local_8 = ___stack_chk_guard;
  BoardTransforms::BoardSpaceToGrid
            (___stack_chk_guard,*(float *)(this + 0xbc),*(float *)(this + 0xc0));
  Sexy::Insets::Insets(aIStack_30,local_50 + -1,local_4c + -1,3,3);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  uVar2 = operator|(2,1);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,uVar2,aIStack_30);
  local_48 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  do {
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40);
    if (!bVar1) {
LAB_03cdc1e8:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      if (local_8 == ___stack_chk_guard) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
    bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)*puVar3);
    if (bVar1) {
      nop();
      Plant::GetType();
      lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_38);
      bVar1 = std::operator==((string *)(lVar4 + 8),"bramble");
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
      if (bVar1) {
        nop();
        PlantBramble::PrepareToAttack(this_00);
        this[0xd1] = (Effect_DinoFootShadow)0x1;
        goto LAB_03cdc1e8;
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
  } while( true );
}


/* WARNING: Heritage AFTER dead removal. Example location: q0 : 0x03cdc4b4 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* Effect_DinoFootShadow::onUpdate() */

void __thiscall Effect_DinoFootShadow::onUpdate(Effect_DinoFootShadow *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  StandaloneEffect *this_00;
  Board *this_01;
  float fVar4;
  undefined4 uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0xd0] != (Effect_DinoFootShadow)0x0) {
    uVar10 = *(undefined4 *)(this + 0xa0);
    uVar9 = *(undefined4 *)(this + 0xa4);
    uVar5 = PVZ_T();
    uVar5 = CurveLerp<Sexy::SexyVector2>(uVar10,uVar9,uVar5,this + 0xb4,this + 0xbc,1);
    local_10 = CONCAT44(uVar9,uVar5);
    StandaloneEffect::SetScreenSpaceOrigin
              ((StandaloneEffect *)this,(SexyVector2 *)&local_10,0x64d48);
  }
  if (this[0xd1] == (Effect_DinoFootShadow)0x0) {
    TryToFindBramble(this);
    fVar4 = (float)PVZ_T();
    if (fVar4 < *(float *)(this + 0xa4)) goto LAB_03cdc290;
  }
  else {
    fVar4 = (float)PVZ_T();
    if (fVar4 < *(float *)(this + 0xa4)) goto LAB_03cdc290;
  }
  uVar5 = PVZ_EOT();
  *(undefined4 *)(this + 0xa4) = uVar5;
  fVar4 = (float)PVZ_T();
  this[0xd0] = (Effect_DinoFootShadow)0x0;
  fVar4 = fVar4 + 2.0;
  *(float *)(this + 0xa8) = fVar4;
  *(float *)(this + 0xb0) = fVar4;
  *(float *)(this + 0xac) = fVar4 + 0.35;
LAB_03cdc290:
  fVar4 = (float)PVZ_T();
  if ((*(float *)(this + 0xa8) <= fVar4) && (fVar8 = *(float *)(this + 0xac), fVar4 <= fVar8)) {
    auVar7 = PVZ_T();
    local_18 = 0x3ff0000000000000;
    local_10 = 0x4008000000000000;
    dVar6 = CurveLerp<double>(auVar7,fVar8,auVar7._0_4_,&local_18,&local_10,1);
    *(float *)(this + 0xcc) = (float)dVar6;
  }
  fVar4 = (float)PVZ_T();
  if (*(float *)(this + 0xb0) <= fVar4) {
    uVar5 = PVZ_EOT();
    *(undefined4 *)(this + 0xb0) = uVar5;
    iVar1 = BoardTransforms::BoardSpaceToGridXUnbounded(*(float *)(this + 0xbc));
    iVar2 = BoardTransforms::BoardSpaceToGridYUnbounded(*(float *)(this + 0xc0));
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    else {
      iVar3 = BoardConstants::NUMBER_OF_ROWS();
      if (iVar3 + -1 <= iVar2) {
        iVar2 = BoardConstants::NUMBER_OF_ROWS();
        iVar2 = iVar2 + -2;
      }
    }
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    iVar3 = BoardConstants::NUMBER_OF_COLUMNS();
    if (iVar3 + -1 <= iVar1) {
      iVar1 = BoardConstants::NUMBER_OF_COLUMNS();
      iVar1 = iVar1 + -2;
    }
    this_01 = *(Board **)(gLawnApp + 0x9f0);
    std::string::string((string *)&local_10,"effectobject_dinotread");
    this_00 = (StandaloneEffect *)Board::AddEffectObject(this_01,(string *)&local_10,iVar1,iVar2);
    std::string::~string((string *)&local_10);
    nop();
    StandaloneEffect::SetKeepAlive(this_00,false);
    uVar5 = Board::MakeRenderOrder(150000,iVar2,iVar1);
    FUN_03cdb7d4(this_00 + 0x1c,uVar5);
  }
  fVar4 = (float)PVZ_T();
  if (*(float *)(this + 0xac) <= fVar4) {
    uVar5 = PVZ_EOT();
    *(undefined4 *)(this + 0xac) = uVar5;
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

