// Class: LargeStrawburstProjectile


/* LargeStrawburstProjectile::~LargeStrawburstProjectile() */

void __thiscall
LargeStrawburstProjectile::~LargeStrawburstProjectile(LargeStrawburstProjectile *this)

{
  *(undefined ***)this = &PTR_GetClass_0681f460;
  *(undefined ***)(this + 0x10) = &PTR__LargeStrawburstProjectile_0681f650;
  StrawburstProjectile::~StrawburstProjectile((StrawburstProjectile *)this);
  return;
}


/* non-virtual thunk to LargeStrawburstProjectile::~LargeStrawburstProjectile() */

void __thiscall
LargeStrawburstProjectile::~LargeStrawburstProjectile(LargeStrawburstProjectile *this)

{
  ~LargeStrawburstProjectile(this + -0x10);
  return;
}


/* LargeStrawburstProjectile::~LargeStrawburstProjectile() */

void __thiscall
LargeStrawburstProjectile::~LargeStrawburstProjectile(LargeStrawburstProjectile *this)

{
  ~LargeStrawburstProjectile(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to LargeStrawburstProjectile::~LargeStrawburstProjectile() */

void __thiscall
LargeStrawburstProjectile::~LargeStrawburstProjectile(LargeStrawburstProjectile *this)

{
  ~LargeStrawburstProjectile(this + -0x10);
  return;
}


/* LargeStrawburstProjectile::LargeStrawburstProjectile() */

void __thiscall
LargeStrawburstProjectile::LargeStrawburstProjectile(LargeStrawburstProjectile *this)

{
  StrawburstProjectile::StrawburstProjectile((StrawburstProjectile *)this);
  *(undefined ***)this = &PTR_GetClass_0681f460;
  *(undefined ***)(this + 0x10) = &PTR__LargeStrawburstProjectile_0681f650;
  return;
}


/* LargeStrawburstProjectile::StaticNew() */

LargeStrawburstProjectile * LargeStrawburstProjectile::StaticNew(void)

{
  LargeStrawburstProjectile *this;
  
  this = ::operator_new(0x1a8);
  LargeStrawburstProjectile(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LargeStrawburstProjectile::StaticClassInit() */

void LargeStrawburstProjectile::StaticClassInit(void)

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
    std::string::string(asStack_10,"LargeStrawburstProjectile");
    (*pcVar2)(plVar1,asStack_10,FUN_0426948c,0x1a8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* LargeStrawburstProjectile::StaticGetClass() */

long * LargeStrawburstProjectile::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"LargeStrawburstProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* LargeStrawburstProjectile::GetClass() const */

long * LargeStrawburstProjectile::GetClass(void)

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
  (*pcVar3)(plVar1,"LargeStrawburstProjectile",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LargeStrawburstProjectile::OnCollideGround() */

void __thiscall LargeStrawburstProjectile::OnCollideGround(LargeStrawburstProjectile *this)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  BoardTransforms *this_00;
  undefined8 *puVar4;
  StrawburstJam *pSVar5;
  int iVar6;
  int iVar7;
  Board *this_01;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  RtWeakPtr<Sexy::SoundResource> aRStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> avStack_20 [24];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  if (this[0x1a5] == (LargeStrawburstProjectile)0x0) {
    uVar3 = Projectile::OnCollideGround((Projectile *)this);
  }
  else {
    this_00 = (BoardTransforms *)
              std::
              _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
              ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                             *)this);
    BoardTransforms::BoardSpaceToGrid(this_00,*(float *)this_00,*(float *)(this_00 + 4));
    if (((local_48 != -1) && (local_44 != -1)) && (iVar7 = local_48 + -1, iVar7 <= local_48 + 1)) {
      do {
        iVar6 = local_44 + -1;
        if (iVar6 <= local_44 + 1) {
          do {
            Sexy::Point::Point((Point *)&local_40,iVar7,iVar6);
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
                                     ((__normal_iterator *)&local_30,(__normal_iterator *)&local_28)
                  , bVar1) {
              puVar4 = (undefined8 *)
                       std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_30);
              pSVar5 = Sexy::RtObject::Cast<StrawburstJam>((RtObject *)*puVar4);
              if (pSVar5 != (StrawburstJam *)0x0) {
                StrawburstJam::RefreshJam(pSVar5);
              }
              eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                        ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_30);
            }
            cVar2 = FUN_0426bf74((Point *)&local_40);
            if (cVar2 != '\0') {
              this_01 = *(Board **)(gLawnApp + 0x9f0);
              std::string::string((string *)&local_30,"strawburst_jam");
              Board::AddGridItem(this_01,(string *)&local_30,local_40,local_3c,1);
              nop();
              ToolPacketData::GetProps();
              Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr(aRStack_38,(RtWeakPtrBase *)&local_28)
              ;
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)&local_28);
              std::string::~string((string *)&local_30);
              nop();
              bVar1 = Sexy::RtWeakPtr::operator_cast_to_bool((RtWeakPtr *)aRStack_38);
              if (bVar1) {
                pSVar5 = (StrawburstJam *)
                         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get
                                   ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
                StrawburstJam::InitJam(pSVar5,3.0,3);
              }
              Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr
                        ((RtWeakPtr<Sexy::ResourceInfo> *)aRStack_38);
            }
            iVar6 = iVar6 + 1;
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)avStack_20);
          } while (iVar6 <= local_44 + 1);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 <= local_48 + 1);
    }
    uVar3 = (**(code **)(*(long *)this + 0x168))(this,0);
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}

