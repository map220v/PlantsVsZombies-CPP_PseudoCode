// Class: MiniGameFrozenIcebloom


/* MiniGameFrozenIcebloom::CalcRenderOrder() const */

void __thiscall MiniGameFrozenIcebloom::CalcRenderOrder(MiniGameFrozenIcebloom *this)

{
  undefined4 uVar1;
  
  uVar1 = BoardEntity::CalcColumnPosition((BoardEntity *)this);
  Board::MakeRenderOrder(0x61cd8,0,uVar1);
  return;
}


/* non-virtual thunk to MiniGameFrozenIcebloom::CalcRenderOrder() const */

void __thiscall MiniGameFrozenIcebloom::CalcRenderOrder(MiniGameFrozenIcebloom *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* MiniGameFrozenIcebloom::~MiniGameFrozenIcebloom() */

void __thiscall MiniGameFrozenIcebloom::~MiniGameFrozenIcebloom(MiniGameFrozenIcebloom *this)

{
  *(undefined ***)this = &PTR_GetClass_066afa00;
  *(undefined ***)(this + 0x10) = &PTR__MiniGameFrozenIcebloom_066afcb8;
  GridItemAnimation::~GridItemAnimation((GridItemAnimation *)this);
  return;
}


/* non-virtual thunk to MiniGameFrozenIcebloom::~MiniGameFrozenIcebloom() */

void __thiscall MiniGameFrozenIcebloom::~MiniGameFrozenIcebloom(MiniGameFrozenIcebloom *this)

{
  ~MiniGameFrozenIcebloom(this + -0x10);
  return;
}


/* MiniGameFrozenIcebloom::~MiniGameFrozenIcebloom() */

void __thiscall MiniGameFrozenIcebloom::~MiniGameFrozenIcebloom(MiniGameFrozenIcebloom *this)

{
  ~MiniGameFrozenIcebloom(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to MiniGameFrozenIcebloom::~MiniGameFrozenIcebloom() */

void __thiscall MiniGameFrozenIcebloom::~MiniGameFrozenIcebloom(MiniGameFrozenIcebloom *this)

{
  ~MiniGameFrozenIcebloom(this + -0x10);
  return;
}


/* MiniGameFrozenIcebloom::MiniGameFrozenIcebloom() */

void __thiscall MiniGameFrozenIcebloom::MiniGameFrozenIcebloom(MiniGameFrozenIcebloom *this)

{
  GridItemAnimation::GridItemAnimation((GridItemAnimation *)this);
  *(undefined ***)this = &PTR_GetClass_066afa00;
  *(undefined ***)(this + 0x10) = &PTR__MiniGameFrozenIcebloom_066afcb8;
  return;
}


/* MiniGameFrozenIcebloom::StaticNew() */

MiniGameFrozenIcebloom * MiniGameFrozenIcebloom::StaticNew(void)

{
  MiniGameFrozenIcebloom *this;
  
  this = ::operator_new(0x1b0);
  MiniGameFrozenIcebloom(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameFrozenIcebloom::StaticClassInit() */

void MiniGameFrozenIcebloom::StaticClassInit(void)

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
    std::string::string(asStack_10,"MiniGameFrozenIcebloom");
    (*pcVar2)(plVar1,asStack_10,FUN_03895040,0x1b0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* MiniGameFrozenIcebloom::StaticGetClass() */

long * MiniGameFrozenIcebloom::StaticGetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGameFrozenIcebloom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameFrozenIcebloom::GetClass() const */

long * MiniGameFrozenIcebloom::GetClass(void)

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
  uVar2 = GridItemAnimation::StaticGetClass();
  (*pcVar3)(plVar1,"MiniGameFrozenIcebloom",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* MiniGameFrozenIcebloom::onAnimationDone(std::string const&) */

void __thiscall
MiniGameFrozenIcebloom::onAnimationDone(MiniGameFrozenIcebloom *this,string *param_1)

{
  bool bVar1;
  
  bVar1 = std::operator==(param_1,"attack");
  if (bVar1) {
    (**(code **)(*(long *)this + 0x48))(this);
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameFrozenIcebloom::takeEffect() */

void MiniGameFrozenIcebloom::takeEffect(void)

{
  bool bVar1;
  undefined8 *puVar2;
  Zombie *pZVar3;
  undefined8 local_40;
  undefined8 local_38;
  Insets aIStack_30 [16];
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
  Sexy::Insets::Insets(aIStack_30,0,0,9,5);
  EntityFinder::GetEntitiesInGridSquares(avStack_20,2,aIStack_30);
  local_40 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                      *)avStack_20);
  local_38 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    *)avStack_20);
  while (bVar1 = __gnu_cxx::operator!=
                           ((__normal_iterator *)&local_40,(__normal_iterator *)&local_38), bVar1) {
    puVar2 = (undefined8 *)std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_40);
    if (((RtObject *)*puVar2 != (RtObject *)0x0) &&
       (bVar1 = Sexy::RtObject::IsA<Zombie>((RtObject *)*puVar2), bVar1)) {
      pZVar3 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar2);
      Zombie::ApplyCondition((Zombie *)0x40a00000,0,pZVar3,1,1);
    }
    eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
              ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_40);
  }
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MiniGameFrozenIcebloom::onGridItemInitialize() */

void __thiscall MiniGameFrozenIcebloom::onGridItemInitialize(MiniGameFrozenIcebloom *this)

{
  int iVar1;
  PopAnimRig *pPVar2;
  undefined8 uVar3;
  float fVar4;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_80 [8];
  RtMixedPtr aRStack_78 [8];
  RtId aRStack_70 [8];
  string asStack_68 [8];
  string asStack_60 [16];
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemAnimation::onGridItemInitialize((GridItemAnimation *)this);
  fVar4 = (float)PVZ_T();
  *(float *)(this + 0x1a8) = fVar4 + 0.9;
  GridItemAnimation::setDefaultAnimRig((GridItemAnimation *)this);
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_80);
  std::string::string(asStack_60,"attack");
  ToolPacketData::GetProps();
  Sexy::RtMixedPtr::operator_cast_to_RtId(aRStack_78);
  std::string::string(asStack_68,"onAnimationDone");
  RtReflectionDelegate<Sexy::Delegate1<std::string_const&>>::RtReflectionDelegate
            ((RtReflectionDelegate<Sexy::Delegate1<std::string_const&>> *)aRStack_50,aRStack_70,
             asStack_68);
  PopAnimRig::PlayAndStop(pPVar2,asStack_60,0,aRStack_50);
  RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
  ::~RtReflectionDelegate(aRStack_50);
  std::string::~string(asStack_68);
  nop();
  Sexy::RtId::~RtId(aRStack_70);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_78);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_80);
  GridItemAnimation::GetAnimRig();
  pPVar2 = (PopAnimRig *)
           Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  std::string::string(asStack_60,"custom_01");
  PopAnimRig::SetLayerVisibility(pPVar2,asStack_60,false);
  std::string::~string(asStack_60);
  nop();
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)asStack_68);
  uVar3 = Effect_ScreenFade::Create();
  if (((DAT_06ab61b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06ab61b8), iVar1 != 0)) {
    Sexy::Insets::Insets((Insets *)&DAT_06ab61a8,0x46,0xb4,0xfa,100);
    __cxa_guard_release(&DAT_06ab61b8);
  }
  if (((DAT_06ab6248 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_06ab6248), iVar1 != 0)) {
    Sexy::Insets::Insets((Insets *)&DAT_06ab6230,0xff,0xff,0xff,200);
    __cxa_guard_release(&DAT_06ab6248);
  }
  Sexy::Insets::Insets((Insets *)asStack_60,(Insets *)&DAT_06ab61a8);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f333333,0,0x3f800000,uVar3,1,asStack_60,2);
  Sexy::Insets::Insets((Insets *)asStack_60,(Insets *)&DAT_06ab6230);
  Effect_ScreenFade::AddFade((Effect_ScreenFade *)0x3f800000,0,0x3f800000,uVar3,0,asStack_60,2);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* MiniGameFrozenIcebloom::onUpdate() */

void __thiscall MiniGameFrozenIcebloom::onUpdate(MiniGameFrozenIcebloom *this)

{
  float fVar1;
  undefined4 uVar2;
  
  GridItemAnimation::onUpdate((GridItemAnimation *)this);
  fVar1 = (float)PVZ_T();
  if (fVar1 <= *(float *)(this + 0x1a8)) {
    return;
  }
  uVar2 = PVZ_EOT();
  *(undefined4 *)(this + 0x1a8) = uVar2;
  takeEffect();
  return;
}

