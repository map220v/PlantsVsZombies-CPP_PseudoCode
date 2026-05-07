// Class: AgaveSwordQi


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AgaveSwordQi::StaticClassInit() */

void AgaveSwordQi::StaticClassInit(void)

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
    std::string::string(asStack_10,"AgaveSwordQi");
    (*pcVar2)(plVar1,asStack_10,FUN_0491aab4,0x1d0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AgaveSwordQi::StaticGetClass() */

long * AgaveSwordQi::StaticGetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"AgaveSwordQi",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AgaveSwordQi::GetClass() const */

long * AgaveSwordQi::GetClass(void)

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
  uVar2 = Projectile::StaticGetClass();
  (*pcVar3)(plVar1,"AgaveSwordQi",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* AgaveSwordQi::InitSwordQi(int, int) */

void __thiscall AgaveSwordQi::InitSwordQi(AgaveSwordQi *this,int param_1,int param_2)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  
  *(int *)(this + 0x1a8) = param_1;
  pfVar2 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  fVar3 = *pfVar2;
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  *(int *)(this + 0x1b0) = (int)((float)(iVar1 * param_2) + fVar3);
  return;
}


/* AgaveSwordQi::onAnimationDone(std::string const&) */

void __thiscall AgaveSwordQi::onAnimationDone(AgaveSwordQi *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"bullet_disappear");
  if ((!bVar1) && (bVar1 = std::operator==(param_1,"bullet_02_disappear"), !bVar1)) {
    return;
  }
  (**(code **)(*(long *)this + 0x48))(this);
  return;
}


/* AgaveSwordQi::AgaveSwordQi() */

void __thiscall AgaveSwordQi::AgaveSwordQi(AgaveSwordQi *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0690fe40;
  *(undefined ***)(this + 0x10) = &PTR__AgaveSwordQi_06910030;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b8));
  return;
}


/* AgaveSwordQi::StaticNew() */

AgaveSwordQi * AgaveSwordQi::StaticNew(void)

{
  AgaveSwordQi *this;
  
  this = ::operator_new(0x1d0);
  AgaveSwordQi(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AgaveSwordQi::onUpdate(float) */

void AgaveSwordQi::onUpdate(float param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar1;
  PopAnimRig *pPVar2;
  RtMixedPtr aRStack_70 [8];
  RtId aRStack_68 [8];
  string asStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  if (((float)*(int *)(in_x0 + 0x1b0) < *pfVar1) &&
     (in_x0[0x1ac] ==
      (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
       )0x0)) {
    in_x0[0x1ac] = (_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    )0x1;
    Projectile::SetVelocity((Projectile *)in_x0,0.0,0.0,0.0);
    if (*(int *)(in_x0 + 0x1a8) == 0) {
      pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)in_x0);
      std::string::string(asStack_58,"bullet_disappear");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onAnimationDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 asStack_60);
      PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_58);
      nop();
    }
    else if (*(int *)(in_x0 + 0x1a8) == 1) {
      pPVar2 = (PopAnimRig *)Projectile::GetAnimRig((Projectile *)in_x0);
      std::string::string(asStack_58,"bullet_02_disappear");
      ToolPacketData::GetProps();
      Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
      std::string::string(asStack_60,"onAnimationDone");
      RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
                ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_68,
                 asStack_60);
      PopAnimRig::PlayAndStop(pPVar2,asStack_58,0,aRStack_50);
      RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
      ::~RtReflectionDelegate(aRStack_50);
      std::string::~string(asStack_60);
      nop();
      Sexy::RtId::~RtId(aRStack_68);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
      std::string::~string(asStack_58);
      nop();
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* AgaveSwordQi::onProjectileInitialized() */

void __thiscall AgaveSwordQi::onProjectileInitialized(AgaveSwordQi *this)

{
  this[0x1ac] = (AgaveSwordQi)0x0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::clear
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b8));
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1b0) = 1000;
  return;
}


/* AgaveSwordQi::~AgaveSwordQi() */

void __thiscall AgaveSwordQi::~AgaveSwordQi(AgaveSwordQi *this)

{
  *(undefined ***)this = &PTR_GetClass_0690fe40;
  *(undefined ***)(this + 0x10) = &PTR__AgaveSwordQi_06910030;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1b8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to AgaveSwordQi::~AgaveSwordQi() */

void __thiscall AgaveSwordQi::~AgaveSwordQi(AgaveSwordQi *this)

{
  ~AgaveSwordQi(this + -0x10);
  return;
}


/* AgaveSwordQi::~AgaveSwordQi() */

void __thiscall AgaveSwordQi::~AgaveSwordQi(AgaveSwordQi *this)

{
  ~AgaveSwordQi(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to AgaveSwordQi::~AgaveSwordQi() */

void __thiscall AgaveSwordQi::~AgaveSwordQi(AgaveSwordQi *this)

{
  ~AgaveSwordQi(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AgaveSwordQi::OnCollideEntity(BoardEntity*) */

void __thiscall AgaveSwordQi::OnCollideEntity(AgaveSwordQi *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x1b8);
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)&local_10);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    local_18 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                         (uVar2,uVar3,aRStack_20);
    local_10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this_00);
    bVar1 = __gnu_cxx::operator==((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
    if (bVar1) {
      std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
      push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *
                )this_00,(RtWeakPtr *)aRStack_20);
      (**(code **)(*(long *)this + 0x1b0))(this,param_1);
      (**(code **)(*(long *)this + 0x168))(this,param_1);
    }
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(0);
}

