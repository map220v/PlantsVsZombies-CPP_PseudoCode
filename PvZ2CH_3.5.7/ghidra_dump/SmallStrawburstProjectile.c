// Class: SmallStrawburstProjectile


/* SmallStrawburstProjectile::~SmallStrawburstProjectile() */

void __thiscall
SmallStrawburstProjectile::~SmallStrawburstProjectile(SmallStrawburstProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0681f020;
  *(undefined ***)(this + 0x10) = &PTR__SmallStrawburstProjectile_0681f210;
  StrawburstProjectile::~StrawburstProjectile((StrawburstProjectile *)this);
  return;
}


/* non-virtual thunk to SmallStrawburstProjectile::~SmallStrawburstProjectile() */

void __thiscall
SmallStrawburstProjectile::~SmallStrawburstProjectile(SmallStrawburstProjectile *this)

{
  ~SmallStrawburstProjectile(this + -0x10);
  return;
}


/* SmallStrawburstProjectile::~SmallStrawburstProjectile() */

void __thiscall
SmallStrawburstProjectile::~SmallStrawburstProjectile(SmallStrawburstProjectile *this)

{
  ~SmallStrawburstProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to SmallStrawburstProjectile::~SmallStrawburstProjectile() */

void __thiscall
SmallStrawburstProjectile::~SmallStrawburstProjectile(SmallStrawburstProjectile *this)

{
  ~SmallStrawburstProjectile(this + -0x10);
  return;
}


/* SmallStrawburstProjectile::SmallStrawburstProjectile() */

void __thiscall
SmallStrawburstProjectile::SmallStrawburstProjectile(SmallStrawburstProjectile *this)

{
  StrawburstProjectile::StrawburstProjectile((StrawburstProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_0681f020;
  *(undefined ***)(this + 0x10) = &PTR__SmallStrawburstProjectile_0681f210;
  return;
}


/* SmallStrawburstProjectile::StaticNew() */

SmallStrawburstProjectile * SmallStrawburstProjectile::StaticNew(void)

{
  SmallStrawburstProjectile *this;
  
  this = ::operator_new(0x1a8);
  SmallStrawburstProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SmallStrawburstProjectile::StaticClassInit() */

void SmallStrawburstProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"SmallStrawburstProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_04268f9c,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* SmallStrawburstProjectile::StaticGetClass() */

long * SmallStrawburstProjectile::StaticGetClass(void)

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
  uVar2 = StrawburstProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"SmallStrawburstProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* SmallStrawburstProjectile::GetClass() const */

long * SmallStrawburstProjectile::GetClass(void)

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
  uVar2 = StrawburstProjectile::StaticGetClass();
  (*pcVar3)(plVar1,"SmallStrawburstProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SmallStrawburstProjectile::OnCollideEntity(BoardEntity*) */

void __thiscall
SmallStrawburstProjectile::OnCollideEntity(SmallStrawburstProjectile *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  BoardTransforms *this_00;
  undefined8 *puVar4;
  StrawburstJam *pSVar5;
  Board *this_01;
  int local_40;
  int local_3c;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a5] != (SmallStrawburstProjectile)0x0) {
    this_00 = (BoardTransforms *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
    if ((local_40 != -1) && (local_3c != -1)) {
      std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector(avStack_20);
      EntityFinder::GetEntitiesAtGridSquare(avStack_20,4,local_40,local_3c);
      local_30 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                          *)avStack_20);
      local_28 = std::
                 vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                 ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        *)avStack_20);
      while (bVar1 = __gnu_cxx::operator!=
                               ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28),
            bVar1) {
        puVar4 = (undefined8 *)
                 std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
        pSVar5 = Sexy::RtObject::Cast<StrawburstJam>((RtObject *)*puVar4);
        if (pSVar5 != (StrawburstJam *)0x0) {
          StrawburstJam::RefreshJam(pSVar5);
          uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
          goto LAB_0426d768;
        }
        eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                  ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
      }
      cVar2 = FUN_0426bf74(&local_40);
      if (cVar2 != '\0') {
        this_01 = *(Board **)(gLawnApp + 0x9f0);
        std::string::string((string *)&local_30,"strawburst_jam");
        Board::AddGridItem(this_01,(string *)&local_30,local_40,local_3c,1);
        nop();
        ToolPacketData::GetProps();
        Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)&local_28);
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
        std::string::~string((string *)&local_30);
        nop();
        bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
        if (bVar1) {
          pSVar5 = (StrawburstJam *)
                   Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                             ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
          StrawburstJam::InitJam(pSVar5,2.0,1);
        }
        Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38)
        ;
      }
      uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
LAB_0426d768:
      std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
      goto LAB_0426d784;
    }
  }
  uVar3 = Projectile::OnCollideEntity((Projectile *)this,param_1);
LAB_0426d784:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

