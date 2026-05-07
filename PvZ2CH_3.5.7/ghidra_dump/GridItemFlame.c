// Class: GridItemFlame


/* GridItemFlame::CalcRenderOrder() const */

void __thiscall GridItemFlame::CalcRenderOrder(GridItemFlame *this)

{
  Board::MakeRenderOrder(0x64d48,*(undefined4 *)(this + 0x1a0),1);
  return;
}


/* non-virtual thunk to GridItemFlame::CalcRenderOrder() const */

void __thiscall GridItemFlame::CalcRenderOrder(GridItemFlame *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFlame::StaticClassInit() */

void GridItemFlame::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemFlame");
    (*pcVar2)(plVar1,asStack_10,FUN_03dfde98,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFlame::StaticGetClass() */

long * GridItemFlame::StaticGetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemFlame",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFlame::GetClass() const */

long * GridItemFlame::GetClass(void)

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
  uVar2 = GridItem::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemFlame",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemFlame::Stop() */

void __thiscall GridItemFlame::Stop(GridItemFlame *this)

{
  this[0x1a4] = (GridItemFlame)0x1;
  return;
}


/* GridItemFlame::ExtinctFlame() */

void __thiscall GridItemFlame::ExtinctFlame(GridItemFlame *this)

{
  FUN_03dfcd90(0,this + 0x128);
  MessageRouter::Post((_func_void *)gMessageRouter);
  return;
}


/* GridItemFlame::calcCollisionRect() */

void GridItemFlame::calcCollisionRect(void)

{
  int iVar1;
  long in_x0;
  Insets *in_x8;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(in_x0 + 0x1c);
  fVar2 = (float)FUN_03dfce50(*(undefined4 *)(in_x0 + 0x18),fVar3,*(undefined4 *)(in_x0 + 0x20));
  iVar1 = BoardConstants::GRIDSQUARE_HEIGHT();
  Sexy::Insets::Insets(in_x8,(int)fVar2,(int)(fVar3 - (float)iVar1),4,iVar1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFlame::onDraw(Sexy::Graphics*) */

void __thiscall GridItemFlame::onDraw(GridItemFlame *this,Graphics *param_1)

{
  PopAnimRig *pPVar1;
  float fVar2;
  float fVar3;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a4] == (GridItemFlame)0x0) {
    Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
    fVar3 = *(float *)(this + 0x1c);
    fVar2 = (float)FUN_03dfce50(*(undefined4 *)(this + 0x18),fVar3,*(undefined4 *)(this + 0x20));
    fVar2 = (float)FUN_03dfcf14(fVar2 - DAT_06adbeb0);
    fVar3 = (float)FUN_03dfcf14(fVar3 - DAT_06adbeb4);
    Sexy::Graphics::Translate(param_1,(int)fVar2,(int)fVar3);
    Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
    Sexy::SexyMatrix3::LoadIdentity((SexyMatrix3 *)aSStack_30);
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
    PopAnimRig::SetRenderTransform(pPVar1,aSStack_30);
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
    PopAnimRig::Draw(pPVar1,param_1);
    Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFlame::CollidesWithType(CollisionTypeFlags) const */

bool __thiscall GridItemFlame::CollidesWithType(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = TestFlag<VaseFlags>(param_2,0x200);
  return bVar1;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFlame::CalcProjectileTargetLocation(float) const */

void __thiscall GridItemFlame::CalcProjectileTargetLocation(GridItemFlame *this,float param_1)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  float local_18;
  float local_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar6 = *pfVar3;
  fVar1 = pfVar3[1];
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
  nop();
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_20);
  if (bVar2) {
    lVar4 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
    fVar5 = (float)FUN_03dfcd98(*(undefined4 *)(lVar4 + 0x150));
    fVar6 = fVar6 - param_1 * fVar5;
  }
  local_10 = 0x40a00000;
  local_18 = fVar6;
  local_14 = fVar1;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_18,local_14,local_10);
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFlame::spawnExtinctEffect() const */

void __thiscall GridItemFlame::spawnExtinctEffect(GridItemFlame *this)

{
  int iVar1;
  Effect_PopAnim *pEVar2;
  ResourceInfo *pRVar3;
  StandaloneEffect *pSVar4;
  undefined8 *puVar5;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined4 local_18;
  float fStack_14;
  undefined4 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)&local_18);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  GetPAMByName((string *)&DAT_06adbe80);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_18);
  Effect_PopAnim::CreatePopAnimRig(pEVar2,(PopAnim *)pRVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_18);
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Effect_PopAnim::SetCentered(pEVar2,true);
  pSVar4 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  StandaloneEffect::SetKeepAlive(pSVar4,false);
  pSVar4 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  StandaloneEffect::SetVisibility(pSVar4,true);
  puVar5 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_10 = *(undefined4 *)(puVar5 + 1);
  fStack_14 = (float)((ulong)*puVar5 >> 0x20);
  _local_18 = CONCAT44(fStack_14 - 20.0,(int)*puVar5);
  pSVar4 = (StandaloneEffect *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  iVar1 = (**(code **)(*(long *)this + 0x170))(this);
  StandaloneEffect::SetBoardSpaceOrigin(pSVar4,(SexyVector3 *)&local_18,iVar1);
  pEVar2 = (Effect_PopAnim *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  Effect_PopAnim::PlaySingleAnimation(pEVar2,&DAT_06adbe88,0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFlame::onTakeDamage(DamageInfo const&) */

void GridItemFlame::onTakeDamage(DamageInfo *param_1)

{
  float fVar1;
  
  if (*(code **)(*(long *)param_1 + 0x1d8) == GridItem::GetHitpoints) {
    fVar1 = (float)GridItem::GetHitpoints((GridItem *)param_1);
  }
  else {
    fVar1 = (float)(**(code **)(*(long *)param_1 + 0x1d8))();
  }
  if (fVar1 <= 0.0) {
    spawnExtinctEffect((GridItemFlame *)param_1);
    ExtinctFlame((GridItemFlame *)param_1);
    return;
  }
  return;
}


/* GridItemFlame::onGameWon() */

void __thiscall GridItemFlame::onGameWon(GridItemFlame *this)

{
  spawnExtinctEffect(this);
  ExtinctFlame(this);
  return;
}


/* GridItemFlame::GridItemFlame() */

void __thiscall GridItemFlame::GridItemFlame(GridItemFlame *this)

{
  GridItem::GridItem((GridItem *)this);
  *(undefined ***)this = &PTR_GetClass_067805b0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemFlame_06780850;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x198));
  *(undefined4 *)(this + 0x1a0) = 0;
  this[0x1a4] = (GridItemFlame)0x0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0x1c0));
  return;
}


/* GridItemFlame::StaticNew() */

GridItemFlame * GridItemFlame::StaticNew(void)

{
  GridItemFlame *this;
  
  this = ::operator_new(0x1c8);
  GridItemFlame(this);
  return this;
}


/* GridItemFlame::reset() */

void __thiscall GridItemFlame::reset(GridItemFlame *this)

{
  GridItemPropertySheet *pGVar1;
  
  pGVar1 = GridItem::GetProps<GridItemPropertySheet>();
  FUN_03dfcd88(*(undefined4 *)(pGVar1 + 0x10),this + 300);
  if (*(code **)(*(long *)this + 0x1e0) == GridItem::GetMaxHitpoints) {
    GridItem::GetMaxHitpoints((GridItem *)this);
    FUN_03dfcd90(this + 0x128);
    return;
  }
  (**(code **)(*(long *)this + 0x1e0))();
  FUN_03dfcd90(this + 0x128);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFlame::onGridItemInitialize() */

void __thiscall GridItemFlame::onGridItemInitialize(GridItemFlame *this)

{
  undefined *this_00;
  CBMemberTranslatorX aCStack_50 [24];
  Delegate0 aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  reset(this);
  RealObject::JoinTeam((RealObject *)this,2);
  this_00 = gMessageRouter;
  Sexy::
  MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
            ((ReceivedDataCallback *)this,(_func_void *)0x288);
  Sexy::Delegate0::Delegate0<GridItemFlame,void(GridItemFlame::*)()>(aDStack_38,aCStack_50);
  MessageRouter::Subscribe((MessageRouter *)this_00,Message::GameWon,aDStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemFlame::Restart() */

void __thiscall GridItemFlame::Restart(GridItemFlame *this)

{
  this[0x1a4] = (GridItemFlame)0x0;
  reset(this);
  return;
}


/* GridItemFlame::~GridItemFlame() */

void __thiscall GridItemFlame::~GridItemFlame(GridItemFlame *this)

{
  *(undefined ***)this = &PTR_GetClass_067805b0;
  *(undefined ***)(this + 0x10) = &PTR__GridItemFlame_06780850;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x1c0));
  std::vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>::~vector
            ((vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>> *)
             (this + 0x1a8));
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
  GridItem::~GridItem((GridItem *)this);
  return;
}


/* non-virtual thunk to GridItemFlame::~GridItemFlame() */

void __thiscall GridItemFlame::~GridItemFlame(GridItemFlame *this)

{
  ~GridItemFlame(this + -0x10);
  return;
}


/* GridItemFlame::~GridItemFlame() */

void __thiscall GridItemFlame::~GridItemFlame(GridItemFlame *this)

{
  ~GridItemFlame(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemFlame::~GridItemFlame() */

void __thiscall GridItemFlame::~GridItemFlame(GridItemFlame *this)

{
  ~GridItemFlame(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFlame::GridItemFlameInit(int) */

void __thiscall GridItemFlame::GridItemFlameInit(GridItemFlame *this,int param_1)

{
  char cVar1;
  bool bVar2;
  ResourceInfo *pRVar3;
  RtClass *pRVar4;
  PopAnimRig *pPVar5;
  undefined8 uVar6;
  long lVar7;
  string *psVar8;
  ulong uVar9;
  ulong uVar10;
  wstring awStack_80 [8];
  string asStack_78 [8];
  ResourceInfo *local_70;
  RtWeakPtr<PowerPropertySheet> aRStack_68 [8];
  RtWeakPtr aRStack_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  DummyInit aDStack_38 [48];
  long local_8;
  
  *(int *)(this + 0x1a0) = param_1;
  local_8 = ___stack_chk_guard;
  this[0x1a4] = (GridItemFlame)0x0;
  GetPAMByName((string *)&DAT_06adbe80);
  pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
  pRVar4 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig((PopAnim *)pRVar3,pRVar4);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0x198),(RtWeakPtrBase *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
  pPVar5 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198))
  ;
  Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
  PopAnimRig::PlayAndContinue(pPVar5,&DAT_06adbf08,0,aDStack_38);
  cVar1 = FUN_03dfcde8();
  if (cVar1 != '\0') {
    uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
    uVar10 = 0;
    std::string::string(asStack_78,"TorchwoodDefault");
    Sexy::ToWString(asStack_78);
    Sexy::RtName::RtName((RtName *)&local_50,(wstring *)&local_70);
    PVZDB::FindObjectByAlias<DragonBabyBruitProps>
              (aRStack_60,uVar6,5,(RtWeakPtr<Sexy::ResourceInfo> *)&local_50);
    pRVar3 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_60);
    Sexy::RtName::~RtName((RtName *)&local_50);
    FUN_05476c50((WidgetImg *)&local_70);
    std::string::~string(asStack_78);
    nop();
    std::vector<ConvertProjectileNameNode,std::allocator<ConvertProjectileNameNode>>::vector
              ((vector<ConvertProjectileNameNode,std::allocator<ConvertProjectileNameNode>> *)
               &local_50,(vector *)(pRVar3 + 0x4f8));
    uVar6 = local_50;
    lVar7 = FUN_03dfcdb8(local_50,local_48);
    if (lVar7 != 0) {
      do {
        psVar8 = (string *)FUN_03dfcdc4(uVar6,uVar10);
        bVar2 = std::operator!=(psVar8,"SnowPeaDefault");
        if (bVar2) {
          FUN_03dfd294((WidgetImg *)&local_70);
          uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
          psVar8 = (string *)FUN_03dfcdc4(local_50,uVar10);
          Sexy::ToWString(psVar8);
          Sexy::RtName::RtName((RtName *)aRStack_60,awStack_80);
          PVZDB::FindObjectByAlias<DragonBabyBruitProps>(asStack_78,uVar6,0xc,aRStack_60);
          local_70 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)asStack_78);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                    ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
          Sexy::RtName::~RtName((RtName *)aRStack_60);
          FUN_05476c50(awStack_80);
          lVar7 = FUN_03dfcdc4(local_50,uVar10);
          lVar7 = FUN_05474178(lVar7 + 8);
          if (lVar7 != 0) {
            uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
            lVar7 = FUN_03dfcdc4(local_50,uVar10);
            Sexy::ToWString((string *)(lVar7 + 8));
            Sexy::RtName::RtName((RtName *)aRStack_60,awStack_80);
            PVZDB::FindObjectByAlias<DragonBabyBruitProps>(asStack_78,uVar6,0xc,aRStack_60);
            Sexy::RtWeakPtr<PowerPropertySheet>::operator=(aRStack_68,(RtWeakPtr *)asStack_78);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)asStack_78);
            Sexy::RtName::~RtName((RtName *)aRStack_60);
            FUN_05476c50(awStack_80);
            FUN_03dfdab4((WidgetImg *)&local_70);
          }
          WidgetImg::~WidgetImg((WidgetImg *)&local_70);
        }
        uVar6 = local_50;
        uVar10 = uVar10 + 1;
        uVar9 = FUN_03dfcdb8(local_50,local_48);
      } while (uVar10 < uVar9);
    }
    std::vector<ConvertProjectileNameNode,std::allocator<ConvertProjectileNameNode>>::~vector
              ((vector<ConvertProjectileNameNode,std::allocator<ConvertProjectileNameNode>> *)
               &local_50);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFlame::convertProjectile(Projectile*, Sexy::RtWeakPtr<ProjectilePropertySheet>) */

void __thiscall
GridItemFlame::convertProjectile(GridItemFlame *this,Projectile *param_1,RtWeakPtrBase *param_3)

{
  RtWeakPtr<Sexy::ResourceInfo> aRStack_18 [8];
  RtWeakPtr<Sexy::SoundResource> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,param_3);
  Projectile::SetPropertySheet(param_1,aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_10,(RtWeakPtrBase *)aRStack_18);
  std::vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>::push_back
            ((vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>> *)
             (this + 0x1a8),(RtWeakPtr *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_18);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFlame::onUpdate() */

void __thiscall GridItemFlame::onUpdate(GridItemFlame *this)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ResourceInfo *this_00;
  long lVar7;
  RtWeakPtrBase *pRVar8;
  ResourceInfo *pRVar9;
  float *pfVar10;
  PopAnimRig *this_01;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  Iterator aIStack_28 [32];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a4] == (GridItemFlame)0x0) {
    bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x198));
    if (bVar2) {
      this_01 = (PopAnimRig *)
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                          ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
      fVar14 = (float)PVZ_T();
      fVar15 = (float)PVZ_Dt();
      PopAnimRig::UpdateAnim(this_01,fVar14,fVar15);
    }
    uVar6 = Sexy::LazySingleton<PVZDB>::GetInstance();
    PVZDB::GetObjectIteratorForTable(aIStack_28,uVar6,0x2b);
    while (bVar2 = Sexy::RtDbTable::Iterator::operator_cast_to_bool(aIStack_28), bVar2) {
      Sexy::RtDbTable::Iterator::operator*(aIStack_28);
      Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)&local_38);
      this_00 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)&local_30);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
      Sexy::RtId::~RtId((RtId *)&local_38);
      iVar4 = FUN_03dfcd84(*(undefined4 *)(this_00 + 0xa8));
      iVar5 = *(int *)(this + 0x1a0);
      if (iVar4 == iVar5) {
        lVar7 = Projectile::GetProps((Projectile *)this_00);
        uVar6 = DAT_06adbe98;
        auVar16 = FUN_03dfcc04(DAT_06adbe98,DAT_06adbea0);
        uVar11 = auVar16._8_8_;
        lVar12 = 0;
        do {
          lVar13 = lVar12;
          iVar5 = (int)uVar11;
          if (lVar13 == auVar16._0_8_) goto LAB_03dfe328;
          auVar17 = FUN_03dfcc10(uVar6,lVar13);
          uVar11 = auVar17._8_8_;
          lVar12 = lVar13 + 1;
        } while (lVar7 != *auVar17._0_8_);
        uVar6 = *(undefined8 *)(this + 0x1a8);
        iVar5 = FUN_03dfcda4(uVar6,*(undefined8 *)(this + 0x1b0));
        uVar1 = iVar5 - 1;
        if (-1 < (int)uVar1) {
          lVar7 = (long)(int)uVar1;
          lVar12 = lVar7 + -1;
          while( true ) {
            pRVar8 = (RtWeakPtrBase *)FUN_03dfcdb0(uVar6,lVar7);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)aRStack_48,pRVar8);
            cVar3 = Sexy::RtMixedPtrBase::IsValid((RtMixedPtrBase *)aRStack_48);
            if (cVar3 == '\0') {
              local_40 = std::
                         vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                         ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                                  *)(this + 0x1a8));
              local_38 = __gnu_cxx::
                         __normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                         ::operator+((__normal_iterator<Sexy::RenderStateManager::Context**,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                                      *)&local_40,lVar7);
              __gnu_cxx::
              __normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
              ::__normal_iterator<Sexy::RenderStateManager::Context**>
                        ((__normal_iterator<Sexy::RenderStateManager::Context*const*,std::vector<Sexy::RenderStateManager::Context*,PooledAllocator<Sexy::RenderStateManager::Context*,Sexy::SimpleMemPool>>>
                          *)&local_30,(__normal_iterator *)&local_38);
              std::vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>::
              erase((vector<Sexy::RtWeakPtr<Projectile>,std::allocator<Sexy::RtWeakPtr<Projectile>>>
                     *)(this + 0x1a8),local_30);
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
            }
            else {
              pRVar9 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_((RtWeakPtr *)aRStack_48);
              if (this_00 == pRVar9) {
                Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
                iVar5 = extraout_w1_01;
                goto LAB_03dfe328;
              }
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_48);
            }
            if (lVar7 + -1 == lVar12 - (ulong)uVar1) break;
            lVar7 = lVar7 + -1;
            uVar6 = *(undefined8 *)(this + 0x1a8);
          }
        }
        pfVar10 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          *)this_00);
        fVar14 = *pfVar10;
        pfVar10 = (float *)std::
                           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                          *)this);
        iVar5 = (int)*pfVar10 + -2;
        if ((iVar5 <= (int)fVar14) && ((int)fVar14 <= (int)*pfVar10 + 2)) {
          lVar12 = FUN_03dfcc10(DAT_06adbe98,lVar13);
          bVar2 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(lVar12 + 8));
          iVar5 = extraout_w1;
          if (bVar2) {
            lVar12 = FUN_03dfcc10(DAT_06adbe98,lVar13);
            Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                      ((RtWeakPtr<Sexy::SoundResource> *)&local_30,(RtWeakPtrBase *)(lVar12 + 8));
            convertProjectile(this,this_00,(RtWeakPtr<Sexy::SoundResource> *)&local_30);
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                      ((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
            iVar5 = extraout_w1_00;
          }
        }
      }
LAB_03dfe328:
      Sexy::RtDbTable::Iterator::operator++(aIStack_28,iVar5);
    }
    Sexy::RtDbTable::Iterator::~Iterator(aIStack_28);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* GridItemFlame::onDestroy() */

void __thiscall GridItemFlame::onDestroy(GridItemFlame *this)

{
  bool bVar1;
  long *plVar2;
  
  MessageRouter::Unsubscribe((MessageRouter *)gMessageRouter,this);
  bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)(this + 0x198));
  if (bVar1) {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0x198));
    (**(code **)(*plVar2 + 0x48))();
  }
  GridItem::onDestroy((GridItem *)this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemFlame::TakeDamage(DamageInfo const&) */

void __thiscall GridItemFlame::TakeDamage(GridItemFlame *this,DamageInfo *param_1)

{
  bool bVar1;
  long extraout_x0;
  long lVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (((*(RtObject **)param_1 != (RtObject *)0x0) &&
      (bVar1 = Sexy::RtObject::IsA<Plant>(*(RtObject **)param_1), bVar1)) &&
     (nop(), extraout_x0 != 0)) {
    Plant::GetType();
    lVar2 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    bVar1 = std::operator==((string *)(lVar2 + 8),"iceburg");
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
    if (bVar1) {
      spawnExtinctEffect(this);
      ExtinctFlame(this);
      goto LAB_03dfe620;
    }
  }
  GridItem::TakeDamage((GridItem *)this,param_1);
LAB_03dfe620:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

