// Class: GridItemSushi


/* GridItemSushi::onGridItemInitialize() */

void __thiscall GridItemSushi::onGridItemInitialize(GridItemSushi *this)

{
  GridItemBreakableTarget::onGridItemInitialize((GridItemBreakableTarget *)this);
  RealObject::JoinTeam((RealObject *)this,1);
  return;
}


/* GridItemSushi::CalcRenderOrder() const */

void __thiscall GridItemSushi::CalcRenderOrder(GridItemSushi *this)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0464fdf0(*(undefined4 *)(this + 0x134));
  Board::MakeRenderOrder(0x61e68,uVar1,0);
  return;
}


/* non-virtual thunk to GridItemSushi::CalcRenderOrder() const */

void __thiscall GridItemSushi::CalcRenderOrder(GridItemSushi *this)

{
  CalcRenderOrder(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSushi::StaticClassInit() */

void GridItemSushi::StaticClassInit(void)

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
    std::string::string(asStack_10,"GridItemSushi");
    (*pcVar2)(plVar1,asStack_10,FUN_04650380,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSushi::StaticGetClass() */

long * GridItemSushi::StaticGetClass(void)

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
  uVar2 = GridItemBreakableTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSushi",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSushi::GetClass() const */

long * GridItemSushi::GetClass(void)

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
  uVar2 = GridItemBreakableTarget::StaticGetClass();
  (*pcVar3)(plVar1,"GridItemSushi",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* GridItemSushi::~GridItemSushi() */

void __thiscall GridItemSushi::~GridItemSushi(GridItemSushi *this)

{
  *(undefined ***)this = &PTR_GetClass_06887650;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSushi_06887930;
  GridItemBreakableTarget::~GridItemBreakableTarget((GridItemBreakableTarget *)this);
  return;
}


/* non-virtual thunk to GridItemSushi::~GridItemSushi() */

void __thiscall GridItemSushi::~GridItemSushi(GridItemSushi *this)

{
  ~GridItemSushi(this + -0x10);
  return;
}


/* GridItemSushi::~GridItemSushi() */

void __thiscall GridItemSushi::~GridItemSushi(GridItemSushi *this)

{
  ~GridItemSushi(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to GridItemSushi::~GridItemSushi() */

void __thiscall GridItemSushi::~GridItemSushi(GridItemSushi *this)

{
  ~GridItemSushi(this + -0x10);
  return;
}


/* GridItemSushi::GridItemSushi() */

void __thiscall GridItemSushi::GridItemSushi(GridItemSushi *this)

{
  GridItemBreakableTarget::GridItemBreakableTarget((GridItemBreakableTarget *)this);
  *(undefined ***)this = &PTR_GetClass_06887650;
  *(undefined ***)(this + 0x10) = &PTR__GridItemSushi_06887930;
  return;
}


/* GridItemSushi::StaticNew() */

GridItemSushi * GridItemSushi::StaticNew(void)

{
  GridItemSushi *this;
  
  this = ::operator_new(0x1c8);
  GridItemSushi(this);
  return this;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSushi::TakeDamage(DamageInfo const&) */

void __thiscall GridItemSushi::TakeDamage(GridItemSushi *this,DamageInfo *param_1)

{
  Zombie *pZVar1;
  RtObject *this_00;
  GridItemSushiProps *pGVar2;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItemBreakableTarget::TakeDamage((GridItemBreakableTarget *)this,param_1);
  if (((*(RtObject **)param_1 != (RtObject *)0x0) &&
      (pZVar1 = Sexy::RtObject::Cast<Zombie>(*(RtObject **)param_1), pZVar1 != (Zombie *)0x0)) &&
     (*(long *)(param_1 + 0x10) == 0x40000)) {
    GridItem::GetProps();
    this_00 = (RtObject *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_10);
    pGVar2 = Sexy::RtObject::Cast<GridItemSushiProps>(this_00);
                    /* WARNING: Load size is inaccurate */
    Zombie::ApplyCondition(*(Zombie **)(pGVar2 + 0x138),0,pZVar1,0xd,1);
    Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_10);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSushi::onUpdate() */

void GridItemSushi::onUpdate(void)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  GridItemBreakableTarget *in_x0;
  RtObject *this;
  GridItemSushiProps *pGVar5;
  long lVar6;
  undefined8 *puVar7;
  Zombie *this_00;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined4 in_s1;
  undefined4 uVar14;
  undefined4 in_s2;
  undefined4 uVar15;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_58 [2];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  uVar12 = 0;
  GridItemBreakableTarget::onUpdate(in_x0);
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38);
  iVar3 = FUN_0464fdec(*(undefined4 *)(in_x0 + 0x130));
  iVar4 = FUN_0464fdf0(*(undefined4 *)(in_x0 + 0x134));
  Sexy::Insets::Insets((Insets *)&local_20,iVar3,iVar4 + -1,3,3);
  EntityFinder::GetEntitiesInGridSquares
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)&local_38,2,
             (Insets *)&local_20);
  GridItem::GetProps();
  this = (RtObject *)
         Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  pGVar5 = Sexy::RtObject::Cast<GridItemSushiProps>(this);
  std::vector<std::string,std::allocator<std::string>>::vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20,(vector *)(pGVar5 + 0x140)
            );
  Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr((RtWeakPtr<Sexy::ResourceInfo> *)&local_48);
  uVar9 = local_38;
  lVar6 = FUN_0464fe60(local_38,local_30);
  if (lVar6 != 0) {
    do {
      puVar7 = (undefined8 *)FUN_0464fe6c(uVar9,uVar12);
      this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)*puVar7);
      if ((((this_00 != (Zombie *)0x0) && (cVar1 = Zombie::IsBoss(this_00), cVar1 == '\0')) &&
          (cVar1 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar1 == '\0')) &&
         (cVar1 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar1 == '\0')) {
        uVar9 = FUN_04650d78(local_20);
        uVar10 = FUN_04650dc8(local_18);
        uVar11 = Zombie::GetTypeName(this_00);
        local_58[0] = std::
                      find<__gnu_cxx::__normal_iterator<std::string_const*,std::vector<std::string,std::allocator<std::string>>>,std::string>
                                (uVar9,uVar10,uVar11);
        local_48 = FUN_04650dc8(local_18);
        bVar2 = __gnu_cxx::operator!=((__normal_iterator *)local_58,(__normal_iterator *)&local_48);
        if (((!bVar2) && (cVar1 = Zombie::HasCondition(this_00,0x53), cVar1 == '\0')) &&
           (cVar1 = Zombie::HasCondition(this_00,0x54), cVar1 == '\0')) {
          cVar1 = Zombie::HasCondition(this_00,0x52);
          if (cVar1 == '\0') {
            Zombie::RemoveAttachedEffect(this_00,"gluttonous");
            local_68 = (**(code **)(*(long *)this_00 + 0x4c8))(this_00);
            uVar14 = 0;
            uVar15 = 0;
            local_64 = in_s1;
            local_60 = in_s2;
            EATextSquish::Vec3::Vec3((Vec3 *)local_58,0.0,0.0,0.0);
            uVar13 = Sexy::SexyVector3::operator-((SexyVector3 *)&local_68,(SexyVector3 *)local_58);
            local_48 = CONCAT44(uVar14,uVar13);
            local_40 = uVar15;
            Zombie::AddAttachedEffect
                      (this_00,"gluttonous","POPANIM_EFFECTS_ZOMBIE_SUSHI","animation",
                       (SexyVector3 *)&local_48,1,true);
            in_s2 = uVar15;
          }
          in_s1 = 0;
          Zombie::ApplyCondition((Zombie *)0x3f000000,this_00,0x52,1);
        }
      }
      uVar9 = local_38;
      uVar12 = uVar12 + 1;
      uVar8 = FUN_0464fe60(local_38,local_30);
    } while (uVar12 < uVar8);
  }
  std::vector<std::string,std::allocator<std::string>>::~vector
            ((vector<std::string,std::allocator<std::string>> *)&local_20);
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)&local_38);
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GridItemSushi::GatherPlantingRestrictions(PlantType const*, std::vector<PlantingReason,
   std::allocator<PlantingReason> >*) const */

void __thiscall
GridItemSushi::GatherPlantingRestrictions(GridItemSushi *this,PlantType *param_1,vector *param_2)

{
  undefined4 local_c;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  GridItem::GatherPlantingRestrictions((GridItem *)this,param_1,param_2);
  local_c = 0x66;
  std::vector<PlantingReason,std::allocator<PlantingReason>>::push_back
            ((vector<PlantingReason,std::allocator<PlantingReason>> *)param_2,
             (PlantingReason *)&local_c);
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* GridItemSushi::CanBeTargetedBy(BoardEntity const*) const */

undefined8 __thiscall GridItemSushi::CanBeTargetedBy(GridItemSushi *this,BoardEntity *param_1)

{
  bool bVar1;
  char cVar2;
  Zombie *this_00;
  ZombieHeianSushi *pZVar3;
  undefined8 uVar4;
  
  if ((param_1 != (BoardEntity *)0x0) &&
     ((bVar1 = Sexy::RtObject::IsA<Plant>((RtObject *)param_1), bVar1 ||
      ((this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1), this_00 != (Zombie *)0x0 &&
       ((((cVar2 = Zombie::IsBoss(this_00), cVar2 != '\0' ||
          (pZVar3 = Sexy::RtObject::Cast<ZombieHeianSushi>((RtObject *)param_1),
          pZVar3 != (ZombieHeianSushi *)0x0)) ||
         (cVar2 = (**(code **)(*(long *)this_00 + 0x4d8))(this_00), cVar2 != '\0')) ||
        (cVar2 = (**(code **)(*(long *)this_00 + 0x508))(this_00), cVar2 != '\0')))))))) {
    return 0;
  }
  uVar4 = EA::Text::GlyphCache_Memory::EndUpdate((TextureInfo *)this);
  return uVar4;
}

