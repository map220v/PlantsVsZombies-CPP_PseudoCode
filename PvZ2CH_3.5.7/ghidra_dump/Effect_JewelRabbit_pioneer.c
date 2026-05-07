// Class: Effect_JewelRabbit_pioneer


/* Effect_JewelRabbit_pioneer::~Effect_JewelRabbit_pioneer() */

void __thiscall
Effect_JewelRabbit_pioneer::~Effect_JewelRabbit_pioneer(Effect_JewelRabbit_pioneer *this)

{
  *(undefined ***)this = &PTR_GetClass_0666d3f0;
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x158));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x138));
  std::function<bool(Sexy::Touch_const&)>::~function
            ((function<bool(Sexy::Touch_const&)> *)(this + 0x118));
  Effect_PopAnim::~Effect_PopAnim((Effect_PopAnim *)this);
  return;
}


/* Effect_JewelRabbit_pioneer::~Effect_JewelRabbit_pioneer() */

void __thiscall
Effect_JewelRabbit_pioneer::~Effect_JewelRabbit_pioneer(Effect_JewelRabbit_pioneer *this)

{
  ~Effect_JewelRabbit_pioneer(this);
  AK::FreeHook(this);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_JewelRabbit_pioneer::StaticClassInit() */

void Effect_JewelRabbit_pioneer::StaticClassInit(void)

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
    std::string::string(asStack_10,"Effect_JewelRabbit_pioneer");
    (*pcVar2)(plVar1,asStack_10,FUN_0363147c,0x180,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_JewelRabbit_pioneer::StaticGetClass() */

long * Effect_JewelRabbit_pioneer::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"Effect_JewelRabbit_pioneer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* Effect_JewelRabbit_pioneer::GetClass() const */

long * Effect_JewelRabbit_pioneer::GetClass(void)

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
  (*pcVar3)(plVar1,"Effect_JewelRabbit_pioneer",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_JewelRabbit_pioneer::setGridPosition(Sexy::Point) */

void __thiscall
Effect_JewelRabbit_pioneer::setGridPosition(Effect_JewelRabbit_pioneer *this,int *param_2)

{
  int iVar1;
  float local_28;
  float local_24;
  Vec3 aVStack_18 [16];
  long local_8;
  
  *(undefined8 *)(this + 0x10c) = *(undefined8 *)param_2;
  local_8 = ___stack_chk_guard;
  DVec3::DVec3((DVec3 *)&local_28);
  iVar1 = BoardTransforms::GridToBoardSpaceXUnbounded(*param_2);
  local_28 = (float)iVar1;
  iVar1 = BoardTransforms::GridToBoardSpaceYUnbounded(param_2[1]);
  local_24 = (float)iVar1;
  EATextSquish::Vec3::Vec3(aVStack_18,0.0,-30.0,0.0);
  EATextSquish::Vec3::operator+=((Vec3 *)&local_28,aVStack_18);
  StandaloneEffect::SetBoardSpaceOrigin
            ((StandaloneEffect *)this,(SexyVector3 *)&local_28,
             *param_2 + 0x62250 + param_2[1] * 10000);
  Effect_PopAnim::SetCentered((Effect_PopAnim *)this,true);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_JewelRabbit_pioneer::Effect_JewelRabbit_pioneer() */

void __thiscall
Effect_JewelRabbit_pioneer::Effect_JewelRabbit_pioneer(Effect_JewelRabbit_pioneer *this)

{
  Effect_PopAnim::Effect_PopAnim((Effect_PopAnim *)this);
  *(undefined ***)this = &PTR_GetClass_0666d3f0;
  Sexy::Point::Point((Point *)(this + 0x10c));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x118));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x138));
  std::function<void(Sexy::Graphics*)>::function((function<void(Sexy::Graphics*)> *)(this + 0x158));
  this[0x178] = (Effect_JewelRabbit_pioneer)0x0;
  return;
}


/* Effect_JewelRabbit_pioneer::StaticNew() */

Effect_JewelRabbit_pioneer * Effect_JewelRabbit_pioneer::StaticNew(void)

{
  Effect_JewelRabbit_pioneer *this;
  
  this = ::operator_new(0x180);
  Effect_JewelRabbit_pioneer(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_JewelRabbit_pioneer::onStandaloneEffectFinishedCallback(StandaloneEffect*) */

void Effect_JewelRabbit_pioneer::onStandaloneEffectFinishedCallback(StandaloneEffect *param_1)

{
  bool bVar1;
  Effect_JewelRabbit_hole *pEVar2;
  Point aPStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::function::operator_cast_to_bool((function *)(param_1 + 0x158));
  if (bVar1) {
    std::function<void(bool)>::operator()
              ((function<void(bool)> *)(param_1 + 0x158),(bool)param_1[0x178]);
  }
  pEVar2 = Board::AddEffect<Effect_JewelRabbit_hole>(*(Board **)(gLawnApp + 0x9f0));
  Sexy::Point::Point(aPStack_10,(TPoint *)(param_1 + 0x10c));
  Effect_JewelRabbit_hole::setGridPosition(pEVar2,aPStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_JewelRabbit_pioneer::setDamageFunc2(std::function<void (std::vector<Zombie*,
   std::allocator<Zombie*> >)>) */

void __thiscall
Effect_JewelRabbit_pioneer::setDamageFunc2(Effect_JewelRabbit_pioneer *this,function *param_2)

{
  std::function<void(std::vector<Zombie*,std::allocator<Zombie*>>)>::operator=
            ((function<void(std::vector<Zombie*,std::allocator<Zombie*>>)> *)(this + 0x138),param_2)
  ;
  return;
}


/* Effect_JewelRabbit_pioneer::setDamageFunc(std::function<void (std::vector<Zombie*,
   std::allocator<Zombie*> >)>) */

void __thiscall
Effect_JewelRabbit_pioneer::setDamageFunc(Effect_JewelRabbit_pioneer *this,function *param_2)

{
  std::function<void(std::vector<Zombie*,std::allocator<Zombie*>>)>::operator=
            ((function<void(std::vector<Zombie*,std::allocator<Zombie*>>)> *)(this + 0x118),param_2)
  ;
  return;
}


/* Effect_JewelRabbit_pioneer::setRetreatFunc(std::function<void (bool)>) */

void __thiscall
Effect_JewelRabbit_pioneer::setRetreatFunc(Effect_JewelRabbit_pioneer *this,function *param_2)

{
  std::function<void(bool)>::operator=((function<void(bool)> *)(this + 0x158),param_2);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_JewelRabbit_pioneer::setAnimation(std::string, std::string) */

void __thiscall
Effect_JewelRabbit_pioneer::setAnimation
          (Effect_JewelRabbit_pioneer *this,string *param_2,undefined8 param_3)

{
  char cVar1;
  ResourceInfo *pRVar2;
  RtMixedPtr aRStack_68 [8];
  RtId aRStack_60 [8];
  RtWeakPtr aRStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  cVar1 = FUN_0547419c(param_2);
  if (cVar1 == '\0') {
    cVar1 = FUN_0547419c(param_3);
    if (cVar1 == '\0') {
      GetPAMByName(param_2);
      pRVar2 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_58);
      Effect_PopAnim::CreatePopAnimRig((Effect_PopAnim *)this,(PopAnim *)pRVar2,(RtClass *)0x0);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_58);
      Effect_PopAnim::SetPopAnimDelegates((Effect_PopAnim *)this);
      Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,param_3,0);
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_68);
      std::string::string((string *)aRStack_58,"onStandaloneEffectFinishedCallback");
      RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<StandaloneEffect*>> *)aRStack_50,aRStack_60,
                 aRStack_58);
      StandaloneEffect::SetCompletionCallback((StandaloneEffect *)this,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string((string *)aRStack_58);
      nop();
      Sexy::RtId::~RtId(aRStack_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_68);
      goto LAB_0362f960;
    }
  }
  (**(code **)(*(long *)this + 0x48))(this);
LAB_0362f960:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_JewelRabbit_pioneer::onAnimStopped(std::string const&) */

void __thiscall
Effect_JewelRabbit_pioneer::onAnimStopped(Effect_JewelRabbit_pioneer *this,string *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 local_50;
  undefined8 local_48;
  Zombie *local_40;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  bVar1 = std::operator==(param_1,"attack_hit_lv5");
  if (bVar1) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
    EntityFinder::GetEntitiesAtGridSquare
              (avStack_38,2,*(undefined4 *)(this + 0x10c),*(undefined4 *)(this + 0x110));
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
    local_50 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_38);
    local_48 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_38);
    while( true ) {
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_50,(__normal_iterator *)&local_48);
      if (!bVar1) break;
      puVar3 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_50)
      ;
      local_40 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar3);
      if (local_40 != (Zombie *)0x0) {
        std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                  ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_20,&local_40);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_50);
    }
    cVar2 = std::vector<Zombie*,std::allocator<Zombie*>>::empty
                      ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_20);
    if (cVar2 == '\0') {
      std::string::string((string *)&local_40,"attack_lv5_second_stage");
      Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,(string *)&local_40,0);
      std::string::~string((string *)&local_40);
      nop();
      this[0x178] = (Effect_JewelRabbit_pioneer)0x1;
    }
    else {
      std::string::string((string *)&local_40,"attack_hit_back_hole");
      Effect_PopAnim::PlaySingleAnimation((Effect_PopAnim *)this,(string *)&local_40,0);
      std::string::~string((string *)&local_40);
      nop();
    }
    std::vector<Zombie*,std::allocator<Zombie*>>::~vector
              ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_20);
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_38);
  }
  else {
    Effect_PopAnim::onAnimStopped((string *)this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_JewelRabbit_pioneer::damageTargets() */

void __thiscall Effect_JewelRabbit_pioneer::damageTargets(Effect_JewelRabbit_pioneer *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_60;
  undefined8 local_58;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  Zombie *local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  EntityFinder::GetEntitiesAtGridSquare
            (avStack_50,2,*(undefined4 *)(this + 0x10c),*(undefined4 *)(this + 0x110));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_50);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_50);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    local_20[0] = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar2);
    if (local_20[0] != (Zombie *)0x0) {
      std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_38,local_20);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
  }
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x118));
  if (bVar1) {
    std::vector<Zombie*,std::allocator<Zombie*>>::vector
              ((vector<Zombie*,std::allocator<Zombie*>> *)local_20,(vector *)avStack_38);
    std::function<void(std::vector<Zombie*,std::allocator<Zombie*>>)>::operator()
              ((function<void(std::vector<Zombie*,std::allocator<Zombie*>>)> *)(this + 0x118),
               (vector<Zombie*,std::allocator<Zombie*>> *)local_20);
    std::vector<Zombie*,std::allocator<Zombie*>>::~vector
              ((vector<Zombie*,std::allocator<Zombie*>> *)local_20);
  }
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Effect_JewelRabbit_pioneer::damageTargets2() */

void __thiscall Effect_JewelRabbit_pioneer::damageTargets2(Effect_JewelRabbit_pioneer *this)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 local_60;
  undefined8 local_58;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_50 [24];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_38 [24];
  Zombie *local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_50);
  EntityFinder::GetEntitiesAtGridSquare
            (avStack_50,2,*(undefined4 *)(this + 0x10c),*(undefined4 *)(this + 0x110));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_38);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_50);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_50);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_60,(__normal_iterator *)&local_58), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_60);
    local_20[0] = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar2);
    if (local_20[0] != (Zombie *)0x0) {
      std::vector<Zombie*,std::allocator<Zombie*>>::push_back
                ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_38,local_20);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_60);
  }
  bVar1 = std::function::operator_cast_to_bool((function *)(this + 0x138));
  if (bVar1) {
    std::vector<Zombie*,std::allocator<Zombie*>>::vector
              ((vector<Zombie*,std::allocator<Zombie*>> *)local_20,(vector *)avStack_38);
    std::function<void(std::vector<Zombie*,std::allocator<Zombie*>>)>::operator()
              ((function<void(std::vector<Zombie*,std::allocator<Zombie*>>)> *)(this + 0x138),
               (vector<Zombie*,std::allocator<Zombie*>> *)local_20);
    std::vector<Zombie*,std::allocator<Zombie*>>::~vector
              ((vector<Zombie*,std::allocator<Zombie*>> *)local_20);
  }
  std::vector<Zombie*,std::allocator<Zombie*>>::~vector
            ((vector<Zombie*,std::allocator<Zombie*>> *)avStack_38);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_50);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* Effect_JewelRabbit_pioneer::OnAnimCommand(std::string const&, std::string const&) */

void Effect_JewelRabbit_pioneer::OnAnimCommand(string *param_1,string *param_2)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_2,"toss_off");
  if (bVar1) {
    damageTargets((Effect_JewelRabbit_pioneer *)param_1);
    return;
  }
  bVar1 = std::operator==(param_2,"toss_out");
  if (!bVar1) {
    return;
  }
  damageTargets2((Effect_JewelRabbit_pioneer *)param_1);
  return;
}

