// Class: BearberryLevel5Projectile


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BearberryLevel5Projectile::StaticClassInit() */

void BearberryLevel5Projectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"BearberryLevel5Projectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04256524,0x1d8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* BearberryLevel5Projectile::StaticGetClass() */

long * BearberryLevel5Projectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"BearberryLevel5Projectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BearberryLevel5Projectile::GetClass() const */

long * BearberryLevel5Projectile::GetClass(void)

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
  (*pcVar3)(plVar1,"BearberryLevel5Projectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* BearberryLevel5Projectile::BearberryLevel5Projectile() */

void __thiscall
BearberryLevel5Projectile::BearberryLevel5Projectile(BearberryLevel5Projectile *this)

{
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_06819f80;
  *(undefined ***)(this + 0x10) = &PTR__BearberryLevel5Projectile_0681a170;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1a8));
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1c0));
  return;
}


/* BearberryLevel5Projectile::StaticNew() */

BearberryLevel5Projectile * BearberryLevel5Projectile::StaticNew(void)

{
  BearberryLevel5Projectile *this;
  
  this = ::operator_new(0x1d8);
  BearberryLevel5Projectile(this);
  return this;
}


/* BearberryLevel5Projectile::~BearberryLevel5Projectile() */

void __thiscall
BearberryLevel5Projectile::~BearberryLevel5Projectile(BearberryLevel5Projectile *this)

{
  *(undefined ***)this = &PTR_GetClass_06819f80;
  *(undefined ***)(this + 0x10) = &PTR__BearberryLevel5Projectile_0681a170;
  std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::~vector
            ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)
             (this + 0x1c0));
  std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::~vector
            ((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
             (this + 0x1a8));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to BearberryLevel5Projectile::~BearberryLevel5Projectile() */

void __thiscall
BearberryLevel5Projectile::~BearberryLevel5Projectile(BearberryLevel5Projectile *this)

{
  ~BearberryLevel5Projectile(this + -0x10);
  return;
}


/* BearberryLevel5Projectile::~BearberryLevel5Projectile() */

void __thiscall
BearberryLevel5Projectile::~BearberryLevel5Projectile(BearberryLevel5Projectile *this)

{
  ~BearberryLevel5Projectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to BearberryLevel5Projectile::~BearberryLevel5Projectile() */

void __thiscall
BearberryLevel5Projectile::~BearberryLevel5Projectile(BearberryLevel5Projectile *this)

{
  ~BearberryLevel5Projectile(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* BearberryLevel5Projectile::OnCollideEntity(BoardEntity*) */

void __thiscall
BearberryLevel5Projectile::OnCollideEntity(BearberryLevel5Projectile *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  undefined1 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  GridItemRenaiStatue *pGVar6;
  Zombie *this_00;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ZombieTosserSubSystem *pZVar10;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_50 [72];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (param_1 != (BoardEntity *)0x0) {
    pGVar6 = Sexy::RtObject::Cast<GridItemRenaiStatue>((RtObject *)param_1);
    if (pGVar6 != (GridItemRenaiStatue *)0x0) {
      uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
      (**(code **)(*(long *)this + 0x48))(this);
      goto LAB_04256a20;
    }
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if (this_00 != (Zombie *)0x0) {
      pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)(this + 0x1c0);
      uVar7 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(pvVar1);
      uVar8 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::end(pvVar1);
      ToolPacketData::GetProps();
      local_68 = std::
                 find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<Zombie>*,std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>>,Sexy::RtWeakPtr<GameObject>>
                           (uVar7,uVar8,aRStack_70);
      local_60 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end(pvVar1);
      bVar3 = __gnu_cxx::operator==((__normal_iterator *)&local_68,(__normal_iterator *)&local_60);
      Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
      if ((bVar3) &&
         ((iVar5 = Zombie::GetSizeType(this_00), iVar5 == 0 ||
          (iVar5 = Zombie::GetSizeType(this_00), iVar5 == 1)))) {
        cVar4 = Zombie::HasCondition(this_00,0x7a);
        if (cVar4 == '\0') {
          puVar9 = (undefined8 *)
                   std::
                   _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                   ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                  *)this_00);
          local_60._0_4_ = (float)*puVar9;
          local_58 = *(undefined4 *)(puVar9 + 1);
          local_60._0_4_ = (float)local_60 + 80.0;
          local_60._4_4_ = (undefined4)((ulong)*puVar9 >> 0x20);
          if ((float)local_60 < 800.0) {
            pZVar10 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
            RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_50);
            ZombieTosserSubSystem::LaunchZombie
                      ((ZombieTosserSubSystem *)0x42200000,0x3f19999a,pZVar10,this_00,
                       (RtWeakPtr<Sexy::SoundResource> *)&local_60,aRStack_50,0);
            RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
            ::~RtReflectionDelegate
                      ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                        *)aRStack_50);
          }
        }
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                  ((RtWeakPtr<Sexy::SoundResource> *)&local_60,(RtWeakPtrBase *)&local_68);
        std::vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>>::push_back
                  ((vector<Sexy::RtWeakPtr<Zombie>,std::allocator<Sexy::RtWeakPtr<Zombie>>> *)pvVar1
                   ,(RtWeakPtr *)&local_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
      }
    }
  }
  pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            *)(this + 0x1a8);
  uVar7 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::begin(pvVar1);
  uVar8 = std::
          vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
          ::end(pvVar1);
  ToolPacketData::GetProps();
  local_68 = std::
             find<__gnu_cxx::__normal_iterator<Sexy::RtWeakPtr<BoardEntity>*,std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>>,Sexy::RtWeakPtr<GameObject>>
                       (uVar7,uVar8,aRStack_70);
  local_60 = std::
             vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
             ::end(pvVar1);
  bVar3 = __gnu_cxx::operator!=((__normal_iterator *)&local_68,(__normal_iterator *)&local_60);
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_70);
  uVar2 = 0;
  if (!bVar3) {
    ToolPacketData::GetProps();
    Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
              ((RtWeakPtr<Sexy::SoundResource> *)&local_60,(RtWeakPtrBase *)&local_68);
    std::vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>>::
    push_back((vector<Sexy::RtWeakPtr<BoardEntity>,std::allocator<Sexy::RtWeakPtr<BoardEntity>>> *)
              pvVar1,(RtWeakPtr *)&local_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_60);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_68);
    uVar2 = Projectile::OnCollideEntity((Projectile *)this,param_1);
  }
LAB_04256a20:
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

