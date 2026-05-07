// Class: BlueberryZapCloud


/* BlueberryZapCloud::getDamageTypeFlags() */

void BlueberryZapCloud::getDamageTypeFlags(void)

{
  operator|(0x80,0x2000);
  return;
}


/* BlueberryZapCloud::onInitialized() */

void __thiscall BlueberryZapCloud::onInitialized(BlueberryZapCloud *this)

{
  this[0xfc] = (BlueberryZapCloud)0x0;
  return;
}


/* BlueberryZapCloud::onDieFinished(std::string const&) */

void BlueberryZapCloud::onDieFinished(string *param_1)

{
  (**(code **)(*(long *)param_1 + 0x48))();
  return;
}


/* BlueberryZapCloud::onSpawnAnimDone(std::string const&) */

void BlueberryZapCloud::onSpawnAnimDone(string *param_1)

{
  CloudBase::setState((CloudBase *)param_1,1);
  param_1[0xfc] = (string)0x1;
  return;
}


/* BlueberryZapCloud::onUpdateCloud() */

void __thiscall BlueberryZapCloud::onUpdateCloud(BlueberryZapCloud *this)

{
  if (this[0xfc] == (BlueberryZapCloud)0x0) {
    return;
  }
  CloudBase::onUpdateCloud();
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlueberryZapCloud::StaticClassInit() */

void BlueberryZapCloud::StaticClassInit(void)

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
    std::string::string(asStack_10,"BlueberryZapCloud");
    (*pcVar2)(plVar1,asStack_10,FUN_040da7ec,0x140,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BlueberryZapCloud::StaticGetClass() */

long * BlueberryZapCloud::StaticGetClass(void)

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
  uVar2 = CloudBase::StaticGetClass();
  (*pcVar3)(plVar1,"BlueberryZapCloud",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BlueberryZapCloud::GetClass() const */

long * BlueberryZapCloud::GetClass(void)

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
  uVar2 = CloudBase::StaticGetClass();
  (*pcVar3)(plVar1,"BlueberryZapCloud",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BlueberryZapCloud::SetAvatar(bool) */

void __thiscall BlueberryZapCloud::SetAvatar(BlueberryZapCloud *this,bool param_1)

{
  this[0xfd] = (BlueberryZapCloud)param_1;
  return;
}


/* BlueberryZapCloud::SetMinifyDuration(float) */

void __thiscall BlueberryZapCloud::SetMinifyDuration(BlueberryZapCloud *this,float param_1)

{
  *(float *)(this + 0x100) = param_1;
  return;
}


/* BlueberryZapCloud::Spawn() */

void __thiscall BlueberryZapCloud::Spawn(BlueberryZapCloud *this)

{
  CloudBase::setState((CloudBase *)this,4);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlueberryZapCloud::onDraw(Sexy::Graphics*) */

void __thiscall BlueberryZapCloud::onDraw(BlueberryZapCloud *this,Graphics *param_1)

{
  PopAnimRig *this_00;
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ulong uVar6;
  GraphicsAutoState aGStack_38 [8];
  SexyTransform2D aSStack_30 [40];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  Sexy::GraphicsAutoState::GraphicsAutoState(aGStack_38,param_1);
  uVar1 = FUN_040d842c(*(undefined4 *)(this + 0x18),*(undefined4 *)(this + 0x1c),
                       *(undefined4 *)(this + 0x20));
  fVar2 = (float)FUN_040d84f8(uVar1);
  fVar3 = (float)FUN_040d84f8(0x42be0000);
  uVar6 = (ulong)*(uint *)(this + 0x1c);
  FUN_040d842c(*(undefined4 *)(this + 0x18),uVar6,*(undefined4 *)(this + 0x20));
  fVar4 = (float)FUN_040d84f8(uVar6 & 0xffffffff);
  fVar5 = (float)FUN_040d84f8(0x432a0000);
  *(float *)(param_1 + 0x10) =
       *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x10) +
       (float)(int)(((fVar2 - fVar3) - *(float *)(param_1 + 0x20)) * *(float *)(param_1 + 0x18));
  *(float *)(param_1 + 0x14) =
       *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x14) +
       (float)(int)(((fVar4 - fVar5) - *(float *)(param_1 + 0x24)) * *(float *)(param_1 + 0x1c));
  Sexy::SexyTransform2D::SexyTransform2D(aSStack_30);
  Sexy::SexyTransform2D::Scale(aSStack_30,*(float *)(param_1 + 0x18),*(float *)(param_1 + 0x1c));
  this_00 = (PopAnimRig *)
            Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8))
  ;
  PopAnimRig::Draw(this_00,param_1,aSStack_30);
  Sexy::GraphicsAutoState::~GraphicsAutoState(aGStack_38);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlueberryZapCloud::onStateChanged(unsigned int) */

void __thiscall BlueberryZapCloud::onStateChanged(BlueberryZapCloud *this,uint param_1)

{
  PopAnimRig *pPVar1;
  char *__s;
  string asStack_58 [8];
  string asStack_50 [24];
  DummyInit aDStack_38 [48];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 == 3) {
    std::string::string(asStack_50,"Play_Plant_LightningReed_Nitro_Storm");
    RealObject::PlayPositionalSound((RealObject *)this,asStack_50,0.0);
    std::string::~string(asStack_50);
    nop();
  }
  else if (param_1 == 4) {
    if (this[0xfd] == (BlueberryZapCloud)0x0) {
      __s = "start";
    }
    else {
      __s = "start_02";
    }
    std::string::string(asStack_58,__s);
    nop();
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    Sexy::
    MakeDelegate<Sexy::AndroidHttpTransaction::ReceivedDataCallback,void(Sexy::AndroidHttpTransaction::ReceivedDataCallback::*)()>
              ((ReceivedDataCallback *)this,(_func_void *)0x218);
    Sexy::Delegate1<std::string_const&>::
    Delegate1<BlueberryZapCloud,void(BlueberryZapCloud::*)(std::string_const&)>
              ((Delegate1<std::string_const&> *)aDStack_38,asStack_50);
    PopAnimRig::PlayAndStop(pPVar1,asStack_58,0,(Delegate1<std::string_const&> *)aDStack_38);
    std::string::~string(asStack_58);
  }
  else if (param_1 == 2) {
    pPVar1 = (PopAnimRig *)
             Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                       ((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
    std::string::string(asStack_50,"idle");
    Sexy::Delegate3<std::string_const&,std::string_const&,int>::Delegate3(aDStack_38);
    PopAnimRig::PlayAndContinue(pPVar1,asStack_50,0,aDStack_38);
    std::string::~string(asStack_50);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BlueberryZapCloud::BlueberryZapCloud() */

void __thiscall BlueberryZapCloud::BlueberryZapCloud(BlueberryZapCloud *this)

{
  CloudBase::CloudBase((CloudBase *)this);
  *(undefined ***)this = &PTR_GetClass_067dc560;
  *(undefined ***)(this + 0x10) = &PTR__BlueberryZapCloud_067dc790;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x108));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x120));
  this[0xfc] = (BlueberryZapCloud)0x0;
  this[0xfd] = (BlueberryZapCloud)0x0;
  this[0x138] = (BlueberryZapCloud)0x0;
  *(undefined4 *)(this + 0x100) = 0;
  FUN_040d8410(this + 0xb0);
  return;
}


/* BlueberryZapCloud::StaticNew() */

BlueberryZapCloud * BlueberryZapCloud::StaticNew(void)

{
  BlueberryZapCloud *this;
  
  this = ::operator_new(0x140);
  BlueberryZapCloud(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlueberryZapCloud::SetAnim(bool) */

void __thiscall BlueberryZapCloud::SetAnim(BlueberryZapCloud *this,bool param_1)

{
  PopAnim *pPVar1;
  RtClass *pRVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  CachedResourcePtr *this_00;
  
  local_8 = ___stack_chk_guard;
  if (param_1) {
    this_00 = (CachedResourcePtr *)&DAT_06aec6c0;
  }
  else {
    this_00 = (CachedResourcePtr *)&DAT_06aec790;
  }
  pPVar1 = CachedResourcePtr::operator_cast_to_PopAnim_(this_00);
  pRVar2 = (RtClass *)PopAnimRig::StaticGetClass();
  PopAnimRig::CreateRig(pPVar1,pRVar2);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<SpartanBambooMatrixSystem>::operator=
            ((RtWeakPtr<SpartanBambooMatrixSystem> *)(this + 0xa8),(RtWeakPtrBase *)aRStack_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BlueberryZapCloud::SetSuper(bool) */

void __thiscall BlueberryZapCloud::SetSuper(BlueberryZapCloud *this,bool param_1)

{
  this[0x138] = (BlueberryZapCloud)param_1;
  SetAnim(this,param_1);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlueberryZapCloud::onAttackFinished(std::string const&) */

void BlueberryZapCloud::onAttackFinished(string *param_1)

{
  PopAnimRig *pPVar1;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  param_1[0xfc] = (string)0x1;
  local_8 = ___stack_chk_guard;
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                     ((RtWeakPtr<Sexy::ResourceInfo> *)(param_1 + 0xa8));
  std::string::string(asStack_68,"death");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onDieFinished");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar1,asStack_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlueberryZapCloud::onNoTargetRemaining() */

void __thiscall BlueberryZapCloud::onNoTargetRemaining(BlueberryZapCloud *this)

{
  PopAnimRig *pPVar1;
  undefined4 uVar2;
  RtMixedPtr aRStack_70 [8];
  string asStack_68 [8];
  RtId aRStack_60 [8];
  string asStack_58 [8];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  this[0xfc] = (BlueberryZapCloud)0x0;
  local_8 = ___stack_chk_guard;
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0xf8) = uVar2;
  pPVar1 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  std::string::string(asStack_68,"death");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_70);
  std::string::string(asStack_58,"onDieFinished");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_60,
             asStack_58);
  PopAnimRig::PlayAndStop(pPVar1,asStack_68,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_58);
  nop();
  Sexy::RtId::~RtId(aRStack_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_70);
  std::string::~string(asStack_68);
  nop();
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BlueberryZapCloud::~BlueberryZapCloud() */

void __thiscall BlueberryZapCloud::~BlueberryZapCloud(BlueberryZapCloud *this)

{
  *(undefined ***)this = &PTR_GetClass_067dc560;
  *(undefined ***)(this + 0x10) = &PTR__BlueberryZapCloud_067dc790;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x120));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x108));
  CloudBase::~CloudBase((CloudBase *)this);
  return;
}


/* non-virtual thunk to BlueberryZapCloud::~BlueberryZapCloud() */

void __thiscall BlueberryZapCloud::~BlueberryZapCloud(BlueberryZapCloud *this)

{
  ~BlueberryZapCloud(this + -0x10);
  return;
}


/* BlueberryZapCloud::~BlueberryZapCloud() */

void __thiscall BlueberryZapCloud::~BlueberryZapCloud(BlueberryZapCloud *this)

{
  ~BlueberryZapCloud(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BlueberryZapCloud::~BlueberryZapCloud() */

void __thiscall BlueberryZapCloud::~BlueberryZapCloud(BlueberryZapCloud *this)

{
  ~BlueberryZapCloud(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlueberryZapCloud::WillTarget(BoardEntity*) */

void __thiscall BlueberryZapCloud::WillTarget(BlueberryZapCloud *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  Zombie *pZVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined8 local_48;
  undefined8 local_40;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [3];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if ((param_1 == (BoardEntity *)0x0) ||
     (pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), pZVar4 == (Zombie *)0x0)) {
    uVar8 = 0;
  }
  else {
    this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *)(this + 0x120);
    uVar5 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin(this_00);
    uVar6 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end(this_00);
    ToolPacketData::GetProps();
    local_28 = std::
               find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                         (uVar5,uVar6,(RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    local_20[0] = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
    bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,(__normal_iterator *)local_20);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_30);
    if (bVar1) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20);
      EntityFinder::GetEntitiesOnBoard
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_20,2);
      local_48 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)local_20);
      local_40 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)local_20);
      while( true ) {
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_48,(__normal_iterator *)&local_40)
        ;
        uVar8 = 1;
        if (!bVar1) break;
        puVar7 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_48);
        pZVar4 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
        uVar5 = operator|(1,8);
        uVar5 = operator|(uVar5,0x200);
        uVar3 = operator|(uVar5,0x10000);
        cVar2 = Zombie::MatchesAny(pZVar4,uVar3);
        if ((((cVar2 == '\0') &&
             (cVar2 = RealObject::IsOnOpposingTeam((RealObject *)pZVar4,(RealObject *)this),
             cVar2 != '\0')) && (cVar2 = Zombie::IsTargetable(pZVar4), cVar2 != '\0')) &&
           ((cVar2 = Zombie::IsInvisible(pZVar4), cVar2 == '\0' &&
            (((bVar1 = Sexy::RtObject::IsA<Zomboss>((RtObject *)pZVar4), !bVar1 &&
              (cVar2 = (**(code **)(*(long *)pZVar4 + 0x4d8))(pZVar4), cVar2 == '\0')) ||
             ((cVar2 = Zombie::IsFlying(pZVar4), cVar2 == '\0' &&
              (cVar2 = Zombie::IsJumping(pZVar4), cVar2 == '\0')))))))) {
          uVar5 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(this_00);
          uVar6 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::end(this_00);
          ToolPacketData::GetProps();
          local_30 = std::
                     find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                               (uVar5,uVar6,aRStack_38);
          local_28 = std::
                     vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     ::end(this_00);
          bVar1 = __gnu_cxx::operator==
                            ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28);
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_38);
          if (bVar1) {
            uVar8 = 0;
            break;
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_48);
      }
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_20);
    }
    else {
      uVar8 = 1;
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlueberryZapCloud::DoSplashDamage(int, int) */

void __thiscall BlueberryZapCloud::DoSplashDamage(BlueberryZapCloud *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  Zombie *this_00;
  ulong uVar7;
  long *extraout_x0;
  RtObject *this_01;
  ulong uVar8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  Point aPStack_80 [24];
  DamageInfo aDStack_68 [8];
  undefined4 local_60;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  DamageInfo::DamageInfo(aDStack_68);
  uVar8 = 0;
  local_60 = FUN_040d8328(*(undefined4 *)(this + 0xd4));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_98);
  Sexy::Point::Point(aPStack_80,param_1,param_2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_98,aPStack_80);
  Sexy::Point::Point(aPStack_80,param_1,param_2 + -1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_98,aPStack_80);
  Sexy::Point::Point(aPStack_80,param_1 + -1,param_2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_98,aPStack_80);
  Sexy::Point::Point(aPStack_80,param_1 + 1,param_2);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_98,aPStack_80);
  Sexy::Point::Point(aPStack_80,param_1,param_2 + 1);
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::push_back
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_98,aPStack_80);
  lVar4 = FUN_040d8350(local_98,local_90);
  if (lVar4 != 0) {
    do {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)aPStack_80);
      uVar3 = operator|(2,4);
      puVar5 = (undefined4 *)FUN_040d835c(local_98,uVar8);
      EntityFinder::GetEntitiesAtGridSquare(aPStack_80,uVar3,*puVar5,puVar5[1]);
      local_a8 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)aPStack_80);
      local_a0 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)aPStack_80);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_a8,(__normal_iterator *)&local_a0),
            bVar1) {
        puVar6 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_a8);
        this_01 = (RtObject *)*puVar6;
        cVar2 = RealObject::IsOnOpposingTeam(this_01,1);
        if (cVar2 != '\0') {
          this_00 = Sexy::RtObject::Cast<Zombie>(this_01);
          if (this_00 == (Zombie *)0x0) {
            nop();
            if (((extraout_x0 != (long *)0x0) &&
                (cVar2 = (**(code **)(*extraout_x0 + 0xb8))(), cVar2 != '\0')) &&
               (cVar2 = (**(code **)(*extraout_x0 + 0x200))(extraout_x0), cVar2 != '\0')) {
              (**(code **)(*extraout_x0 + 0x110))(extraout_x0,aDStack_68);
            }
          }
          else {
            uVar3 = operator|(1,8);
            cVar2 = Zombie::MatchesAny(this_00,uVar3);
            if (((cVar2 == '\0') &&
                (cVar2 = (**(code **)(*(long *)this_00 + 0xb8))(this_00,7), cVar2 != '\0')) &&
               (cVar2 = Zombie::IsFlying(this_00), cVar2 == '\0')) {
              (**(code **)(*(long *)this_00 + 0x110))(this_00,aDStack_68);
            }
          }
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_a8);
      }
      uVar8 = uVar8 + 1;
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)aPStack_80);
      uVar7 = FUN_040d8350(local_98,local_90);
    } while (uVar8 < uVar7);
  }
  std::vector<Sexy::Point,std::allocator<Sexy::Point>>::~vector
            ((vector<Sexy::Point,std::allocator<Sexy::Point>> *)&local_98);
  DamageInfo::~DamageInfo(aDStack_68);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BlueberryZapCloud::MarkCenterTarget(BoardEntity*) */

void __thiscall BlueberryZapCloud::MarkCenterTarget(BlueberryZapCloud *this,BoardEntity *param_1)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  
  if (param_1 != (BoardEntity *)0x0) {
    iVar1 = BoardEntity::CalcColumnPosition(param_1);
    iVar2 = SharkMinion::getRow((SharkMinion *)param_1);
    DoSplashDamage(this,iVar1,iVar2);
    return;
  }
  pfVar3 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                   *)this);
  iVar1 = BoardTransforms::BoardSpaceToGridXUnbounded(*pfVar3);
  DoSplashDamage(this,iVar1,0);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlueberryZapCloud::onAttack(BoardEntity*) */

void __thiscall BlueberryZapCloud::onAttack(BlueberryZapCloud *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  char cVar1;
  bool bVar2;
  Zombie *this_01;
  undefined8 uVar3;
  undefined8 uVar4;
  PopAnimRig *pPVar5;
  char *__s;
  string asStack_70 [8];
  RtWeakPtr<Sexy::ResourceInfo> aRStack_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x138] != (BlueberryZapCloud)0x0) {
    MarkCenterTarget(this,param_1);
  }
  if (this[0xfd] != (BlueberryZapCloud)0x0) {
    if (param_1 == (BoardEntity *)0x0) goto LAB_040da5fc;
    this_01 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if ((((((this_01 != (Zombie *)0x0) &&
           (cVar1 = (**(code **)(*(long *)this_01 + 0x4a0))(), cVar1 != '\0')) &&
          (cVar1 = (**(code **)(*(long *)this_01 + 0x328))(this_01), cVar1 == '\0')) &&
         ((cVar1 = (**(code **)(*(long *)this_01 + 0x330))(this_01), cVar1 == '\0' &&
          (bVar2 = Sexy::RtObject::IsA<Zomboss>((RtObject *)this_01), !bVar2)))) &&
        ((cVar1 = (**(code **)(*(long *)this_01 + 0x4d8))(this_01), cVar1 == '\0' &&
         ((cVar1 = (**(code **)(*(long *)this_01 + 0x508))(this_01), cVar1 == '\0' &&
          (bVar2 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)this_01), !bVar2)))))) &&
       ((bVar2 = Sexy::RtObject::IsA<ZombiePirateBarrel>((RtObject *)this_01), !bVar2 &&
        (cVar1 = Zombie::HasCondition(this_01,0x3b), cVar1 == '\0')))) {
                    /* WARNING: Load size is inaccurate */
      Zombie::ApplyCondition(*(Zombie **)(this + 0x100),0,this_01,0x3b,1);
    }
  }
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x120);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  ToolPacketData::GetProps();
  local_60 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                       (uVar3,uVar4,aRStack_68);
  local_58 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_60,(__normal_iterator *)&local_58);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  if (bVar2) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_58,(RtWeakPtrBase *)&local_60);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,(RtWeakPtr *)&local_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_58);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
  }
  this[0xfc] = (BlueberryZapCloud)0x0;
  if (this[0xfd] == (BlueberryZapCloud)0x0) {
    __s = "attack";
  }
  else {
    __s = "plantfood";
  }
  std::string::string(asStack_70,__s);
  nop();
  pPVar5 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)(this + 0xa8));
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId((RtMixedPtr *)aRStack_68);
  std::string::string((string *)&local_58,"onAttackFinished");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,
             (__normal_iterator *)&local_60,(string *)&local_58);
  PopAnimRig::PlayAndStop(pPVar5,asStack_70,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string((string *)&local_58);
  nop();
  Sexy::RtId::~RtId((RtId *)&local_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_68);
  std::string::~string(asStack_70);
LAB_040da5fc:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlueberryZapCloud::SetZombieWeights(float, float, float) */

void __thiscall
BlueberryZapCloud::SetZombieWeights
          (BlueberryZapCloud *this,float param_1,float param_2,float param_3)

{
  vector<int,std::allocator<int>> *this_00;
  int local_c;
  long local_8;
  
  this_00 = (vector<int,std::allocator<int>> *)(this + 0x108);
  local_8 = ___stack_chk_guard;
  std::vector<int,std::allocator<int>>::clear(this_00);
  local_c = (int)param_1;
  std::vector<int,std::allocator<int>>::push_back(this_00,&local_c);
  local_c = (int)param_2;
  std::vector<int,std::allocator<int>>::push_back(this_00,&local_c);
  local_c = (int)param_3;
  std::vector<int,std::allocator<int>>::push_back(this_00,&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BlueberryZapCloud::pickPreferredTarget(std::vector<BoardEntity*, std::allocator<BoardEntity*> >,
   std::vector<BoardEntity*, std::allocator<BoardEntity*> >) */

void BlueberryZapCloud::pickPreferredTarget
               (long param_1,
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               *param_2)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *pvVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  Zombie *pZVar10;
  RtWeakPtr<Sexy::ResourceInfo> *pRVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  vector<BoardEntity*,std::allocator<BoardEntity*>> *pvVar14;
  ZombieGargantuar *pZVar15;
  int *piVar16;
  RtObject *this_00;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  RtObject *local_90;
  undefined8 local_88;
  undefined8 local_80;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_78 [8];
  undefined8 local_70;
  undefined8 local_68 [3];
  undefined8 local_50 [3];
  undefined8 local_38 [6];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  this_00 = (RtObject *)0x0;
  lVar7 = FUN_040d8364(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
  if ((lVar7 != 0) &&
     (uVar8 = FUN_040d8334(*(undefined8 *)(param_1 + 0x108),*(undefined8 *)(param_1 + 0x110)),
     2 < uVar8)) {
    iVar5 = 3;
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_68);
    std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
              ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50);
    do {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
      std::
      vector<std::vector<BoardEntity*,std::allocator<BoardEntity*>>,std::allocator<std::vector<BoardEntity*,std::allocator<BoardEntity*>>>>
      ::push_back((vector<std::vector<BoardEntity*,std::allocator<BoardEntity*>>,std::allocator<std::vector<BoardEntity*,std::allocator<BoardEntity*>>>>
                   *)local_68,(vector *)local_38);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_38);
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
                ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_38);
      std::
      vector<std::vector<BoardEntity*,std::allocator<BoardEntity*>>,std::allocator<std::vector<BoardEntity*,std::allocator<BoardEntity*>>>>
      ::push_back((vector<std::vector<BoardEntity*,std::allocator<BoardEntity*>>,std::allocator<std::vector<BoardEntity*,std::allocator<BoardEntity*>>>>
                   *)local_50,(vector *)local_38);
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)local_38);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    bVar3 = true;
    local_88 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(param_2);
    local_80 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(param_2);
    while (bVar2 = __gnu_cxx::operator!=
                             ((__normal_iterator *)&local_88,(__normal_iterator *)&local_80), bVar2)
    {
      puVar9 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_88)
      ;
      local_90 = (RtObject *)*puVar9;
      pZVar10 = Sexy::RtObject::Cast<Zombie>(local_90);
      pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetType(pZVar10);
      lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
      if (*(char *)(lVar7 + 0xa9) == '\0') {
        pZVar15 = Sexy::RtObject::Cast<ZombieGargantuar>((RtObject *)pZVar10);
        uVar17 = 2;
        if (pZVar15 != (ZombieGargantuar *)0x0) {
          uVar17 = 1;
        }
      }
      else {
        uVar17 = 0;
      }
      this = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              *)(param_1 + 0x120);
      uVar12 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::begin(this);
      uVar13 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(this);
      ToolPacketData::GetProps();
      local_70 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                           (uVar12,uVar13,aRStack_78);
      local_38[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(this);
      bVar2 = __gnu_cxx::operator==((__normal_iterator *)&local_70,(__normal_iterator *)local_38);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_78);
      if (bVar2) {
        bVar3 = false;
        pvVar14 = (vector<BoardEntity*,std::allocator<BoardEntity*>> *)
                  FUN_040d8370(local_68[0],uVar17);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  (pvVar14,(BoardEntity **)&local_90);
      }
      else {
        pvVar14 = (vector<BoardEntity*,std::allocator<BoardEntity*>> *)
                  FUN_040d8370(local_50[0],uVar17);
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  (pvVar14,(BoardEntity **)&local_90);
      }
      eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_88);
    }
    ProbabilitySet<ZombossRobotAirDropZombieInfo>::ProbabilitySet
              ((ProbabilitySet<ZombossRobotAirDropZombieInfo> *)local_38);
    pvVar1 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_50;
    if (!bVar3) {
      pvVar1 = (vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)local_68;
    }
    uVar17 = *(undefined8 *)pvVar1;
    puVar9 = (undefined8 *)FUN_040d8370(uVar17,0);
    lVar7 = FUN_040d8364(*puVar9,puVar9[1]);
    if (lVar7 != 0) {
      piVar16 = (int *)FUN_040d837c(*(undefined8 *)(param_1 + 0x108),0);
      ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)local_38,0,*piVar16);
      uVar17 = *(undefined8 *)pvVar1;
    }
    puVar9 = (undefined8 *)FUN_040d8370(uVar17,1);
    lVar7 = FUN_040d8364(*puVar9,puVar9[1]);
    if (lVar7 != 0) {
      piVar16 = (int *)FUN_040d837c(*(undefined8 *)(param_1 + 0x108),1);
      ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)local_38,1,*piVar16);
      uVar17 = *(undefined8 *)pvVar1;
    }
    puVar9 = (undefined8 *)FUN_040d8370(uVar17,2);
    lVar7 = FUN_040d8364(*puVar9,puVar9[1]);
    if (lVar7 != 0) {
      piVar16 = (int *)FUN_040d837c(*(undefined8 *)(param_1 + 0x108),2);
      ProbabilitySet<int>::AddItem((ProbabilitySet<int> *)local_38,2,*piVar16);
    }
    iVar5 = ProbabilitySet<int>::PickItem((ProbabilitySet<int> *)local_38);
    puVar9 = (undefined8 *)FUN_040d8370(*(undefined8 *)pvVar1,(long)iVar5);
    iVar6 = FUN_040d8364(*puVar9,puVar9[1]);
    iVar6 = Sexy::Rand(iVar6);
    puVar9 = (undefined8 *)FUN_040d8370(*(undefined8 *)pvVar1,(long)iVar5);
    puVar9 = (undefined8 *)FUN_040d8384(*puVar9,(long)iVar6);
    this_00 = (RtObject *)*puVar9;
    if (this_00 != (RtObject *)0x0) {
      pZVar10 = Sexy::RtObject::Cast<Zombie>(this_00);
      bVar3 = Sexy::RtObject::IsA<Zomboss>((RtObject *)pZVar10);
      if ((((!bVar3) && (cVar4 = (**(code **)(*(long *)pZVar10 + 0x4d8))(pZVar10), cVar4 == '\0'))
          && (cVar4 = (**(code **)(*(long *)pZVar10 + 0x508))(pZVar10), cVar4 == '\0')) &&
         ((bVar3 = Sexy::RtObject::IsA<ZombieZombossMech>((RtObject *)pZVar10), !bVar3 &&
          (bVar3 = Sexy::RtObject::IsA<ZombiePoncho>((RtObject *)pZVar10), !bVar3)))) {
        fVar18 = (float)FUN_040d832c(*(undefined4 *)(pZVar10 + 0x280));
        fVar19 = (float)FUN_040d8330(*(undefined4 *)(pZVar10 + 0x2a8));
        fVar20 = (float)FUN_040d8328(*(undefined4 *)(param_1 + 0xd4));
        if (fVar19 + fVar18 < fVar20) {
          pRVar11 = (RtWeakPtr<Sexy::ResourceInfo> *)Zombie::GetProps(pZVar10);
          lVar7 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(pRVar11);
          if (*(char *)(lVar7 + 0x68) == '\0') {
            Zombie::SetMarkedForDeath(pZVar10);
          }
        }
      }
    }
    ProbabilitySet<int>::~ProbabilitySet((ProbabilitySet<int> *)local_38);
    std::
    vector<std::vector<BoardEntity*,std::allocator<BoardEntity*>>,std::allocator<std::vector<BoardEntity*,std::allocator<BoardEntity*>>>>
    ::~vector((vector<std::vector<BoardEntity*,std::allocator<BoardEntity*>>,std::allocator<std::vector<BoardEntity*,std::allocator<BoardEntity*>>>>
               *)local_50);
    std::
    vector<std::vector<BoardEntity*,std::allocator<BoardEntity*>>,std::allocator<std::vector<BoardEntity*,std::allocator<BoardEntity*>>>>
    ::~vector((vector<std::vector<BoardEntity*,std::allocator<BoardEntity*>>,std::allocator<std::vector<BoardEntity*,std::allocator<BoardEntity*>>>>
               *)local_68);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}

