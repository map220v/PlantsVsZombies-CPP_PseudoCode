// Class: ElaeocarpusWind


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElaeocarpusWind::StaticClassInit() */

void ElaeocarpusWind::StaticClassInit(void)

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
    std::string::string(asStack_10,"ElaeocarpusWind");
    (*pcVar2)(plVar1,asStack_10,FUN_0425b4bc,0xc0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ElaeocarpusWind::StaticGetClass() */

long * ElaeocarpusWind::StaticGetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"ElaeocarpusWind",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElaeocarpusWind::GetClass() const */

long * ElaeocarpusWind::GetClass(void)

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
  uVar2 = BoardEntity::StaticGetClass();
  (*pcVar3)(plVar1,"ElaeocarpusWind",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ElaeocarpusWind::~ElaeocarpusWind() */

void __thiscall ElaeocarpusWind::~ElaeocarpusWind(ElaeocarpusWind *this)

{
  RtMixedPtrBase *this_00;
  char cVar1;
  long *plVar2;
  
  this_00 = (RtMixedPtrBase *)(this + 0xb8);
  *(undefined ***)this = &PTR_GetClass_0681be90;
  *(undefined ***)(this + 0x10) = &PTR__ElaeocarpusWind_0681c078;
  cVar1 = Sexy::RtMixedPtrBase::IsValid(this_00);
  if (cVar1 != '\0') {
    plVar2 = (long *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                               ((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
    (**(code **)(*plVar2 + 0x48))();
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)this_00);
  BoardEntity::~BoardEntity((BoardEntity *)this);
  return;
}


/* non-virtual thunk to ElaeocarpusWind::~ElaeocarpusWind() */

void __thiscall ElaeocarpusWind::~ElaeocarpusWind(ElaeocarpusWind *this)

{
  ~ElaeocarpusWind(this + -0x10);
  return;
}


/* ElaeocarpusWind::~ElaeocarpusWind() */

void __thiscall ElaeocarpusWind::~ElaeocarpusWind(ElaeocarpusWind *this)

{
  ~ElaeocarpusWind(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ElaeocarpusWind::~ElaeocarpusWind() */

void __thiscall ElaeocarpusWind::~ElaeocarpusWind(ElaeocarpusWind *this)

{
  ~ElaeocarpusWind(this + -0x10);
  return;
}


/* ElaeocarpusWind::ElaeocarpusWind() */

void __thiscall ElaeocarpusWind::ElaeocarpusWind(ElaeocarpusWind *this)

{
  undefined4 uVar1;
  
  BoardEntity::BoardEntity((BoardEntity *)this);
  *(undefined ***)this = &PTR_GetClass_0681be90;
  *(undefined ***)(this + 0x10) = &PTR__ElaeocarpusWind_0681c078;
  std::__detail::_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true>::_Hash_node
            ((_Hash_node<std::pair<Sexy::RtName_const,Sexy::RtId::Uid>,true> *)(this + 0xb8));
  uVar1 = PVZ_T();
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = uVar1;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xa4) = 0;
  return;
}


/* ElaeocarpusWind::StaticNew() */

ElaeocarpusWind * ElaeocarpusWind::StaticNew(void)

{
  ElaeocarpusWind *this;
  
  this = ::operator_new(0xc0);
  ElaeocarpusWind(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElaeocarpusWind::initialize(int, float) */

void __thiscall ElaeocarpusWind::initialize(ElaeocarpusWind *this,int param_1,float param_2)

{
  Effect_PopAnim *this_00;
  Effect_PopAnim *this_01;
  ResourceInfo *pRVar1;
  float fVar2;
  RtWeakPtr aRStack_20 [8];
  string asStack_18 [16];
  long local_8;
  
  *(float *)(this + 0xa4) = param_2 * 0.1;
  *(int *)(this + 0xac) = param_1;
  local_8 = ___stack_chk_guard;
  this_00 = Board::AddEffect<Effect_PopAnim>(*(Board **)(gLawnApp + 0x9f0));
  nop();
  std::string::string(asStack_18,"POPANIM_EFFECTS_ELAEOCARPUS_WIND");
  GetPAMByName(asStack_18);
  std::string::~string(asStack_18);
  nop();
  pRVar1 = Sexy::RtWeakPtr::operator_cast_to_ResourceInfo_(aRStack_20);
  Effect_PopAnim::CreatePopAnimRig(this_01,(PopAnim *)pRVar1,(RtClass *)0x0);
  Effect_PopAnim::SetCentered(this_01,true);
  std::string::string(asStack_18,"animation1");
  PVZ_EOT();
  Effect_PopAnim::PlayLoopingAnimation(this_01,asStack_18,0);
  std::string::~string(asStack_18);
  nop();
  if (this_00 != (Effect_PopAnim *)0x0) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
              ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xb8),(RtWeakPtrBase *)asStack_18);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_18);
    EATextSquish::Vec3::Vec3((Vec3 *)asStack_18,0.0,-50.0,0.0);
    StandaloneEffect::SetAttached
              ((StandaloneEffect *)this_00,(RealObject *)this,(SexyVector3 *)asStack_18,2);
  }
  fVar2 = (float)Sexy::Rand(1.0);
  *(float *)(this + 0xa8) = fVar2 * 0.4 + 5.8;
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ElaeocarpusWind::onUpdate() */

void __thiscall ElaeocarpusWind::onUpdate(ElaeocarpusWind *this)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined8 *puVar4;
  Zombie *this_00;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_90;
  undefined8 local_88;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_80 [24];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  fVar5 = (float)PVZ_T();
  if (*(float *)(this + 0xb0) < fVar5) {
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_80);
    uVar7 = *(undefined4 *)(this + 0x1c);
    uVar6 = FUN_04258fd0(*(undefined4 *)(this + 0x18),uVar7,*(undefined4 *)(this + 0x20));
    local_68 = CONCAT44(uVar7,uVar6);
    EntityFinder::GetEntitiesWithinCircle2D(0x42200000,avStack_80,2,(DamageInfo *)&local_68);
    local_90 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_80);
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_80);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_90,(__normal_iterator *)&local_88), bVar2)
    {
      puVar4 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_90)
      ;
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar4);
      if (this_00 == (Zombie *)0x0) {
        RealObject::IsOnOpposingTeam(0,1);
      }
      else {
        cVar1 = (**(code **)(*(long *)this_00 + 0x328))();
        if ((((cVar1 == '\0') && (cVar1 = RealObject::IsOnOpposingTeam(this_00,1), cVar1 != '\0'))
            && (cVar1 = Zombie::IsTargetable(this_00), cVar1 != '\0')) &&
           (iVar3 = Zombie::GetInvisibleState(this_00), iVar3 != 2)) {
          DamageInfo::DamageInfo((DamageInfo *)&local_68);
          local_60 = *(undefined4 *)(this + 0xa4);
          local_58 = 1;
          (**(code **)(*(long *)this_00 + 0x110))(this_00,(DamageInfo *)&local_68);
          DamageInfo::~DamageInfo((DamageInfo *)&local_68);
        }
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_90);
    }
    fVar5 = (float)PVZ_T();
    *(float *)(this + 0xb0) = fVar5 + 0.1;
    std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
              ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_80);
  }
  puVar4 = (undefined8 *)
           std::
           _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
           ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                          *)this);
  local_68 = *puVar4;
  local_60 = *(undefined4 *)(puVar4 + 1);
  iVar3 = BoardTransforms::BoardSpaceToGridX((float)local_68);
  local_68 = CONCAT44(local_68._4_4_,*(float *)(this + 0xa8) + (float)local_68);
  if (*(int *)(this + 0xac) <= iVar3) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  BoardEntity::SetPosition((BoardEntity *)this,(SexyVector3 *)&local_68);
  if (900.0 < (float)local_68) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

