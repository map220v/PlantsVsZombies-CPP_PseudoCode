// Class: MangosteenElectricExplode


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MangosteenElectricExplode::StaticClassInit() */

void MangosteenElectricExplode::StaticClassInit(void)

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
    std::string::string(asStack_10,"MangosteenElectricExplode");
    (*pcVar2)(plVar1,asStack_10,FUN_03b076d4,400,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MangosteenElectricExplode::StaticGetClass() */

long * MangosteenElectricExplode::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"MangosteenElectricExplode",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MangosteenElectricExplode::GetClass() const */

long * MangosteenElectricExplode::GetClass(void)

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
  (*pcVar3)(plVar1,"MangosteenElectricExplode",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MangosteenElectricExplode::MangosteenElectricExplode() */

void __thiscall
MangosteenElectricExplode::MangosteenElectricExplode(MangosteenElectricExplode *this)

{
  long lVar1;
  
  lVar1 = ___stack_chk_guard;
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_0672b250;
  DVec3::DVec3((DVec3 *)(this + 0x10c));
  Set8BytesTo0(this + 0x118);
  std::string::string((string *)(this + 0x120),"idle");
  nop();
  *(undefined4 *)(this + 0x128) = 0;
  DamageInfo::DamageInfo((DamageInfo *)(this + 0x130));
  if (lVar1 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MangosteenElectricExplode::StaticNew() */

MangosteenElectricExplode * MangosteenElectricExplode::StaticNew(void)

{
  MangosteenElectricExplode *this;
  
  this = ::operator_new(400);
  MangosteenElectricExplode(this);
  return this;
}


/* MangosteenElectricExplode::~MangosteenElectricExplode() */

void __thiscall
MangosteenElectricExplode::~MangosteenElectricExplode(MangosteenElectricExplode *this)

{
  *(undefined ***)this = &PTR_GetClass_0672b250;
  DamageInfo::~DamageInfo((DamageInfo *)(this + 0x130));
  std::string::~string((string *)(this + 0x120));
  std::string::~string((string *)(this + 0x118));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* MangosteenElectricExplode::~MangosteenElectricExplode() */

void __thiscall
MangosteenElectricExplode::~MangosteenElectricExplode(MangosteenElectricExplode *this)

{
  ~MangosteenElectricExplode(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MangosteenElectricExplode::OnAnimCommand(std::string const&, std::string const&) */

void MangosteenElectricExplode::OnAnimCommand(string *param_1,string *param_2)

{
  Zombie *pZVar8;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  Zombie *pZVar5;
  GridItem *pGVar6;
  long lVar7;
  BoardEntity *this;
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_2,"explode");
  if (bVar1) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    uVar3 = operator|(2,4);
    Sexy::FastCurve::SetOutRange
              ((FastCurve *)&local_28,*(float *)(param_1 + 0x10c),*(float *)(param_1 + 0x110));
    EntityFinder::GetEntitiesWithinCircle2D
              (*(undefined4 *)(param_1 + 0x128),avStack_20,uVar3,(FastCurve *)&local_28);
    local_30 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
    local_28 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
    pZVar8._0_4_ = _FUN_03b09d5c;
    while (bVar1 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28), bVar1)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30)
      ;
      this = (BoardEntity *)*puVar4;
      cVar2 = PlantMangosteen::canTarget(this);
      if (cVar2 != '\0') {
        pZVar5 = Sexy::RtObject::Cast<Zombie>((RtObject *)this);
        pGVar6 = Sexy::RtObject::Cast<GridItem>((RtObject *)this);
        if (pZVar5 == (Zombie *)0x0) {
          if (pGVar6 != (GridItem *)0x0) {
            (**(code **)(*(long *)pGVar6 + 0x110))(pGVar6,param_1 + 0x130);
          }
        }
        else {
          lVar7 = *(long *)pZVar5;
          *(undefined4 *)(param_1 + 0x184) = 0x41200000;
          (**(code **)(lVar7 + 0x110))(pZVar5,param_1 + 0x130);
          Zombie::ApplyCondition(pZVar8._0_4_,0,pZVar5,6,1);
          Zombie::ApplyCondition(pZVar8._0_4_,0,pZVar5,0x18,1);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
    }
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MangosteenElectricExplode::setValues(ElectricExplodeDescription) */

void __thiscall
MangosteenElectricExplode::setValues(MangosteenElectricExplode *this,string *param_2)

{
  string *psVar1;
  int iVar2;
  PopAnim *pPVar3;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_20 [24];
  long local_8;
  
  psVar1 = param_2 + 8;
  local_8 = ___stack_chk_guard;
  Sexy::SexyVector3::operator=((SexyVector3 *)(this + 0x10c),(SexyVector3 *)(param_2 + 0x10));
  thunk_FUN_05475e00(this + 0x118,param_2);
  thunk_FUN_05475e00(this + 0x120,psVar1);
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(param_2 + 0x1c);
  DamageInfo::operator=((DamageInfo *)(this + 0x130),(DamageInfo *)(param_2 + 0x20));
  *(undefined8 *)(this + 0x130) = 0;
  iVar2 = Board::MakeRenderOrder(0x493e1,0,0);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this,(SexyVector3 *)(param_2 + 0x10),iVar2);
  GetPAMByName(param_2);
  pPVar3 = (PopAnim *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,pPVar3,(RtClass *)0x0);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_20);
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
  Effect_PopAnim::SetPopAnimDelegates((Effect_PopAnim *)this);
  Sexy::PIInterpolator::PIInterpolator((PIInterpolator *)aRStack_20);
  AnimationSequence::AddSingleAnimation(aRStack_20,psVar1,0);
  AnimationSequence::AddSingleAnimation(aRStack_20,psVar1,0);
  AnimationSequence::AddSingleAnimation(aRStack_20,psVar1,0);
  AnimationSequence::AddSingleAnimation(aRStack_20,psVar1,0);
  Effect_PopAnim::PlayAnimationSequence((Effect_PopAnim *)this,(AnimationSequence *)aRStack_20);
  AnimationSequence::~AnimationSequence((AnimationSequence *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

