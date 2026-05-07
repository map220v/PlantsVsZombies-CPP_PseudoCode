// Class: ZombiePVPSkill_Sleep


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_Sleep::findSleepTargets() */

void ZombiePVPSkill_Sleep::findSleepTargets(void)

{
  int iVar1;
  int iVar2;
  SharkMinion *in_x0;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *in_x8;
  Insets aIStack_18 [16];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  iVar1 = SharkMinion::getRow(in_x0);
  iVar2 = BoardEntity::CalcColumnPosition((BoardEntity *)in_x0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(in_x8);
  Sexy::Insets::Insets(aIStack_18,iVar2 + -1,iVar1 + -1,3,3);
  EntityFinder::GetEntitiesInGridSquares();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPSkill_Sleep::onAnimationDone(std::string const&) */

void ZombiePVPSkill_Sleep::onAnimationDone(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_Sleep::StaticClassInit() */

void ZombiePVPSkill_Sleep::StaticClassInit(void)

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
    std::string::string(asStack_10,"ZombiePVPSkill_Sleep");
    (*pcVar2)(plVar1,asStack_10,FUN_04a95f64,0x820,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ZombiePVPSkill_Sleep::StaticGetClass() */

long * ZombiePVPSkill_Sleep::StaticGetClass(void)

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
  uVar2 = ZombiePVPSkill::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPSkill_Sleep",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSkill_Sleep::GetClass() const */

long * ZombiePVPSkill_Sleep::GetClass(void)

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
  uVar2 = ZombiePVPSkill::StaticGetClass();
  (*pcVar3)(plVar1,"ZombiePVPSkill_Sleep",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ZombiePVPSkill_Sleep::isValidTarget(Plant*) */

undefined8 __thiscall ZombiePVPSkill_Sleep::isValidTarget(ZombiePVPSkill_Sleep *this,Plant *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 != (Plant *)0x0) && (cVar1 = FUN_04a959f4(param_1[0x278]), cVar1 == '\0')) {
    if (*(code **)(*(long *)param_1 + 0x1f8) == Plant::IsInPlantFoodState) {
      cVar1 = Plant::IsInPlantFoodState(param_1);
    }
    else {
      cVar1 = (**(code **)(*(long *)param_1 + 0x1f8))();
    }
    if ((cVar1 == '\0') && (cVar1 = Plant::IsInvincible(param_1,false), cVar1 == '\0')) {
      uVar2 = Plant::CanBeTargeted(param_1);
      return uVar2;
    }
  }
  return 0;
}


/* ZombiePVPSkill_Sleep::ZombiePVPSkill_Sleep() */

void __thiscall ZombiePVPSkill_Sleep::ZombiePVPSkill_Sleep(ZombiePVPSkill_Sleep *this)

{
  undefined4 uVar1;
  
  ZombiePVPSkill::ZombiePVPSkill((ZombiePVPSkill *)this);
  *(undefined ***)this = &PTR_GetClass_06944450;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPSkill_Sleep_06944e80;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x800));
  uVar1 = PVZ_EOT();
  *(undefined4 *)(this + 0x818) = uVar1;
  return;
}


/* ZombiePVPSkill_Sleep::StaticNew() */

ZombiePVPSkill_Sleep * ZombiePVPSkill_Sleep::StaticNew(void)

{
  ZombiePVPSkill_Sleep *this;
  
  this = ::operator_new(0x820);
  ZombiePVPSkill_Sleep(this);
  return this;
}


/* ZombiePVPSkill_Sleep::~ZombiePVPSkill_Sleep() */

void __thiscall ZombiePVPSkill_Sleep::~ZombiePVPSkill_Sleep(ZombiePVPSkill_Sleep *this)

{
  *(undefined ***)this = &PTR_GetClass_06944450;
  *(undefined ***)(this + 0x10) = &PTR__ZombiePVPSkill_Sleep_06944e80;
  std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::~vector
            ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)(this + 0x800)
            );
  ZombiePVPSkill::~ZombiePVPSkill((ZombiePVPSkill *)this);
  return;
}


/* non-virtual thunk to ZombiePVPSkill_Sleep::~ZombiePVPSkill_Sleep() */

void __thiscall ZombiePVPSkill_Sleep::~ZombiePVPSkill_Sleep(ZombiePVPSkill_Sleep *this)

{
  ~ZombiePVPSkill_Sleep(this + -0x10);
  return;
}


/* ZombiePVPSkill_Sleep::~ZombiePVPSkill_Sleep() */

void __thiscall ZombiePVPSkill_Sleep::~ZombiePVPSkill_Sleep(ZombiePVPSkill_Sleep *this)

{
  ~ZombiePVPSkill_Sleep(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ZombiePVPSkill_Sleep::~ZombiePVPSkill_Sleep() */

void __thiscall ZombiePVPSkill_Sleep::~ZombiePVPSkill_Sleep(ZombiePVPSkill_Sleep *this)

{
  ~ZombiePVPSkill_Sleep(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ZombiePVPSkill_Sleep::onEnterState_Playing(ZombieState) */

void ZombiePVPSkill_Sleep::onEnterState_Playing(Zombie *param_1)

{
  bool bVar1;
  char cVar2;
  long *plVar3;
  ZombiePVPSkillSleepProps *pZVar4;
  undefined8 *puVar5;
  Plant *this;
  code *pcVar6;
  RtObject *this_00;
  float fVar7;
  undefined8 local_88;
  undefined8 local_80;
  RtId aRStack_78 [8];
  string asStack_70 [8];
  string asStack_68 [24];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  plVar3 = (long *)Zombie::GetAnimRig(param_1);
  pcVar6 = *(code **)(*plVar3 + 0x170);
  std::string::string(asStack_68,"attack");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)&local_80);
  std::string::string(asStack_70,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_78,
             asStack_70);
  (*pcVar6)(plVar3,asStack_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_70);
  nop();
  Sexy::RtId::~RtId(aRStack_78);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_80);
  std::string::~string(asStack_68);
  nop();
  findSleepTargets();
  pZVar4 = Zombie::GetProps<ZombiePVPSkillSleepProps>(param_1);
  fVar7 = *(float *)(pZVar4 + 0x280);
  local_88 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)asStack_68);
  local_80 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)asStack_68);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar1) {
    puVar5 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88);
    this_00 = (RtObject *)*puVar5;
    if ((this_00 != (RtObject *)0x0) && (bVar1 = Sexy::RtObject::IsA<Plant>(this_00), bVar1)) {
      this = Sexy::RtObject::Cast<Plant>(this_00);
      cVar2 = isValidTarget((ZombiePVPSkill_Sleep *)param_1,this);
      if (cVar2 != '\0') {
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)asStack_70,(RtWeakPtrBase *)aRStack_78);
        std::vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Plant>,std::allocator<Sexy::RtWeakPtr<Plant>>> *)
                   (param_1 + 0x800),(RtWeakPtr *)asStack_70);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_70)
        ;
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78)
        ;
        Plant::SetIsSleepping(this,true,fVar7);
      }
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)asStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

