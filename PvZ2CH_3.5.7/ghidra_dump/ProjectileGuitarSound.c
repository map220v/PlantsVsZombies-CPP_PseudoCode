// Class: ProjectileGuitarSound


/* ProjectileGuitarSound::onUpdate(float) */

void ProjectileGuitarSound::onUpdate(float param_1)

{
  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
  *in_x0;
  float *pfVar1;
  
  pfVar1 = (float *)std::
                    _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                    ::_M_leftmost(in_x0);
  if ((float)*(int *)(in_x0 + 0x1a8) <= *pfVar1) {
    (**(code **)(*(long *)in_x0 + 0x48))();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectileGuitarSound::StaticClassInit() */

void ProjectileGuitarSound::StaticClassInit(void)

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
    std::string::string(asStack_10,"ProjectileGuitarSound");
    (*pcVar2)(plVar1,asStack_10,FUN_037e1b34,0x1c8,0);
    std::string::~string(asStack_10);
    nop();
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


/* ProjectileGuitarSound::StaticGetClass() */

long * ProjectileGuitarSound::StaticGetClass(void)

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
  (*pcVar3)(plVar1,"ProjectileGuitarSound",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ProjectileGuitarSound::GetClass() const */

long * ProjectileGuitarSound::GetClass(void)

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
  (*pcVar3)(plVar1,"ProjectileGuitarSound",uVar2,StaticNew);
  StaticClassInit();
  return sClass;
}


/* ProjectileGuitarSound::SetSuccessCount(int) */

void __thiscall ProjectileGuitarSound::SetSuccessCount(ProjectileGuitarSound *this,int param_1)

{
  int iVar1;
  
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  *(int *)(this + 0x1a8) = iVar1 * 5 + 200;
  if (param_1 - 6U < 10) {
    iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
    *(int *)(this + 0x1ac) = param_1;
    *(int *)(this + 0x1a8) = (int)((double)iVar1 * 7.5 + 200.0);
    return;
  }
  if (param_1 < 0x10) {
    *(int *)(this + 0x1ac) = param_1;
    return;
  }
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  *(int *)(this + 0x1ac) = param_1;
  *(int *)(this + 0x1a8) = iVar1 * 10 + 200;
  return;
}


/* ProjectileGuitarSound::ProjectileGuitarSound() */

void __thiscall ProjectileGuitarSound::ProjectileGuitarSound(ProjectileGuitarSound *this)

{
  int iVar1;
  
  Projectile::Projectile((Projectile *)this);
  *(undefined ***)this = &PTR_GetClass_0669b320;
  *(undefined ***)(this + 0x10) = &PTR__ProjectileGuitarSound_0669b510;
  std::vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>>::vector
            ((vector<Sexy::DataElement*,std::allocator<Sexy::DataElement*>> *)(this + 0x1b0));
  iVar1 = BoardConstants::GRIDSQUARE_WIDTH();
  *(int *)(this + 0x1a8) = iVar1 * 5 + 0xb4;
  return;
}


/* ProjectileGuitarSound::StaticNew() */

ProjectileGuitarSound * ProjectileGuitarSound::StaticNew(void)

{
  ProjectileGuitarSound *this;
  
  this = ::operator_new(0x1c8);
  ProjectileGuitarSound(this);
  return this;
}


/* ProjectileGuitarSound::~ProjectileGuitarSound() */

void __thiscall ProjectileGuitarSound::~ProjectileGuitarSound(ProjectileGuitarSound *this)

{
  *(undefined ***)this = &PTR_GetClass_0669b320;
  *(undefined ***)(this + 0x10) = &PTR__ProjectileGuitarSound_0669b510;
  std::vector<BoardEntity*,std::allocator<BoardEntity*>>::~vector
            ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)(this + 0x1b0));
  Projectile::~Projectile((Projectile *)this);
  return;
}


/* non-virtual thunk to ProjectileGuitarSound::~ProjectileGuitarSound() */

void __thiscall ProjectileGuitarSound::~ProjectileGuitarSound(ProjectileGuitarSound *this)

{
  ~ProjectileGuitarSound(this + -0x10);
  return;
}


/* ProjectileGuitarSound::~ProjectileGuitarSound() */

void __thiscall ProjectileGuitarSound::~ProjectileGuitarSound(ProjectileGuitarSound *this)

{
  ~ProjectileGuitarSound(this);
  AK::FreeHook(this);
  return;
}


/* non-virtual thunk to ProjectileGuitarSound::~ProjectileGuitarSound() */

void __thiscall ProjectileGuitarSound::~ProjectileGuitarSound(ProjectileGuitarSound *this)

{
  ~ProjectileGuitarSound(this + -0x10);
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectileGuitarSound::damageEntity(BoardEntity*) */

void __thiscall
ProjectileGuitarSound::damageEntity(ProjectileGuitarSound *this,BoardEntity *param_1)

{
  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
  *pvVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  Zombie *this_00;
  PlantGroup *pPVar6;
  undefined8 *puVar7;
  RtWeakPtrBase *pRVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  Plant *pPVar12;
  ZombieTosserSubSystem *pZVar13;
  BoardEntity *local_d8;
  RtWeakPtr<Sexy::ResourceInfo> aRStack_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  RtReflectionDelegate<Sexy::Delegate1<Zombie*>> aRStack_b0 [72];
  undefined8 local_68 [3];
  undefined8 local_50;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  local_d8 = param_1;
  if (param_1 != (BoardEntity *)0x0) {
    this_00 = Sexy::RtObject::Cast<Zombie>((RtObject *)param_1);
    if ((this_00 == (Zombie *)0x0) ||
       (cVar2 = RealObject::IsOnOpposingTeam(this_00,1), cVar2 == '\0')) {
      if ((local_d8 != (BoardEntity *)0x0) &&
         (pPVar6 = Sexy::RtObject::Cast<PlantGroup>((RtObject *)local_d8),
         pPVar6 != (PlantGroup *)0x0)) {
        puVar7 = (undefined8 *)PlantGroup::Plants();
        pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  *)(this + 0x1b0);
        local_c8 = FUN_037e2e7c(*puVar7);
        local_c0 = FUN_037e2ecc(puVar7[1]);
        while (bVar3 = __gnu_cxx::operator!=
                                 ((__normal_iterator *)&local_c8,(__normal_iterator *)&local_c0),
              bVar3) {
          pRVar8 = (RtWeakPtrBase *)
                   std::__exception_ptr::exception_ptr::_M_get((exception_ptr *)&local_c8);
          Sexy::RtWeakPtr<Sexy::SoundResource>::RtWeakPtr
                    ((RtWeakPtr<Sexy::SoundResource> *)aRStack_d0,pRVar8);
          uVar9 = std::
                  vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                  ::begin(pvVar1);
          uVar10 = std::
                   vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   ::end(pvVar1);
          local_b8 = std::
                     find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,BoardEntity*>
                               (uVar9,uVar10,&local_d8);
          local_68[0] = std::
                        vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                        ::end(pvVar1);
          bVar3 = __gnu_cxx::operator==
                            ((__normal_iterator *)&local_b8,(__normal_iterator *)local_68);
          if (bVar3) {
            lVar11 = Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_d0);
            cVar2 = FUN_037e1354(*(undefined1 *)(lVar11 + 0x278));
            if (cVar2 == '\0') {
              iVar4 = *(int *)(this + 0x1ac);
            }
            else {
              pPVar12 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_d0);
              Plant::SetIsSleepping(pPVar12,false,-1.0);
              iVar4 = *(int *)(this + 0x1ac);
            }
            if (iVar4 == 0x14) {
              pPVar12 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_d0);
              Plant::SetAttackUpValue(pPVar12,true,10.0,0.5);
              pPVar12 = (Plant *)Sexy::RtWeakPtr<Sexy::ResourceInfo>::Get(aRStack_d0);
              Plant::ChangeSpeedModifier(pPVar12,1.5,10.0);
            }
            std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                      ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)pvVar1,&local_d8);
          }
          Sexy::RtWeakPtr<Sexy::ResourceInfo>::~RtWeakPtr(aRStack_d0);
          eastl::generic_iterator<EA::Text::BmpTextureInfo**,void>::operator++
                    ((generic_iterator<EA::Text::BmpTextureInfo**,void> *)&local_c8);
        }
      }
    }
    else {
      pvVar1 = (vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                *)(this + 0x1b0);
      uVar9 = std::
              vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
              ::begin(pvVar1);
      uVar10 = std::
               vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
               ::end(pvVar1);
      local_c0 = std::
                 find<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,BoardEntity*>
                           (uVar9,uVar10,&local_d8);
      local_68[0] = std::
                    vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                    ::end(pvVar1);
      bVar3 = __gnu_cxx::operator==((__normal_iterator *)&local_c0,(__normal_iterator *)local_68);
      if (bVar3) {
        DamageInfo::DamageInfo((DamageInfo *)local_68);
        (**(code **)(*(long *)this + 0x178))(this,(DamageInfo *)local_68,local_d8);
        iVar4 = BoardEntity::CalcColumnPosition(local_d8);
        iVar5 = FUN_037e1350(*(undefined4 *)(this + 0xa8));
        Sexy::Point::Point((Point *)&local_b8,iVar4,iVar5);
        local_50 = local_b8;
        (**(code **)(*(long *)local_d8 + 0x110))(local_d8,(DamageInfo *)local_68);
        cVar2 = Zombie::CanBeLaunchedByPlants(this_00);
        if (cVar2 != '\0') {
          pZVar13 = Board::GetGameSubSystem<ZombieTosserSubSystem>(*(Board **)(gLawnApp + 0x9f0));
          uVar9 = std::
                  _Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                  ::_M_leftmost((_Rb_tree<int,std::pair<int_const,std::wstring>,std::_Select1st<std::pair<int_const,std::wstring>>,std::less<int>,std::allocator<std::pair<int_const,std::wstring>>>
                                 *)this_00);
          RtReflectionDelegate<Sexy::Delegate1<Zombie*>>::RtReflectionDelegate(aRStack_b0);
          ZombieTosserSubSystem::LaunchZombie
                    ((ZombieTosserSubSystem *)0x43480000,0x3f800000,pZVar13,this_00,uVar9,aRStack_b0
                     ,1);
          RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
          ::~RtReflectionDelegate
                    ((RtReflectionDelegate<Sexy::Delegate4<std::string_const&,float,std::string_const&,std::string_const&>>
                      *)aRStack_b0);
        }
        std::vector<BoardEntity*,std::allocator<BoardEntity*>>::push_back
                  ((vector<BoardEntity*,std::allocator<BoardEntity*>> *)pvVar1,&local_d8);
        DamageInfo::~DamageInfo((DamageInfo *)local_68);
      }
    }
  }
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ProjectileGuitarSound::getCollisionEntities(std::vector<BoardEntity*,
   std::allocator<BoardEntity*> >&, Sexy::TRect<int> const&) const */

void __thiscall
ProjectileGuitarSound::getCollisionEntities
          (ProjectileGuitarSound *this,vector *param_1,TRect *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_8 = ___stack_chk_guard;
  cVar1 = (**(code **)(*(long *)this + 0xb8))(this,7);
  if (cVar1 != '\0') {
    operator|=(&local_c,2);
  }
  cVar1 = (**(code **)(*(long *)this + 0xb8))(this,0xf0);
  if (cVar1 != '\0') {
    operator|=(&local_c,0x10);
  }
  EntityFinder::GetEntitiesTouchingRectangle(param_1,local_c,param_2,0xffffffff,0xffffffff);
  if (this[0xd5] == (ProjectileGuitarSound)0x0) {
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)param_1);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_1);
    std::
    sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,bool(*)(BoardEntity*,BoardEntity*)>
              (uVar2,uVar3,BoardEntity::BoardEntityRightToLeftSortFunc);
  }
  else {
    uVar2 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::begin((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                     *)param_1);
    uVar3 = std::
            vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
            ::end((vector<Sexy::IResStreamsDriver::TaskResource*,std::allocator<Sexy::IResStreamsDriver::TaskResource*>>
                   *)param_1);
    std::
    sort<__gnu_cxx::__normal_iterator<BoardEntity**,std::vector<BoardEntity*,std::allocator<BoardEntity*>>>,bool(*)(BoardEntity*,BoardEntity*)>
              (uVar2,uVar3,BoardEntity::BoardEntityLeftToRightSortFunc);
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

