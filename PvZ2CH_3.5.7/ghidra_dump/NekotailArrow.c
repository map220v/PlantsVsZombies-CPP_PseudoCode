// Class: NekotailArrow


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NekotailArrow::StaticClassInit() */

void NekotailArrow::StaticClassInit(void)

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
    std::string::string(asStack_10,"NekotailArrow");
    (*pcVar2)(plVar1,asStack_10,FUN_04141278,0x1c0,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* NekotailArrow::StaticGetClass() */

long * NekotailArrow::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"NekotailArrow",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NekotailArrow::GetClass() const */

long * NekotailArrow::GetClass(void)

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
  (*pcVar3)(plVar1,"NekotailArrow",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* NekotailArrow::NekotailArrow() */

void __thiscall NekotailArrow::NekotailArrow(NekotailArrow *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_067eddd0;
  *(undefined ***)(this + 0x10) = &PTR__NekotailArrow_067edfc0;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  return;
}


/* NekotailArrow::StaticNew() */

NekotailArrow * NekotailArrow::StaticNew(void)

{
  NekotailArrow *this;
  
  this = ::operator_new(0x1c0);
  NekotailArrow(this);
  return this;
}


/* NekotailArrow::~NekotailArrow() */

void __thiscall NekotailArrow::~NekotailArrow(NekotailArrow *this)

{
  *(undefined ***)this = &PTR_GetClass_067eddd0;
  *(undefined ***)(this + 0x10) = &PTR__NekotailArrow_067edfc0;
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to NekotailArrow::~NekotailArrow() */

void __thiscall NekotailArrow::~NekotailArrow(NekotailArrow *this)

{
  ~NekotailArrow(this + -0x10);
  return;
}


/* NekotailArrow::~NekotailArrow() */

void __thiscall NekotailArrow::~NekotailArrow(NekotailArrow *this)

{
  ~NekotailArrow(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to NekotailArrow::~NekotailArrow() */

void __thiscall NekotailArrow::~NekotailArrow(NekotailArrow *this)

{
  ~NekotailArrow(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* NekotailArrow::OnCollideEntity(BoardEntity*) */

void __thiscall NekotailArrow::OnCollideEntity(NekotailArrow *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *this_00;
  bool bVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  RtWeakPtr<Sexy::SoundResource> aRStack_20 [8];
  undefined8 local_18;
  undefined8 local_10;
  long local_8;
  
  uVar2 = 0;
  local_8 = ___stack_chk_guard;
  this_00 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             *)(this + 0x1a8);
  ToolPacketData::GetProps();
  Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_20,(RtWeakPtrBase *)&local_10);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_10);
  uVar3 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(this_00);
  uVar4 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(this_00);
  local_18 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<BoardEntity>>
                       (uVar3,uVar4,aRStack_20);
  local_10 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(this_00);
  bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_18,(__normal_iterator *)&local_10);
  if (!bVar1) {
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              this_00,(RtWeakPtr *)aRStack_20);
    uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_20);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

