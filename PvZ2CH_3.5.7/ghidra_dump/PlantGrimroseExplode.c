// Class: PlantGrimroseExplode


/* PlantGrimroseExplode::~PlantGrimroseExplode() */

void __thiscall PlantGrimroseExplode::~PlantGrimroseExplode(PlantGrimroseExplode *this)

{
  *(undefined ***)this = &PTR_GetClass_0673f650;
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* PlantGrimroseExplode::~PlantGrimroseExplode() */

void __thiscall PlantGrimroseExplode::~PlantGrimroseExplode(PlantGrimroseExplode *this)

{
  ~PlantGrimroseExplode(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimroseExplode::StaticClassInit() */

void PlantGrimroseExplode::StaticClassInit(void)

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
    std::string::string(asStack_10,"PlantGrimroseExplode");
    (*pcVar2)(plVar1,asStack_10,FUN_03be4938,0x118,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGrimroseExplode::StaticGetClass() */

long * PlantGrimroseExplode::StaticGetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"PlantGrimroseExplode",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGrimroseExplode::GetClass() const */

long * PlantGrimroseExplode::GetClass(void)

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
  uVar2 = Effect_PopAnim::StaticGetClass();
  (*pcVar3)(plVar1,"PlantGrimroseExplode",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* PlantGrimroseExplode::PlantGrimroseExplode() */

void __thiscall PlantGrimroseExplode::PlantGrimroseExplode(PlantGrimroseExplode *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_0673f650;
  *(undefined4 *)(this + 0x10c) = 0;
  Sexy::Point::Point((Point *)(this + 0x110));
  return;
}


/* PlantGrimroseExplode::StaticNew() */

PlantGrimroseExplode * PlantGrimroseExplode::StaticNew(void)

{
  PlantGrimroseExplode *this;
  
  this = ::operator_new(0x118);
  PlantGrimroseExplode(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimroseExplode::takeAreaDamage() */

void __thiscall PlantGrimroseExplode::takeAreaDamage(PlantGrimroseExplode *this)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  Zombie *pZVar4;
  DamageInfo *pDVar5;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  DamageInfo aDStack_68 [96];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
  EntityFinder::GetEntitiesAtGridSquare
            (avStack_80,2,*(undefined4 *)(this + 0x110),*(undefined4 *)(this + 0x114));
                    /* WARNING: Load size is inaccurate */
  pDVar5._0_4_ = *(DamageInfo **)(this + 0x10c);
  uVar2 = operator|(0x20,0x400);
  uVar2 = operator|(uVar2,0x1000);
  Sexy::Point::Point((Point *)&local_90,-1,-1);
  Sexy::FastCurve::SetOutRange((FastCurve *)&local_88,1.0,0.0);
  DamageInfo::DamageInfo
            (pDVar5._0_4_,(undefined4)local_88,local_88._4_4_,aDStack_68,uVar2,(Point *)&local_90,0)
  ;
  local_90 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_80);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar1) {
    puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90);
    pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
    if (pZVar4 != (Zombie *)0x0) {
      (**(code **)(*(long *)pZVar4 + 0x110))(pZVar4,aDStack_68);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
  }
  DamageInfo::~DamageInfo(aDStack_68);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PlantGrimroseExplode::startEffect(Sexy::Point const&, float) */

void __thiscall
PlantGrimroseExplode::startEffect(PlantGrimroseExplode *this,Point *param_1,float param_2)

{
  undefined4 uVar1;
  PopAnim *pPVar2;
  int local_30;
  int local_2c;
  string asStack_28 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [8];
  Vec3 aVStack_18 [16];
  long local_8;
  
  *(undefined8 *)(this + 0x110) = *(undefined8 *)param_1;
  local_8 = ___stack_chk_guard;
  *(float *)(this + 0x10c) = param_2;
  BoardTransforms::GridToBoardSpace(param_1);
  EATextSquish::Vec3::Vec3(aVStack_18,(float)local_30,(float)(local_2c + -0x32),0.0);
  std::string::string(asStack_28,"POPANIM_EFFECTS_GRIMROSE_EXPLODE_EFFECT");
  GetPAMByName(asStack_28);
  pPVar2 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,pPVar2,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  std::string::~string(asStack_28);
  nop();
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
  StandaloneEffect::SetBoardSpaceOrigin((StandaloneEffect *)this,(SexyVector3 *)aVStack_18,-1);
  uVar1 = Board::MakeRenderOrder(0x61a8b,local_2c,0);
  FUN_03be2788(this + 0x1c,uVar1);
  std::string::string((string *)aRStack_20,"idle");
  Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,aRStack_20,0);
  std::string::~string((string *)aRStack_20);
  nop();
  takeAreaDamage(this);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* PlantGrimroseExplode::onUpdate() */

void __thiscall PlantGrimroseExplode::onUpdate(PlantGrimroseExplode *this)

{
  int iVar1;
  int iVar2;
  long lVar3;
  PopAnimRig *this_00;
  float fVar4;
  float fVar5;
  
  iVar1 = *(int *)(this + 0xc0);
  if (-1 < iVar1) {
    iVar2 = AnimationSequence::GetEntryCount((AnimationSequence *)(this + 0xa8));
    if (iVar1 < iVar2) {
      lVar3 = AnimationSequence::GetEntry((AnimationSequence *)(this + 0xa8),*(int *)(this + 0xc0));
      fVar5 = *(float *)(lVar3 + 0xc);
      if (((0.0 < fVar5) && (fVar4 = (float)PVZ_EOT(), fVar5 < fVar4)) &&
         (fVar4 = (float)PVZ_T(), fVar5 < fVar4 - *(float *)(this + 0xc4))) {
        Effect_PopAnim::advanceAnimSequence((Effect_PopAnim *)this);
      }
    }
  }
  if (this[0x108] == (PlantGrimroseExplode)0x0) {
    return;
  }
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa0))
  ;
  fVar5 = (float)PVZ_T();
  fVar4 = (float)PVZ_Dt();
  PopAnimRig::UpdateAnim(this_00,fVar5,fVar4);
  return;
}

